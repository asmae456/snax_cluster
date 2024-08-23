// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness___024root.h"

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__57(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__57\n"); );
    // Init
    CData/*0:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_h4ac0c703__0;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_h4ac0c703__0 = 0;
    CData/*0:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h4ac0c703__0;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h4ac0c703__0 = 0;
    CData/*0:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_h4ac0c703__0;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_h4ac0c703__0 = 0;
    CData/*0:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h4ac0c703__0;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h4ac0c703__0 = 0;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 0U;
    if (((((((((0x33U == (0xfe00707fU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                          << 0x1bU) 
                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                            >> 5U)))) 
               | (0x13U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                       >> 5U)))) | 
              (0x40000033U == (0xfe00707fU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                               << 0x1bU) 
                                              | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                 >> 5U))))) 
             | (0x4033U == (0xfe00707fU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                            << 0x1bU) 
                                           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                              >> 5U))))) 
            | (0x4013U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                      >> 5U)))) | (0x6033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                        << 0x1bU) 
                                                       | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                          >> 5U))))) 
          | (0x6013U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                    >> 5U)))) | (0x7033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U)))))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select 
            = ((0x33U == (0xfe00707fU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                          << 0x1bU) 
                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                            >> 5U))))
                ? 1U : ((0x13U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                              >> 5U)))
                         ? 2U : ((0x40000033U == (0xfe00707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))
                                  ? 1U : ((0x4033U 
                                           == (0xfe00707fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U))))
                                           ? 1U : (
                                                   (0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U)))
                                                    ? 2U
                                                    : 
                                                   ((0x6033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                          << 0x1bU) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                            >> 5U))))
                                                     ? 1U
                                                     : 
                                                    ((0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                          >> 5U)))
                                                      ? 2U
                                                      : 1U)))))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 1U;
    } else if (((((((((0x7013U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                              >> 5U))) 
                      | (0x2033U == (0xfe00707fU & 
                                     ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                       << 0x1bU) | 
                                      (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                       >> 5U))))) | 
                     (0x2013U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                             >> 5U)))) 
                    | (0x3033U == (0xfe00707fU & ((
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U))))) 
                   | (0x3013U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                             >> 5U)))) 
                  | (0x1033U == (0xfe00707fU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U))))) 
                 | (0x5033U == (0xfe00707fU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                << 0x1bU) 
                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                  >> 5U))))) 
                | (0x40005033U == (0xfe00707fU & ((
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U)))))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select 
            = ((0x7013U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                       >> 5U))) ? 2U
                : ((0x2033U == (0xfe00707fU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                << 0x1bU) 
                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                  >> 5U))))
                    ? 1U : ((0x2013U == (0x707fU & 
                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                          >> 5U))) ? 2U
                             : ((0x3033U == (0xfe00707fU 
                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U))))
                                 ? 1U : ((0x3013U == 
                                          (0x707fU 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                              >> 5U)))
                                          ? 2U : 1U)))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 1U;
    } else if (((((((((0x1013U == (0xfc00707fU & ((
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U)))) 
                      | (0x5013U == (0xfc00707fU & 
                                     ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                       << 0x1bU) | 
                                      (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                       >> 5U))))) | 
                     (0x40005013U == (0xfc00707fU & 
                                      ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                        << 0x1bU) | 
                                       (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                        >> 5U))))) 
                    | (0x37U == (0x7fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                          >> 5U)))) 
                   | (0x17U == (0x7fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                         >> 5U)))) 
                  | (0x6fU == (0x7fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                        >> 5U)))) | 
                 (0x67U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                       >> 5U)))) | 
                (0x63U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                      >> 5U))))) {
        if ((0x1013U == (0xfc00707fU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                         << 0x1bU) 
                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                           >> 5U))))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select = 2U;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 1U;
        } else if ((0x5013U == (0xfc00707fU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                << 0x1bU) 
                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                  >> 5U))))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select = 2U;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 1U;
        } else if ((0x40005013U == (0xfc00707fU & (
                                                   (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U))))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select = 2U;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 1U;
        } else if ((0x37U == (0x7fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                       >> 5U)))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select = 0U;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 0U;
        } else if ((0x17U == (0x7fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                       >> 5U)))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select = 7U;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 3U;
        } else if ((0x6fU == (0x7fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                       >> 5U)))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select = 7U;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 4U;
        } else {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select 
                = ((0x67U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                         >> 5U))) ? 2U
                    : 1U);
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 1U;
        }
    } else if (((((((((0x1063U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                              >> 5U))) 
                      | (0x4063U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                >> 5U)))) 
                     | (0x6063U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                               >> 5U)))) 
                    | (0x5063U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                              >> 5U)))) 
                   | (0x7063U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                             >> 5U)))) 
                  | (0x23U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                          >> 5U)))) 
                 | (0x1023U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                           >> 5U)))) 
                | (0x2023U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                          >> 5U))))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select 
            = ((0x1063U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                       >> 5U))) ? 1U
                : ((0x4063U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                           >> 5U)))
                    ? 1U : ((0x6063U == (0x707fU & 
                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                          >> 5U))) ? 1U
                             : ((0x5063U == (0x707fU 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                >> 5U)))
                                 ? 1U : ((0x7063U == 
                                          (0x707fU 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                              >> 5U)))
                                          ? 1U : 5U)))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 1U;
    } else if (((((((((3U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                         >> 5U))) | 
                      (0x1003U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                              >> 5U)))) 
                     | (0x2003U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                               >> 5U)))) 
                    | (0x4003U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                              >> 5U)))) 
                   | (0x5003U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                             >> 5U)))) 
                  | (0x1073U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                            >> 5U)))) 
                 | (0x5073U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                           >> 5U)))) 
                | (0x2073U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                          >> 5U))))) {
        if ((3U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                               >> 5U)))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select = 2U;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 1U;
        } else if ((0x1003U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                           >> 5U)))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select = 2U;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 1U;
        } else if ((0x2003U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                           >> 5U)))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select = 2U;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 1U;
        } else if ((0x4003U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                           >> 5U)))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select = 2U;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 1U;
        } else if ((0x5003U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                           >> 5U)))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select = 2U;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 1U;
        } else if ((0x1073U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                           >> 5U)))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select 
                = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT____VdfgExtracted_h1fc24551__6)
                    ? 0xaU : 0U);
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 1U;
        } else if ((0x5073U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                           >> 5U)))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select 
                = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT____VdfgExtracted_h1fc24551__6)
                    ? 0xaU : 0U);
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 9U;
        } else if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT____VdfgExtracted_h1fc24551__6) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select = 0xaU;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 0U;
        } else {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select = 8U;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 1U;
        }
    } else if (((((((((0x6073U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                              >> 5U))) 
                      | (0x3073U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                >> 5U)))) 
                     | (0x7073U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                               >> 5U)))) 
                    | (0x73U == ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                  << 0x1bU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                               >> 5U)))) 
                   | (0x100073U == ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                     << 0x1bU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                  >> 5U)))) 
                  | (0x10200073U == ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                      << 0x1bU) | (
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U)))) 
                 | (0x30200073U == ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                     << 0x1bU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                  >> 5U)))) 
                | (0x7b200073U == ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                    << 0x1bU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                 >> 5U))))) {
        if ((0x6073U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                    >> 5U)))) {
            if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT____VdfgExtracted_h1fc24551__6) {
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select = 0xaU;
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 0U;
            } else if ((0x7c0U != (0xfffU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                              << 7U) 
                                             | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                >> 0x19U))))) {
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select = 8U;
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 9U;
            }
        } else if ((0x3073U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                           >> 5U)))) {
            if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT____VdfgExtracted_h1fc24551__6) {
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select = 0xaU;
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 0U;
            } else {
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select = 8U;
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 1U;
            }
        } else if ((0x7073U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                           >> 5U)))) {
            if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT____VdfgExtracted_h1fc24551__6) {
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select = 0xaU;
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 0U;
            } else if ((0x7c0U != (0xfffU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                              << 7U) 
                                             | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                >> 0x19U))))) {
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select = 8U;
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 9U;
            }
        }
    } else if (((((((((0xfU == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                           >> 5U))) 
                      | (0x100fU == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                >> 5U)))) 
                     | (0x12000073U == (0xfe007fffU 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                            << 0x1bU) 
                                           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                              >> 5U))))) 
                    | (0x10500073U == ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                        << 0x1bU) | 
                                       (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                        >> 5U)))) | 
                   (0x202fU == (0xf800707fU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                << 0x1bU) 
                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                  >> 5U))))) 
                  | (0x2000202fU == (0xf800707fU & 
                                     ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                       << 0x1bU) | 
                                      (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                       >> 5U))))) | 
                 (0x4000202fU == (0xf800707fU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U))))) 
                | (0x6000202fU == (0xf800707fU & ((
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U)))))) {
        if ((0xfU != (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                 >> 5U)))) {
            if ((0x100fU != (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                        >> 5U)))) {
                if ((0x12000073U != (0xfe007fffU & 
                                     ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                       << 0x1bU) | 
                                      (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                       >> 5U))))) {
                    if ((0x10500073U != ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                          << 0x1bU) 
                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                            >> 5U)))) {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select = 1U;
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 1U;
                    }
                }
            }
        }
    } else if (((((((((0x8000202fU == (0xf800707fU 
                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                           << 0x1bU) 
                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                             >> 5U)))) 
                      | (0xa000202fU == (0xf800707fU 
                                         & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                             << 0x1bU) 
                                            | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                               >> 5U))))) 
                     | (0xc000202fU == (0xf800707fU 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                            << 0x1bU) 
                                           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                              >> 5U))))) 
                    | (0xe000202fU == (0xf800707fU 
                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                           << 0x1bU) 
                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                             >> 5U))))) 
                   | (0x800202fU == (0xf800707fU & 
                                     ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                       << 0x1bU) | 
                                      (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                       >> 5U))))) | 
                  (0x1000202fU == (0xf9f0707fU & ((
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U))))) 
                 | (0x1800202fU == (0xf800707fU & (
                                                   (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U))))) 
                | (((((((((((((0x2000033U == (0xfe00707fU 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U)))) 
                              || (0x2001033U == (0xfe00707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                             || (0x2002033U == (0xfe00707fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U))))) 
                            || (0x2003033U == (0xfe00707fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U))))) 
                           || (0x2004033U == (0xfe00707fU 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U))))) 
                          || (0x2005033U == (0xfe00707fU 
                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U))))) 
                         || (0x2006033U == (0xfe00707fU 
                                            & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                << 0x1bU) 
                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                  >> 5U))))) 
                        || (0x2007033U == (0xfe00707fU 
                                           & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                               << 0x1bU) 
                                              | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                 >> 5U))))) 
                       || (0x200003bU == (0xfe00707fU 
                                          & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                              << 0x1bU) 
                                             | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                >> 5U))))) 
                      || (0x200403bU == (0xfe00707fU 
                                         & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                             << 0x1bU) 
                                            | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                               >> 5U))))) 
                     || (0x200503bU == (0xfe00707fU 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                            << 0x1bU) 
                                           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                              >> 5U))))) 
                    || (0x200603bU == (0xfe00707fU 
                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                           << 0x1bU) 
                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                             >> 5U))))) 
                   || (0x200703bU == (0xfe00707fU & 
                                      ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                        << 0x1bU) | 
                                       (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                        >> 5U))))))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select = 1U;
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 1U;
    } else if (((((((((((((((((((((((((((((((((((((
                                                   ((((((((((0x40007033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                  << 0x1bU) 
                                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                    >> 5U)))) 
                                                            || (0x40006033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                     << 0x1bU) 
                                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                       >> 5U))))) 
                                                           || (0x40004033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                    << 0x1bU) 
                                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                      >> 5U))))) 
                                                          || (0x20001033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                   << 0x1bU) 
                                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                     >> 5U))))) 
                                                         || (0x20005033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                  << 0x1bU) 
                                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                    >> 5U))))) 
                                                        || (0x60001033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                 << 0x1bU) 
                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                   >> 5U))))) 
                                                       || (0x60005033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                << 0x1bU) 
                                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                  >> 5U))))) 
                                                      || (0x48001033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                               << 0x1bU) 
                                                              | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                 >> 5U))))) 
                                                     || (0x28001033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                              << 0x1bU) 
                                                             | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                >> 5U))))) 
                                                    || (0x68001033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                             << 0x1bU) 
                                                            | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                               >> 5U))))) 
                                                   || (0x48005033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                            << 0x1bU) 
                                                           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                              >> 5U))))) 
                                                  || (0x28005033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                           << 0x1bU) 
                                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                             >> 5U))))) 
                                                 || (0x68005033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                          << 0x1bU) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                            >> 5U))))) 
                                                || (0x60001013U 
                                                    == 
                                                    (0xfff0707fU 
                                                     & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                         << 0x1bU) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                           >> 5U))))) 
                                               || (0x60101013U 
                                                   == 
                                                   (0xfff0707fU 
                                                    & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                        << 0x1bU) 
                                                       | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                          >> 5U))))) 
                                              || (0x60201013U 
                                                  == 
                                                  (0xfff0707fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U))))) 
                                             || (0x60401013U 
                                                 == 
                                                 (0xfff0707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                                            || (0x60501013U 
                                                == 
                                                (0xfff0707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                                           || (0x61001013U 
                                               == (0xfff0707fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U))))) 
                                          || (0x61101013U 
                                              == (0xfff0707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                                         || (0x61201013U 
                                             == (0xfff0707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                                        || (0x61801013U 
                                            == (0xfff0707fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U))))) 
                                       || (0x61901013U 
                                           == (0xfff0707fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U))))) 
                                      || (0x61a01013U 
                                          == (0xfff0707fU 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U))))) 
                                     || (0xa001033U 
                                         == (0xfe00707fU 
                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U))))) 
                                    || (0xa002033U 
                                        == (0xfe00707fU 
                                            & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                << 0x1bU) 
                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                  >> 5U))))) 
                                   || (0xa003033U == 
                                       (0xfe00707fU 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                            << 0x1bU) 
                                           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                              >> 5U))))) 
                                  || (0xa004033U == 
                                      (0xfe00707fU 
                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                           << 0x1bU) 
                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                             >> 5U))))) 
                                 || (0xa005033U == 
                                     (0xfe00707fU & 
                                      ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                        << 0x1bU) | 
                                       (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                        >> 5U))))) 
                                || (0xa006033U == (0xfe00707fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U))))) 
                               || (0xa007033U == (0xfe00707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                              || (0x8001033U == (0xfe00707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                             || (0x8005033U == (0xfe00707fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U))))) 
                            || (0x8006033U == (0xfe00707fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U))))) 
                           || (0x48006033U == (0xfe00707fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U))))) 
                          || (0x8004033U == (0xfe00707fU 
                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U))))) 
                         || (0x48004033U == (0xfe00707fU 
                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U))))) 
                        || (0x8007033U == (0xfe00707fU 
                                           & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                               << 0x1bU) 
                                              | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                 >> 5U))))) 
                       || (0x48007033U == (0xfe00707fU 
                                           & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                               << 0x1bU) 
                                              | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                 >> 5U))))) 
                      | (((((((((((0x20001013U == (0xfc00707fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U)))) 
                                  || (0x20005013U == 
                                      (0xfc00707fU 
                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                           << 0x1bU) 
                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                             >> 5U))))) 
                                 || (0x60005013U == 
                                     (0xfc00707fU & 
                                      ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                        << 0x1bU) | 
                                       (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                        >> 5U))))) 
                                || (0x48001013U == 
                                    (0xfc00707fU & 
                                     ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                       << 0x1bU) | 
                                      (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                       >> 5U))))) || 
                               (0x28001013U == (0xfc00707fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U))))) 
                              || (0x68001013U == (0xfc00707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                             || (0x48005013U == (0xfc00707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                            || (0x28005013U == (0xfc00707fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U))))) 
                           || (0x68005013U == (0xfc00707fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U))))) 
                          || (0x8001013U == (0xfe00707fU 
                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U))))) 
                         || (0x8005013U == (0xfe00707fU 
                                            & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                << 0x1bU) 
                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                  >> 5U)))))) 
                     | ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0x7bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))) 
                                                                                || (0x107bU 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                                || (0x207bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U)))) 
                                                                                || (0x307bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U)))) 
                                                                                || (0x407bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U)))) 
                                                                                || (0x507bU 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                                || (0x4000507bU 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                                || (0x607bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U)))) 
                                                                                || (0x707bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U)))) 
                                                                                || (0x5bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                                || (0x4000005bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                                || (0x105bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                                || (0x205bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                                || (0x305bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                                || (0x405bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                                || (0x505bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                                || (0x4000505bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                                || (0x605bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                                || (0x705bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                                || (0x705bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                               || (0x200005bU 
                                                                                == 
                                                                                (0x600707fU 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U)))) 
                                                                              || (0x200105bU 
                                                                                == 
                                                                                (0x600707fU 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U)))) 
                                                                             || (0x200205bU 
                                                                                == 
                                                                                (0x600707fU 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U)))) 
                                                                            || (0x200305bU 
                                                                                == 
                                                                                (0x600707fU 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U)))) 
                                                                           || (0x400005bU 
                                                                               == 
                                                                               (0xfe00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                          || (0x400105bU 
                                                                              == 
                                                                              (0xfe00707fU 
                                                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                         || (0x400205bU 
                                                                             == 
                                                                             (0xfe00707fU 
                                                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                        || (0x400305bU 
                                                                            == 
                                                                            (0xfe00707fU 
                                                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                       || (0x4000705bU 
                                                                           == 
                                                                           (0xfe00707fU 
                                                                            & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                      || (0x4000605bU 
                                                                          == 
                                                                          (0xfe00707fU 
                                                                           & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                               << 0x1bU) 
                                                                              | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                     || (0x4000405bU 
                                                                         == 
                                                                         (0xfe00707fU 
                                                                          & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                              << 0x1bU) 
                                                                             | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                    || (0x2000105bU 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                             << 0x1bU) 
                                                                            | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                               >> 5U))))) 
                                                                   || (0x2000505bU 
                                                                       == 
                                                                       (0xfe00707fU 
                                                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                            << 0x1bU) 
                                                                           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                              >> 5U))))) 
                                                                  || (0x6000105bU 
                                                                      == 
                                                                      (0xfe00707fU 
                                                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                           << 0x1bU) 
                                                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                             >> 5U))))) 
                                                                 || (0x6000505bU 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                          << 0x1bU) 
                                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                            >> 5U))))) 
                                                                || (0x4800105bU 
                                                                    == 
                                                                    (0xfe00707fU 
                                                                     & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                         << 0x1bU) 
                                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                           >> 5U))))) 
                                                               || (0x2800105bU 
                                                                   == 
                                                                   (0xfe00707fU 
                                                                    & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                        << 0x1bU) 
                                                                       | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                          >> 5U))))) 
                                                              || (0x6800105bU 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                       << 0x1bU) 
                                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                         >> 5U))))) 
                                                             || (0x4800505bU 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                      << 0x1bU) 
                                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                        >> 5U))))) 
                                                            || (0x2800505bU 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                     << 0x1bU) 
                                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                       >> 5U))))) 
                                                           || (0x6800505bU 
                                                               == 
                                                               (0xfe00707fU 
                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                    << 0x1bU) 
                                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                      >> 5U))))) 
                                                          || (0x2000107bU 
                                                              == 
                                                              (0xfc00707fU 
                                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                   << 0x1bU) 
                                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                     >> 5U))))) 
                                                         || (0x2000507bU 
                                                             == 
                                                             (0xfc00707fU 
                                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                  << 0x1bU) 
                                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                    >> 5U))))) 
                                                        || (0x6000507bU 
                                                            == 
                                                            (0xfc00707fU 
                                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                 << 0x1bU) 
                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                   >> 5U))))) 
                                                       || (0x4800107bU 
                                                           == 
                                                           (0xfc00707fU 
                                                            & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                << 0x1bU) 
                                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                  >> 5U))))) 
                                                      || (0x2800107bU 
                                                          == 
                                                          (0xfc00707fU 
                                                           & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                               << 0x1bU) 
                                                              | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                 >> 5U))))) 
                                                     || (0x6800107bU 
                                                         == 
                                                         (0xfc00707fU 
                                                          & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                              << 0x1bU) 
                                                             | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                >> 5U))))) 
                                                    || (0x4800507bU 
                                                        == 
                                                        (0xfc00707fU 
                                                         & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                             << 0x1bU) 
                                                            | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                               >> 5U))))) 
                                                   || (0x2800507bU 
                                                       == 
                                                       (0xfc00707fU 
                                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                            << 0x1bU) 
                                                           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                              >> 5U))))) 
                                                  || (0x6800507bU 
                                                      == 
                                                      (0xfc00707fU 
                                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                           << 0x1bU) 
                                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                             >> 5U))))) 
                                                 || (0x6000205bU 
                                                     == 
                                                     (0xfff0707fU 
                                                      & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                          << 0x1bU) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                            >> 5U))))) 
                                                || (0x6010205bU 
                                                    == 
                                                    (0xfff0707fU 
                                                     & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                         << 0x1bU) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                           >> 5U))))) 
                                               || (0x6020205bU 
                                                   == 
                                                   (0xfff0707fU 
                                                    & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                        << 0x1bU) 
                                                       | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                          >> 5U))))) 
                                              || (0x6040205bU 
                                                  == 
                                                  (0xfff0707fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U))))) 
                                             || (0x6050205bU 
                                                 == 
                                                 (0xfff0707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                                            || (0x6100105bU 
                                                == 
                                                (0xfff0707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                                           || (0x6110105bU 
                                               == (0xfff0707fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U))))) 
                                          || (0x6120105bU 
                                              == (0xfff0707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                                         || (0x6180105bU 
                                             == (0xfff0707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                                        || (0x6190105bU 
                                            == (0xfff0707fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U))))) 
                                       || (0x61a0105bU 
                                           == (0xfff0707fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U))))) 
                                      || (0xa00105bU 
                                          == (0xfe00707fU 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U))))) 
                                     || (0xa00205bU 
                                         == (0xfe00707fU 
                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U))))) 
                                    || (0xa00305bU 
                                        == (0xfe00707fU 
                                            & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                << 0x1bU) 
                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                  >> 5U))))) 
                                   || (0xa00405bU == 
                                       (0xfe00707fU 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                            << 0x1bU) 
                                           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                              >> 5U))))) 
                                  || (0xa00505bU == 
                                      (0xfe00707fU 
                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                           << 0x1bU) 
                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                             >> 5U))))) 
                                 || (0xa00605bU == 
                                     (0xfe00707fU & 
                                      ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                        << 0x1bU) | 
                                       (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                        >> 5U))))) 
                                || (0xa00705bU == (0xfe00707fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U))))) 
                               || (0x800105bU == (0xfe00707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                              || (0x800505bU == (0xfe00707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                             || (0x800605bU == (0xfe00707fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U))))) 
                            || (0x4800605bU == (0xfe00707fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U))))) 
                           || (0x800405bU == (0xfe00707fU 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U))))) 
                          || (0x4800405bU == (0xfe00707fU 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U))))) 
                         || (0x800705bU == (0xfe00707fU 
                                            & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                << 0x1bU) 
                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                  >> 5U))))) 
                        || (0x4800705bU == (0xfe00707fU 
                                            & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                << 0x1bU) 
                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                  >> 5U)))))) 
                    | (0xe000005bU == (0xfff0707fU 
                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                           << 0x1bU) 
                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                             >> 5U))))) 
                   | (0xf000005bU == (0xfff0707fU & 
                                      ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                        << 0x1bU) | 
                                       (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                        >> 5U))))) 
                  | (0x3fU == (0x7fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                        >> 5U)))) | 
                 ((((((((((((((0x53U == (0xfe00007fU 
                                         & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                             << 0x1bU) 
                                            | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                               >> 5U)))) 
                              || (0x8000053U == (0xfe00007fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                             || (0x10000053U == (0xfe00007fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                            || (0x18000053U == (0xfe00007fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U))))) 
                           || (0x20000053U == (0xfe00707fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U))))) 
                          || (0x20001053U == (0xfe00707fU 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U))))) 
                         || (0x20002053U == (0xfe00707fU 
                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U))))) 
                        || (0x28000053U == (0xfe00707fU 
                                            & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                << 0x1bU) 
                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                  >> 5U))))) 
                       || (0x28001053U == (0xfe00707fU 
                                           & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                               << 0x1bU) 
                                              | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                 >> 5U))))) 
                      || (0x58000053U == (0xfff0007fU 
                                          & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                              << 0x1bU) 
                                             | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                >> 5U))))) 
                     || (0x43U == (0x600007fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                 >> 5U)))) 
                    || (0x47U == (0x600007fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                >> 5U)))) 
                   || (0x4bU == (0x600007fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                               >> 5U)))) 
                  || (0x4fU == (0x600007fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                              >> 5U))))) 
                | (((((((((((((((((((((((((0x82000033U 
                                           == (0xfe00707fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U)))) 
                                          || (0x82004033U 
                                              == (0xfe00707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                                         || (0x84000033U 
                                             == (0xfe00707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                                        || (0x84004033U 
                                            == (0xfe00707fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U))))) 
                                       || (0x86000033U 
                                           == (0xfe00707fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U))))) 
                                      || (0x86004033U 
                                          == (0xfe00707fU 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U))))) 
                                     || (0x88000033U 
                                         == (0xfe00707fU 
                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U))))) 
                                    || (0x88004033U 
                                        == (0xfe00707fU 
                                            & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                << 0x1bU) 
                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                  >> 5U))))) 
                                   || (0x8a000033U 
                                       == (0xfe00707fU 
                                           & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                               << 0x1bU) 
                                              | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                 >> 5U))))) 
                                  || (0x8a004033U == 
                                      (0xfe00707fU 
                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                           << 0x1bU) 
                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                             >> 5U))))) 
                                 || (0x8c000033U == 
                                     (0xfe00707fU & 
                                      ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                        << 0x1bU) | 
                                       (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                        >> 5U))))) 
                                || (0x8c004033U == 
                                    (0xfe00707fU & 
                                     ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                       << 0x1bU) | 
                                      (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                       >> 5U))))) || 
                               (0x8e000033U == (0xfff0707fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U))))) 
                              || (0x90000033U == (0xfe00707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                             || (0x90004033U == (0xfe00707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                            || (0x92000033U == (0xfe00707fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U))))) 
                           || (0x92004033U == (0xfe00707fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U))))) 
                          || (0x9a000033U == (0xfe00707fU 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U))))) 
                         || (0x9a004033U == (0xfe00707fU 
                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U))))) 
                        || (0x9c000033U == (0xfe00707fU 
                                            & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                << 0x1bU) 
                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                  >> 5U))))) 
                       || (0x9c004033U == (0xfe00707fU 
                                           & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                               << 0x1bU) 
                                              | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                 >> 5U))))) 
                      || (0x9e000033U == (0xfe00707fU 
                                          & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                              << 0x1bU) 
                                             | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                >> 5U))))) 
                     || (0x9e004033U == (0xfe00707fU 
                                         & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                             << 0x1bU) 
                                            | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                               >> 5U))))) 
                    || (0xb0000033U == (0xfe00707fU 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                            << 0x1bU) 
                                           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                              >> 5U))))) 
                   || (0xb4000033U == (0xfe00707fU 
                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                           << 0x1bU) 
                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                             >> 5U))))))) {
        if ((((((((((((((((((((((((((((((((((((((((0x40007033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                        << 0x1bU) 
                                                       | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                          >> 5U)))) 
                                                  || (0x40006033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                           << 0x1bU) 
                                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                             >> 5U))))) 
                                                 || (0x40004033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                          << 0x1bU) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                            >> 5U))))) 
                                                || (0x20001033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                         << 0x1bU) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                           >> 5U))))) 
                                               || (0x20005033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                        << 0x1bU) 
                                                       | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                          >> 5U))))) 
                                              || (0x60001033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U))))) 
                                             || (0x60005033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                                            || (0x48001033U 
                                                == 
                                                (0xfe00707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                                           || (0x28001033U 
                                               == (0xfe00707fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U))))) 
                                          || (0x68001033U 
                                              == (0xfe00707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                                         || (0x48005033U 
                                             == (0xfe00707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                                        || (0x28005033U 
                                            == (0xfe00707fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U))))) 
                                       || (0x68005033U 
                                           == (0xfe00707fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U))))) 
                                      || (0x60001013U 
                                          == (0xfff0707fU 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U))))) 
                                     || (0x60101013U 
                                         == (0xfff0707fU 
                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U))))) 
                                    || (0x60201013U 
                                        == (0xfff0707fU 
                                            & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                << 0x1bU) 
                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                  >> 5U))))) 
                                   || (0x60401013U 
                                       == (0xfff0707fU 
                                           & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                               << 0x1bU) 
                                              | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                 >> 5U))))) 
                                  || (0x60501013U == 
                                      (0xfff0707fU 
                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                           << 0x1bU) 
                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                             >> 5U))))) 
                                 || (0x61001013U == 
                                     (0xfff0707fU & 
                                      ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                        << 0x1bU) | 
                                       (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                        >> 5U))))) 
                                || (0x61101013U == 
                                    (0xfff0707fU & 
                                     ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                       << 0x1bU) | 
                                      (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                       >> 5U))))) || 
                               (0x61201013U == (0xfff0707fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U))))) 
                              || (0x61801013U == (0xfff0707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                             || (0x61901013U == (0xfff0707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                            || (0x61a01013U == (0xfff0707fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U))))) 
                           || (0xa001033U == (0xfe00707fU 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U))))) 
                          || (0xa002033U == (0xfe00707fU 
                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U))))) 
                         || (0xa003033U == (0xfe00707fU 
                                            & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                << 0x1bU) 
                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                  >> 5U))))) 
                        || (0xa004033U == (0xfe00707fU 
                                           & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                               << 0x1bU) 
                                              | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                 >> 5U))))) 
                       || (0xa005033U == (0xfe00707fU 
                                          & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                              << 0x1bU) 
                                             | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                >> 5U))))) 
                      || (0xa006033U == (0xfe00707fU 
                                         & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                             << 0x1bU) 
                                            | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                               >> 5U))))) 
                     || (0xa007033U == (0xfe00707fU 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                            << 0x1bU) 
                                           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                              >> 5U))))) 
                    || (0x8001033U == (0xfe00707fU 
                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                           << 0x1bU) 
                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                             >> 5U))))) 
                   || (0x8005033U == (0xfe00707fU & 
                                      ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                        << 0x1bU) | 
                                       (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                        >> 5U))))) 
                  || (0x8006033U == (0xfe00707fU & 
                                     ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                       << 0x1bU) | 
                                      (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                       >> 5U))))) || 
                 (0x48006033U == (0xfe00707fU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U))))) 
                || (0x8004033U == (0xfe00707fU & ((
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U))))) 
               || (0x48004033U == (0xfe00707fU & ((
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U))))) 
              || (0x8007033U == (0xfe00707fU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U))))) 
             || (0x48007033U == (0xfe00707fU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U)))))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select = 1U;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 1U;
        } else if ((((((((((((0x20001013U == (0xfc00707fU 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U)))) 
                             || (0x20005013U == (0xfc00707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                            || (0x60005013U == (0xfc00707fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U))))) 
                           || (0x48001013U == (0xfc00707fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U))))) 
                          || (0x28001013U == (0xfc00707fU 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U))))) 
                         || (0x68001013U == (0xfc00707fU 
                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U))))) 
                        || (0x48005013U == (0xfc00707fU 
                                            & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                << 0x1bU) 
                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                  >> 5U))))) 
                       || (0x28005013U == (0xfc00707fU 
                                           & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                               << 0x1bU) 
                                              | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                 >> 5U))))) 
                      || (0x68005013U == (0xfc00707fU 
                                          & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                              << 0x1bU) 
                                             | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                >> 5U))))) 
                     || (0x8001013U == (0xfe00707fU 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                            << 0x1bU) 
                                           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                              >> 5U))))) 
                    || (0x8005013U == (0xfe00707fU 
                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                           << 0x1bU) 
                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                             >> 5U)))))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select = 2U;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 1U;
        } else if ((1U & (~ (((((((((((((((((((((((
                                                   (((((((((((((((((((((((((((((((((((((((((((((((((((((0x7bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))) 
                                                                                || (0x107bU 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                                || (0x207bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U)))) 
                                                                                || (0x307bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U)))) 
                                                                                || (0x407bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U)))) 
                                                                                || (0x507bU 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                                || (0x4000507bU 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                                || (0x607bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U)))) 
                                                                                || (0x707bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U)))) 
                                                                                || (0x5bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                                || (0x4000005bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                                || (0x105bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                                || (0x205bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                                || (0x305bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                                || (0x405bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                                || (0x505bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                                || (0x4000505bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                                || (0x605bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                                || (0x705bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                                || (0x705bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                                || (0x200005bU 
                                                                                == 
                                                                                (0x600707fU 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U)))) 
                                                                                || (0x200105bU 
                                                                                == 
                                                                                (0x600707fU 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U)))) 
                                                                                || (0x200205bU 
                                                                                == 
                                                                                (0x600707fU 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U)))) 
                                                                                || (0x200305bU 
                                                                                == 
                                                                                (0x600707fU 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U)))) 
                                                                                || (0x400005bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                               || (0x400105bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                              || (0x400205bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                             || (0x400305bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                            || (0x4000705bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                           || (0x4000605bU 
                                                                               == 
                                                                               (0xfe00707fU 
                                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                          || (0x4000405bU 
                                                                              == 
                                                                              (0xfe00707fU 
                                                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                         || (0x2000105bU 
                                                                             == 
                                                                             (0xfe00707fU 
                                                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                        || (0x2000505bU 
                                                                            == 
                                                                            (0xfe00707fU 
                                                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                       || (0x6000105bU 
                                                                           == 
                                                                           (0xfe00707fU 
                                                                            & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                                << 0x1bU) 
                                                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                      || (0x6000505bU 
                                                                          == 
                                                                          (0xfe00707fU 
                                                                           & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                               << 0x1bU) 
                                                                              | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                     || (0x4800105bU 
                                                                         == 
                                                                         (0xfe00707fU 
                                                                          & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                              << 0x1bU) 
                                                                             | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 5U))))) 
                                                                    || (0x2800105bU 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                             << 0x1bU) 
                                                                            | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                               >> 5U))))) 
                                                                   || (0x6800105bU 
                                                                       == 
                                                                       (0xfe00707fU 
                                                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                            << 0x1bU) 
                                                                           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                              >> 5U))))) 
                                                                  || (0x4800505bU 
                                                                      == 
                                                                      (0xfe00707fU 
                                                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                           << 0x1bU) 
                                                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                             >> 5U))))) 
                                                                 || (0x2800505bU 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                          << 0x1bU) 
                                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                            >> 5U))))) 
                                                                || (0x6800505bU 
                                                                    == 
                                                                    (0xfe00707fU 
                                                                     & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                         << 0x1bU) 
                                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                           >> 5U))))) 
                                                               || (0x2000107bU 
                                                                   == 
                                                                   (0xfc00707fU 
                                                                    & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                        << 0x1bU) 
                                                                       | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                          >> 5U))))) 
                                                              || (0x2000507bU 
                                                                  == 
                                                                  (0xfc00707fU 
                                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                       << 0x1bU) 
                                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                         >> 5U))))) 
                                                             || (0x6000507bU 
                                                                 == 
                                                                 (0xfc00707fU 
                                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                      << 0x1bU) 
                                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                        >> 5U))))) 
                                                            || (0x4800107bU 
                                                                == 
                                                                (0xfc00707fU 
                                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                     << 0x1bU) 
                                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                       >> 5U))))) 
                                                           || (0x2800107bU 
                                                               == 
                                                               (0xfc00707fU 
                                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                    << 0x1bU) 
                                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                      >> 5U))))) 
                                                          || (0x6800107bU 
                                                              == 
                                                              (0xfc00707fU 
                                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                   << 0x1bU) 
                                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                     >> 5U))))) 
                                                         || (0x4800507bU 
                                                             == 
                                                             (0xfc00707fU 
                                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                  << 0x1bU) 
                                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                    >> 5U))))) 
                                                        || (0x2800507bU 
                                                            == 
                                                            (0xfc00707fU 
                                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                 << 0x1bU) 
                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                   >> 5U))))) 
                                                       || (0x6800507bU 
                                                           == 
                                                           (0xfc00707fU 
                                                            & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                << 0x1bU) 
                                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                  >> 5U))))) 
                                                      || (0x6000205bU 
                                                          == 
                                                          (0xfff0707fU 
                                                           & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                               << 0x1bU) 
                                                              | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                 >> 5U))))) 
                                                     || (0x6010205bU 
                                                         == 
                                                         (0xfff0707fU 
                                                          & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                              << 0x1bU) 
                                                             | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                >> 5U))))) 
                                                    || (0x6020205bU 
                                                        == 
                                                        (0xfff0707fU 
                                                         & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                             << 0x1bU) 
                                                            | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                               >> 5U))))) 
                                                   || (0x6040205bU 
                                                       == 
                                                       (0xfff0707fU 
                                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                            << 0x1bU) 
                                                           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                              >> 5U))))) 
                                                  || (0x6050205bU 
                                                      == 
                                                      (0xfff0707fU 
                                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                           << 0x1bU) 
                                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                             >> 5U))))) 
                                                 || (0x6100105bU 
                                                     == 
                                                     (0xfff0707fU 
                                                      & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                          << 0x1bU) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                            >> 5U))))) 
                                                || (0x6110105bU 
                                                    == 
                                                    (0xfff0707fU 
                                                     & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                         << 0x1bU) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                           >> 5U))))) 
                                               || (0x6120105bU 
                                                   == 
                                                   (0xfff0707fU 
                                                    & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                        << 0x1bU) 
                                                       | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                          >> 5U))))) 
                                              || (0x6180105bU 
                                                  == 
                                                  (0xfff0707fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U))))) 
                                             || (0x6190105bU 
                                                 == 
                                                 (0xfff0707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                                            || (0x61a0105bU 
                                                == 
                                                (0xfff0707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                                           || (0xa00105bU 
                                               == (0xfe00707fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U))))) 
                                          || (0xa00205bU 
                                              == (0xfe00707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                                         || (0xa00305bU 
                                             == (0xfe00707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                                        || (0xa00405bU 
                                            == (0xfe00707fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U))))) 
                                       || (0xa00505bU 
                                           == (0xfe00707fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U))))) 
                                      || (0xa00605bU 
                                          == (0xfe00707fU 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U))))) 
                                     || (0xa00705bU 
                                         == (0xfe00707fU 
                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U))))) 
                                    || (0x800105bU 
                                        == (0xfe00707fU 
                                            & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                << 0x1bU) 
                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                  >> 5U))))) 
                                   || (0x800505bU == 
                                       (0xfe00707fU 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                            << 0x1bU) 
                                           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                              >> 5U))))) 
                                  || (0x800605bU == 
                                      (0xfe00707fU 
                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                           << 0x1bU) 
                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                             >> 5U))))) 
                                 || (0x4800605bU == 
                                     (0xfe00707fU & 
                                      ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                        << 0x1bU) | 
                                       (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                        >> 5U))))) 
                                || (0x800405bU == (0xfe00707fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U))))) 
                               || (0x4800405bU == (0xfe00707fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U))))) 
                              || (0x800705bU == (0xfe00707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                             || (0x4800705bU == (0xfe00707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U)))))))) {
            if ((0xe000005bU != (0xfff0707fU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U))))) {
                if ((0xf000005bU == (0xfff0707fU & 
                                     ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                       << 0x1bU) | 
                                      (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                       >> 5U))))) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 1U;
                } else if ((0x3fU == (0x7fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                               >> 5U)))) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 1U;
                }
            }
        }
    } else if ((1U & (~ (((((((((0x8fc00033U == (0xfff0707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U)))) 
                                || (0xafc00033U == 
                                    (0xfff0707fU & 
                                     ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                       << 0x1bU) | 
                                      (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                       >> 5U))))) | 
                               ((((((((((((((0x2000053U 
                                             == (0xfe00007fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U)))) 
                                            || (0xa000053U 
                                                == 
                                                (0xfe00007fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                                           || (0x12000053U 
                                               == (0xfe00007fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U))))) 
                                          || (0x1a000053U 
                                              == (0xfe00007fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                                         || (0x22000053U 
                                             == (0xfe00707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                                        || (0x22001053U 
                                            == (0xfe00707fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U))))) 
                                       || (0x22002053U 
                                           == (0xfe00707fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U))))) 
                                      || (0x2a000053U 
                                          == (0xfe00707fU 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U))))) 
                                     || (0x2a001053U 
                                         == (0xfe00707fU 
                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U))))) 
                                    || (0x5a000053U 
                                        == (0xfff0007fU 
                                            & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                << 0x1bU) 
                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                  >> 5U))))) 
                                   || (0x2000043U == 
                                       (0x600007fU 
                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                           >> 5U)))) 
                                  || (0x2000047U == 
                                      (0x600007fU & 
                                       (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                        >> 5U)))) || 
                                 (0x200004bU == (0x600007fU 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U)))) 
                                || (0x200004fU == (0x600007fU 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U))))) 
                              | ((0x40100053U == (0xfff0007fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U)))) 
                                 || (0x42000053U == 
                                     (0xfff0007fU & 
                                      ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                        << 0x1bU) | 
                                       (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                        >> 5U)))))) 
                             | ((((((((((((((0x4000053U 
                                             == (0xfe00007fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U)))) 
                                            || (0xc000053U 
                                                == 
                                                (0xfe00007fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                                           || (0x14000053U 
                                               == (0xfe00007fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U))))) 
                                          || (0x1c000053U 
                                              == (0xfe00007fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                                         || (0x5c000053U 
                                             == (0xfff0007fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                                        || (0x4000043U 
                                            == (0x600007fU 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U)))) 
                                       || (0x4000047U 
                                           == (0x600007fU 
                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                  >> 5U)))) 
                                      || (0x400004bU 
                                          == (0x600007fU 
                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                 >> 5U)))) 
                                     || (0x400004fU 
                                         == (0x600007fU 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                >> 5U)))) 
                                    || (0x24000053U 
                                        == (0xfe00707fU 
                                            & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                << 0x1bU) 
                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                  >> 5U))))) 
                                   || (0x24001053U 
                                       == (0xfe00707fU 
                                           & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                               << 0x1bU) 
                                              | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                 >> 5U))))) 
                                  || (0x24002053U == 
                                      (0xfe00707fU 
                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                           << 0x1bU) 
                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                             >> 5U))))) 
                                 || (0x2c000053U == 
                                     (0xfe00707fU & 
                                      ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                        << 0x1bU) | 
                                       (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                        >> 5U))))) 
                                || (0x2c001053U == 
                                    (0xfe00707fU & 
                                     ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                       << 0x1bU) | 
                                      (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                       >> 5U)))))) 
                            | ((0x54000053U == (0xfe00007fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U)))) 
                               || (0x4c000053U == (0xfe00007fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U)))))) 
                           | (0x40200053U == (0xfff0707fU 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U))))) 
                          | (0x44000053U == (0xfff0007fU 
                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U))))) 
                         | (0x42200053U == (0xfff0707fU 
                                            & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                << 0x1bU) 
                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                  >> 5U)))))))) {
        if ((1U & (~ ((((((((0x44100053U == (0xfff0007fU 
                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U)))) 
                            | (((((((((((((((((((((((0x82002033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                          << 0x1bU) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                            >> 5U)))) 
                                                    || (0x82006033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                             << 0x1bU) 
                                                            | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                               >> 5U))))) 
                                                   || (0x84002033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                            << 0x1bU) 
                                                           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                              >> 5U))))) 
                                                  || (0x84006033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                           << 0x1bU) 
                                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                             >> 5U))))) 
                                                 || (0x86002033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                          << 0x1bU) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                            >> 5U))))) 
                                                || (0x86006033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                         << 0x1bU) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                           >> 5U))))) 
                                               || (0x88002033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                        << 0x1bU) 
                                                       | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                          >> 5U))))) 
                                              || (0x88006033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U))))) 
                                             || (0x8a002033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                                            || (0x8a006033U 
                                                == 
                                                (0xfe00707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                                           || (0x8c002033U 
                                               == (0xfe00707fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U))))) 
                                          || (0x8c006033U 
                                              == (0xfe00707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                                         || (0x8e002033U 
                                             == (0xfff0707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                                        || (0x90002033U 
                                            == (0xfe00707fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U))))) 
                                       || (0x90006033U 
                                           == (0xfe00707fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U))))) 
                                      || (0x92002033U 
                                          == (0xfe00707fU 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U))))) 
                                     || (0x92006033U 
                                         == (0xfe00707fU 
                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U))))) 
                                    || (0x9a002033U 
                                        == (0xfe00707fU 
                                            & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                << 0x1bU) 
                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                  >> 5U))))) 
                                   || (0x9a006033U 
                                       == (0xfe00707fU 
                                           & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                               << 0x1bU) 
                                              | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                 >> 5U))))) 
                                  || (0x9c002033U == 
                                      (0xfe00707fU 
                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                           << 0x1bU) 
                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                             >> 5U))))) 
                                 || (0x9c006033U == 
                                     (0xfe00707fU & 
                                      ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                        << 0x1bU) | 
                                       (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                        >> 5U))))) 
                                || (0x9e002033U == 
                                    (0xfe00707fU & 
                                     ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                       << 0x1bU) | 
                                      (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                       >> 5U))))) || 
                               (0x9e006033U == (0xfe00707fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U)))))) 
                           | ((0x8fe02033U == (0xfff0707fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U)))) 
                              || (0xafe02033U == (0xfff0707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U)))))) 
                          | ((((0xb0002033U == (0xfe00707fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U)))) 
                               || (0xb0006033U == (0xfe00707fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U))))) 
                              || (0x98402033U == (0xfff0707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                             || (0x98406033U == (0xfff0707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U)))))) 
                         | ((0x98600033U == (0xfff0707fU 
                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U)))) 
                            || (0x98604033U == (0xfff0707fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U)))))) 
                        | ((0xb4002033U == (0xfe00707fU 
                                            & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                << 0x1bU) 
                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                  >> 5U)))) 
                           || (0xb4006033U == (0xfe00707fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U)))))) 
                       | ((0x98502033U == (0xfff0707fU 
                                           & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                               << 0x1bU) 
                                              | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                 >> 5U)))) 
                          || (0x98506033U == (0xfff0707fU 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U)))))) 
                      | ((((((0x96000033U == (0xfe00707fU 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U)))) 
                             || (0x96004033U == (0xfe00707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                            || (0xba000033U == (0xfe00707fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U))))) 
                           || (0xba004033U == (0xfe00707fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U))))) 
                          || (0x8f600033U == (0xfff0707fU 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U))))) 
                         || (0xaf600033U == (0xfff0707fU 
                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U))))))))) {
            if ((1U & (~ (((((((((((((((((((0x6000053U 
                                            == (0xfe00007fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U)))) 
                                           || (0xe000053U 
                                               == (0xfe00007fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U))))) 
                                          || (0x16000053U 
                                              == (0xfe00007fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                                         || (0x26000053U 
                                             == (0xfe00707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                                        || (0x26001053U 
                                            == (0xfe00707fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U))))) 
                                       || (0x26002053U 
                                           == (0xfe00707fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U))))) 
                                      || (0x2e000053U 
                                          == (0xfe00707fU 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U))))) 
                                     || (0x2e001053U 
                                         == (0xfe00707fU 
                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U))))) 
                                    || (0x6000043U 
                                        == (0x600007fU 
                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                               >> 5U)))) 
                                   || (0x6000047U == 
                                       (0x600007fU 
                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                           >> 5U)))) 
                                  || (0x600004bU == 
                                      (0x600007fU & 
                                       (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                        >> 5U)))) || 
                                 (0x600004fU == (0x600007fU 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U)))) 
                                | ((0x56000053U == 
                                    (0xfe00007fU & 
                                     ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                       << 0x1bU) | 
                                      (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                       >> 5U)))) || 
                                   (0x4e000053U == 
                                    (0xfe00007fU & 
                                     ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                       << 0x1bU) | 
                                      (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                       >> 5U)))))) 
                               | (0x40300053U == (0xfff0707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                              | (0x46000053U == (0xfff0007fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                             | (0x42300053U == (0xfff0707fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U))))) 
                            | (0x46100053U == (0xfff0007fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U))))) 
                           | (0x44300053U == (0xfff0707fU 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U))))) 
                          | (0x46200053U == (0xfff0007fU 
                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U)))))))) {
                if ((1U & (~ ((((((((((((((((((((((
                                                   ((((((((0x82003033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                << 0x1bU) 
                                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                  >> 5U)))) 
                                                          || (0x82007033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                   << 0x1bU) 
                                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                     >> 5U))))) 
                                                         || (0x84003033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                  << 0x1bU) 
                                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                    >> 5U))))) 
                                                        || (0x84007033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                 << 0x1bU) 
                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                   >> 5U))))) 
                                                       || (0x86003033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                << 0x1bU) 
                                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                  >> 5U))))) 
                                                      || (0x86007033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                               << 0x1bU) 
                                                              | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                 >> 5U))))) 
                                                     || (0x88003033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                              << 0x1bU) 
                                                             | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                >> 5U))))) 
                                                    || (0x88007033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                             << 0x1bU) 
                                                            | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                               >> 5U))))) 
                                                   || (0x8a003033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                            << 0x1bU) 
                                                           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                              >> 5U))))) 
                                                  || (0x8a007033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                           << 0x1bU) 
                                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                             >> 5U))))) 
                                                 || (0x8c003033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                          << 0x1bU) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                            >> 5U))))) 
                                                || (0x8c007033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                         << 0x1bU) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                           >> 5U))))) 
                                               || (0x8e003033U 
                                                   == 
                                                   (0xfff0707fU 
                                                    & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                        << 0x1bU) 
                                                       | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                          >> 5U))))) 
                                              || (0x90003033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U))))) 
                                             || (0x90007033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                                            || (0x92003033U 
                                                == 
                                                (0xfe00707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                                           || (0x92007033U 
                                               == (0xfe00707fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U))))) 
                                          || (0x9a003033U 
                                              == (0xfe00707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                                         || (0x9a007033U 
                                             == (0xfe00707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                                        || (0x9c003033U 
                                            == (0xfe00707fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U))))) 
                                       || (0x9c007033U 
                                           == (0xfe00707fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U))))) 
                                      || (0x9e003033U 
                                          == (0xfe00707fU 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U))))) 
                                     || (0x9e007033U 
                                         == (0xfe00707fU 
                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U))))) 
                                    | ((0x8e703033U 
                                        == (0xfff0707fU 
                                            & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                << 0x1bU) 
                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                  >> 5U)))) 
                                       || (0xae703033U 
                                           == (0xfff0707fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U)))))) 
                                   | ((((((0x98403033U 
                                           == (0xfff0707fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U)))) 
                                          || (0x98407033U 
                                              == (0xfff0707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                                         || (0xb0003033U 
                                             == (0xfe00707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                                        || (0xb0007033U 
                                            == (0xfe00707fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U))))) 
                                       || (0xb2003033U 
                                           == (0xfe00707fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U))))) 
                                      || (0xb2007033U 
                                          == (0xfe00707fU 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U)))))) 
                                  | ((0x98700033U == 
                                      (0xfff0707fU 
                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                           << 0x1bU) 
                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                             >> 5U)))) 
                                     || (0x98704033U 
                                         == (0xfff0707fU 
                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U)))))) 
                                 | ((((0xb4003033U 
                                       == (0xfe00707fU 
                                           & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                               << 0x1bU) 
                                              | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                 >> 5U)))) 
                                      || (0xb4007033U 
                                          == (0xfe00707fU 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U))))) 
                                     || (0xb6003033U 
                                         == (0xfe00707fU 
                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U))))) 
                                    || (0xb6007033U 
                                        == (0xfe00707fU 
                                            & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                << 0x1bU) 
                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                  >> 5U)))))) 
                                | ((0x98603033U == 
                                    (0xfff0707fU & 
                                     ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                       << 0x1bU) | 
                                      (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                       >> 5U)))) || 
                                   (0x98607033U == 
                                    (0xfff0707fU & 
                                     ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                       << 0x1bU) | 
                                      (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                       >> 5U)))))) 
                               | ((0x98702033U == (0xfff0707fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U)))) 
                                  || (0x98706033U == 
                                      (0xfff0707fU 
                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                           << 0x1bU) 
                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                             >> 5U)))))) 
                              | ((0x98703033U == (0xfff0707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U)))) 
                                 || (0x98707033U == 
                                     (0xfff0707fU & 
                                      ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                        << 0x1bU) | 
                                       (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                        >> 5U))))))))) {
                    if ((1U & (~ (((((((((((((0x96002033U 
                                              == (0xfe00707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U)))) 
                                             || (0x96006033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                                            || (0xba002033U 
                                                == 
                                                (0xfe00707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                                           || (0xba006033U 
                                               == (0xfe00707fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U))))) 
                                          || (0x8f702033U 
                                              == (0xfff0707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                                         || (0xaf702033U 
                                             == (0xfff0707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                                        | ((((((0xa2000053U 
                                                == 
                                                (0xfe00707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U)))) 
                                               || (0xa2001053U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                        << 0x1bU) 
                                                       | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                          >> 5U))))) 
                                              || (0xa2002053U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U))))) 
                                             || (0xe2001053U 
                                                 == 
                                                 (0xfff0707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                                            || (0xc2000053U 
                                                == 
                                                (0xfff0007fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                                           || (0xc2100053U 
                                               == (0xfff0007fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U)))))) 
                                       | (((((((0xa0000053U 
                                                == 
                                                (0xfe00707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U)))) 
                                               || (0xa0001053U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                        << 0x1bU) 
                                                       | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                          >> 5U))))) 
                                              || (0xa0002053U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U))))) 
                                             || (0xe0001053U 
                                                 == 
                                                 (0xfff0707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                                            || (0xc0000053U 
                                                == 
                                                (0xfff0007fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                                           || (0xc0100053U 
                                               == (0xfff0007fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U))))) 
                                          || (0xe0000053U 
                                              == (0xfff0707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U)))))) 
                                      | (((((((((((((0xa0000033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                          << 0x1bU) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                            >> 5U)))) 
                                                    || (0xa0004033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                             << 0x1bU) 
                                                            | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                               >> 5U))))) 
                                                   || (0xa2000033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                            << 0x1bU) 
                                                           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                              >> 5U))))) 
                                                  || (0xa2004033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                           << 0x1bU) 
                                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                             >> 5U))))) 
                                                 || (0xa4000033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                          << 0x1bU) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                            >> 5U))))) 
                                                || (0xa4004033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                         << 0x1bU) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                           >> 5U))))) 
                                               || (0xa6000033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                        << 0x1bU) 
                                                       | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                          >> 5U))))) 
                                              || (0xa6004033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U))))) 
                                             || (0xa8000033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                                            || (0xa8004033U 
                                                == 
                                                (0xfe00707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                                           || (0xaa000033U 
                                               == (0xfe00707fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U))))) 
                                          || (0xaa004033U 
                                              == (0xfe00707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                                         || (0x98100033U 
                                             == (0xfff0707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U)))))) 
                                     | (((((((0xa4000053U 
                                              == (0xfe00707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U)))) 
                                             || (0xa4001053U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                                            || (0xa4002053U 
                                                == 
                                                (0xfe00707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                                           || (0xe4001053U 
                                               == (0xfff0707fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U))))) 
                                          || (0xc4000053U 
                                              == (0xfff0007fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                                         || (0xc4100053U 
                                             == (0xfff0007fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                                        || (0xe4000053U 
                                            == (0xfff0707fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U)))))) 
                                    | (((((((((((((0xa0002033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                        << 0x1bU) 
                                                       | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                          >> 5U)))) 
                                                  || (0xa0006033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                           << 0x1bU) 
                                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                             >> 5U))))) 
                                                 || (0xa2002033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                          << 0x1bU) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                            >> 5U))))) 
                                                || (0xa2006033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                         << 0x1bU) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                           >> 5U))))) 
                                               || (0xa4002033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                        << 0x1bU) 
                                                       | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                          >> 5U))))) 
                                              || (0xa4006033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U))))) 
                                             || (0xa6002033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                                            || (0xa6006033U 
                                                == 
                                                (0xfe00707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                                           || (0xa8002033U 
                                               == (0xfe00707fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U))))) 
                                          || (0xa8006033U 
                                              == (0xfe00707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                                         || (0xaa002033U 
                                             == (0xfe00707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                                        || (0xaa006033U 
                                            == (0xfe00707fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U))))) 
                                       || (0x98102033U 
                                           == (0xfff0707fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U)))))) 
                                   | (((0x98002033U 
                                        == (0xfff0707fU 
                                            & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                << 0x1bU) 
                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                  >> 5U)))) 
                                       || (0x98202033U 
                                           == (0xfff0707fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U))))) 
                                      || (0x98206033U 
                                          == (0xfff0707fU 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U)))))) 
                                  | (((((((0xa6000053U 
                                           == (0xfe00707fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U)))) 
                                          || (0xa6001053U 
                                              == (0xfe00707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                                         || (0xa6002053U 
                                             == (0xfe00707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                                        || (0xe6001053U 
                                            == (0xfff0707fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U))))) 
                                       || (0xc6000053U 
                                           == (0xfff0007fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U))))) 
                                      || (0xc6100053U 
                                          == (0xfff0007fU 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U))))) 
                                     || (0xe6000053U 
                                         == (0xfff0707fU 
                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U))))))))) {
                        if ((1U & (~ ((((((((((((((
                                                   (((((0xa0003033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                             << 0x1bU) 
                                                            | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                               >> 5U)))) 
                                                       || (0xa0007033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                << 0x1bU) 
                                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                  >> 5U))))) 
                                                      || (0xa2003033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                               << 0x1bU) 
                                                              | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                 >> 5U))))) 
                                                     || (0xa2007033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                              << 0x1bU) 
                                                             | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                >> 5U))))) 
                                                    || (0xa4003033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                             << 0x1bU) 
                                                            | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                               >> 5U))))) 
                                                   || (0xa4007033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                            << 0x1bU) 
                                                           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                              >> 5U))))) 
                                                  || (0xa6003033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                           << 0x1bU) 
                                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                             >> 5U))))) 
                                                 || (0xa6007033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                          << 0x1bU) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                            >> 5U))))) 
                                                || (0xa8003033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                         << 0x1bU) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                           >> 5U))))) 
                                               || (0xa8007033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                        << 0x1bU) 
                                                       | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                          >> 5U))))) 
                                              || (0xaa003033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U))))) 
                                             || (0xaa007033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                                            | ((((0x98003033U 
                                                  == 
                                                  (0xfff0707fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U)))) 
                                                 || (0x98103033U 
                                                     == 
                                                     (0xfff0707fU 
                                                      & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                          << 0x1bU) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                            >> 5U))))) 
                                                || (0x98203033U 
                                                    == 
                                                    (0xfff0707fU 
                                                     & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                         << 0x1bU) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                           >> 5U))))) 
                                               || (0x98207033U 
                                                   == 
                                                   (0xfff0707fU 
                                                    & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                        << 0x1bU) 
                                                       | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                          >> 5U)))))) 
                                           | ((0xd2000053U 
                                               == (0xfff0007fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U)))) 
                                              || (0xd2100053U 
                                                  == 
                                                  (0xfff0007fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U)))))) 
                                          | (((0xf0000053U 
                                               == (0xfff0707fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U)))) 
                                              || (0xd0000053U 
                                                  == 
                                                  (0xfff0007fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U))))) 
                                             || (0xd0100053U 
                                                 == 
                                                 (0xfff0007fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U)))))) 
                                         | (((0xf4000053U 
                                              == (0xfff0707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U)))) 
                                             || (0xd4000053U 
                                                 == 
                                                 (0xfff0007fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                                            || (0xd4100053U 
                                                == 
                                                (0xfff0007fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U)))))) 
                                        | (((0x98006033U 
                                             == (0xfff0707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U)))) 
                                            || (0x98302033U 
                                                == 
                                                (0xfff0707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                                           || (0x98306033U 
                                               == (0xfff0707fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U)))))) 
                                       | (((0xf6000053U 
                                            == (0xfff0707fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U)))) 
                                           || (0xd6000053U 
                                               == (0xfff0007fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U))))) 
                                          || (0xd6100053U 
                                              == (0xfff0007fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U)))))) 
                                      | (((0x98007033U 
                                           == (0xfff0707fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U)))) 
                                          || (0x98303033U 
                                              == (0xfff0707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                                         || (0x98307033U 
                                             == (0xfff0707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))))))) {
                            if ((1U & (~ (((((((((0x8bU 
                                                  == 
                                                  (0xffU 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U))) 
                                                 || (0xbU 
                                                     == 
                                                     (0xffU 
                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U)))) 
                                                | (0x2007U 
                                                   == 
                                                   (0x707fU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U)))) 
                                               | (0x2027U 
                                                  == 
                                                  (0x707fU 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U)))) 
                                              | (0x3007U 
                                                 == 
                                                 (0x707fU 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U)))) 
                                             | (0x3027U 
                                                == 
                                                (0x707fU 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U)))) 
                                            | (0x1007U 
                                               == (0x707fU 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U)))) 
                                           | (0x1027U 
                                              == (0x707fU 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U)))) 
                                          | (7U == 
                                             (0x707fU 
                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                 >> 5U))))))) {
                                if (((((((((0x27U == 
                                            (0x707fU 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                >> 5U))) 
                                           | (((0x2bU 
                                                == 
                                                (0xfe007fffU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U)))) 
                                               || (0x200002bU 
                                                   == 
                                                   (0xfe007fffU 
                                                    & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                        << 0x1bU) 
                                                       | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                          >> 5U))))) 
                                              || (0xc00002bU 
                                                  == 
                                                  (0xfe007fffU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U)))))) 
                                          | (0x400002bU 
                                             == (0xfe00707fU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) 
                                         | (0x600002bU 
                                            == (0xfe00707fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U))))) 
                                        | (0x800002bU 
                                           == (0xfe0ff07fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U))))) 
                                       | (0xa00002bU 
                                          == (0xfe0ff07fU 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U))))) 
                                      | (0xe00002bU 
                                         == (0xfff07fffU 
                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U))))) 
                                     | (0x102bU == 
                                        (0xff07fU & 
                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                          >> 5U))))) {
                                    if ((0x27U != (0x707fU 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U)))) {
                                        if ((((0x2bU 
                                               == (0xfe007fffU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U)))) 
                                              || (0x200002bU 
                                                  == 
                                                  (0xfe007fffU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U))))) 
                                             || (0xc00002bU 
                                                 == 
                                                 (0xfe007fffU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U)))))) {
                                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select = 1U;
                                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 1U;
                                        } else {
                                            if ((0x400002bU 
                                                 != 
                                                 (0xfe00707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) {
                                                if (
                                                    (0x600002bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                          << 0x1bU) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                            >> 5U))))) {
                                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select = 1U;
                                                } else if (
                                                           (0x800002bU 
                                                            != 
                                                            (0xfe0ff07fU 
                                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                 << 0x1bU) 
                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                   >> 5U))))) {
                                                    if (
                                                        (0xa00002bU 
                                                         == 
                                                         (0xfe0ff07fU 
                                                          & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                              << 0x1bU) 
                                                             | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                >> 5U))))) {
                                                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select = 1U;
                                                    }
                                                }
                                            }
                                            if ((0x400002bU 
                                                 == 
                                                 (0xfe00707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) {
                                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 1U;
                                            } else if (
                                                       (0x600002bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                             << 0x1bU) 
                                                            | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                               >> 5U))))) {
                                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 1U;
                                            } else if (
                                                       (0x800002bU 
                                                        != 
                                                        (0xfe0ff07fU 
                                                         & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                             << 0x1bU) 
                                                            | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                               >> 5U))))) {
                                                if (
                                                    (0xa00002bU 
                                                     != 
                                                     (0xfe0ff07fU 
                                                      & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                          << 0x1bU) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                            >> 5U))))) {
                                                    if (
                                                        (0xe00002bU 
                                                         == 
                                                         (0xfff07fffU 
                                                          & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                              << 0x1bU) 
                                                             | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                >> 5U))))) {
                                                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h4ac0c703__0 
        = (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3eU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h4ac0c703__0));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h4ac0c703__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3dU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h4ac0c703__0) 
              << 1U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h4ac0c703__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3bU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h4ac0c703__0) 
              << 2U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h4ac0c703__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 3U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x37U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h4ac0c703__0) 
              << 3U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h4ac0c703__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 4U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x2fU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h4ac0c703__0) 
              << 4U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h4ac0c703__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 5U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h4ac0c703__0) 
              << 5U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_h4ac0c703__0 
        = (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3eU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_h4ac0c703__0));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_h4ac0c703__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3dU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_h4ac0c703__0) 
              << 1U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_h4ac0c703__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 2U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3bU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_h4ac0c703__0) 
              << 2U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_h4ac0c703__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 3U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x37U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_h4ac0c703__0) 
              << 3U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_h4ac0c703__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 4U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x2fU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_h4ac0c703__0) 
              << 4U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_h4ac0c703__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 5U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_h4ac0c703__0) 
              << 5U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h4ac0c703__0 
        = (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3eU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h4ac0c703__0));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h4ac0c703__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3dU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h4ac0c703__0) 
              << 1U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h4ac0c703__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3bU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h4ac0c703__0) 
              << 2U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h4ac0c703__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 3U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x37U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h4ac0c703__0) 
              << 3U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h4ac0c703__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 4U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x2fU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h4ac0c703__0) 
              << 4U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h4ac0c703__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 5U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h4ac0c703__0) 
              << 5U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_h4ac0c703__0 
        = (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3eU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_h4ac0c703__0));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_h4ac0c703__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3dU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_h4ac0c703__0) 
              << 1U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_h4ac0c703__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 2U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3bU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_h4ac0c703__0) 
              << 2U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_h4ac0c703__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 3U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x37U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_h4ac0c703__0) 
              << 3U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_h4ac0c703__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 4U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x2fU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_h4ac0c703__0) 
              << 4U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_h4ac0c703__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 5U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_h4ac0c703__0) 
              << 5U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__shift_arithmetic = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__shift_left = 0U;
    if ((1U & (~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_op) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_op))) {
            if ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_op))) {
                if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_op)))) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__shift_arithmetic = 1U;
                }
            }
            if ((1U & (~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_op) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_op)))) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__shift_left = 1U;
                }
            }
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
        = ((8U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select))
            ? ((4U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select))
                ? 0U : ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select))
                         ? 0U : ((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select))
                                  ? (0x1fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                              >> 0x11U))
                                  : 0U))) : ((4U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select))
                                              ? ((2U 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select))
                                                   ? 0U
                                                   : 
                                                  VL_EXTENDS_II(32,21, 
                                                                ((0x100000U 
                                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                                                     << 0x13U)) 
                                                                 | ((0xff000U 
                                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                                        >> 2U)) 
                                                                    | ((0x800U 
                                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                                           >> 0xbU)) 
                                                                       | (0x7feU 
                                                                          & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                                                              << 0xaU) 
                                                                             | (0x3feU 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                                                >> 0x16U))))))))))
                                              : ((2U 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select))
                                                   ? 
                                                  (0xfffff000U 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                                       << 0x1eU) 
                                                      | (0x3ffff000U 
                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                            >> 2U))))
                                                   : 0U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select))
                                                   ? vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT____VdfgExtracted_h110f8851__0
                                                   : 0U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__valid_instr 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
            >> 1U) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_snitch__inst_valid_o) 
                      & ((((~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__sb_q 
                               >> (0x1fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                            >> 0x11U)))) 
                           | (1U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select))) 
                          & ((~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__sb_q 
                                 >> (0x1fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                              >> 0x16U)))) 
                             | ((1U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select)) 
                                & (5U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select))))) 
                         & (((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__uses_rd)) 
                             | ((~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__sb_q 
                                    >> (0x1fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                 >> 9U)))) 
                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__uses_rd))) 
                            & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__trans_active)) 
                               | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT____VdfgRegularize_h1d3ec990_0_3))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__shift_arithmetic = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__shift_left = 0U;
    if ((1U & (~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_op) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_op))) {
            if ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_op))) {
                if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_op)))) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__shift_arithmetic = 1U;
                }
            }
            if ((1U & (~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_op) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_op)))) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__shift_left = 1U;
                }
            }
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
        = ((8U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select))
            ? ((4U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select))
                ? 0U : ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select))
                         ? 0U : ((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select))
                                  ? (0x1fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                              >> 0x14U))
                                  : 0U))) : ((4U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select))
                                              ? ((2U 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select))
                                                   ? 0U
                                                   : 
                                                  VL_EXTENDS_II(32,21, 
                                                                ((0x100000U 
                                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                     << 0x10U)) 
                                                                 | ((0xff000U 
                                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                        >> 5U)) 
                                                                    | ((0x800U 
                                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                           >> 0xeU)) 
                                                                       | (0x7feU 
                                                                          & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                                              << 7U) 
                                                                             | (0x7eU 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                                >> 0x19U))))))))))
                                              : ((2U 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select))
                                                   ? 
                                                  (0xfffff000U 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (0x7fff000U 
                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                            >> 5U))))
                                                   : 0U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select))
                                                   ? vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT____VdfgExtracted_h110f8851__1
                                                   : 0U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__valid_instr 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
            >> 4U) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_snitch__inst_valid_o) 
                      & ((((~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__sb_q 
                               >> (0x1fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                            >> 0x14U)))) 
                           | (1U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa_select))) 
                          & ((~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__sb_q 
                                 >> (0x1fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                              >> 0x19U)))) 
                             | ((1U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select)) 
                                & (5U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opb_select))))) 
                         & (((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__uses_rd)) 
                             | ((~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__sb_q 
                                    >> (0x1fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                 >> 0xcU)))) 
                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__uses_rd))) 
                            & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__trans_active)) 
                               | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT____VdfgRegularize_h02df225c_0_3))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_opa 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa));
    if ((8U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_op))) {
        if ((4U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_op))) {
            if ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_op))) {
                if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_op)))) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_opa 
                        = (QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa));
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_op) 
                         >> 2U)))) {
        if ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_op))) {
            if ((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_op))) {
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_opa 
                    = (QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa));
            }
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__shift_opa_reversed 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
            << 0x1fU) | ((0x40000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                         << 0x1dU)) 
                         | ((0x20000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                            << 0x1bU)) 
                            | ((0x10000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                               << 0x19U)) 
                               | ((0x8000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                             << 0x11U)) 
                                         | ((0x800000U 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                << 0xfU)) 
                                            | ((0x400000U 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                   << 0xdU)) 
                                               | ((0x200000U 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                      << 0xbU)) 
                                                  | ((0x100000U 
                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                         << 9U)) 
                                                     | ((0x80000U 
                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                               << 5U)) 
                                                           | ((0x20000U 
                                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                  << 3U)) 
                                                              | ((0x10000U 
                                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                     << 1U)) 
                                                                 | ((0x8000U 
                                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                        >> 1U)) 
                                                                    | ((0x4000U 
                                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                                >> 7U)) 
                                                                             | ((0x800U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                                >> 0x1dU)) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__debug_d 
        = ((1U & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__debug_q)) 
                  & ((((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__irq) 
                       >> 4U) | ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__dcsr_q 
                                  >> 0xfU) & (0x100073U 
                                              == ((
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                                   << 0x1eU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                     >> 2U))))) 
                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__dcsr_q 
                        >> 2U)))) ? (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__valid_instr)
            : (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__debug_q));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__wfi_d 
        = ((~ ((((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__irq) 
                 >> 4U) | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__debug_q)) 
               | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__any_interrupt_pending))) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__wfi_q));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__tlb_flush = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_snitch__flush_i_valid_o = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_en = 0U;
    if ((1U & (~ ((((((((0x33U == (0xfe00707fU & ((
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                                   << 0x1eU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                     >> 2U)))) 
                        | (0x13U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                >> 2U)))) 
                       | (0x40000033U == (0xfe00707fU 
                                          & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                              << 0x1eU) 
                                             | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                >> 2U))))) 
                      | (0x4033U == (0xfe00707fU & 
                                     ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                       << 0x1eU) | 
                                      (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                       >> 2U))))) | 
                     (0x4013U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                             >> 2U)))) 
                    | (0x6033U == (0xfe00707fU & ((
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                                   << 0x1eU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                     >> 2U))))) 
                   | (0x6013U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                             >> 2U)))) 
                  | (0x7033U == (0xfe00707fU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                                 << 0x1eU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                   >> 2U)))))))) {
        if ((1U & (~ ((((((((0x7013U == (0x707fU & 
                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                          >> 2U))) 
                            | (0x2033U == (0xfe00707fU 
                                           & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                               << 0x1eU) 
                                              | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                 >> 2U))))) 
                           | (0x2013U == (0x707fU & 
                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                           >> 2U)))) 
                          | (0x3033U == (0xfe00707fU 
                                         & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                             << 0x1eU) 
                                            | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                               >> 2U))))) 
                         | (0x3013U == (0x707fU & (
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                   >> 2U)))) 
                        | (0x1033U == (0xfe00707fU 
                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                           << 0x1eU) 
                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                             >> 2U))))) 
                       | (0x5033U == (0xfe00707fU & 
                                      ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                        << 0x1eU) | 
                                       (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                        >> 2U))))) 
                      | (0x40005033U == (0xfe00707fU 
                                         & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                             << 0x1eU) 
                                            | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                               >> 2U)))))))) {
            if ((1U & (~ ((((((((0x1013U == (0xfc00707fU 
                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                                 << 0x1eU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                   >> 2U)))) 
                                | (0x5013U == (0xfc00707fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                                   << 0x1eU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                     >> 2U))))) 
                               | (0x40005013U == (0xfc00707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                                      << 0x1eU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                        >> 2U))))) 
                              | (0x37U == (0x7fU & 
                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                            >> 2U)))) 
                             | (0x17U == (0x7fU & (
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                   >> 2U)))) 
                            | (0x6fU == (0x7fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                  >> 2U)))) 
                           | (0x67U == (0x707fU & (
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                   >> 2U)))) 
                          | (0x63U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                  >> 2U))))))) {
                if ((1U & (~ ((((((((0x1063U == (0x707fU 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                    >> 2U))) 
                                    | (0x4063U == (0x707fU 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                      >> 2U)))) 
                                   | (0x6063U == (0x707fU 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                     >> 2U)))) 
                                  | (0x5063U == (0x707fU 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                    >> 2U)))) 
                                 | (0x7063U == (0x707fU 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                   >> 2U)))) 
                                | (0x23U == (0x707fU 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                >> 2U)))) 
                               | (0x1023U == (0x707fU 
                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                 >> 2U)))) 
                              | (0x2023U == (0x707fU 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                >> 2U))))))) {
                    if ((1U & (~ ((((((((3U == (0x707fU 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                   >> 2U))) 
                                        | (0x1003U 
                                           == (0x707fU 
                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                  >> 2U)))) 
                                       | (0x2003U == 
                                          (0x707fU 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                              >> 2U)))) 
                                      | (0x4003U == 
                                         (0x707fU & 
                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                           >> 2U)))) 
                                     | (0x5003U == 
                                        (0x707fU & 
                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                          >> 2U)))) 
                                    | (0x1073U == (0x707fU 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                      >> 2U)))) 
                                   | (0x5073U == (0x707fU 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                     >> 2U)))) 
                                  | (0x2073U == (0x707fU 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                    >> 2U))))))) {
                        if (((((((((0x6073U == (0x707fU 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                   >> 2U))) 
                                   | (0x3073U == (0x707fU 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                     >> 2U)))) 
                                  | (0x7073U == (0x707fU 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                    >> 2U)))) 
                                 | (0x73U == ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                               << 0x1eU) 
                                              | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                 >> 2U)))) 
                                | (0x100073U == ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                    >> 2U)))) 
                               | (0x10200073U == ((
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                                   << 0x1eU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                     >> 2U)))) 
                              | (0x30200073U == ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                    >> 2U)))) 
                             | (0x7b200073U == ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                                 << 0x1eU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                   >> 2U))))) {
                            if ((0x6073U != (0x707fU 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                >> 2U)))) {
                                if ((0x3073U != (0x707fU 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                    >> 2U)))) {
                                    if ((0x7073U != 
                                         (0x707fU & 
                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                           >> 2U)))) {
                                        if ((0x73U 
                                             != ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                    >> 2U)))) {
                                            if ((0x100073U 
                                                 != 
                                                 ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                                   << 0x1eU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                     >> 2U)))) {
                                                if (
                                                    (0x10200073U 
                                                     != 
                                                     ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                                       << 0x1eU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                         >> 2U)))) {
                                                    if (
                                                        (0x30200073U 
                                                         != 
                                                         ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                                           << 0x1eU) 
                                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                             >> 2U)))) {
                                                        if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__debug_q) {
                                                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__debug_d 
                                                                = 
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__valid_instr)));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((1U & (~ ((((((((0x6073U 
                                             == (0x707fU 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                    >> 2U))) 
                                            | (0x3073U 
                                               == (0x707fU 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                      >> 2U)))) 
                                           | (0x7073U 
                                              == (0x707fU 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                     >> 2U)))) 
                                          | (0x73U 
                                             == ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                    >> 2U)))) 
                                         | (0x100073U 
                                            == ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                                 << 0x1eU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                   >> 2U)))) 
                                        | (0x10200073U 
                                           == ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                                << 0x1eU) 
                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                  >> 2U)))) 
                                       | (0x30200073U 
                                          == ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                               << 0x1eU) 
                                              | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                 >> 2U)))) 
                                      | (0x7b200073U 
                                         == ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                              << 0x1eU) 
                                             | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                >> 2U))))))) {
                            if (((((((((0xfU == (0x707fU 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                    >> 2U))) 
                                       | (0x100fU == 
                                          (0x707fU 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                              >> 2U)))) 
                                      | (0x12000073U 
                                         == (0xfe007fffU 
                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                                 << 0x1eU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                   >> 2U))))) 
                                     | (0x10500073U 
                                        == ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                             << 0x1eU) 
                                            | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                               >> 2U)))) 
                                    | (0x202fU == (0xf800707fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                                       << 0x1eU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                         >> 2U))))) 
                                   | (0x2000202fU == 
                                      (0xf800707fU 
                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                           << 0x1eU) 
                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                             >> 2U))))) 
                                  | (0x4000202fU == 
                                     (0xf800707fU & 
                                      ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                        << 0x1eU) | 
                                       (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                        >> 2U))))) 
                                 | (0x6000202fU == 
                                    (0xf800707fU & 
                                     ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                       << 0x1eU) | 
                                      (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                       >> 2U)))))) {
                                if ((0xfU != (0x707fU 
                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                 >> 2U)))) {
                                    if ((0x100fU != 
                                         (0x707fU & 
                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                           >> 2U)))) {
                                        if ((0x12000073U 
                                             != (0xfe007fffU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                       >> 2U))))) {
                                            if ((0x10500073U 
                                                 == 
                                                 ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                                   << 0x1eU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                     >> 2U)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__priv_lvl_q))) {
                                                    if (
                                                        ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__debug_q)) 
                                                         & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__valid_instr))) {
                                                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__wfi_d = 1U;
                                                    }
                                                }
                                            }
                                        }
                                        if ((0x12000073U 
                                             == (0xfe007fffU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                       >> 2U))))) {
                                            if ((0U 
                                                 != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__priv_lvl_q))) {
                                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__tlb_flush 
                                                    = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__valid_instr;
                                            }
                                        }
                                    }
                                    if ((0x100fU == 
                                         (0x707fU & 
                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                           >> 2U)))) {
                                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_snitch__flush_i_valid_o 
                                            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__valid_instr;
                                    }
                                }
                            }
                        }
                    }
                    if (((((((((3U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                  >> 2U))) 
                               | (0x1003U == (0x707fU 
                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                 >> 2U)))) 
                              | (0x2003U == (0x707fU 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                >> 2U)))) 
                             | (0x4003U == (0x707fU 
                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                               >> 2U)))) 
                            | (0x5003U == (0x707fU 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                              >> 2U)))) 
                           | (0x1073U == (0x707fU & 
                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                           >> 2U)))) 
                          | (0x5073U == (0x707fU & 
                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                          >> 2U)))) 
                         | (0x2073U == (0x707fU & (
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                   >> 2U))))) {
                        if ((3U != (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                               >> 2U)))) {
                            if ((0x1003U != (0x707fU 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                >> 2U)))) {
                                if ((0x2003U != (0x707fU 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                    >> 2U)))) {
                                    if ((0x4003U != 
                                         (0x707fU & 
                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                           >> 2U)))) {
                                        if ((0x5003U 
                                             != (0x707fU 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                    >> 2U)))) {
                                            if ((0x1073U 
                                                 == 
                                                 (0x707fU 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT____VdfgExtracted_h1fc24551__0)))) {
                                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_en 
                                                        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__valid_instr;
                                                }
                                            } else if (
                                                       (0x5073U 
                                                        == 
                                                        (0x707fU 
                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                            >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT____VdfgExtracted_h1fc24551__0)))) {
                                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_en 
                                                        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__valid_instr;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT____VdfgExtracted_h1fc24551__0)))) {
                                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_en 
                                                    = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__valid_instr;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if (((((((((0x6073U == (0x707fU 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                      >> 2U))) 
                                      | (0x3073U == 
                                         (0x707fU & 
                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                           >> 2U)))) 
                                     | (0x7073U == 
                                        (0x707fU & 
                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                          >> 2U)))) 
                                    | (0x73U == ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                    >> 2U)))) 
                                   | (0x100073U == 
                                      ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                        << 0x1eU) | 
                                       (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                        >> 2U)))) | 
                                  (0x10200073U == (
                                                   (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                                    << 0x1eU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                      >> 2U)))) 
                                 | (0x30200073U == 
                                    ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                      << 0x1eU) | (
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                   >> 2U)))) 
                                | (0x7b200073U == (
                                                   (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                                    << 0x1eU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                      >> 2U))))) {
                        if ((0x6073U == (0x707fU & 
                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                          >> 2U)))) {
                            if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT____VdfgExtracted_h1fc24551__0)))) {
                                if ((0x7c0U != (0xfffU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                                    << 0xaU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                      >> 0x16U))))) {
                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_en 
                                        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__valid_instr;
                                }
                            }
                        } else if ((0x3073U == (0x707fU 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                   >> 2U)))) {
                            if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT____VdfgExtracted_h1fc24551__0)))) {
                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_en 
                                    = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__valid_instr;
                            }
                        } else if ((0x7073U == (0x707fU 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                   >> 2U)))) {
                            if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT____VdfgExtracted_h1fc24551__0)))) {
                                if ((0x7c0U != (0xfffU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                                                    << 0xaU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                      >> 0x16U))))) {
                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_en 
                                        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__valid_instr;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_opa 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa));
    if ((8U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_op))) {
        if ((4U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_op))) {
            if ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_op))) {
                if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_op)))) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_opa 
                        = (QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa));
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_op) 
                         >> 2U)))) {
        if ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_op))) {
            if ((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_op))) {
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_opa 
                    = (QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa));
            }
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__shift_opa_reversed 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
            << 0x1fU) | ((0x40000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                         << 0x1dU)) 
                         | ((0x20000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                            << 0x1bU)) 
                            | ((0x10000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                               << 0x19U)) 
                               | ((0x8000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                             << 0x11U)) 
                                         | ((0x800000U 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                << 0xfU)) 
                                            | ((0x400000U 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                   << 0xdU)) 
                                               | ((0x200000U 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                      << 0xbU)) 
                                                  | ((0x100000U 
                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                         << 9U)) 
                                                     | ((0x80000U 
                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                               << 5U)) 
                                                           | ((0x20000U 
                                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                  << 3U)) 
                                                              | ((0x10000U 
                                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                     << 1U)) 
                                                                 | ((0x8000U 
                                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                        >> 1U)) 
                                                                    | ((0x4000U 
                                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                                >> 7U)) 
                                                                             | ((0x800U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                                >> 0x1dU)) 
                                                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__debug_d 
        = ((1U & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__debug_q)) 
                  & ((((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__irq) 
                       >> 4U) | ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__dcsr_q 
                                  >> 0xfU) & (0x100073U 
                                              == ((
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U))))) 
                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__dcsr_q 
                        >> 2U)))) ? (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__valid_instr)
            : (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__debug_q));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__wfi_d 
        = ((~ ((((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__irq) 
                 >> 4U) | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__debug_q)) 
               | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__any_interrupt_pending))) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__wfi_q));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__tlb_flush = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_snitch__flush_i_valid_o = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_en = 0U;
    if ((1U & (~ ((((((((0x33U == (0xfe00707fU & ((
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U)))) 
                        | (0x13U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                >> 5U)))) 
                       | (0x40000033U == (0xfe00707fU 
                                          & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                              << 0x1bU) 
                                             | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                >> 5U))))) 
                      | (0x4033U == (0xfe00707fU & 
                                     ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                       << 0x1bU) | 
                                      (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                       >> 5U))))) | 
                     (0x4013U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                             >> 5U)))) 
                    | (0x6033U == (0xfe00707fU & ((
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U))))) 
                   | (0x6013U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                             >> 5U)))) 
                  | (0x7033U == (0xfe00707fU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U)))))))) {
        if ((1U & (~ ((((((((0x7013U == (0x707fU & 
                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                          >> 5U))) 
                            | (0x2033U == (0xfe00707fU 
                                           & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                               << 0x1bU) 
                                              | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                 >> 5U))))) 
                           | (0x2013U == (0x707fU & 
                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                           >> 5U)))) 
                          | (0x3033U == (0xfe00707fU 
                                         & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                             << 0x1bU) 
                                            | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                               >> 5U))))) 
                         | (0x3013U == (0x707fU & (
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U)))) 
                        | (0x1033U == (0xfe00707fU 
                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                           << 0x1bU) 
                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                             >> 5U))))) 
                       | (0x5033U == (0xfe00707fU & 
                                      ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                        << 0x1bU) | 
                                       (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                        >> 5U))))) 
                      | (0x40005033U == (0xfe00707fU 
                                         & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                             << 0x1bU) 
                                            | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                               >> 5U)))))))) {
            if ((1U & (~ ((((((((0x1013U == (0xfc00707fU 
                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U)))) 
                                | (0x5013U == (0xfc00707fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U))))) 
                               | (0x40005013U == (0xfc00707fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                      << 0x1bU) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                        >> 5U))))) 
                              | (0x37U == (0x7fU & 
                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                            >> 5U)))) 
                             | (0x17U == (0x7fU & (
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U)))) 
                            | (0x6fU == (0x7fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                  >> 5U)))) 
                           | (0x67U == (0x707fU & (
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U)))) 
                          | (0x63U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                  >> 5U))))))) {
                if ((1U & (~ ((((((((0x1063U == (0x707fU 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U))) 
                                    | (0x4063U == (0x707fU 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U)))) 
                                   | (0x6063U == (0x707fU 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U)))) 
                                  | (0x5063U == (0x707fU 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U)))) 
                                 | (0x7063U == (0x707fU 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U)))) 
                                | (0x23U == (0x707fU 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                >> 5U)))) 
                               | (0x1023U == (0x707fU 
                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                 >> 5U)))) 
                              | (0x2023U == (0x707fU 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                >> 5U))))))) {
                    if ((1U & (~ ((((((((3U == (0x707fU 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U))) 
                                        | (0x1003U 
                                           == (0x707fU 
                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                  >> 5U)))) 
                                       | (0x2003U == 
                                          (0x707fU 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                              >> 5U)))) 
                                      | (0x4003U == 
                                         (0x707fU & 
                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                           >> 5U)))) 
                                     | (0x5003U == 
                                        (0x707fU & 
                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                          >> 5U)))) 
                                    | (0x1073U == (0x707fU 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U)))) 
                                   | (0x5073U == (0x707fU 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U)))) 
                                  | (0x2073U == (0x707fU 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U))))))) {
                        if (((((((((0x6073U == (0x707fU 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U))) 
                                   | (0x3073U == (0x707fU 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U)))) 
                                  | (0x7073U == (0x707fU 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U)))) 
                                 | (0x73U == ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                               << 0x1bU) 
                                              | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                 >> 5U)))) 
                                | (0x100073U == ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U)))) 
                               | (0x10200073U == ((
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U)))) 
                              | (0x30200073U == ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U)))) 
                             | (0x7b200073U == ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U))))) {
                            if ((0x6073U != (0x707fU 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                >> 5U)))) {
                                if ((0x3073U != (0x707fU 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U)))) {
                                    if ((0x7073U != 
                                         (0x707fU & 
                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                           >> 5U)))) {
                                        if ((0x73U 
                                             != ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U)))) {
                                            if ((0x100073U 
                                                 != 
                                                 ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U)))) {
                                                if (
                                                    (0x10200073U 
                                                     != 
                                                     ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U)))) {
                                                    if (
                                                        (0x30200073U 
                                                         != 
                                                         ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                           << 0x1bU) 
                                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                             >> 5U)))) {
                                                        if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__debug_q) {
                                                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__debug_d 
                                                                = 
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__valid_instr)));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((1U & (~ ((((((((0x6073U 
                                             == (0x707fU 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U))) 
                                            | (0x3073U 
                                               == (0x707fU 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U)))) 
                                           | (0x7073U 
                                              == (0x707fU 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U)))) 
                                          | (0x73U 
                                             == ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U)))) 
                                         | (0x100073U 
                                            == ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U)))) 
                                        | (0x10200073U 
                                           == ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                << 0x1bU) 
                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                  >> 5U)))) 
                                       | (0x30200073U 
                                          == ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                               << 0x1bU) 
                                              | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                 >> 5U)))) 
                                      | (0x7b200073U 
                                         == ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                              << 0x1bU) 
                                             | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                >> 5U))))))) {
                            if (((((((((0xfU == (0x707fU 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U))) 
                                       | (0x100fU == 
                                          (0x707fU 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                              >> 5U)))) 
                                      | (0x12000073U 
                                         == (0xfe007fffU 
                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                 << 0x1bU) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U))))) 
                                     | (0x10500073U 
                                        == ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                             << 0x1bU) 
                                            | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                               >> 5U)))) 
                                    | (0x202fU == (0xf800707fU 
                                                   & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                       << 0x1bU) 
                                                      | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 5U))))) 
                                   | (0x2000202fU == 
                                      (0xf800707fU 
                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                           << 0x1bU) 
                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                             >> 5U))))) 
                                  | (0x4000202fU == 
                                     (0xf800707fU & 
                                      ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                        << 0x1bU) | 
                                       (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                        >> 5U))))) 
                                 | (0x6000202fU == 
                                    (0xf800707fU & 
                                     ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                       << 0x1bU) | 
                                      (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                       >> 5U)))))) {
                                if ((0xfU != (0x707fU 
                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                 >> 5U)))) {
                                    if ((0x100fU != 
                                         (0x707fU & 
                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                           >> 5U)))) {
                                        if ((0x12000073U 
                                             != (0xfe007fffU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) {
                                            if ((0x10500073U 
                                                 == 
                                                 ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__priv_lvl_q))) {
                                                    if (
                                                        ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__debug_q)) 
                                                         & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__valid_instr))) {
                                                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__wfi_d = 1U;
                                                    }
                                                }
                                            }
                                        }
                                        if ((0x12000073U 
                                             == (0xfe007fffU 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                       >> 5U))))) {
                                            if ((0U 
                                                 != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__priv_lvl_q))) {
                                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__tlb_flush 
                                                    = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__valid_instr;
                                            }
                                        }
                                    }
                                    if ((0x100fU == 
                                         (0x707fU & 
                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                           >> 5U)))) {
                                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_snitch__flush_i_valid_o 
                                            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__valid_instr;
                                    }
                                }
                            }
                        }
                    }
                    if (((((((((3U == (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                  >> 5U))) 
                               | (0x1003U == (0x707fU 
                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                 >> 5U)))) 
                              | (0x2003U == (0x707fU 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                >> 5U)))) 
                             | (0x4003U == (0x707fU 
                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                               >> 5U)))) 
                            | (0x5003U == (0x707fU 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                              >> 5U)))) 
                           | (0x1073U == (0x707fU & 
                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                           >> 5U)))) 
                          | (0x5073U == (0x707fU & 
                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                          >> 5U)))) 
                         | (0x2073U == (0x707fU & (
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U))))) {
                        if ((3U != (0x707fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                               >> 5U)))) {
                            if ((0x1003U != (0x707fU 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                >> 5U)))) {
                                if ((0x2003U != (0x707fU 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U)))) {
                                    if ((0x4003U != 
                                         (0x707fU & 
                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                           >> 5U)))) {
                                        if ((0x5003U 
                                             != (0x707fU 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U)))) {
                                            if ((0x1073U 
                                                 == 
                                                 (0x707fU 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 5U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT____VdfgExtracted_h1fc24551__6)))) {
                                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_en 
                                                        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__valid_instr;
                                                }
                                            } else if (
                                                       (0x5073U 
                                                        == 
                                                        (0x707fU 
                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                            >> 5U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT____VdfgExtracted_h1fc24551__6)))) {
                                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_en 
                                                        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__valid_instr;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT____VdfgExtracted_h1fc24551__6)))) {
                                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_en 
                                                    = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__valid_instr;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if (((((((((0x6073U == (0x707fU 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U))) 
                                      | (0x3073U == 
                                         (0x707fU & 
                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                           >> 5U)))) 
                                     | (0x7073U == 
                                        (0x707fU & 
                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                          >> 5U)))) 
                                    | (0x73U == ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 5U)))) 
                                   | (0x100073U == 
                                      ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                        << 0x1bU) | 
                                       (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                        >> 5U)))) | 
                                  (0x10200073U == (
                                                   (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U)))) 
                                 | (0x30200073U == 
                                    ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                      << 0x1bU) | (
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U)))) 
                                | (0x7b200073U == (
                                                   (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 5U))))) {
                        if ((0x6073U == (0x707fU & 
                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                          >> 5U)))) {
                            if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT____VdfgExtracted_h1fc24551__6)))) {
                                if ((0x7c0U != (0xfffU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 7U) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 0x19U))))) {
                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_en 
                                        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__valid_instr;
                                }
                            }
                        } else if ((0x3073U == (0x707fU 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U)))) {
                            if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT____VdfgExtracted_h1fc24551__6)))) {
                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_en 
                                    = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__valid_instr;
                            }
                        } else if ((0x7073U == (0x707fU 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 5U)))) {
                            if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT____VdfgExtracted_h1fc24551__6)))) {
                                if ((0x7c0U != (0xfffU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                    << 7U) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                      >> 0x19U))))) {
                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_en 
                                        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__valid_instr;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__shift_opa 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__shift_left)
            ? vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__shift_opa_reversed
            : vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__tag_valid_d 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__tag_valid_q;
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT____Vcellout__gen_itlb__DOT__i_snitch_l0_tlb_inst__valid_o) 
         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[2U] 
            >> 0x16U))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__tag_valid_d = 1U;
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__tag_valid_d 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__tag_valid_q;
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT____Vcellout__gen_dtlb__DOT__i_snitch_l0_tlb_data__valid_o) 
         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[2U] 
            >> 0x17U))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__tag_valid_d = 1U;
    }
    if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__tlb_flush) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__tag_valid_d = 0U;
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__tag_valid_d = 0U;
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__snax_csr_stall_d 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__snax_csr_stall_q;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_stall_d 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_stall_q;
    if ((3U == (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_barrier__DOT__arrival_q))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_stall_d = 0U;
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_core__BRA__0__KET____DOT__i_snitch_cc__barrier_o = 0U;
    if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_en) {
        if ((((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__priv_lvl_q) 
              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                  << 2U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                            >> 0x1eU))) == (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                            >> 0x1eU))) {
            if ((2U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U])) {
                if ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U])) {
                    if ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                         >> 0x1fU)) {
                        if ((0x40000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                            if ((0x20000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                            } else if ((0x10000000U 
                                        & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                            } else if ((0x8000000U 
                                        & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                            } else if ((0x4000000U 
                                        & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                if ((0x2000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                } else if ((0x1000000U 
                                            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                    if ((0x800000U 
                                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                    } else if ((0x400000U 
                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                    }
                                } else {
                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                }
                            } else {
                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                            }
                        } else {
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                        }
                    } else {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    }
                } else if ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                            >> 0x1fU)) {
                    if ((0x40000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                        if ((0x20000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                            if ((0x10000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                if ((0x8000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                } else if ((0x4000000U 
                                            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                } else if ((0x2000000U 
                                            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                } else if ((0x1000000U 
                                            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                }
                            } else if ((0x8000000U 
                                        & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                            } else if ((0x4000000U 
                                        & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                            } else if ((0x2000000U 
                                        & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                            } else if ((0x1000000U 
                                        & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                            } else if ((0x800000U & 
                                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                if ((0x400000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                }
                            } else if ((0x400000U & 
                                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                            }
                        } else if ((0x10000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                        } else if ((0x8000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                        } else if ((0x4000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                        } else if ((0x2000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                        } else if ((0x1000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                        } else if ((0x800000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                            if ((0x400000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                            }
                        } else if ((0x400000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                        }
                    } else {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    }
                } else if ((0x40000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                } else if ((0x20000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                } else if ((0x10000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                } else if ((0x8000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                } else if ((0x4000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                } else if ((0x2000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                } else if ((0x1000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                } else if ((0x800000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                } else if ((0x400000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                }
            } else if ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U])) {
                if ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                     >> 0x1fU)) {
                    if ((0x40000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                        if ((0x20000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                            if ((0x10000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                if ((0x8000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                } else if ((0x4000000U 
                                            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                } else if ((0x2000000U 
                                            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                } else if ((0x1000000U 
                                            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                    if ((0x800000U 
                                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                    } else if ((0x400000U 
                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                   >> 0x17U)))) {
                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                }
                            } else if ((0x8000000U 
                                        & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                if ((0x4000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                    if ((0x2000000U 
                                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                    } else if ((0x1000000U 
                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                    } else if ((0x800000U 
                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                        if ((0x400000U 
                                             & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                        }
                                    }
                                } else {
                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                }
                            } else {
                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                            }
                        } else {
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                        }
                    } else {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    }
                } else {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                }
            } else if ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                        >> 0x1fU)) {
                if ((0x40000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                    if ((0x20000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    } else if ((0x10000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                        if ((0x8000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                        } else if ((0x4000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                        } else if ((0x2000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                        } else if ((0x1000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                            if ((0x800000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                            } else if ((0x400000U & 
                                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                            }
                        }
                    } else if ((0x8000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    } else if ((0x4000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    } else if ((0x2000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    } else if ((0x1000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                        if ((0x800000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                        }
                    } else if ((0x800000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                        if ((0x400000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                        }
                    }
                } else {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                }
            } else if ((0x40000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                if ((0x20000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                    if ((0x10000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    } else if ((0x8000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    } else if ((0x4000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    } else if ((0x2000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    } else if ((0x1000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    } else if ((0x800000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    } else if ((0x400000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    }
                } else if ((0x10000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                    if ((0x8000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    } else if ((0x4000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    } else if ((0x2000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    } else if ((0x1000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                        if ((0x800000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                        } else if ((0x400000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                        }
                    }
                } else if ((0x8000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                } else if ((0x4000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                } else if ((0x2000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                } else if ((0x1000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                    if ((0x800000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    }
                } else if ((0x800000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                } else if ((0x400000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                }
            } else if ((0x20000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
            } else if ((0x10000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
            } else if ((0x8000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
            } else if ((0x4000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
            } else if ((0x2000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
            } else if ((0x1000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
            } else if ((1U & (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                 >> 0x17U)))) {
                if ((1U & (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                              >> 0x16U)))) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                }
            }
            if ((1U & (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U] 
                          >> 1U)))) {
                if ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[6U])) {
                    if ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                         >> 0x1fU)) {
                        if ((0x40000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                            if ((0x20000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                if ((0x10000000U & 
                                     vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                    if ((1U & (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                  >> 0x1bU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                    >> 0x1aU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                     >> 0x19U)))) {
                                                if (
                                                    (0x1000000U 
                                                     & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                             >> 0x17U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                                 >> 0x16U)))) {
                                                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__snax_csr_stall_d = 1U;
                                                        }
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                         >> 0x18U)))) {
                                                    if (
                                                        (0x800000U 
                                                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[5U] 
                                                                 >> 0x16U)))) {
                                                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_stall_d = 1U;
                                                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_core__BRA__0__KET____DOT__i_snitch_cc__barrier_o = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__shift_opa 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__shift_left)
            ? vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__shift_opa_reversed
            : vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__opa);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__tag_valid_d 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__tag_valid_q;
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT____Vcellout__gen_itlb__DOT__i_snitch_l0_tlb_inst__valid_o) 
         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[8U] 
            >> 0x19U))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__tag_valid_d = 1U;
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__tag_valid_d 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__tag_valid_q;
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT____Vcellout__gen_dtlb__DOT__i_snitch_l0_tlb_data__valid_o) 
         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[8U] 
            >> 0x1aU))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__tag_valid_d = 1U;
    }
    if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__tlb_flush) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__tag_valid_d = 0U;
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__tag_valid_d = 0U;
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 0U;
    if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_en) {
        if ((((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__priv_lvl_q) 
              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                  << 0x1fU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                               >> 1U))) == (3U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  >> 1U)))) {
            if ((0x10U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU])) {
                if ((8U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU])) {
                    if ((4U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU])) {
                        if ((2U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU])) {
                            if ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU])) {
                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                            } else if ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                        >> 0x1fU)) {
                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                            } else if ((0x40000000U 
                                        & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                            } else if ((0x20000000U 
                                        & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                                if ((0x10000000U & 
                                     vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                } else if ((0x8000000U 
                                            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                                    if ((0x4000000U 
                                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                    } else if ((0x2000000U 
                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                    }
                                } else {
                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                }
                            } else {
                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                            }
                        } else {
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                        }
                    } else {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    }
                } else if ((4U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU])) {
                    if ((2U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU])) {
                        if ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU])) {
                            if ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                 >> 0x1fU)) {
                                if ((0x40000000U & 
                                     vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                } else if ((0x20000000U 
                                            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                } else if ((0x10000000U 
                                            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                } else if ((0x8000000U 
                                            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                }
                            } else if ((0x40000000U 
                                        & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                            } else if ((0x20000000U 
                                        & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                            } else if ((0x10000000U 
                                        & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                            } else if ((0x8000000U 
                                        & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                            } else if ((0x4000000U 
                                        & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                                if ((0x2000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                }
                            } else if ((0x2000000U 
                                        & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                            }
                        } else if ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                    >> 0x1fU)) {
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                        } else if ((0x40000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                        } else if ((0x20000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                        } else if ((0x10000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                        } else if ((0x8000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                        } else if ((0x4000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                            if ((0x2000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                            }
                        } else if ((0x2000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                        }
                    } else {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    }
                } else if ((2U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU])) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                } else if ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU])) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                } else if ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                            >> 0x1fU)) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                } else if ((0x40000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                } else if ((0x20000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                } else if ((0x10000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                } else if ((0x8000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                } else if ((0x4000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                } else if ((0x2000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                }
            } else if ((8U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU])) {
                if ((4U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU])) {
                    if ((2U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU])) {
                        if ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU])) {
                            if ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                 >> 0x1fU)) {
                                if ((0x40000000U & 
                                     vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                } else if ((0x20000000U 
                                            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                } else if ((0x10000000U 
                                            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                } else if ((0x8000000U 
                                            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                                    if ((0x4000000U 
                                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                    } else if ((0x2000000U 
                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                   >> 0x1aU)))) {
                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                }
                            } else if ((0x40000000U 
                                        & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                                if ((0x20000000U & 
                                     vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                                    if ((0x10000000U 
                                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                    } else if ((0x8000000U 
                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                    } else if ((0x4000000U 
                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                                        if ((0x2000000U 
                                             & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                        }
                                    }
                                } else {
                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                                }
                            } else {
                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                            }
                        } else {
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                        }
                    } else {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    }
                } else {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                }
            } else if ((4U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU])) {
                if ((2U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU])) {
                    if ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU])) {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    } else if ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                >> 0x1fU)) {
                        if ((0x40000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                        } else if ((0x20000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                        } else if ((0x10000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                        } else if ((0x8000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                            if ((0x4000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                            } else if ((0x2000000U 
                                        & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                            }
                        }
                    } else if ((0x40000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    } else if ((0x20000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    } else if ((0x10000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    } else if ((0x8000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                        if ((0x4000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                        }
                    } else if ((0x4000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                        if ((0x2000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                        }
                    }
                } else {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                }
            } else if ((2U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU])) {
                if ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU])) {
                    if ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                         >> 0x1fU)) {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    } else if ((0x40000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    } else if ((0x20000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    } else if ((0x10000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    } else if ((0x8000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    } else if ((0x4000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    } else if ((0x2000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    }
                } else if ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                            >> 0x1fU)) {
                    if ((0x40000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    } else if ((0x20000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    } else if ((0x10000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    } else if ((0x8000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                        if ((0x4000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                        } else if ((0x2000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                        }
                    }
                } else if ((0x40000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                } else if ((0x20000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                } else if ((0x10000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                } else if ((0x8000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                    if ((0x4000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                    }
                } else if ((0x4000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                } else if ((0x2000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                }
            } else if ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU])) {
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
            } else if ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                        >> 0x1fU)) {
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
            } else if ((0x40000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
            } else if ((0x20000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
            } else if ((0x10000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
            } else if ((0x8000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
            } else if ((1U & (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                 >> 0x1aU)))) {
                if ((1U & (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                              >> 0x19U)))) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_dump = 1U;
                }
            }
        }
    }
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__58(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__58\n"); );
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__snax_csr_stall_d 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__snax_csr_stall_q;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_stall_d 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_stall_q;
    if ((3U == (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_barrier__DOT__arrival_q))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_stall_d = 0U;
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_core__BRA__1__KET____DOT__i_snitch_cc__barrier_o = 0U;
    if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_en) {
        if ((((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__priv_lvl_q) 
              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                  << 0x1fU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                               >> 1U))) == (3U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                                                  >> 1U)))) {
            if ((1U & (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU] 
                          >> 4U)))) {
                if ((8U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU])) {
                    if ((4U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU])) {
                        if ((2U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU])) {
                            if ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xcU])) {
                                if ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                     >> 0x1fU)) {
                                    if ((1U & (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                  >> 0x1eU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                    >> 0x1dU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                     >> 0x1cU)))) {
                                                if (
                                                    (0x8000000U 
                                                     & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                             >> 0x1aU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                 >> 0x19U)))) {
                                                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__snax_csr_stall_d = 1U;
                                                        }
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                         >> 0x1bU)))) {
                                                    if (
                                                        (0x4000000U 
                                                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_hive__BRA__0__KET____DOT__i_snitch_hive__hive_rsp_o[0xbU] 
                                                                 >> 0x19U)))) {
                                                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__csr_stall_d = 1U;
                                                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_core__BRA__1__KET____DOT__i_snitch_cc__barrier_o = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_barrier__DOT__arrival_d 
        = ((2U & (((~ (IData)((3U == (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_barrier__DOT__arrival_q)))) 
                   << 1U) & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_core__BRA__1__KET____DOT__i_snitch_cc__barrier_o) 
                              << 1U) | (0xfffffffeU 
                                        & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_barrier__DOT__arrival_q))))) 
           | (1U & ((~ (IData)((3U == (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_barrier__DOT__arrival_q)))) 
                    & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_core__BRA__0__KET____DOT__i_snitch_cc__barrier_o) 
                       | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_barrier__DOT__arrival_q)))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__59(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__59\n"); );
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__offset = 0x20ULL;
    if ((1U == ((2U & ((((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken) 
                         >> (7U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes)) 
                        & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__sel_nodes)) 
                       << 1U)) | (1U & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal) 
                                         >> (7U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes)) 
                                        & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__sel_nodes)))))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__offset 
            = (0xffffffffffffULL & VL_EXTENDS_QI(48,21, 
                                                 (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_3_0) 
                                                   << 0x14U) 
                                                  | ((0xff000U 
                                                      & ((((0U 
                                                            == 
                                                            (0x1fU 
                                                             & ((IData)(0xcU) 
                                                                + 
                                                                VL_SHIFTL_III(8,8,32, 
                                                                              (7U 
                                                                               & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U))))
                                                            ? 0U
                                                            : 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[
                                                            (((IData)(7U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0xcU) 
                                                                  + 
                                                                  VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U)))) 
                                                             >> 5U)] 
                                                            << 
                                                            ((IData)(0x20U) 
                                                             - 
                                                             (0x1fU 
                                                              & ((IData)(0xcU) 
                                                                 + 
                                                                 VL_SHIFTL_III(8,8,32, 
                                                                               (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U)))))) 
                                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[
                                                             (7U 
                                                              & (((IData)(0xcU) 
                                                                  + 
                                                                  VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U)) 
                                                                 >> 5U))] 
                                                             >> 
                                                             (0x1fU 
                                                              & ((IData)(0xcU) 
                                                                 + 
                                                                 VL_SHIFTL_III(8,8,32, 
                                                                               (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U))))) 
                                                         << 0xcU)) 
                                                     | ((0x800U 
                                                         & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[
                                                             (7U 
                                                              & (((IData)(0x14U) 
                                                                  + 
                                                                  VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U)) 
                                                                 >> 5U))] 
                                                             >> 
                                                             (0x1fU 
                                                              & ((IData)(0x14U) 
                                                                 + 
                                                                 VL_SHIFTL_III(8,8,32, 
                                                                               (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U)))) 
                                                            << 0xbU)) 
                                                        | (0x7feU 
                                                           & ((((0U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & ((IData)(0x15U) 
                                                                     + 
                                                                     VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U))))
                                                                 ? 0U
                                                                 : 
                                                                (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[
                                                                 (((IData)(9U) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((IData)(0x15U) 
                                                                       + 
                                                                       VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U)))) 
                                                                  >> 5U)] 
                                                                 << 
                                                                 ((IData)(0x20U) 
                                                                  - 
                                                                  (0x1fU 
                                                                   & ((IData)(0x15U) 
                                                                      + 
                                                                      VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U)))))) 
                                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[
                                                                  (7U 
                                                                   & (((IData)(0x15U) 
                                                                       + 
                                                                       VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U)) 
                                                                      >> 5U))] 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & ((IData)(0x15U) 
                                                                      + 
                                                                      VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U))))) 
                                                              << 1U)))))));
    } else if ((2U == ((2U & ((((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken) 
                                >> (7U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes)) 
                               & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__sel_nodes)) 
                              << 1U)) | (1U & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal) 
                                                >> 
                                                (7U 
                                                 & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes)) 
                                               & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__sel_nodes)))))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__offset 
            = (0xffffffffffffULL & VL_EXTENDS_QI(48,13, 
                                                 (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_3_0) 
                                                   << 0xcU) 
                                                  | ((0x800U 
                                                      & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[
                                                          (7U 
                                                           & (((IData)(7U) 
                                                               + 
                                                               VL_SHIFTL_III(8,8,32, 
                                                                             (7U 
                                                                              & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(7U) 
                                                              + 
                                                              VL_SHIFTL_III(8,8,32, 
                                                                            (7U 
                                                                             & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U)))) 
                                                         << 0xbU)) 
                                                     | ((0x7e0U 
                                                         & ((((0U 
                                                               == 
                                                               (0x1fU 
                                                                & ((IData)(0x19U) 
                                                                   + 
                                                                   VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U))))
                                                               ? 0U
                                                               : 
                                                              (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[
                                                               (((IData)(5U) 
                                                                 + 
                                                                 (0xffU 
                                                                  & ((IData)(0x19U) 
                                                                     + 
                                                                     VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U)))) 
                                                                >> 5U)] 
                                                               << 
                                                               ((IData)(0x20U) 
                                                                - 
                                                                (0x1fU 
                                                                 & ((IData)(0x19U) 
                                                                    + 
                                                                    VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U)))))) 
                                                             | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[
                                                                (7U 
                                                                 & (((IData)(0x19U) 
                                                                     + 
                                                                     VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U)) 
                                                                    >> 5U))] 
                                                                >> 
                                                                (0x1fU 
                                                                 & ((IData)(0x19U) 
                                                                    + 
                                                                    VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U))))) 
                                                            << 5U)) 
                                                        | (0x1eU 
                                                           & ((((0U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & ((IData)(8U) 
                                                                     + 
                                                                     VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U))))
                                                                 ? 0U
                                                                 : 
                                                                (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[
                                                                 (((IData)(3U) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((IData)(8U) 
                                                                       + 
                                                                       VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U)))) 
                                                                  >> 5U)] 
                                                                 << 
                                                                 ((IData)(0x20U) 
                                                                  - 
                                                                  (0x1fU 
                                                                   & ((IData)(8U) 
                                                                      + 
                                                                      VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U)))))) 
                                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[
                                                                  (7U 
                                                                   & (((IData)(8U) 
                                                                       + 
                                                                       VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U)) 
                                                                      >> 5U))] 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & ((IData)(8U) 
                                                                      + 
                                                                      VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U))))) 
                                                              << 1U)))))));
    }
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__60(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__60\n"); );
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__offset = 0x20ULL;
    if ((1U == ((2U & ((((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken) 
                         >> (7U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes)) 
                        & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__sel_nodes)) 
                       << 1U)) | (1U & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal) 
                                         >> (7U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes)) 
                                        & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__sel_nodes)))))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__offset 
            = (0xffffffffffffULL & VL_EXTENDS_QI(48,21, 
                                                 (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_3_0) 
                                                   << 0x14U) 
                                                  | ((0xff000U 
                                                      & ((((0U 
                                                            == 
                                                            (0x1fU 
                                                             & ((IData)(0xcU) 
                                                                + 
                                                                VL_SHIFTL_III(8,8,32, 
                                                                              (7U 
                                                                               & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U))))
                                                            ? 0U
                                                            : 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[
                                                            (((IData)(7U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0xcU) 
                                                                  + 
                                                                  VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U)))) 
                                                             >> 5U)] 
                                                            << 
                                                            ((IData)(0x20U) 
                                                             - 
                                                             (0x1fU 
                                                              & ((IData)(0xcU) 
                                                                 + 
                                                                 VL_SHIFTL_III(8,8,32, 
                                                                               (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U)))))) 
                                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[
                                                             (7U 
                                                              & (((IData)(0xcU) 
                                                                  + 
                                                                  VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U)) 
                                                                 >> 5U))] 
                                                             >> 
                                                             (0x1fU 
                                                              & ((IData)(0xcU) 
                                                                 + 
                                                                 VL_SHIFTL_III(8,8,32, 
                                                                               (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U))))) 
                                                         << 0xcU)) 
                                                     | ((0x800U 
                                                         & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[
                                                             (7U 
                                                              & (((IData)(0x14U) 
                                                                  + 
                                                                  VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U)) 
                                                                 >> 5U))] 
                                                             >> 
                                                             (0x1fU 
                                                              & ((IData)(0x14U) 
                                                                 + 
                                                                 VL_SHIFTL_III(8,8,32, 
                                                                               (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U)))) 
                                                            << 0xbU)) 
                                                        | (0x7feU 
                                                           & ((((0U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & ((IData)(0x15U) 
                                                                     + 
                                                                     VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U))))
                                                                 ? 0U
                                                                 : 
                                                                (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[
                                                                 (((IData)(9U) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((IData)(0x15U) 
                                                                       + 
                                                                       VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U)))) 
                                                                  >> 5U)] 
                                                                 << 
                                                                 ((IData)(0x20U) 
                                                                  - 
                                                                  (0x1fU 
                                                                   & ((IData)(0x15U) 
                                                                      + 
                                                                      VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U)))))) 
                                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[
                                                                  (7U 
                                                                   & (((IData)(0x15U) 
                                                                       + 
                                                                       VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U)) 
                                                                      >> 5U))] 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & ((IData)(0x15U) 
                                                                      + 
                                                                      VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U))))) 
                                                              << 1U)))))));
    } else if ((2U == ((2U & ((((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken) 
                                >> (7U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes)) 
                               & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__sel_nodes)) 
                              << 1U)) | (1U & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal) 
                                                >> 
                                                (7U 
                                                 & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes)) 
                                               & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__sel_nodes)))))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__offset 
            = (0xffffffffffffULL & VL_EXTENDS_QI(48,13, 
                                                 (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_3_0) 
                                                   << 0xcU) 
                                                  | ((0x800U 
                                                      & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[
                                                          (7U 
                                                           & (((IData)(7U) 
                                                               + 
                                                               VL_SHIFTL_III(8,8,32, 
                                                                             (7U 
                                                                              & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(7U) 
                                                              + 
                                                              VL_SHIFTL_III(8,8,32, 
                                                                            (7U 
                                                                             & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U)))) 
                                                         << 0xbU)) 
                                                     | ((0x7e0U 
                                                         & ((((0U 
                                                               == 
                                                               (0x1fU 
                                                                & ((IData)(0x19U) 
                                                                   + 
                                                                   VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U))))
                                                               ? 0U
                                                               : 
                                                              (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[
                                                               (((IData)(5U) 
                                                                 + 
                                                                 (0xffU 
                                                                  & ((IData)(0x19U) 
                                                                     + 
                                                                     VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U)))) 
                                                                >> 5U)] 
                                                               << 
                                                               ((IData)(0x20U) 
                                                                - 
                                                                (0x1fU 
                                                                 & ((IData)(0x19U) 
                                                                    + 
                                                                    VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U)))))) 
                                                             | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[
                                                                (7U 
                                                                 & (((IData)(0x19U) 
                                                                     + 
                                                                     VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U)) 
                                                                    >> 5U))] 
                                                                >> 
                                                                (0x1fU 
                                                                 & ((IData)(0x19U) 
                                                                    + 
                                                                    VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U))))) 
                                                            << 5U)) 
                                                        | (0x1eU 
                                                           & ((((0U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & ((IData)(8U) 
                                                                     + 
                                                                     VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U))))
                                                                 ? 0U
                                                                 : 
                                                                (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[
                                                                 (((IData)(3U) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((IData)(8U) 
                                                                       + 
                                                                       VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U)))) 
                                                                  >> 5U)] 
                                                                 << 
                                                                 ((IData)(0x20U) 
                                                                  - 
                                                                  (0x1fU 
                                                                   & ((IData)(8U) 
                                                                      + 
                                                                      VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U)))))) 
                                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[
                                                                  (7U 
                                                                   & (((IData)(8U) 
                                                                       + 
                                                                       VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U)) 
                                                                      >> 5U))] 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & ((IData)(8U) 
                                                                      + 
                                                                      VL_SHIFTL_III(8,8,32, 
                                                                                (7U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__i_lzc_branch__DOT__gen_lzc__DOT__index_nodes), 5U))))) 
                                                              << 1U)))))));
    }
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__61(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__61\n"); );
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__div_shift 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes)
            ? (0x7fU & ((0x1fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0U]) 
                        - ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_a__DOT__gen_lzc__DOT__sel_nodes)
                            ? (0x1fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_a__DOT__gen_lzc__DOT__index_nodes[0U])
                            : 0x20U))) : 0x20U);
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__62(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__62\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<21>/*671:0*/ __Vtemp_9;
    VlWide<23>/*735:0*/ __Vtemp_10;
    VlWide<24>/*767:0*/ __Vtemp_11;
    // Body
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_w_cmd_fifo__DOT__status_cnt_n 
        = vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_w_cmd_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__w_cmd_push) 
         & (2U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_w_cmd_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_w_cmd_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_w_cmd_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__w_cmd_pop) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_w_cmd_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_w_cmd_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_w_cmd_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__w_cmd_push) 
           & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__w_cmd_pop)) 
          & (2U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_w_cmd_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_w_cmd_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_w_cmd_fifo__DOT__status_cnt_n 
            = vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_w_cmd_fifo__DOT__status_cnt_q;
    }
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__w_cnt_d 
        = vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__w_cnt_q;
    if (((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_aw_valid) 
         & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_cut_aw_ready))) {
        vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__w_cnt_d 
            = (3U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__w_cnt_d)));
    }
    if ((((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_valid) 
          & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_cut_w_ready)) 
         & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_last))) {
        vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__w_cnt_d 
            = (3U & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__w_cnt_d) 
                     - (IData)(1U)));
    }
    vlSelf->testharness__DOT__wide_out_resp[0U] = (
                                                   (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_data_o[0U] 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_resp_o) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_last_o) 
                                                          << 2U) 
                                                         | (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_user_o))));
    vlSelf->testharness__DOT__wide_out_resp[1U] = (
                                                   (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_data_o[0U] 
                                                    >> 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_data_o[1U] 
                                                      << 5U));
    vlSelf->testharness__DOT__wide_out_resp[2U] = (
                                                   (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_data_o[1U] 
                                                    >> 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_data_o[2U] 
                                                      << 5U));
    vlSelf->testharness__DOT__wide_out_resp[3U] = (
                                                   (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_data_o[2U] 
                                                    >> 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_data_o[3U] 
                                                      << 5U));
    vlSelf->testharness__DOT__wide_out_resp[4U] = (
                                                   (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_data_o[3U] 
                                                    >> 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_data_o[4U] 
                                                      << 5U));
    vlSelf->testharness__DOT__wide_out_resp[5U] = (
                                                   (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_data_o[4U] 
                                                    >> 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_data_o[5U] 
                                                      << 5U));
    vlSelf->testharness__DOT__wide_out_resp[6U] = (
                                                   (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_data_o[5U] 
                                                    >> 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_data_o[6U] 
                                                      << 5U));
    vlSelf->testharness__DOT__wide_out_resp[7U] = (
                                                   (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_data_o[6U] 
                                                    >> 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_data_o[7U] 
                                                      << 5U));
    vlSelf->testharness__DOT__wide_out_resp[8U] = (
                                                   (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_data_o[7U] 
                                                    >> 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_data_o[8U] 
                                                      << 5U));
    vlSelf->testharness__DOT__wide_out_resp[9U] = (
                                                   (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_data_o[8U] 
                                                    >> 0x1bU) 
                                                   | (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_data_o[9U] 
                                                      << 5U));
    vlSelf->testharness__DOT__wide_out_resp[0xaU] = 
        ((vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_data_o[9U] 
          >> 0x1bU) | (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_data_o[0xaU] 
                       << 5U));
    vlSelf->testharness__DOT__wide_out_resp[0xbU] = 
        ((vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_data_o[0xaU] 
          >> 0x1bU) | (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_data_o[0xbU] 
                       << 5U));
    vlSelf->testharness__DOT__wide_out_resp[0xcU] = 
        ((vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_data_o[0xbU] 
          >> 0x1bU) | (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_data_o[0xcU] 
                       << 5U));
    vlSelf->testharness__DOT__wide_out_resp[0xdU] = 
        ((vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_data_o[0xcU] 
          >> 0x1bU) | (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_data_o[0xdU] 
                       << 5U));
    vlSelf->testharness__DOT__wide_out_resp[0xeU] = 
        ((vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_data_o[0xdU] 
          >> 0x1bU) | (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_data_o[0xeU] 
                       << 5U));
    vlSelf->testharness__DOT__wide_out_resp[0xfU] = 
        ((vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_data_o[0xeU] 
          >> 0x1bU) | (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_data_o[0xfU] 
                       << 5U));
    vlSelf->testharness__DOT__wide_out_resp[0x10U] 
        = ((0xffffffe0U & ((((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_aw_ready_o) 
                             << 0x13U) | (((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_ar_ready_o) 
                                           << 0x12U) 
                                          | (((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_w_ready_o) 
                                              << 0x11U) 
                                             | ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_b_valid_o) 
                                                << 0x10U)))) 
                           | ((((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_b_id_o) 
                                << 0xdU) | ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_b_resp_o) 
                                            << 0xbU)) 
                              | (((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_b_user_o) 
                                  << 9U) | (((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_valid_o) 
                                             << 8U) 
                                            | ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_id_o) 
                                               << 5U)))))) 
           | (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_r_data_o[0xfU] 
              >> 0x1bU));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_inj_fifo__DOT__status_cnt_n 
        = vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_inj_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_inj_push) 
         & (2U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_inj_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_inj_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_inj_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_inj_pop) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_inj_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_inj_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_inj_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_inj_push) 
           & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_inj_pop)) 
          & (2U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_inj_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_inj_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_inj_fifo__DOT__status_cnt_n 
            = vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_inj_fifo__DOT__status_cnt_q;
    }
    __Vtemp_4[1U] = (((IData)((((QData)((IData)((7U 
                                                 & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[0U] 
                                                    >> 2U)))) 
                                << 0x3dU) | ((0x1fffffffffffe000ULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[2U])) 
                                                  << 0x26U) 
                                                 | (0xffffffffffffe000ULL 
                                                    & ((QData)((IData)(
                                                                       vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[1U])) 
                                                       << 6U)))) 
                                             | (QData)((IData)(
                                                               (0x1fffU 
                                                                & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[0U] 
                                                                   >> 0xdU))))))) 
                      >> 0x18U) | ((IData)(((((QData)((IData)(
                                                              (7U 
                                                               & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[0U] 
                                                                  >> 2U)))) 
                                              << 0x3dU) 
                                             | ((0x1fffffffffffe000ULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[2U])) 
                                                     << 0x26U) 
                                                    | (0xffffffffffffe000ULL 
                                                       & ((QData)((IData)(
                                                                          vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[1U])) 
                                                          << 6U)))) 
                                                | (QData)((IData)(
                                                                  (0x1fffU 
                                                                   & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[0U] 
                                                                      >> 0xdU)))))) 
                                            >> 0x20U)) 
                                   << 8U));
    __Vtemp_5[0U] = ((((IData)((((QData)((IData)((7U 
                                                  & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[0U] 
                                                     >> 2U)))) 
                                 << 0x3dU) | ((0x1fffffffffffe000ULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[2U])) 
                                                   << 0x26U) 
                                                  | (0xffffffffffffe000ULL 
                                                     & ((QData)((IData)(
                                                                        vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[1U])) 
                                                        << 6U)))) 
                                              | (QData)((IData)(
                                                                (0x1fffU 
                                                                 & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[0U] 
                                                                    >> 0xdU))))))) 
                       << 0x19U) | ((0xf00000U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[0U] 
                                                  << 0xbU)) 
                                    | (0xe0000U & (
                                                   vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[1U] 
                                                   << 0xdU)))) 
                     | (((0x1e000U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[0U] 
                                      << 8U)) | (0x1ff8U 
                                                 & ((vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[1U] 
                                                     << 9U) 
                                                    | (0x1f8U 
                                                       & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[0U] 
                                                          >> 0x17U))))) 
                        | ((6U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[0U] 
                                  << 1U)) | (1U & (~ (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__fifo_empty))))));
    __Vtemp_9[0x14U] = ((0x1fU & (__Vtemp_4[1U] >> 0xaU)) 
                        | ((0x3fffe0U & (__Vtemp_4[1U] 
                                         >> 0xaU)) 
                           | (0x3fc00000U & ((IData)(
                                                     ((((QData)((IData)(
                                                                        (7U 
                                                                         & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[0U] 
                                                                            >> 2U)))) 
                                                        << 0x3dU) 
                                                       | ((0x1fffffffffffe000ULL 
                                                           & (((QData)((IData)(
                                                                               vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[2U])) 
                                                               << 0x26U) 
                                                              | (0xffffffffffffe000ULL 
                                                                 & ((QData)((IData)(
                                                                                vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[1U])) 
                                                                    << 6U)))) 
                                                          | (QData)((IData)(
                                                                            (0x1fffU 
                                                                             & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[0U] 
                                                                                >> 0xdU)))))) 
                                                      >> 0x20U)) 
                                             >> 2U))));
    __Vtemp_10[0x14U] = (((0x3ffffff8U & (__Vtemp_5[0U] 
                                          << 3U)) | 
                          ((3U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0xfU] 
                                  >> 0x1dU)) | (4U 
                                                & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0xfU] 
                                                   >> 0x1dU)))) 
                         | (0xc0000000U & (__Vtemp_5[0U] 
                                           << 3U)));
    __Vtemp_10[0x15U] = (((__Vtemp_5[0U] >> 0x1dU) 
                          | ((0xffff8U & ((IData)((
                                                   ((QData)((IData)(
                                                                    (7U 
                                                                     & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[0U] 
                                                                        >> 2U)))) 
                                                    << 0x3dU) 
                                                   | ((0x1fffffffffffe000ULL 
                                                       & (((QData)((IData)(
                                                                           vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[2U])) 
                                                           << 0x26U) 
                                                          | (0xffffffffffffe000ULL 
                                                             & ((QData)((IData)(
                                                                                vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[1U])) 
                                                                << 6U)))) 
                                                      | (QData)((IData)(
                                                                        (0x1fffU 
                                                                         & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[0U] 
                                                                            >> 0xdU))))))) 
                                          >> 4U)) | 
                             (0x3ff00000U & (__Vtemp_4[1U] 
                                             << 0x14U)))) 
                         | (__Vtemp_9[0x14U] << 0x1eU));
    __Vtemp_11[1U] = (((IData)((((QData)((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_id)) 
                                 << 0x3bU) | ((vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_addr 
                                               << 0xbU) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_len) 
                                                                  << 3U) 
                                                                 | (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_size))))))) 
                       >> 0x16U) | ((IData)(((((QData)((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_id)) 
                                               << 0x3bU) 
                                              | ((vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_addr 
                                                  << 0xbU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_len) 
                                                                     << 3U) 
                                                                    | (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_size)))))) 
                                             >> 0x20U)) 
                                    << 0xaU));
    __Vtemp_11[2U] = ((((0x200U & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__mst_w_valid_o) 
                                   << 9U)) | (0x300U 
                                              & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__mst_b_ready_o) 
                                                 << 8U))) 
                       | ((IData)(((((QData)((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_id)) 
                                     << 0x3bU) | ((vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_addr 
                                                   << 0xbU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_len) 
                                                                      << 3U) 
                                                                     | (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_size)))))) 
                                   >> 0x20U)) >> 0x16U)) 
                      | ((((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_strb) 
                           << 0xdU) | ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_last) 
                                       << 0xcU)) | 
                         (((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_user) 
                           << 0xaU) | (0xfffffc00U 
                                       & (((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__mst_w_valid_o) 
                                           << 9U) | 
                                          ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__mst_b_ready_o) 
                                           << 8U))))));
    __Vtemp_11[3U] = ((((0xffU & (((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_strb) 
                                   >> 0x13U) | ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_last) 
                                                >> 0x14U))) 
                        | ((0xffU & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_user) 
                                     >> 0x16U)) | (
                                                   (0xffU 
                                                    & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__mst_w_valid_o) 
                                                       >> 0x17U)) 
                                                   | ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__mst_b_ready_o) 
                                                      >> 0x18U)))) 
                       | (0x300U & (((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_strb) 
                                     >> 0x13U) | ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_last) 
                                                  >> 0x14U)))) 
                      | ((0xc00U & (((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_strb) 
                                     >> 0x13U) | ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_last) 
                                                  >> 0x14U))) 
                         | ((0x1000U & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_strb) 
                                        >> 0x13U)) 
                            | ((IData)((vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_strb 
                                        >> 0x20U)) 
                               << 0xdU))));
    __Vtemp_11[4U] = (((0xffU & ((IData)((vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_strb 
                                          >> 0x20U)) 
                                 >> 0x13U)) | (0x300U 
                                               & ((IData)(
                                                          (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_strb 
                                                           >> 0x20U)) 
                                                  >> 0x13U))) 
                      | ((0xc00U & ((IData)((vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_strb 
                                             >> 0x20U)) 
                                    >> 0x13U)) | ((0x1000U 
                                                   & ((IData)(
                                                              (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_strb 
                                                               >> 0x20U)) 
                                                      >> 0x13U)) 
                                                  | (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0U] 
                                                     << 0xdU))));
    __Vtemp_11[5U] = (((0xffU & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0U] 
                                 >> 0x13U)) | (0x300U 
                                               & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0U] 
                                                  >> 0x13U))) 
                      | ((0xc00U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0U] 
                                    >> 0x13U)) | ((0x1000U 
                                                   & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0U] 
                                                      >> 0x13U)) 
                                                  | (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[1U] 
                                                     << 0xdU))));
    __Vtemp_11[6U] = (((0xffU & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[1U] 
                                 >> 0x13U)) | (0x300U 
                                               & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[1U] 
                                                  >> 0x13U))) 
                      | ((0xc00U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[1U] 
                                    >> 0x13U)) | ((0x1000U 
                                                   & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[1U] 
                                                      >> 0x13U)) 
                                                  | (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[2U] 
                                                     << 0xdU))));
    __Vtemp_11[7U] = (((0xffU & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[2U] 
                                 >> 0x13U)) | (0x300U 
                                               & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[2U] 
                                                  >> 0x13U))) 
                      | ((0xc00U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[2U] 
                                    >> 0x13U)) | ((0x1000U 
                                                   & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[2U] 
                                                      >> 0x13U)) 
                                                  | (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[3U] 
                                                     << 0xdU))));
    __Vtemp_11[8U] = (((0xffU & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[3U] 
                                 >> 0x13U)) | (0x300U 
                                               & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[3U] 
                                                  >> 0x13U))) 
                      | ((0xc00U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[3U] 
                                    >> 0x13U)) | ((0x1000U 
                                                   & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[3U] 
                                                      >> 0x13U)) 
                                                  | (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[4U] 
                                                     << 0xdU))));
    __Vtemp_11[9U] = (((0xffU & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[4U] 
                                 >> 0x13U)) | (0x300U 
                                               & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[4U] 
                                                  >> 0x13U))) 
                      | ((0xc00U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[4U] 
                                    >> 0x13U)) | ((0x1000U 
                                                   & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[4U] 
                                                      >> 0x13U)) 
                                                  | (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[5U] 
                                                     << 0xdU))));
    __Vtemp_11[0xaU] = (((0xffU & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[5U] 
                                   >> 0x13U)) | (0x300U 
                                                 & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[5U] 
                                                    >> 0x13U))) 
                        | ((0xc00U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[5U] 
                                      >> 0x13U)) | 
                           ((0x1000U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[5U] 
                                        >> 0x13U)) 
                            | (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[6U] 
                               << 0xdU))));
    __Vtemp_11[0xbU] = (((0xffU & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[6U] 
                                   >> 0x13U)) | (0x300U 
                                                 & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[6U] 
                                                    >> 0x13U))) 
                        | ((0xc00U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[6U] 
                                      >> 0x13U)) | 
                           ((0x1000U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[6U] 
                                        >> 0x13U)) 
                            | (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[7U] 
                               << 0xdU))));
    __Vtemp_11[0xcU] = (((0xffU & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[7U] 
                                   >> 0x13U)) | (0x300U 
                                                 & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[7U] 
                                                    >> 0x13U))) 
                        | ((0xc00U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[7U] 
                                      >> 0x13U)) | 
                           ((0x1000U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[7U] 
                                        >> 0x13U)) 
                            | (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[8U] 
                               << 0xdU))));
    __Vtemp_11[0xdU] = (((0xffU & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[8U] 
                                   >> 0x13U)) | (0x300U 
                                                 & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[8U] 
                                                    >> 0x13U))) 
                        | ((0xc00U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[8U] 
                                      >> 0x13U)) | 
                           ((0x1000U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[8U] 
                                        >> 0x13U)) 
                            | (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[9U] 
                               << 0xdU))));
    __Vtemp_11[0xeU] = (((0xffU & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[9U] 
                                   >> 0x13U)) | (0x300U 
                                                 & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[9U] 
                                                    >> 0x13U))) 
                        | ((0xc00U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[9U] 
                                      >> 0x13U)) | 
                           ((0x1000U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[9U] 
                                        >> 0x13U)) 
                            | (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0xaU] 
                               << 0xdU))));
    __Vtemp_11[0xfU] = (((0xffU & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0xaU] 
                                   >> 0x13U)) | (0x300U 
                                                 & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0xaU] 
                                                    >> 0x13U))) 
                        | ((0xc00U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0xaU] 
                                      >> 0x13U)) | 
                           ((0x1000U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0xaU] 
                                        >> 0x13U)) 
                            | (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0xbU] 
                               << 0xdU))));
    __Vtemp_11[0x10U] = (((0xffU & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0xbU] 
                                    >> 0x13U)) | (0x300U 
                                                  & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0xbU] 
                                                     >> 0x13U))) 
                         | ((0xc00U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0xbU] 
                                       >> 0x13U)) | 
                            ((0x1000U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0xbU] 
                                         >> 0x13U)) 
                             | (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0xcU] 
                                << 0xdU))));
    __Vtemp_11[0x11U] = (((0xffU & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0xcU] 
                                    >> 0x13U)) | (0x300U 
                                                  & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0xcU] 
                                                     >> 0x13U))) 
                         | ((0xc00U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0xcU] 
                                       >> 0x13U)) | 
                            ((0x1000U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0xcU] 
                                         >> 0x13U)) 
                             | (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0xdU] 
                                << 0xdU))));
    __Vtemp_11[0x12U] = (((0xffU & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0xdU] 
                                    >> 0x13U)) | (0x300U 
                                                  & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0xdU] 
                                                     >> 0x13U))) 
                         | ((0xc00U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0xdU] 
                                       >> 0x13U)) | 
                            ((0x1000U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0xdU] 
                                         >> 0x13U)) 
                             | (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0xeU] 
                                << 0xdU))));
    __Vtemp_11[0x13U] = (((0xffU & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0xeU] 
                                    >> 0x13U)) | (0x300U 
                                                  & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0xeU] 
                                                     >> 0x13U))) 
                         | ((0xc00U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0xeU] 
                                       >> 0x13U)) | 
                            ((0x1000U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0xeU] 
                                         >> 0x13U)) 
                             | (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0xfU] 
                                << 0xdU))));
    vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_req[0U] 
        = ((((IData)((((QData)((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_id)) 
                       << 0x3bU) | ((vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_addr 
                                     << 0xbU) | (QData)((IData)(
                                                                (((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_len) 
                                                                  << 3U) 
                                                                 | (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_size))))))) 
             << 0x16U) | (((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_burst) 
                           << 0x14U) | (((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_cache) 
                                         << 0xfU) | 
                                        ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_prot) 
                                         << 0xcU)))) 
           | ((((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_qos) 
                << 8U) | ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_region) 
                          << 4U)) | (((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_user) 
                                      << 2U) | (((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__mst_ar_valid_o) 
                                                 << 1U) 
                                                | (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__mst_r_ready_o)))));
    vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_req[1U] 
        = (((0xfffU & ((IData)((((QData)((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_id)) 
                                 << 0x3bU) | ((vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_addr 
                                               << 0xbU) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_len) 
                                                                  << 3U) 
                                                                 | (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_size))))))) 
                       >> 0xaU)) | ((0xfffU & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_burst) 
                                               >> 0xcU)) 
                                    | ((0xfffU & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_cache) 
                                                  >> 0x11U)) 
                                       | ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_prot) 
                                          >> 0x14U)))) 
           | (__Vtemp_11[1U] << 0xcU));
    vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_req[2U] 
        = ((__Vtemp_11[1U] >> 0x14U) | (__Vtemp_11[2U] 
                                        << 0xcU));
    vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_req[3U] 
        = ((__Vtemp_11[2U] >> 0x14U) | (__Vtemp_11[3U] 
                                        << 0xcU));
    vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_req[4U] 
        = ((__Vtemp_11[3U] >> 0x14U) | (__Vtemp_11[4U] 
                                        << 0xcU));
    vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_req[5U] 
        = ((__Vtemp_11[4U] >> 0x14U) | (__Vtemp_11[5U] 
                                        << 0xcU));
    vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_req[6U] 
        = ((__Vtemp_11[5U] >> 0x14U) | (__Vtemp_11[6U] 
                                        << 0xcU));
    vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_req[7U] 
        = ((__Vtemp_11[6U] >> 0x14U) | (__Vtemp_11[7U] 
                                        << 0xcU));
    vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_req[8U] 
        = ((__Vtemp_11[7U] >> 0x14U) | (__Vtemp_11[8U] 
                                        << 0xcU));
    vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_req[9U] 
        = ((__Vtemp_11[8U] >> 0x14U) | (__Vtemp_11[9U] 
                                        << 0xcU));
    vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_req[0xaU] 
        = ((__Vtemp_11[9U] >> 0x14U) | (__Vtemp_11[0xaU] 
                                        << 0xcU));
    vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_req[0xbU] 
        = ((__Vtemp_11[0xaU] >> 0x14U) | (__Vtemp_11[0xbU] 
                                          << 0xcU));
    vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_req[0xcU] 
        = ((__Vtemp_11[0xbU] >> 0x14U) | (__Vtemp_11[0xcU] 
                                          << 0xcU));
    vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_req[0xdU] 
        = ((__Vtemp_11[0xcU] >> 0x14U) | (__Vtemp_11[0xdU] 
                                          << 0xcU));
    vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_req[0xeU] 
        = ((__Vtemp_11[0xdU] >> 0x14U) | (__Vtemp_11[0xeU] 
                                          << 0xcU));
    vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_req[0xfU] 
        = ((__Vtemp_11[0xeU] >> 0x14U) | (__Vtemp_11[0xfU] 
                                          << 0xcU));
    vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_req[0x10U] 
        = ((__Vtemp_11[0xfU] >> 0x14U) | (__Vtemp_11[0x10U] 
                                          << 0xcU));
    vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_req[0x11U] 
        = ((__Vtemp_11[0x10U] >> 0x14U) | (__Vtemp_11[0x11U] 
                                           << 0xcU));
    vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_req[0x12U] 
        = ((__Vtemp_11[0x11U] >> 0x14U) | (__Vtemp_11[0x12U] 
                                           << 0xcU));
    vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_req[0x13U] 
        = ((__Vtemp_11[0x12U] >> 0x14U) | (__Vtemp_11[0x13U] 
                                           << 0xcU));
    vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_req[0x14U] 
        = ((__Vtemp_11[0x13U] >> 0x14U) | (((0xff000U 
                                             & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0xfU] 
                                                >> 7U)) 
                                            | (0x300000U 
                                               & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_w_data[0xfU] 
                                                  >> 7U))) 
                                           | (__Vtemp_10[0x14U] 
                                              << 0x16U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_req[0x15U] 
        = ((0xfffU & (__Vtemp_10[0x14U] >> 0xaU)) | 
           ((0x3ff000U & (__Vtemp_10[0x14U] >> 0xaU)) 
            | (__Vtemp_10[0x15U] << 0x16U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_req[0x16U] 
        = ((0xfffU & (__Vtemp_10[0x15U] >> 0xaU)) | 
           ((0x3ff000U & (__Vtemp_10[0x15U] >> 0xaU)) 
            | (0xffc00000U & (__Vtemp_9[0x14U] << 0x14U))));
    vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_req[0x17U] 
        = ((0xfffU & (__Vtemp_9[0x14U] >> 0xcU)) | 
           (0xff000U & (__Vtemp_9[0x14U] >> 0xcU)));
    vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__i_axi_cut__DOT__i_reg_aw__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_req[0x14U] 
            >> 0x19U) & (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__i_axi_cut__DOT____Vcellout__i_reg_aw__ready_o));
    vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__i_axi_cut__DOT__i_reg_w__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_req[2U] 
            >> 0x15U) & (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__i_axi_cut__DOT____Vcellout__i_reg_w__ready_o));
    vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__i_axi_cut__DOT__i_reg_b__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_req[2U] 
               >> 0x14U)) & (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__i_axi_cut__DOT__i_reg_b__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__i_axi_cut__DOT__i_reg_b__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__i_axi_cut__DOT__i_reg_b__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_req[2U] 
              >> 0x14U));
    vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__i_axi_cut__DOT__i_reg_ar__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_req[0U] 
            >> 1U) & (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__i_axi_cut__DOT____Vcellout__i_reg_ar__ready_o));
    vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__i_axi_cut__DOT__i_reg_r__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_req[0U]) 
           & (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__i_axi_cut__DOT__i_reg_r__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__i_axi_cut__DOT__i_reg_r__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__i_axi_cut__DOT__i_reg_r__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_req[0U]);
}
