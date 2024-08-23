// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness___024root.h"

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__23(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__23\n"); );
    // Body
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_excl = 0U;
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_res = 0U;
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_valid = 0U;
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_wifq_exists_inp[0U] = 0xffffffffU;
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_wifq_exists_inp[1U] = 0x7fffU;
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_wifq_exists_inp[2U] = 0U;
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_wifq_exists_inp[0U] 
        = (0xfffffffeU & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_wifq_exists_inp[0U]);
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_wifq_exists_req = 0U;
    if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_state_q)))) {
        if (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_valid) {
            vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_excl 
                = ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_lock) 
                   & (0U == (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_len)));
            if (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_excl) {
                vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_wifq_exists_inp[1U] 
                    = ((0xffffU & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_wifq_exists_inp[1U]) 
                       | ((IData)((0x3fffffffffffULL 
                                   & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_addr 
                                      >> 2U))) << 0x10U));
                vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_wifq_exists_inp[2U] 
                    = (0x3fffffffU & (((IData)((0x3fffffffffffULL 
                                                & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_addr 
                                                   >> 2U))) 
                                       >> 0x10U) | 
                                      ((IData)(((0x3fffffffffffULL 
                                                 & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_addr 
                                                    >> 2U)) 
                                                >> 0x20U)) 
                                       << 0x10U)));
                vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_wifq_exists_req = 1U;
                if (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_wifq_exists_gnt) {
                    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_res 
                        = (1U & (~ (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists)));
                    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_valid = 1U;
                }
            } else {
                vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_res = 0U;
                vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_valid = 1U;
            }
        }
    }
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_ar_push_fork__valid_o 
        = (2U & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_ar_push_fork__valid_o));
    if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_ar_push_fork__DOT__gen_oup_state__BRA__0__KET____DOT__oup_state_q)))) {
        if (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_valid) {
            vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_ar_push_fork__valid_o 
                = (1U | (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_ar_push_fork__valid_o));
        }
    }
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_ar_push_fork__valid_o 
        = (1U & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_ar_push_fork__valid_o));
    if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_ar_push_fork__DOT__gen_oup_state__BRA__1__KET____DOT__oup_state_q)))) {
        if (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_valid) {
            vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_ar_push_fork__valid_o 
                = (2U | (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_ar_push_fork__valid_o));
        }
    }
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_wifq_exists_req) 
                << 1U) | (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_wifq_exists_req)));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__rifq_oup_gnt = 0U;
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__match_in_id_valid = 0U;
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__match_in_id = 0U;
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_set_req 
        = ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_res) 
           & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_ar_push_fork__valid_o) 
              >> 1U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_req 
        = (IData)((0U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffeU & (((1U <= (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 1U) & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | (1U & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = (0xfffffffeU & (((1U > (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                           << 1U) & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o 
        = (1U & ((~ (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_r_valid = 0U;
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__mst_r_ready_o = 0U;
    if ((1U & (~ ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_ar_push_fork__valid_o) 
                  & (0U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__linked_data_free)))))) {
        if (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__rifq_oup_req) {
            vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__rifq_oup_gnt = 1U;
        }
    }
    if (((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_ar_push_fork__valid_o) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__linked_data_free)))) {
        vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__match_in_id_valid = 1U;
        vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__match_in_id 
            = vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_id;
    } else if (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__rifq_oup_req) {
        vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__match_in_id_valid = 1U;
        vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__match_in_id 
            = vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__rifq_oup_id;
    }
    vlSelf->__VdfgRegularize_hd87f99a1_350_0 = ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__match_in_id_valid) 
                                                & ((~ 
                                                    ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                     >> 6U)) 
                                                   & ((7U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                          >> 9U)) 
                                                      == (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__match_in_id))));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_wifq_exists_gnt 
        = ((~ (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)) 
           & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_gnt));
    if (((vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_resp[0x10U] 
          >> 8U) & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_r_ready))) {
        if (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__rifq_oup_gnt) {
            vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_r_valid = 1U;
        }
    }
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_r_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_r_valid) 
           & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_r_ready));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__idx_matches_in_id 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0) 
            << 1U) | ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__match_in_id_valid) 
                      & ((~ (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q)) 
                         & ((7U & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                   >> 3U)) == (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__match_in_id)))));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (1U & (((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_gnt) 
                  & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_req))
                  ? ((1U & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__rifq_oup_data_valid = 0U;
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__rifq_oup_data = 0U;
    if ((1U & (~ ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_ar_push_fork__valid_o) 
                  & (0U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__linked_data_free)))))) {
        if (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__rifq_oup_req) {
            if ((0U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__idx_matches_in_id))) {
                vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__rifq_oup_data_valid = 1U;
                vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__rifq_oup_data 
                    = ((5U >= ((IData)(2U) + (7U & 
                                              ((IData)(3U) 
                                               * ((0xbU 
                                                   >= 
                                                   ((IData)(2U) 
                                                    + 
                                                    (0xfU 
                                                     & ((IData)(6U) 
                                                        * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0))))) 
                                                  && (1U 
                                                      & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                         >> 
                                                         ((IData)(2U) 
                                                          + 
                                                          (0xfU 
                                                           & ((IData)(6U) 
                                                              * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0))))))))))) 
                       && (1U & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__linked_data_q) 
                                 >> ((IData)(2U) + 
                                     (7U & ((IData)(3U) 
                                            * ((0xbU 
                                                >= 
                                                ((IData)(2U) 
                                                 + 
                                                 (0xfU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0))))) 
                                               && (1U 
                                                   & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                      >> 
                                                      ((IData)(2U) 
                                                       + 
                                                       (0xfU 
                                                        & ((IData)(6U) 
                                                           * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0)))))))))))));
            }
        }
    }
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__linked_data_d 
        = vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__linked_data_q;
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_d 
        = vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q;
    if (((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_ar_push_fork__valid_o) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__linked_data_free)))) {
        if ((0U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__idx_matches_in_id))) {
            vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_h12e0f2c0__0 
                = (1U & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes));
            if ((5U >= ((IData)(1U) + (7U & ((IData)(3U) 
                                             * ((0xbU 
                                                 >= 
                                                 ((IData)(1U) 
                                                  + 
                                                  (0xfU 
                                                   & ((IData)(6U) 
                                                      * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0))))) 
                                                && (1U 
                                                    & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                       >> 
                                                       ((IData)(1U) 
                                                        + 
                                                        (0xfU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0)))))))))))) {
                vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__linked_data_d 
                    = (((~ ((IData)(1U) << ((IData)(1U) 
                                            + (7U & 
                                               ((IData)(3U) 
                                                * (
                                                   (0xbU 
                                                    >= 
                                                    ((IData)(1U) 
                                                     + 
                                                     (0xfU 
                                                      & ((IData)(6U) 
                                                         * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0))))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                          >> 
                                                          ((IData)(1U) 
                                                           + 
                                                           (0xfU 
                                                            & ((IData)(6U) 
                                                               * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0)))))))))))) 
                        & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__linked_data_d)) 
                       | (0x3fU & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_h12e0f2c0__0) 
                                   << ((IData)(1U) 
                                       + (7U & ((IData)(3U) 
                                                * (
                                                   (0xbU 
                                                    >= 
                                                    ((IData)(1U) 
                                                     + 
                                                     (0xfU 
                                                      & ((IData)(6U) 
                                                         * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0))))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                          >> 
                                                          ((IData)(1U) 
                                                           + 
                                                           (0xfU 
                                                            & ((IData)(6U) 
                                                               * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0)))))))))))));
            }
            vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_h3156ccc5__0 
                = (1U & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes));
            if ((0xbU >= ((IData)(1U) + (0xfU & ((IData)(6U) 
                                                 * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0)))))) {
                vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_d 
                    = (((~ ((IData)(1U) << ((IData)(1U) 
                                            + (0xfU 
                                               & ((IData)(6U) 
                                                  * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0)))))) 
                        & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_d)) 
                       | (0xfffU & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_h3156ccc5__0) 
                                    << ((IData)(1U) 
                                        + (0xfU & ((IData)(6U) 
                                                   * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0)))))));
            }
        } else {
            vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_hbc57e19e__0 
                = (((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_id) 
                    << 3U) | ((4U & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes) 
                                     << 2U)) | (2U 
                                                & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes) 
                                                   << 1U))));
            if ((0xbU >= (0xfU & ((IData)(6U) * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__index_nodes)))))) {
                vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_d 
                    = (((~ ((IData)(0x3fU) << (0xfU 
                                               & ((IData)(6U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__index_nodes)))))) 
                        & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_d)) 
                       | (0xfffU & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_hbc57e19e__0) 
                                    << (0xfU & ((IData)(6U) 
                                                * (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__index_nodes)))))));
            }
        }
        vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_h787737b4__0 
            = ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_excl) 
               << 2U);
        if ((5U >= (7U & ((IData)(3U) * (1U & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes)))))) {
            vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__linked_data_d 
                = (((~ ((IData)(7U) << (7U & ((IData)(3U) 
                                              * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes)))))) 
                    & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__linked_data_d)) 
                   | (0x3fU & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_h787737b4__0) 
                               << (7U & ((IData)(3U) 
                                         * (1U & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes)))))));
        }
    } else if (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__rifq_oup_req) {
        if ((0U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__idx_matches_in_id))) {
            if (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__rifq_oup_pop) {
                vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_h004f40f8__0 = 0U;
                vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_h59fbac41__0 = 1U;
                if ((5U >= (7U & ((IData)(3U) * ((0xbU 
                                                  >= 
                                                  ((IData)(2U) 
                                                   + 
                                                   (0xfU 
                                                    & ((IData)(6U) 
                                                       * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0))))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                        >> 
                                                        ((IData)(2U) 
                                                         + 
                                                         (0xfU 
                                                          & ((IData)(6U) 
                                                             * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0))))))))))) {
                    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__linked_data_d 
                        = (((~ ((IData)(7U) << (7U 
                                                & ((IData)(3U) 
                                                   * 
                                                   ((0xbU 
                                                     >= 
                                                     ((IData)(2U) 
                                                      + 
                                                      (0xfU 
                                                       & ((IData)(6U) 
                                                          * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0))))) 
                                                    && (1U 
                                                        & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                           >> 
                                                           ((IData)(2U) 
                                                            + 
                                                            (0xfU 
                                                             & ((IData)(6U) 
                                                                * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0))))))))))) 
                            & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__linked_data_d)) 
                           | (0x3fU & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_h004f40f8__0) 
                                       << (7U & ((IData)(3U) 
                                                 * 
                                                 ((0xbU 
                                                   >= 
                                                   ((IData)(2U) 
                                                    + 
                                                    (0xfU 
                                                     & ((IData)(6U) 
                                                        * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0))))) 
                                                  && (1U 
                                                      & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                         >> 
                                                         ((IData)(2U) 
                                                          + 
                                                          (0xfU 
                                                           & ((IData)(6U) 
                                                              * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0))))))))))));
                    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__linked_data_d 
                        = (((~ ((IData)(1U) << (7U 
                                                & ((IData)(3U) 
                                                   * 
                                                   ((0xbU 
                                                     >= 
                                                     ((IData)(2U) 
                                                      + 
                                                      (0xfU 
                                                       & ((IData)(6U) 
                                                          * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0))))) 
                                                    && (1U 
                                                        & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                           >> 
                                                           ((IData)(2U) 
                                                            + 
                                                            (0xfU 
                                                             & ((IData)(6U) 
                                                                * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0))))))))))) 
                            & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__linked_data_d)) 
                           | (0x3fU & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_h59fbac41__0) 
                                       << (7U & ((IData)(3U) 
                                                 * 
                                                 ((0xbU 
                                                   >= 
                                                   ((IData)(2U) 
                                                    + 
                                                    (0xfU 
                                                     & ((IData)(6U) 
                                                        * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0))))) 
                                                  && (1U 
                                                      & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                         >> 
                                                         ((IData)(2U) 
                                                          + 
                                                          (0xfU 
                                                           & ((IData)(6U) 
                                                              * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0))))))))))));
                }
                if ((((0xbU >= ((IData)(2U) + (0xfU 
                                               & ((IData)(6U) 
                                                  * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0))))) 
                      && (1U & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                >> ((IData)(2U) + (0xfU 
                                                   & ((IData)(6U) 
                                                      * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0))))))) 
                     == ((0xbU >= ((IData)(1U) + (0xfU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0))))) 
                         && (1U & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                   >> ((IData)(1U) 
                                       + (0xfU & ((IData)(6U) 
                                                  * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0))))))))) {
                    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_h7f52022a__0 = 1U;
                    if ((0xbU >= (0xfU & ((IData)(6U) 
                                          * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0))))) {
                        vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_d 
                            = (((~ ((IData)(0x3fU) 
                                    << (0xfU & ((IData)(6U) 
                                                * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0))))) 
                                & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_d)) 
                               | (0xfffU & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_h7f52022a__0) 
                                            << (0xfU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0))))));
                    }
                } else {
                    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_h314c53a3__0 
                        = ((5U >= ((IData)(1U) + (7U 
                                                  & ((IData)(3U) 
                                                     * 
                                                     ((0xbU 
                                                       >= 
                                                       ((IData)(2U) 
                                                        + 
                                                        (0xfU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0))))) 
                                                      && (1U 
                                                          & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                             >> 
                                                             ((IData)(2U) 
                                                              + 
                                                              (0xfU 
                                                               & ((IData)(6U) 
                                                                  * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0))))))))))) 
                           && (1U & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__linked_data_q) 
                                     >> ((IData)(1U) 
                                         + (7U & ((IData)(3U) 
                                                  * 
                                                  ((0xbU 
                                                    >= 
                                                    ((IData)(2U) 
                                                     + 
                                                     (0xfU 
                                                      & ((IData)(6U) 
                                                         * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0))))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                          >> 
                                                          ((IData)(2U) 
                                                           + 
                                                           (0xfU 
                                                            & ((IData)(6U) 
                                                               * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0)))))))))))));
                    if ((0xbU >= ((IData)(2U) + (0xfU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0)))))) {
                        vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_d 
                            = (((~ ((IData)(1U) << 
                                    ((IData)(2U) + 
                                     (0xfU & ((IData)(6U) 
                                              * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0)))))) 
                                & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_d)) 
                               | (0xfffU & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_h314c53a3__0) 
                                            << ((IData)(2U) 
                                                + (0xfU 
                                                   & ((IData)(6U) 
                                                      * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_350_0)))))));
                    }
                }
            }
        }
    }
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_r[0U] 
        = (0xffffffe7U & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_r[0U]);
    if (((vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_resp[0x10U] 
          >> 8U) & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_r_ready))) {
        if (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__rifq_oup_gnt) {
            vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__mst_r_ready_o = 1U;
            vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_r[0U] 
                = ((0xffffffe7U & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_r[0U]) 
                   | (0x18U & (((0x10U & vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_resp[0U])
                                 ? ((vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_resp[0U] 
                                     << 0x1dU) | (vlSelf->testharness__DOT__i_dma__DOT__i_cut__DOT__slv_resp[0U] 
                                                  >> 3U))
                                 : (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__rifq_oup_data)) 
                               << 3U)));
        }
    }
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__24(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__24\n"); );
    // Body
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_excl = 0U;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_res = 0U;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_valid = 0U;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_wifq_exists_inp[0U] = 0xffffffffU;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_wifq_exists_inp[1U] = 0x7fffU;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_wifq_exists_inp[2U] = 0U;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_wifq_exists_inp[0U] 
        = (0xfffffffeU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_wifq_exists_inp[0U]);
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_wifq_exists_req = 0U;
    if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_state_q)))) {
        if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_valid) {
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_excl 
                = ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_lock) 
                   & (0U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_len)));
            if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_excl) {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_wifq_exists_inp[1U] 
                    = ((0xffffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_wifq_exists_inp[1U]) 
                       | ((IData)((0x3fffffffffffULL 
                                   & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_addr 
                                      >> 2U))) << 0x10U));
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_wifq_exists_inp[2U] 
                    = (0x3fffffffU & (((IData)((0x3fffffffffffULL 
                                                & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_addr 
                                                   >> 2U))) 
                                       >> 0x10U) | 
                                      ((IData)(((0x3fffffffffffULL 
                                                 & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_addr 
                                                    >> 2U)) 
                                                >> 0x20U)) 
                                       << 0x10U)));
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_wifq_exists_req = 1U;
                if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_wifq_exists_gnt) {
                    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_res 
                        = (1U & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists)));
                    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_valid = 1U;
                }
            } else {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_res = 0U;
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_valid = 1U;
            }
        }
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_ar_push_fork__valid_o 
        = (2U & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_ar_push_fork__valid_o));
    if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_ar_push_fork__DOT__gen_oup_state__BRA__0__KET____DOT__oup_state_q)))) {
        if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_valid) {
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_ar_push_fork__valid_o 
                = (1U | (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_ar_push_fork__valid_o));
        }
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_ar_push_fork__valid_o 
        = (1U & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_ar_push_fork__valid_o));
    if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_ar_push_fork__DOT__gen_oup_state__BRA__1__KET____DOT__oup_state_q)))) {
        if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_valid) {
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_ar_push_fork__valid_o 
                = (2U | (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_ar_push_fork__valid_o));
        }
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_wifq_exists_req) 
                << 1U) | (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_wifq_exists_req)));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__rifq_oup_gnt = 0U;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__match_in_id_valid = 0U;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__match_in_id = 0U;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_set_req 
        = ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_res) 
           & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_ar_push_fork__valid_o) 
              >> 1U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_req 
        = (IData)((0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffeU & (((1U <= (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 1U) & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | (1U & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = (0xfffffffeU & (((1U > (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                           << 1U) & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o 
        = (1U & ((~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_r_valid = 0U;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__mst_r_ready_o = 0U;
    if ((1U & (~ ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_ar_push_fork__valid_o) 
                  & (0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__linked_data_free)))))) {
        if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__rifq_oup_req) {
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__rifq_oup_gnt = 1U;
        }
    }
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_ar_push_fork__valid_o) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__linked_data_free)))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__match_in_id_valid = 1U;
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__match_in_id 
            = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_id;
    } else if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__rifq_oup_req) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__match_in_id_valid = 1U;
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__match_in_id 
            = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__rifq_oup_id;
    }
    vlSelf->__VdfgRegularize_hd87f99a1_308_0 = ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__match_in_id_valid) 
                                                & ((~ 
                                                    ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                     >> 7U)) 
                                                   & ((0xfU 
                                                       & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                          >> 0xaU)) 
                                                      == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__match_in_id))));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_wifq_exists_gnt 
        = ((~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)) 
           & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_gnt));
    if (((vlSelf->testharness__DOT__i_mem__DOT__i_cut__DOT__slv_resp[2U] 
          >> 9U) & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_r_ready))) {
        if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__rifq_oup_gnt) {
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_r_valid = 1U;
        }
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_r_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_r_valid) 
           & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_r_ready));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__idx_matches_in_id 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0) 
            << 1U) | ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__match_in_id_valid) 
                      & ((~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q)) 
                         & ((0xfU & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                     >> 3U)) == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__match_in_id)))));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (1U & (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_gnt) 
                  & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_req))
                  ? ((1U & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__rifq_oup_data_valid = 0U;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__rifq_oup_data = 0U;
    if ((1U & (~ ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_ar_push_fork__valid_o) 
                  & (0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__linked_data_free)))))) {
        if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__rifq_oup_req) {
            if ((0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__idx_matches_in_id))) {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__rifq_oup_data_valid = 1U;
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__rifq_oup_data 
                    = ((5U >= ((IData)(2U) + (7U & 
                                              ((IData)(3U) 
                                               * ((0xdU 
                                                   >= 
                                                   ((IData)(2U) 
                                                    + 
                                                    (0xfU 
                                                     & ((IData)(7U) 
                                                        * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0))))) 
                                                  && (1U 
                                                      & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                         >> 
                                                         ((IData)(2U) 
                                                          + 
                                                          (0xfU 
                                                           & ((IData)(7U) 
                                                              * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0))))))))))) 
                       && (1U & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__linked_data_q) 
                                 >> ((IData)(2U) + 
                                     (7U & ((IData)(3U) 
                                            * ((0xdU 
                                                >= 
                                                ((IData)(2U) 
                                                 + 
                                                 (0xfU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0))))) 
                                               && (1U 
                                                   & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                      >> 
                                                      ((IData)(2U) 
                                                       + 
                                                       (0xfU 
                                                        & ((IData)(7U) 
                                                           * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0)))))))))))));
            }
        }
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__linked_data_d 
        = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__linked_data_q;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_d 
        = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q;
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_ar_push_fork__valid_o) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__linked_data_free)))) {
        if ((0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__idx_matches_in_id))) {
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_h9a42ee12__0 
                = (1U & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes));
            if ((5U >= ((IData)(1U) + (7U & ((IData)(3U) 
                                             * ((0xdU 
                                                 >= 
                                                 ((IData)(1U) 
                                                  + 
                                                  (0xfU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0))))) 
                                                && (1U 
                                                    & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                       >> 
                                                       ((IData)(1U) 
                                                        + 
                                                        (0xfU 
                                                         & ((IData)(7U) 
                                                            * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0)))))))))))) {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__linked_data_d 
                    = (((~ ((IData)(1U) << ((IData)(1U) 
                                            + (7U & 
                                               ((IData)(3U) 
                                                * (
                                                   (0xdU 
                                                    >= 
                                                    ((IData)(1U) 
                                                     + 
                                                     (0xfU 
                                                      & ((IData)(7U) 
                                                         * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0))))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                          >> 
                                                          ((IData)(1U) 
                                                           + 
                                                           (0xfU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0)))))))))))) 
                        & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__linked_data_d)) 
                       | (0x3fU & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_h9a42ee12__0) 
                                   << ((IData)(1U) 
                                       + (7U & ((IData)(3U) 
                                                * (
                                                   (0xdU 
                                                    >= 
                                                    ((IData)(1U) 
                                                     + 
                                                     (0xfU 
                                                      & ((IData)(7U) 
                                                         * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0))))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                          >> 
                                                          ((IData)(1U) 
                                                           + 
                                                           (0xfU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0)))))))))))));
            }
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_h75ed23d2__0 
                = (1U & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes));
            if ((0xdU >= ((IData)(1U) + (0xfU & ((IData)(7U) 
                                                 * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0)))))) {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_d 
                    = (((~ ((IData)(1U) << ((IData)(1U) 
                                            + (0xfU 
                                               & ((IData)(7U) 
                                                  * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0)))))) 
                        & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_d)) 
                       | (0x3fffU & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_h75ed23d2__0) 
                                     << ((IData)(1U) 
                                         + (0xfU & 
                                            ((IData)(7U) 
                                             * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0)))))));
            }
        } else {
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_hea223ab4__0 
                = (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_id) 
                    << 3U) | ((4U & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes) 
                                     << 2U)) | (2U 
                                                & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes) 
                                                   << 1U))));
            if ((0xdU >= (0xfU & ((IData)(7U) * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__index_nodes)))))) {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_d 
                    = (((~ ((IData)(0x7fU) << (0xfU 
                                               & ((IData)(7U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__index_nodes)))))) 
                        & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_d)) 
                       | (0x3fffU & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_hea223ab4__0) 
                                     << (0xfU & ((IData)(7U) 
                                                 * 
                                                 (1U 
                                                  & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__index_nodes)))))));
            }
        }
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_h787737b4__0 
            = ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_excl) 
               << 2U);
        if ((5U >= (7U & ((IData)(3U) * (1U & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes)))))) {
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__linked_data_d 
                = (((~ ((IData)(7U) << (7U & ((IData)(3U) 
                                              * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes)))))) 
                    & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__linked_data_d)) 
                   | (0x3fU & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_h787737b4__0) 
                               << (7U & ((IData)(3U) 
                                         * (1U & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes)))))));
        }
    } else if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__rifq_oup_req) {
        if ((0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__idx_matches_in_id))) {
            if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__rifq_oup_pop) {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_h303d8c46__0 = 0U;
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_hea33b867__0 = 1U;
                if ((5U >= (7U & ((IData)(3U) * ((0xdU 
                                                  >= 
                                                  ((IData)(2U) 
                                                   + 
                                                   (0xfU 
                                                    & ((IData)(7U) 
                                                       * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0))))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                        >> 
                                                        ((IData)(2U) 
                                                         + 
                                                         (0xfU 
                                                          & ((IData)(7U) 
                                                             * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0))))))))))) {
                    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__linked_data_d 
                        = (((~ ((IData)(7U) << (7U 
                                                & ((IData)(3U) 
                                                   * 
                                                   ((0xdU 
                                                     >= 
                                                     ((IData)(2U) 
                                                      + 
                                                      (0xfU 
                                                       & ((IData)(7U) 
                                                          * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0))))) 
                                                    && (1U 
                                                        & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                           >> 
                                                           ((IData)(2U) 
                                                            + 
                                                            (0xfU 
                                                             & ((IData)(7U) 
                                                                * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0))))))))))) 
                            & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__linked_data_d)) 
                           | (0x3fU & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_h303d8c46__0) 
                                       << (7U & ((IData)(3U) 
                                                 * 
                                                 ((0xdU 
                                                   >= 
                                                   ((IData)(2U) 
                                                    + 
                                                    (0xfU 
                                                     & ((IData)(7U) 
                                                        * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0))))) 
                                                  && (1U 
                                                      & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                         >> 
                                                         ((IData)(2U) 
                                                          + 
                                                          (0xfU 
                                                           & ((IData)(7U) 
                                                              * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0))))))))))));
                    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__linked_data_d 
                        = (((~ ((IData)(1U) << (7U 
                                                & ((IData)(3U) 
                                                   * 
                                                   ((0xdU 
                                                     >= 
                                                     ((IData)(2U) 
                                                      + 
                                                      (0xfU 
                                                       & ((IData)(7U) 
                                                          * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0))))) 
                                                    && (1U 
                                                        & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                           >> 
                                                           ((IData)(2U) 
                                                            + 
                                                            (0xfU 
                                                             & ((IData)(7U) 
                                                                * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0))))))))))) 
                            & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__linked_data_d)) 
                           | (0x3fU & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_hea33b867__0) 
                                       << (7U & ((IData)(3U) 
                                                 * 
                                                 ((0xdU 
                                                   >= 
                                                   ((IData)(2U) 
                                                    + 
                                                    (0xfU 
                                                     & ((IData)(7U) 
                                                        * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0))))) 
                                                  && (1U 
                                                      & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                         >> 
                                                         ((IData)(2U) 
                                                          + 
                                                          (0xfU 
                                                           & ((IData)(7U) 
                                                              * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0))))))))))));
                }
                if ((((0xdU >= ((IData)(2U) + (0xfU 
                                               & ((IData)(7U) 
                                                  * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0))))) 
                      && (1U & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                >> ((IData)(2U) + (0xfU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0))))))) 
                     == ((0xdU >= ((IData)(1U) + (0xfU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0))))) 
                         && (1U & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                   >> ((IData)(1U) 
                                       + (0xfU & ((IData)(7U) 
                                                  * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0))))))))) {
                    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_h029d3b68__0 = 1U;
                    if ((0xdU >= (0xfU & ((IData)(7U) 
                                          * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0))))) {
                        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_d 
                            = (((~ ((IData)(0x7fU) 
                                    << (0xfU & ((IData)(7U) 
                                                * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0))))) 
                                & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_d)) 
                               | (0x3fffU & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_h029d3b68__0) 
                                             << (0xfU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0))))));
                    }
                } else {
                    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_h6e80dd38__0 
                        = ((5U >= ((IData)(1U) + (7U 
                                                  & ((IData)(3U) 
                                                     * 
                                                     ((0xdU 
                                                       >= 
                                                       ((IData)(2U) 
                                                        + 
                                                        (0xfU 
                                                         & ((IData)(7U) 
                                                            * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0))))) 
                                                      && (1U 
                                                          & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                             >> 
                                                             ((IData)(2U) 
                                                              + 
                                                              (0xfU 
                                                               & ((IData)(7U) 
                                                                  * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0))))))))))) 
                           && (1U & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__linked_data_q) 
                                     >> ((IData)(1U) 
                                         + (7U & ((IData)(3U) 
                                                  * 
                                                  ((0xdU 
                                                    >= 
                                                    ((IData)(2U) 
                                                     + 
                                                     (0xfU 
                                                      & ((IData)(7U) 
                                                         * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0))))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                          >> 
                                                          ((IData)(2U) 
                                                           + 
                                                           (0xfU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0)))))))))))));
                    if ((0xdU >= ((IData)(2U) + (0xfU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0)))))) {
                        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_d 
                            = (((~ ((IData)(1U) << 
                                    ((IData)(2U) + 
                                     (0xfU & ((IData)(7U) 
                                              * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0)))))) 
                                & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_d)) 
                               | (0x3fffU & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_h6e80dd38__0) 
                                             << ((IData)(2U) 
                                                 + 
                                                 (0xfU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_308_0)))))));
                    }
                }
            }
        }
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_r[0U] 
        = (0xffffffe7U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_r[0U]);
    if (((vlSelf->testharness__DOT__i_mem__DOT__i_cut__DOT__slv_resp[2U] 
          >> 9U) & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_r_ready))) {
        if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__rifq_oup_gnt) {
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__mst_r_ready_o = 1U;
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_r[0U] 
                = ((0xffffffe7U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_r[0U]) 
                   | (0x18U & (((0x10U & vlSelf->testharness__DOT__i_mem__DOT__i_cut__DOT__slv_resp[0U])
                                 ? ((vlSelf->testharness__DOT__i_mem__DOT__i_cut__DOT__slv_resp[0U] 
                                     << 0x1dU) | (vlSelf->testharness__DOT__i_mem__DOT__i_cut__DOT__slv_resp[0U] 
                                                  >> 3U))
                                 : (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__rifq_oup_data)) 
                               << 3U)));
        }
    }
}

extern const VlWide<8>/*255:0*/ Vtestharness__ConstPool__CONST_h5bf79007_0;
extern const VlWide<8>/*255:0*/ Vtestharness__ConstPool__CONST_h5b9d2cef_0;
extern const VlWide<52>/*1663:0*/ Vtestharness__ConstPool__CONST_h81a35695_0;

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__25(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__25\n"); );
    // Init
    CData/*0:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_demux_offload__DOT____Vlvbound_hd0c0ac91__0;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_demux_offload__DOT____Vlvbound_hd0c0ac91__0 = 0;
    VlWide<4>/*127:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0;
    VL_ZERO_W(128, testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0);
    CData/*0:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h36d10ee1__0;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h36d10ee1__0 = 0;
    CData/*0:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h92ffebca__0;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h92ffebca__0 = 0;
    CData/*0:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_demux_offload__DOT____Vlvbound_hd0c0ac91__0;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_demux_offload__DOT____Vlvbound_hd0c0ac91__0 = 0;
    VlWide<4>/*127:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0;
    VL_ZERO_W(128, testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0);
    CData/*0:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h36d10ee1__0;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h36d10ee1__0 = 0;
    CData/*0:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h92ffebca__0;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h92ffebca__0 = 0;
    CData/*3:0*/ __Vfunc_is_amo__6__amo;
    __Vfunc_is_amo__6__amo = 0;
    CData/*5:0*/ __Vfunc_to_axi_amo__7__Vfuncout;
    __Vfunc_to_axi_amo__7__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_to_axi_amo__7__amo;
    __Vfunc_to_axi_amo__7__amo = 0;
    CData/*5:0*/ __Vfunc_to_axi_amo__7__result;
    __Vfunc_to_axi_amo__7__result = 0;
    CData/*0:0*/ __Vfunc_is_inside_cacheable_regions__20__Vfuncout;
    __Vfunc_is_inside_cacheable_regions__20__Vfuncout = 0;
    VlWide<52>/*1663:0*/ __Vfunc_is_inside_cacheable_regions__20__cfg;
    VL_ZERO_W(1664, __Vfunc_is_inside_cacheable_regions__20__cfg);
    QData/*47:0*/ __Vfunc_is_inside_cacheable_regions__20__address;
    __Vfunc_is_inside_cacheable_regions__20__address = 0;
    IData/*31:0*/ __Vfunc_is_inside_cacheable_regions__20__unnamedblk3__DOT__k;
    __Vfunc_is_inside_cacheable_regions__20__unnamedblk3__DOT__k = 0;
    CData/*3:0*/ __Vfunc_is_inside_cacheable_regions__20__pass;
    __Vfunc_is_inside_cacheable_regions__20__pass = 0;
    VlWide<52>/*1663:0*/ __Vfunc_is_inside_cacheable_regions__23__cfg;
    VL_ZERO_W(1664, __Vfunc_is_inside_cacheable_regions__23__cfg);
    QData/*47:0*/ __Vfunc_is_inside_cacheable_regions__23__address;
    __Vfunc_is_inside_cacheable_regions__23__address = 0;
    IData/*31:0*/ __Vfunc_is_inside_cacheable_regions__23__unnamedblk3__DOT__k;
    __Vfunc_is_inside_cacheable_regions__23__unnamedblk3__DOT__k = 0;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_33;
    VlWide<9>/*287:0*/ __Vtemp_45;
    VlWide<4>/*127:0*/ __Vtemp_49;
    VlWide<8>/*255:0*/ __Vtemp_55;
    // Body
    if ((0x8bU >= (0xffU & ((IData)(0x46U) * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_demux_snitch[0U] 
            = (((0U == (0x1fU & ((IData)(0x46U) * (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
                 ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__mem_q[
                         ((IData)(1U) + (7U & (((IData)(0x46U) 
                                                * (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x46U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))) 
               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__mem_q[
                  (7U & (((IData)(0x46U) * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                         >> 5U))] >> (0x1fU & ((IData)(0x46U) 
                                               * (1U 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_demux_snitch[1U] 
            = (((0U == (0x1fU & ((IData)(0x46U) * (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
                 ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__mem_q[
                         ((IData)(2U) + (7U & (((IData)(0x46U) 
                                                * (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x46U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))) 
               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__mem_q[
                  ((IData)(1U) + (7U & (((IData)(0x46U) 
                                         * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                        >> 5U)))] >> 
                  (0x1fU & ((IData)(0x46U) * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_demux_snitch[2U] 
            = (0x3fU & (((0U == (0x1fU & ((IData)(0x46U) 
                                          * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
                          ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__mem_q[
                                  ((IData)(3U) + (7U 
                                                  & (((IData)(0x46U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                                     >> 5U)))] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x46U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))) 
                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__mem_q[
                           ((IData)(2U) + (7U & (((IData)(0x46U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                                 >> 5U)))] 
                           >> (0x1fU & ((IData)(0x46U) 
                                        * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))));
    } else {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_demux_snitch[0U] = 0U;
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_demux_snitch[1U] = 0U;
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_demux_snitch[2U] = 0U;
    }
    if ((0x8bU >= (0xffU & ((IData)(0x46U) * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_demux_snitch[0U] 
            = (((0U == (0x1fU & ((IData)(0x46U) * (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
                 ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__mem_q[
                         ((IData)(1U) + (7U & (((IData)(0x46U) 
                                                * (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x46U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))) 
               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__mem_q[
                  (7U & (((IData)(0x46U) * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                         >> 5U))] >> (0x1fU & ((IData)(0x46U) 
                                               * (1U 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_demux_snitch[1U] 
            = (((0U == (0x1fU & ((IData)(0x46U) * (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
                 ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__mem_q[
                         ((IData)(2U) + (7U & (((IData)(0x46U) 
                                                * (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x46U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))) 
               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__mem_q[
                  ((IData)(1U) + (7U & (((IData)(0x46U) 
                                         * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                        >> 5U)))] >> 
                  (0x1fU & ((IData)(0x46U) * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_demux_snitch[2U] 
            = (0x3fU & (((0U == (0x1fU & ((IData)(0x46U) 
                                          * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
                          ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__mem_q[
                                  ((IData)(3U) + (7U 
                                                  & (((IData)(0x46U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                                     >> 5U)))] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x46U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))) 
                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__mem_q[
                           ((IData)(2U) + (7U & (((IData)(0x46U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                                 >> 5U)))] 
                           >> (0x1fU & ((IData)(0x46U) 
                                        * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))));
    } else {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_demux_snitch[0U] = 0U;
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_demux_snitch[1U] = 0U;
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_demux_snitch[2U] = 0U;
    }
    if ((0x81U >= (0xffU & ((IData)(0x41U) * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_p__dst_data_o[0U] 
            = (((0U == (0x1fU & ((IData)(0x41U) * (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
                 ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__mem_q[
                         ((IData)(1U) + (7U & (((IData)(0x41U) 
                                                * (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x41U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))) 
               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__mem_q[
                  (7U & (((IData)(0x41U) * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                         >> 5U))] >> (0x1fU & ((IData)(0x41U) 
                                               * (1U 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_p__dst_data_o[1U] 
            = (((0U == (0x1fU & ((IData)(0x41U) * (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
                 ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__mem_q[
                         ((IData)(2U) + (7U & (((IData)(0x41U) 
                                                * (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x41U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))) 
               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__mem_q[
                  ((IData)(1U) + (7U & (((IData)(0x41U) 
                                         * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                        >> 5U)))] >> 
                  (0x1fU & ((IData)(0x41U) * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_p__dst_data_o[2U] 
            = (1U & (((0U == (0x1fU & ((IData)(0x41U) 
                                       * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
                       ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__mem_q[
                               ((IData)(3U) + (7U & 
                                               (((IData)(0x41U) 
                                                 * 
                                                 (1U 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                                >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x41U) 
                                             * (1U 
                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))) 
                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__mem_q[
                        ((IData)(2U) + (7U & (((IData)(0x41U) 
                                               * (1U 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                              >> 5U)))] 
                        >> (0x1fU & ((IData)(0x41U) 
                                     * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))));
    } else {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_p__dst_data_o[0U] = 0U;
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_p__dst_data_o[1U] = 0U;
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_p__dst_data_o[2U] = 0U;
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_ptw__DOT__req_payload_q[0U] 
        = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U)))
             ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__mem_q[
                     ((IData)(1U) + (7U & (VL_SHIFTL_III(8,8,32, 
                                                         (1U 
                                                          & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U) 
                                           >> 5U)))] 
                     << ((IData)(0x20U) - (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         (1U 
                                                          & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U))))) 
           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__mem_q[
              (7U & (VL_SHIFTL_III(8,8,32, (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U) 
                     >> 5U))] >> (0x1fU & VL_SHIFTL_III(8,8,32, 
                                                        (1U 
                                                         & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_ptw__DOT__req_payload_q[1U] 
        = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U)))
             ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__mem_q[
                     ((IData)(2U) + (7U & (VL_SHIFTL_III(8,8,32, 
                                                         (1U 
                                                          & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U) 
                                           >> 5U)))] 
                     << ((IData)(0x20U) - (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         (1U 
                                                          & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U))))) 
           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__mem_q[
              ((IData)(1U) + (7U & (VL_SHIFTL_III(8,8,32, 
                                                  (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U) 
                                    >> 5U)))] >> (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  (1U 
                                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_ptw__DOT__req_payload_q[2U] 
        = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U)))
             ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__mem_q[
                     ((IData)(3U) + (7U & (VL_SHIFTL_III(8,8,32, 
                                                         (1U 
                                                          & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U) 
                                           >> 5U)))] 
                     << ((IData)(0x20U) - (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         (1U 
                                                          & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U))))) 
           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__mem_q[
              ((IData)(2U) + (7U & (VL_SHIFTL_III(8,8,32, 
                                                  (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U) 
                                    >> 5U)))] >> (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  (1U 
                                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_ptw__DOT__req_payload_q[3U] 
        = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U)))
             ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__mem_q[
                     ((IData)(4U) + (7U & (VL_SHIFTL_III(8,8,32, 
                                                         (1U 
                                                          & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U) 
                                           >> 5U)))] 
                     << ((IData)(0x20U) - (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         (1U 
                                                          & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U))))) 
           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__mem_q[
              ((IData)(3U) + (7U & (VL_SHIFTL_III(8,8,32, 
                                                  (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U) 
                                    >> 5U)))] >> (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  (1U 
                                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[0U] 
        = (Vtestharness__ConstPool__CONST_h5bf79007_0[0U] 
           & ((0x1e9U >= (0x1ffU & ((IData)(0xf5U) 
                                    * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
               ? (((0U == (0x1fU & ((IData)(0xf5U) 
                                    * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
                    ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__mem_q[
                            ((IData)(1U) + (0xfU & 
                                            (((IData)(0xf5U) 
                                              * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0xf5U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))) 
                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__mem_q[
                     (0xfU & (((IData)(0xf5U) * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                              >> 5U))] >> (0x1fU & 
                                           ((IData)(0xf5U) 
                                            * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))
               : Vtestharness__ConstPool__CONST_h5b9d2cef_0[0U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[1U] 
        = (Vtestharness__ConstPool__CONST_h5bf79007_0[1U] 
           & ((0x1e9U >= (0x1ffU & ((IData)(0xf5U) 
                                    * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
               ? (((0U == (0x1fU & ((IData)(0xf5U) 
                                    * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
                    ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__mem_q[
                            ((IData)(2U) + (0xfU & 
                                            (((IData)(0xf5U) 
                                              * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0xf5U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))) 
                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__mem_q[
                     ((IData)(1U) + (0xfU & (((IData)(0xf5U) 
                                              * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                             >> 5U)))] 
                     >> (0x1fU & ((IData)(0xf5U) * 
                                  (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))
               : Vtestharness__ConstPool__CONST_h5b9d2cef_0[1U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[2U] 
        = (Vtestharness__ConstPool__CONST_h5bf79007_0[2U] 
           & ((0x1e9U >= (0x1ffU & ((IData)(0xf5U) 
                                    * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
               ? (((0U == (0x1fU & ((IData)(0xf5U) 
                                    * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
                    ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__mem_q[
                            ((IData)(3U) + (0xfU & 
                                            (((IData)(0xf5U) 
                                              * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0xf5U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))) 
                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__mem_q[
                     ((IData)(2U) + (0xfU & (((IData)(0xf5U) 
                                              * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                             >> 5U)))] 
                     >> (0x1fU & ((IData)(0xf5U) * 
                                  (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))
               : Vtestharness__ConstPool__CONST_h5b9d2cef_0[2U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[3U] 
        = (Vtestharness__ConstPool__CONST_h5bf79007_0[3U] 
           & ((0x1e9U >= (0x1ffU & ((IData)(0xf5U) 
                                    * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
               ? (((0U == (0x1fU & ((IData)(0xf5U) 
                                    * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
                    ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__mem_q[
                            ((IData)(4U) + (0xfU & 
                                            (((IData)(0xf5U) 
                                              * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0xf5U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))) 
                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__mem_q[
                     ((IData)(3U) + (0xfU & (((IData)(0xf5U) 
                                              * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                             >> 5U)))] 
                     >> (0x1fU & ((IData)(0xf5U) * 
                                  (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))
               : Vtestharness__ConstPool__CONST_h5b9d2cef_0[3U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[4U] 
        = (Vtestharness__ConstPool__CONST_h5bf79007_0[4U] 
           & ((0x1e9U >= (0x1ffU & ((IData)(0xf5U) 
                                    * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
               ? (((0U == (0x1fU & ((IData)(0xf5U) 
                                    * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
                    ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__mem_q[
                            ((IData)(5U) + (0xfU & 
                                            (((IData)(0xf5U) 
                                              * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0xf5U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))) 
                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__mem_q[
                     ((IData)(4U) + (0xfU & (((IData)(0xf5U) 
                                              * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                             >> 5U)))] 
                     >> (0x1fU & ((IData)(0xf5U) * 
                                  (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))
               : Vtestharness__ConstPool__CONST_h5b9d2cef_0[4U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
        = (Vtestharness__ConstPool__CONST_h5bf79007_0[5U] 
           & ((0x1e9U >= (0x1ffU & ((IData)(0xf5U) 
                                    * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
               ? (((0U == (0x1fU & ((IData)(0xf5U) 
                                    * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
                    ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__mem_q[
                            ((IData)(6U) + (0xfU & 
                                            (((IData)(0xf5U) 
                                              * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0xf5U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))) 
                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__mem_q[
                     ((IData)(5U) + (0xfU & (((IData)(0xf5U) 
                                              * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                             >> 5U)))] 
                     >> (0x1fU & ((IData)(0xf5U) * 
                                  (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))
               : Vtestharness__ConstPool__CONST_h5b9d2cef_0[5U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
        = (Vtestharness__ConstPool__CONST_h5bf79007_0[6U] 
           & ((0x1e9U >= (0x1ffU & ((IData)(0xf5U) 
                                    * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
               ? (((0U == (0x1fU & ((IData)(0xf5U) 
                                    * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
                    ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__mem_q[
                            ((IData)(7U) + (0xfU & 
                                            (((IData)(0xf5U) 
                                              * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0xf5U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))) 
                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__mem_q[
                     ((IData)(6U) + (0xfU & (((IData)(0xf5U) 
                                              * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                             >> 5U)))] 
                     >> (0x1fU & ((IData)(0xf5U) * 
                                  (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))
               : Vtestharness__ConstPool__CONST_h5b9d2cef_0[6U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[7U] 
        = (Vtestharness__ConstPool__CONST_h5bf79007_0[7U] 
           & ((0x1e9U >= (0x1ffU & ((IData)(0xf5U) 
                                    * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
               ? (((0U == (0x1fU & ((IData)(0xf5U) 
                                    * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
                    ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__mem_q[
                            ((IData)(8U) + (0xfU & 
                                            (((IData)(0xf5U) 
                                              * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0xf5U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))) 
                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__mem_q[
                     ((IData)(7U) + (0xfU & (((IData)(0xf5U) 
                                              * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                             >> 5U)))] 
                     >> (0x1fU & ((IData)(0xf5U) * 
                                  (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))
               : Vtestharness__ConstPool__CONST_h5b9d2cef_0[7U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[0U] 
        = (Vtestharness__ConstPool__CONST_h5bf79007_0[0U] 
           & ((0x1e9U >= (0x1ffU & ((IData)(0xf5U) 
                                    * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
               ? (((0U == (0x1fU & ((IData)(0xf5U) 
                                    * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
                    ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__mem_q[
                            ((IData)(1U) + (0xfU & 
                                            (((IData)(0xf5U) 
                                              * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0xf5U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))) 
                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__mem_q[
                     (0xfU & (((IData)(0xf5U) * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                              >> 5U))] >> (0x1fU & 
                                           ((IData)(0xf5U) 
                                            * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))
               : Vtestharness__ConstPool__CONST_h5b9d2cef_0[0U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[1U] 
        = (Vtestharness__ConstPool__CONST_h5bf79007_0[1U] 
           & ((0x1e9U >= (0x1ffU & ((IData)(0xf5U) 
                                    * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
               ? (((0U == (0x1fU & ((IData)(0xf5U) 
                                    * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
                    ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__mem_q[
                            ((IData)(2U) + (0xfU & 
                                            (((IData)(0xf5U) 
                                              * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0xf5U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))) 
                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__mem_q[
                     ((IData)(1U) + (0xfU & (((IData)(0xf5U) 
                                              * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                             >> 5U)))] 
                     >> (0x1fU & ((IData)(0xf5U) * 
                                  (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))
               : Vtestharness__ConstPool__CONST_h5b9d2cef_0[1U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[2U] 
        = (Vtestharness__ConstPool__CONST_h5bf79007_0[2U] 
           & ((0x1e9U >= (0x1ffU & ((IData)(0xf5U) 
                                    * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
               ? (((0U == (0x1fU & ((IData)(0xf5U) 
                                    * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
                    ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__mem_q[
                            ((IData)(3U) + (0xfU & 
                                            (((IData)(0xf5U) 
                                              * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0xf5U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))) 
                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__mem_q[
                     ((IData)(2U) + (0xfU & (((IData)(0xf5U) 
                                              * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                             >> 5U)))] 
                     >> (0x1fU & ((IData)(0xf5U) * 
                                  (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))
               : Vtestharness__ConstPool__CONST_h5b9d2cef_0[2U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[3U] 
        = (Vtestharness__ConstPool__CONST_h5bf79007_0[3U] 
           & ((0x1e9U >= (0x1ffU & ((IData)(0xf5U) 
                                    * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
               ? (((0U == (0x1fU & ((IData)(0xf5U) 
                                    * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
                    ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__mem_q[
                            ((IData)(4U) + (0xfU & 
                                            (((IData)(0xf5U) 
                                              * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0xf5U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))) 
                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__mem_q[
                     ((IData)(3U) + (0xfU & (((IData)(0xf5U) 
                                              * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                             >> 5U)))] 
                     >> (0x1fU & ((IData)(0xf5U) * 
                                  (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))
               : Vtestharness__ConstPool__CONST_h5b9d2cef_0[3U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[4U] 
        = (Vtestharness__ConstPool__CONST_h5bf79007_0[4U] 
           & ((0x1e9U >= (0x1ffU & ((IData)(0xf5U) 
                                    * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
               ? (((0U == (0x1fU & ((IData)(0xf5U) 
                                    * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
                    ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__mem_q[
                            ((IData)(5U) + (0xfU & 
                                            (((IData)(0xf5U) 
                                              * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0xf5U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))) 
                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__mem_q[
                     ((IData)(4U) + (0xfU & (((IData)(0xf5U) 
                                              * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                             >> 5U)))] 
                     >> (0x1fU & ((IData)(0xf5U) * 
                                  (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))
               : Vtestharness__ConstPool__CONST_h5b9d2cef_0[4U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
        = (Vtestharness__ConstPool__CONST_h5bf79007_0[5U] 
           & ((0x1e9U >= (0x1ffU & ((IData)(0xf5U) 
                                    * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
               ? (((0U == (0x1fU & ((IData)(0xf5U) 
                                    * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
                    ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__mem_q[
                            ((IData)(6U) + (0xfU & 
                                            (((IData)(0xf5U) 
                                              * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0xf5U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))) 
                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__mem_q[
                     ((IData)(5U) + (0xfU & (((IData)(0xf5U) 
                                              * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                             >> 5U)))] 
                     >> (0x1fU & ((IData)(0xf5U) * 
                                  (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))
               : Vtestharness__ConstPool__CONST_h5b9d2cef_0[5U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
        = (Vtestharness__ConstPool__CONST_h5bf79007_0[6U] 
           & ((0x1e9U >= (0x1ffU & ((IData)(0xf5U) 
                                    * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
               ? (((0U == (0x1fU & ((IData)(0xf5U) 
                                    * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
                    ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__mem_q[
                            ((IData)(7U) + (0xfU & 
                                            (((IData)(0xf5U) 
                                              * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0xf5U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))) 
                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__mem_q[
                     ((IData)(6U) + (0xfU & (((IData)(0xf5U) 
                                              * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                             >> 5U)))] 
                     >> (0x1fU & ((IData)(0xf5U) * 
                                  (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))
               : Vtestharness__ConstPool__CONST_h5b9d2cef_0[6U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[7U] 
        = (Vtestharness__ConstPool__CONST_h5bf79007_0[7U] 
           & ((0x1e9U >= (0x1ffU & ((IData)(0xf5U) 
                                    * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
               ? (((0U == (0x1fU & ((IData)(0xf5U) 
                                    * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
                    ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__mem_q[
                            ((IData)(8U) + (0xfU & 
                                            (((IData)(0xf5U) 
                                              * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0xf5U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))) 
                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__mem_q[
                     ((IData)(7U) + (0xfU & (((IData)(0xf5U) 
                                              * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                             >> 5U)))] 
                     >> (0x1fU & ((IData)(0xf5U) * 
                                  (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))
               : Vtestharness__ConstPool__CONST_h5b9d2cef_0[7U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_q__dst_data_o[0U] 
        = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U)))
             ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__mem_q[
                     ((IData)(1U) + (7U & (VL_SHIFTL_III(8,8,32, 
                                                         (1U 
                                                          & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U) 
                                           >> 5U)))] 
                     << ((IData)(0x20U) - (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         (1U 
                                                          & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U))))) 
           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__mem_q[
              (7U & (VL_SHIFTL_III(8,8,32, (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U) 
                     >> 5U))] >> (0x1fU & VL_SHIFTL_III(8,8,32, 
                                                        (1U 
                                                         & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_q__dst_data_o[1U] 
        = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U)))
             ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__mem_q[
                     ((IData)(2U) + (7U & (VL_SHIFTL_III(8,8,32, 
                                                         (1U 
                                                          & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U) 
                                           >> 5U)))] 
                     << ((IData)(0x20U) - (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         (1U 
                                                          & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U))))) 
           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__mem_q[
              ((IData)(1U) + (7U & (VL_SHIFTL_III(8,8,32, 
                                                  (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U) 
                                    >> 5U)))] >> (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  (1U 
                                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_q__dst_data_o[2U] 
        = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U)))
             ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__mem_q[
                     ((IData)(3U) + (7U & (VL_SHIFTL_III(8,8,32, 
                                                         (1U 
                                                          & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U) 
                                           >> 5U)))] 
                     << ((IData)(0x20U) - (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         (1U 
                                                          & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U))))) 
           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__mem_q[
              ((IData)(2U) + (7U & (VL_SHIFTL_III(8,8,32, 
                                                  (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U) 
                                    >> 5U)))] >> (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  (1U 
                                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_q__dst_data_o[3U] 
        = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U)))
             ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__mem_q[
                     ((IData)(4U) + (7U & (VL_SHIFTL_III(8,8,32, 
                                                         (1U 
                                                          & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U) 
                                           >> 5U)))] 
                     << ((IData)(0x20U) - (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         (1U 
                                                          & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U))))) 
           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__mem_q[
              ((IData)(3U) + (7U & (VL_SHIFTL_III(8,8,32, 
                                                  (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U) 
                                    >> 5U)))] >> (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  (1U 
                                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_q__dst_data_o[0U] 
        = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U)))
             ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__mem_q[
                     ((IData)(1U) + (7U & (VL_SHIFTL_III(8,8,32, 
                                                         (1U 
                                                          & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U) 
                                           >> 5U)))] 
                     << ((IData)(0x20U) - (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         (1U 
                                                          & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U))))) 
           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__mem_q[
              (7U & (VL_SHIFTL_III(8,8,32, (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U) 
                     >> 5U))] >> (0x1fU & VL_SHIFTL_III(8,8,32, 
                                                        (1U 
                                                         & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_q__dst_data_o[1U] 
        = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U)))
             ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__mem_q[
                     ((IData)(2U) + (7U & (VL_SHIFTL_III(8,8,32, 
                                                         (1U 
                                                          & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U) 
                                           >> 5U)))] 
                     << ((IData)(0x20U) - (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         (1U 
                                                          & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U))))) 
           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__mem_q[
              ((IData)(1U) + (7U & (VL_SHIFTL_III(8,8,32, 
                                                  (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U) 
                                    >> 5U)))] >> (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  (1U 
                                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_q__dst_data_o[2U] 
        = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U)))
             ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__mem_q[
                     ((IData)(3U) + (7U & (VL_SHIFTL_III(8,8,32, 
                                                         (1U 
                                                          & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U) 
                                           >> 5U)))] 
                     << ((IData)(0x20U) - (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         (1U 
                                                          & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U))))) 
           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__mem_q[
              ((IData)(2U) + (7U & (VL_SHIFTL_III(8,8,32, 
                                                  (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U) 
                                    >> 5U)))] >> (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  (1U 
                                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_q__dst_data_o[3U] 
        = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U)))
             ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__mem_q[
                     ((IData)(4U) + (7U & (VL_SHIFTL_III(8,8,32, 
                                                         (1U 
                                                          & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U) 
                                           >> 5U)))] 
                     << ((IData)(0x20U) - (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         (1U 
                                                          & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U))))) 
           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__mem_q[
              ((IData)(3U) + (7U & (VL_SHIFTL_III(8,8,32, 
                                                  (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U) 
                                    >> 5U)))] >> (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  (1U 
                                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)), 7U))));
    if ((0x81U >= (0xffU & ((IData)(0x41U) * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))) {
        __Vtemp_27[1U] = (((0U == (0x1fU & ((IData)(0x41U) 
                                            * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
                            ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__mem_q[
                                    ((IData)(2U) + 
                                     (7U & (((IData)(0x41U) 
                                             * (1U 
                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                            >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x41U) 
                                            * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))) 
                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__mem_q[
                             ((IData)(1U) + (7U & (
                                                   ((IData)(0x41U) 
                                                    * 
                                                    (1U 
                                                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                                   >> 5U)))] 
                             >> (0x1fU & ((IData)(0x41U) 
                                          * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))));
        __Vtemp_27[2U] = (1U & (((0U == (0x1fU & ((IData)(0x41U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
                                  ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__mem_q[
                                          ((IData)(3U) 
                                           + (7U & 
                                              (((IData)(0x41U) 
                                                * (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                               >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(0x41U) 
                                                    * 
                                                    (1U 
                                                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))) 
                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__mem_q[
                                   ((IData)(2U) + (7U 
                                                   & (((IData)(0x41U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                                      >> 5U)))] 
                                   >> (0x1fU & ((IData)(0x41U) 
                                                * (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))));
    } else {
        __Vtemp_27[1U] = 0U;
        __Vtemp_27[2U] = 0U;
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__i_snitch_lsu__DOT__shifted_data 
        = ((((QData)((IData)(__Vtemp_27[2U])) << 0x3fU) 
            | (((QData)((IData)(__Vtemp_27[1U])) << 0x1fU) 
               | ((QData)((IData)(((0x81U >= (0xffU 
                                              & ((IData)(0x41U) 
                                                 * 
                                                 (1U 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
                                    ? (((0U == (0x1fU 
                                                & ((IData)(0x41U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
                                         ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__mem_q[
                                                 ((IData)(1U) 
                                                  + 
                                                  (7U 
                                                   & (((IData)(0x41U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x41U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))) 
                                       | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__mem_q[
                                          (7U & (((IData)(0x41U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                                 >> 5U))] 
                                          >> (0x1fU 
                                              & ((IData)(0x41U) 
                                                 * 
                                                 (1U 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))
                                    : 0U))) >> 1U))) 
           >> (0x38U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__i_snitch_lsu__DOT__laq_out) 
                        << 1U)));
    if ((0x81U >= (0xffU & ((IData)(0x41U) * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))) {
        __Vtemp_33[1U] = (((0U == (0x1fU & ((IData)(0x41U) 
                                            * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
                            ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__mem_q[
                                    ((IData)(2U) + 
                                     (7U & (((IData)(0x41U) 
                                             * (1U 
                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                            >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x41U) 
                                            * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))) 
                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__mem_q[
                             ((IData)(1U) + (7U & (
                                                   ((IData)(0x41U) 
                                                    * 
                                                    (1U 
                                                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                                   >> 5U)))] 
                             >> (0x1fU & ((IData)(0x41U) 
                                          * (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))));
        __Vtemp_33[2U] = (1U & (((0U == (0x1fU & ((IData)(0x41U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
                                  ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__mem_q[
                                          ((IData)(3U) 
                                           + (7U & 
                                              (((IData)(0x41U) 
                                                * (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                               >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(0x41U) 
                                                    * 
                                                    (1U 
                                                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))) 
                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__mem_q[
                                   ((IData)(2U) + (7U 
                                                   & (((IData)(0x41U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                                      >> 5U)))] 
                                   >> (0x1fU & ((IData)(0x41U) 
                                                * (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))));
    } else {
        __Vtemp_33[1U] = 0U;
        __Vtemp_33[2U] = 0U;
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__i_snitch_lsu__DOT__shifted_data 
        = ((((QData)((IData)(__Vtemp_33[2U])) << 0x3fU) 
            | (((QData)((IData)(__Vtemp_33[1U])) << 0x1fU) 
               | ((QData)((IData)(((0x81U >= (0xffU 
                                              & ((IData)(0x41U) 
                                                 * 
                                                 (1U 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
                                    ? (((0U == (0x1fU 
                                                & ((IData)(0x41U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q)))))
                                         ? 0U : (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__mem_q[
                                                 ((IData)(1U) 
                                                  + 
                                                  (7U 
                                                   & (((IData)(0x41U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x41U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))) 
                                       | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__mem_q[
                                          (7U & (((IData)(0x41U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))) 
                                                 >> 5U))] 
                                          >> (0x1fU 
                                              & ((IData)(0x41U) 
                                                 * 
                                                 (1U 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT__gen_isochronous_spill_register__DOT__rd_pointer_q))))))
                                    : 0U))) >> 1U))) 
           >> (0x38U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__i_snitch_lsu__DOT__laq_out) 
                        << 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__trans_active 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__satp_q 
            >> 0x16U) & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__debug_q)) 
                         & (3U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__priv_lvl_q))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__hit 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__tag_valid_q) 
           & (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__pc_q 
                >> 0x16U) == (0x3ffU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__tag_q 
                                        >> 0xbU))) 
              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__tag_q 
                 | ((0x3ffU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__pc_q 
                               >> 0xcU)) == (0x3ffU 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__tag_q 
                                                >> 1U))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__trans_active 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__satp_q 
            >> 0x16U) & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__debug_q)) 
                         & (3U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__priv_lvl_q))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__hit 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__tag_valid_q) 
           & (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__pc_q 
                >> 0x16U) == (0x3ffU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__tag_q 
                                        >> 0xbU))) 
              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__tag_q 
                 | ((0x3ffU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__pc_q 
                               >> 0xcU)) == (0x3ffU 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__tag_q 
                                                >> 1U))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_snitch_ptw__DOT____VdfgExtracted_heff16bf3__0 
        = (1U & ((~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_p__dst_data_o[0U] 
                     >> 1U)) | (IData)((8U == (0xcU 
                                               & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_p__dst_data_o[0U])))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_snitch_ptw__DOT____VdfgExtracted_he731917c__0 
        = (IData)((0U != (0x14U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_p__dst_data_o[0U])));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__ptw_rsp[0U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_p__dst_data_o[0U] 
            << 2U) | (((0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT____VdfgRegularize_h28f62d58_0_0)) 
                       << 1U) | (2U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT____VdfgRegularize_h52e8e637_0_0))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__ptw_rsp[1U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_p__dst_data_o[0U] 
            >> 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_p__dst_data_o[1U] 
                         << 2U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__ptw_rsp[2U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_p__dst_data_o[1U] 
            >> 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_p__dst_data_o[2U] 
                         << 2U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_ptw__axi_req_o[5U] 
        = (0x2200000U | ((0x1ffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_ptw__axi_req_o[5U]) 
                         | ((0x38000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_ptw__DOT__req_payload_q[0U] 
                                            << 0x1bU)) 
                            | ((0xbU == (0xfU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_ptw__DOT__req_payload_q[2U] 
                                                 >> 0xbU))) 
                               << 0x18U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_ptw__axi_req_o[6U] 
        = (((0x1c0U & ((IData)((0xffffffffffffULL & 
                                (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_ptw__DOT__req_payload_q[3U])) 
                                  << 0x10U) | ((QData)((IData)(
                                                               vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_ptw__DOT__req_payload_q[2U])) 
                                               >> 0x10U)))) 
                       << 6U)) | (0x1ffU & ((0xbU == 
                                             (0xfU 
                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_ptw__DOT__req_payload_q[2U] 
                                                 >> 0xbU))) 
                                            >> 8U))) 
           | (0xfffffe00U & ((IData)((0xffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_ptw__DOT__req_payload_q[3U])) 
                                          << 0x10U) 
                                         | ((QData)((IData)(
                                                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_ptw__DOT__req_payload_q[2U])) 
                                            >> 0x10U)))) 
                             << 6U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_ptw__axi_req_o[7U] 
        = (0xffffffU & ((((IData)((0xffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_ptw__DOT__req_payload_q[3U])) 
                                       << 0x10U) | 
                                      ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_ptw__DOT__req_payload_q[2U])) 
                                       >> 0x10U)))) 
                          >> 0x1aU) | (0x1c0U & ((IData)(
                                                         ((0xffffffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_ptw__DOT__req_payload_q[3U])) 
                                                               << 0x10U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_ptw__DOT__req_payload_q[2U])) 
                                                                 >> 0x10U))) 
                                                          >> 0x20U)) 
                                                 << 6U))) 
                        | (0xfffffe00U & ((IData)((
                                                   (0xffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_ptw__DOT__req_payload_q[3U])) 
                                                        << 0x10U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_ptw__DOT__req_payload_q[2U])) 
                                                          >> 0x10U))) 
                                                   >> 0x20U)) 
                                          << 6U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__ptw_to_axi_req[0U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_ptw__DOT__req_payload_q[0U] 
            << 2U) | (((0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_q__DOT____VdfgRegularize_h52e8e637_0_0)) 
                       << 1U) | (2U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT____VdfgRegularize_h28f62d58_0_0))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__ptw_to_axi_req[1U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_ptw__DOT__req_payload_q[0U] 
            >> 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_ptw__DOT__req_payload_q[1U] 
                         << 2U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__ptw_to_axi_req[2U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_ptw__DOT__req_payload_q[1U] 
            >> 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_ptw__DOT__req_payload_q[2U] 
                         << 2U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__ptw_to_axi_req[3U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_ptw__DOT__req_payload_q[2U] 
            >> 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_ptw__DOT__req_payload_q[3U] 
                         << 2U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__ptw_to_axi_req[4U] 
        = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_ptw__DOT__req_payload_q[3U] 
           >> 0x1eU);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_stream_demux_offload__oup_valid_o = 0U;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_demux_offload__DOT____Vlvbound_hd0c0ac91__0 
        = (0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT____VdfgRegularize_hd13989f2_0_0));
    if ((5U >= (7U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                      >> 0x15U)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_stream_demux_offload__oup_valid_o 
            = (((~ ((IData)(1U) << (7U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                                          >> 0x15U)))) 
                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_stream_demux_offload__oup_valid_o)) 
               | (0x3fU & ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_demux_offload__DOT____Vlvbound_hd0c0ac91__0) 
                           << (7U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                                     >> 0x15U)))));
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__snax_csr_req_bits_data 
        = (((QData)((IData)(((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[4U] 
                              << 0x10U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[3U] 
                                           >> 0x10U)))) 
            << 0x20U) | (QData)((IData)(((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[4U] 
                                          << 0x10U) 
                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[3U] 
                                            >> 0x10U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__snax_csr_req_bits_addr 
        = (((QData)((IData)((((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[2U] 
                               << 0x10U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[1U] 
                                            >> 0x10U)) 
                             - (IData)(0x3c0U)))) << 0x20U) 
           | (QData)((IData)((((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[2U] 
                                << 0x10U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[1U] 
                                             >> 0x10U)) 
                              - (IData)(0x3c0U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_stream_demux_offload__oup_valid_o = 0U;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_demux_offload__DOT____Vlvbound_hd0c0ac91__0 
        = (0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_req__DOT____VdfgRegularize_hd13989f2_0_0));
    if ((5U >= (7U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                      >> 0x15U)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_stream_demux_offload__oup_valid_o 
            = (((~ ((IData)(1U) << (7U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                                          >> 0x15U)))) 
                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_stream_demux_offload__oup_valid_o)) 
               | (0x3fU & ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_demux_offload__DOT____Vlvbound_hd0c0ac91__0) 
                           << (7U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                                     >> 0x15U)))));
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_addr_decode_napot__DOT__i_addr_decode_dync__DOT__matched_rules = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_addr_decode_napot__DOT__dec_valid_o = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_addr_decode_napot__DOT__dec_error_o = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__slave_select = 0U;
    if ((0x10000000ULL == (0xfffffffe0000ULL & (((QData)((IData)(
                                                                 vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_q__dst_data_o[3U])) 
                                                 << 0x10U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_q__dst_data_o[2U])) 
                                                   >> 0x10U))))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_addr_decode_napot__DOT__i_addr_decode_dync__DOT__matched_rules = 1U;
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_addr_decode_napot__DOT__dec_valid_o = 1U;
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_addr_decode_napot__DOT__dec_error_o = 0U;
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__slave_select = 1U;
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_addr_decode_napot__DOT__i_addr_decode_dync__DOT__matched_rules = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_addr_decode_napot__DOT__dec_valid_o = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_addr_decode_napot__DOT__dec_error_o = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__slave_select = 0U;
    if ((0x10000000ULL == (0xfffffffe0000ULL & (((QData)((IData)(
                                                                 vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_q__dst_data_o[3U])) 
                                                 << 0x10U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_q__dst_data_o[2U])) 
                                                   >> 0x10U))))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_addr_decode_napot__DOT__i_addr_decode_dync__DOT__matched_rules = 1U;
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_addr_decode_napot__DOT__dec_valid_o = 1U;
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_addr_decode_napot__DOT__dec_error_o = 0U;
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__slave_select = 1U;
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__i_snitch_lsu__DOT__ld_result 
        = ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__i_snitch_lsu__DOT__laq_out))
            ? ((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__i_snitch_lsu__DOT__laq_out))
                ? vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__i_snitch_lsu__DOT__shifted_data
                : (((QData)((IData)((- (IData)((1U 
                                                & ((IData)(
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__i_snitch_lsu__DOT__shifted_data 
                                                            >> 0x1fU)) 
                                                   & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__i_snitch_lsu__DOT__laq_out) 
                                                      >> 5U))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__i_snitch_lsu__DOT__shifted_data))))
            : ((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__i_snitch_lsu__DOT__laq_out))
                ? (((- (QData)((IData)((1U & ((IData)(
                                                      (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__i_snitch_lsu__DOT__shifted_data 
                                                       >> 0xfU)) 
                                              & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__i_snitch_lsu__DOT__laq_out) 
                                                 >> 5U)))))) 
                    << 0x10U) | (QData)((IData)((0xffffU 
                                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__i_snitch_lsu__DOT__shifted_data)))))
                : (((- (QData)((IData)((1U & ((IData)(
                                                      (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__i_snitch_lsu__DOT__shifted_data 
                                                       >> 7U)) 
                                              & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__i_snitch_lsu__DOT__laq_out) 
                                                 >> 5U)))))) 
                    << 8U) | (QData)((IData)((0xffU 
                                              & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__i_snitch_lsu__DOT__shifted_data)))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__i_snitch_lsu__DOT__ld_result 
        = ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__i_snitch_lsu__DOT__laq_out))
            ? ((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__i_snitch_lsu__DOT__laq_out))
                ? vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__i_snitch_lsu__DOT__shifted_data
                : (((QData)((IData)((- (IData)((1U 
                                                & ((IData)(
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__i_snitch_lsu__DOT__shifted_data 
                                                            >> 0x1fU)) 
                                                   & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__i_snitch_lsu__DOT__laq_out) 
                                                      >> 5U))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__i_snitch_lsu__DOT__shifted_data))))
            : ((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__i_snitch_lsu__DOT__laq_out))
                ? (((- (QData)((IData)((1U & ((IData)(
                                                      (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__i_snitch_lsu__DOT__shifted_data 
                                                       >> 0xfU)) 
                                              & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__i_snitch_lsu__DOT__laq_out) 
                                                 >> 5U)))))) 
                    << 0x10U) | (QData)((IData)((0xffffU 
                                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__i_snitch_lsu__DOT__shifted_data)))))
                : (((- (QData)((IData)((1U & ((IData)(
                                                      (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__i_snitch_lsu__DOT__shifted_data 
                                                       >> 7U)) 
                                              & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__i_snitch_lsu__DOT__laq_out) 
                                                 >> 5U)))))) 
                    << 8U) | (QData)((IData)((0xffU 
                                              & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__i_snitch_lsu__DOT__shifted_data)))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__itlb_valid 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__trans_active) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_snitch__inst_valid_o));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__is_4mega_exp 
        = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__tag_q 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__hit));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__pte 
        = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__pte_q 
           & (- (QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__hit))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__itlb_valid 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__trans_active) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_snitch__inst_valid_o));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__is_4mega_exp 
        = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__tag_q 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__hit));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__pte 
        = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__pte_q 
           & (- (QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__hit))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_snitch_ptw__DOT__lvl_d 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_snitch_ptw__DOT__lvl_q;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_snitch_ptw__DOT__is_4mega_d 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_snitch_ptw__DOT__is_4mega_q;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_snitch_ptw__DOT__pte_d 
        = ((0x3ffffffffc0ULL & (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_p__dst_data_o[1U])) 
                                 << 0x1bU) | (0x7ffffffffffffc0ULL 
                                              & ((QData)((IData)(
                                                                 vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_p__dst_data_o[0U])) 
                                                 >> 5U)))) 
           | (QData)((IData)(((0x30U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_p__dst_data_o[0U] 
                                        >> 3U)) | (0xfU 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_p__dst_data_o[0U] 
                                                      >> 2U))))));
    if ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_snitch_ptw__DOT__state_q))) {
        if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_snitch_ptw__DOT__state_q)))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_snitch_ptw__DOT__is_4mega_d = 0U;
            if ((2U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__ptw_rsp[0U])) {
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_snitch_ptw__DOT__lvl_d 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_snitch_ptw__DOT__lvl_d)));
                if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_snitch_ptw__DOT____VdfgExtracted_heff16bf3__0)))) {
                    if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_snitch_ptw__DOT____VdfgExtracted_he731917c__0) {
                        if ((1U > (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_snitch_ptw__DOT__lvl_q))) {
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_snitch_ptw__DOT__is_4mega_d = 1U;
                        }
                    }
                }
                if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_snitch_ptw__DOT____VdfgExtracted_heff16bf3__0) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_snitch_ptw__DOT__pte_d 
                        = (0x3ffffffffefULL & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_snitch_ptw__DOT__pte_d);
                } else if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_snitch_ptw__DOT____VdfgExtracted_he731917c__0) {
                    if ((1U > (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_snitch_ptw__DOT__lvl_q))) {
                        if ((0U != (0x3ffU & (IData)(
                                                     (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_snitch_ptw__DOT__pte_d 
                                                      >> 6U))))) {
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_snitch_ptw__DOT__pte_d 
                                = (0x3ffffffffefULL 
                                   & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_snitch_ptw__DOT__pte_d);
                        }
                    }
                }
                if ((4U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__ptw_rsp[0U])) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_snitch_ptw__DOT__pte_d 
                        = (0x3ffffffffefULL & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_snitch_ptw__DOT__pte_d);
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_snitch_ptw__DOT__state_q)))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_snitch_ptw__DOT__lvl_d = 0U;
        }
        if ((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_snitch_ptw__DOT__state_q))) {
            if ((2U <= (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_snitch_ptw__DOT__lvl_q))) {
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_snitch_ptw__DOT__pte_d 
                    = (0x3ffffffffefULL & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_snitch_ptw__DOT__pte_d);
            }
        }
    }
    __Vfunc_to_axi_amo__7__amo = (0xfU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__ptw_to_axi_req[2U] 
                                          >> 0xdU));
    __Vfunc_to_axi_amo__7__result = ((8U & (IData)(__Vfunc_to_axi_amo__7__amo))
                                      ? ((4U & (IData)(__Vfunc_to_axi_amo__7__amo))
                                          ? 0U : ((2U 
                                                   & (IData)(__Vfunc_to_axi_amo__7__amo))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_to_axi_amo__7__amo))
                                                    ? 0x27U
                                                    : 0x25U)))
                                      : ((4U & (IData)(__Vfunc_to_axi_amo__7__amo))
                                          ? ((2U & (IData)(__Vfunc_to_axi_amo__7__amo))
                                              ? ((1U 
                                                  & (IData)(__Vfunc_to_axi_amo__7__amo))
                                                  ? 0x26U
                                                  : 0x24U)
                                              : ((1U 
                                                  & (IData)(__Vfunc_to_axi_amo__7__amo))
                                                  ? 0x22U
                                                  : 0x23U))
                                          : ((2U & (IData)(__Vfunc_to_axi_amo__7__amo))
                                              ? ((1U 
                                                  & (IData)(__Vfunc_to_axi_amo__7__amo))
                                                  ? 0x21U
                                                  : 0x20U)
                                              : ((1U 
                                                  & (IData)(__Vfunc_to_axi_amo__7__amo))
                                                  ? 0x30U
                                                  : 0U))));
    __Vfunc_to_axi_amo__7__Vfuncout = __Vfunc_to_axi_amo__7__result;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_ptw__axi_req_o[5U] 
        = ((0xfffffe07U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_ptw__axi_req_o[5U]) 
           | ((IData)(__Vfunc_to_axi_amo__7__Vfuncout) 
              << 3U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_to_axi_ptw__DOT__write_data 
        = (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__ptw_to_axi_req[2U])) 
            << 0x33U) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__ptw_to_axi_req[1U])) 
                          << 0x13U) | ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__ptw_to_axi_req[0U])) 
                                       >> 0xdU)));
    if ((3U == (0xfU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__ptw_to_axi_req[2U] 
                        >> 0xdU)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_to_axi_ptw__DOT__write_data 
            = (~ (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__ptw_to_axi_req[2U])) 
                   << 0x33U) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__ptw_to_axi_req[1U])) 
                                 << 0x13U) | ((QData)((IData)(
                                                              vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__ptw_to_axi_req[0U])) 
                                              >> 0xdU))));
    }
    __Vfunc_is_amo__6__amo = (0xfU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__ptw_to_axi_req[2U] 
                                      >> 0xdU));
    {
        if ((((((((((1U == (IData)(__Vfunc_is_amo__6__amo)) 
                    | (2U == (IData)(__Vfunc_is_amo__6__amo))) 
                   | (3U == (IData)(__Vfunc_is_amo__6__amo))) 
                  | (4U == (IData)(__Vfunc_is_amo__6__amo))) 
                 | (5U == (IData)(__Vfunc_is_amo__6__amo))) 
                | (6U == (IData)(__Vfunc_is_amo__6__amo))) 
               | (7U == (IData)(__Vfunc_is_amo__6__amo))) 
              | (8U == (IData)(__Vfunc_is_amo__6__amo))) 
             | (9U == (IData)(__Vfunc_is_amo__6__amo)))) {
            vlSelf->__Vfunc_is_amo__6__Vfuncout = 1U;
            goto __Vlabel7;
        } else {
            vlSelf->__Vfunc_is_amo__6__Vfuncout = 0U;
            goto __Vlabel7;
        }
        __Vlabel7: ;
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_to_axi_ptw__DOT__req_is_amo 
        = vlSelf->__Vfunc_is_amo__6__Vfuncout;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__snax_csr_req_data 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__snax_csr_req_bits_data;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__snax_csr_req_addr 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__snax_csr_req_bits_addr;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__dma_op_name[0U] = 0x616c6964U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__dma_op_name[1U] = 0x496e76U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__dma_op_name[2U] = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__is_dma_op = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__dma_qready = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__acc_pvalid_spill = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__acc_pdata_spill[0U] = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__acc_pdata_spill[1U] = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__acc_pdata_spill[2U] = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__acc_pdata_spill[2U] 
        = (1U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__acc_pdata_spill[2U]);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[0U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_q[0U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[1U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_q[1U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[2U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_q[2U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[3U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_q[3U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[4U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_q[4U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[5U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_q[5U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[6U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_q[6U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[7U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_q[7U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[8U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_q[8U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[9U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_q[9U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[0U] 
        = (0x28U | (0xffffff87U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[0U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[4U] 
        = (0x11000000U | (0x807fffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[4U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_valid = 0U;
    if ((4U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_stream_demux_offload__oup_valid_o))) {
        if ((0x2bU == (0xfe007fffU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                                       << 0x10U) | 
                                      (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
                                       >> 0x10U))))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__dma_op_name[0U] = 0x4d535243U;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__dma_op_name[1U] = 0x44U;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__dma_op_name[2U] = 0U;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__is_dma_op = 1U;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__dma_qready = 1U;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[7U] 
                = ((0x7fffffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[7U]) 
                   | ((IData)((((QData)((IData)((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[1U] 
                                                 >> 0x10U))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[4U] 
                                                              << 0x10U) 
                                                             | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[3U] 
                                                                >> 0x10U)))))) 
                      << 0x1fU));
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[8U] 
                = (((IData)((((QData)((IData)((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[1U] 
                                               >> 0x10U))) 
                              << 0x20U) | (QData)((IData)(
                                                          ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[4U] 
                                                            << 0x10U) 
                                                           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[3U] 
                                                              >> 0x10U)))))) 
                    >> 1U) | ((IData)(((((QData)((IData)(
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[1U] 
                                                          >> 0x10U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[4U] 
                                                            << 0x10U) 
                                                           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[3U] 
                                                              >> 0x10U))))) 
                                       >> 0x20U)) << 0x1fU));
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[9U] 
                = ((0x8000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[9U]) 
                   | (0xffffU & ((IData)(((((QData)((IData)(
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[1U] 
                                                             >> 0x10U))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[4U] 
                                                               << 0x10U) 
                                                              | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[3U] 
                                                                 >> 0x10U))))) 
                                          >> 0x20U)) 
                                 >> 1U)));
        } else if ((0x200002bU == (0xfe007fffU & ((
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                                                   << 0x10U) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
                                                     >> 0x10U))))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__dma_op_name[0U] = 0x4d445354U;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__dma_op_name[1U] = 0x44U;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__dma_op_name[2U] = 0U;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__is_dma_op = 1U;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__dma_qready = 1U;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[6U] 
                = ((0x7fffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[6U]) 
                   | ((IData)((((QData)((IData)((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[1U] 
                                                 >> 0x10U))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[4U] 
                                                              << 0x10U) 
                                                             | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[3U] 
                                                                >> 0x10U)))))) 
                      << 0xfU));
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[7U] 
                = ((0x80000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[7U]) 
                   | (((IData)((((QData)((IData)((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[1U] 
                                                  >> 0x10U))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[4U] 
                                                               << 0x10U) 
                                                              | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[3U] 
                                                                 >> 0x10U)))))) 
                       >> 0x11U) | ((IData)(((((QData)((IData)(
                                                               (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[1U] 
                                                                >> 0x10U))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[4U] 
                                                                  << 0x10U) 
                                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[3U] 
                                                                    >> 0x10U))))) 
                                             >> 0x20U)) 
                                    << 0xfU)));
        } else if (((0x400002bU == (0xfe00707fU & (
                                                   (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                                                    << 0x10U) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
                                                      >> 0x10U)))) 
                    || (0x600002bU == (0xfe00707fU 
                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                                           << 0x10U) 
                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
                                             >> 0x10U)))))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__dma_op_name[0U] = 0x4d435059U;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__dma_op_name[1U] = 0x44U;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__dma_op_name[2U] = 0U;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__is_dma_op = 1U;
            if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__acc_pready_spill) {
                if ((3U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__status_cnt_q))) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__dma_qready 
                        = (3U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__status_cnt_q));
                }
            }
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__proc_fe_inst_decode__DOT__unnamedblk1__DOT__cfg = 0U;
            if ((0x400002bU == (0xfe00707fU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                                                << 0x10U) 
                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
                                                  >> 0x10U))))) {
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__proc_fe_inst_decode__DOT__unnamedblk1__DOT__cfg 
                    = (3U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                             >> 4U));
            } else if ((0x600002bU == (0xfe00707fU 
                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                                           << 0x10U) 
                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
                                             >> 0x10U))))) {
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__proc_fe_inst_decode__DOT__unnamedblk1__DOT__cfg 
                    = (3U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[1U] 
                             >> 0x10U));
            }
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[4U] 
                = ((0x7fffffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[4U]) 
                   | ((IData)((0xffffffffffffULL & 
                               (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[4U])) 
                                 << 0x10U) | ((QData)((IData)(
                                                              vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[3U])) 
                                              >> 0x10U)))) 
                      << 0x1fU));
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[5U] 
                = (((IData)((0xffffffffffffULL & (((QData)((IData)(
                                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[4U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[3U])) 
                                                     >> 0x10U)))) 
                    >> 1U) | ((IData)(((0xffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[4U])) 
                                            << 0x10U) 
                                           | ((QData)((IData)(
                                                              vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[3U])) 
                                              >> 0x10U))) 
                                       >> 0x20U)) << 0x1fU));
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[6U] 
                = ((0xffff8000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[6U]) 
                   | ((IData)(((0xffffffffffffULL & 
                                (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[4U])) 
                                  << 0x10U) | ((QData)((IData)(
                                                               vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[3U])) 
                                               >> 0x10U))) 
                               >> 0x20U)) >> 1U));
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[0U] 
                = ((0xfffffffbU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[0U]) 
                   | (4U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__proc_fe_inst_decode__DOT__unnamedblk1__DOT__cfg) 
                            << 2U)));
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[0U] 
                = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[0U]) 
                   | (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__proc_fe_inst_decode__DOT__unnamedblk1__DOT__cfg) 
                            >> 1U)));
        } else {
            if (((0x800002bU == (0xfe0ff07fU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                                                 << 0x10U) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
                                                   >> 0x10U)))) 
                 || (0xa00002bU == (0xfe0ff07fU & (
                                                   (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                                                    << 0x10U) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
                                                      >> 0x10U)))))) {
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__dma_op_name[0U] = 0x53544154U;
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__dma_op_name[1U] = 0x444dU;
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__dma_op_name[2U] = 0U;
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__is_dma_op = 1U;
                if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__acc_pready_spill) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__dma_qready = 1U;
                }
            } else if ((0xc00002bU == (0xfe007fffU 
                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                                           << 0x10U) 
                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
                                             >> 0x10U))))) {
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__dma_op_name[0U] = 0x4d535452U;
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__dma_op_name[1U] = 0x44U;
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__dma_op_name[2U] = 0U;
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__is_dma_op = 1U;
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__dma_qready = 1U;
            } else if ((0xe00002bU == (0xfff07fffU 
                                       & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                                           << 0x10U) 
                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
                                             >> 0x10U))))) {
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__dma_op_name[0U] = 0x4d524550U;
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__dma_op_name[1U] = 0x44U;
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__dma_op_name[2U] = 0U;
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__is_dma_op = 1U;
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__dma_qready = 1U;
            }
            if ((1U & (~ ((0x800002bU == (0xfe0ff07fU 
                                          & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                                              << 0x10U) 
                                             | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
                                                >> 0x10U)))) 
                          || (0xa00002bU == (0xfe0ff07fU 
                                             & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                                                 << 0x10U) 
                                                | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
                                                   >> 0x10U)))))))) {
                if ((0xc00002bU == (0xfe007fffU & (
                                                   (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                                                    << 0x10U) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
                                                      >> 0x10U))))) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[1U] 
                        = ((0x7fffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[1U]) 
                           | ((IData)((0xffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[2U])) 
                                           << 0x10U) 
                                          | ((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[1U])) 
                                             >> 0x10U)))) 
                              << 0x17U));
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[2U] 
                        = (((IData)((0xffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[2U])) 
                                         << 0x10U) 
                                        | ((QData)((IData)(
                                                           vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[1U])) 
                                           >> 0x10U)))) 
                            >> 9U) | ((IData)(((0xffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[2U])) 
                                                    << 0x10U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[1U])) 
                                                      >> 0x10U))) 
                                               >> 0x20U)) 
                                      << 0x17U));
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[3U] 
                        = (((0x7fff80U & ((IData)((0xffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[4U])) 
                                                       << 0x10U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[3U])) 
                                                         >> 0x10U)))) 
                                          << 7U)) | 
                            ((IData)(((0xffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[2U])) 
                                           << 0x10U) 
                                          | ((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[1U])) 
                                             >> 0x10U))) 
                                      >> 0x20U)) >> 9U)) 
                           | (0xff800000U & ((IData)(
                                                     (0xffffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[4U])) 
                                                          << 0x10U) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[3U])) 
                                                            >> 0x10U)))) 
                                             << 7U)));
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[4U] 
                        = ((0xff800000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[4U]) 
                           | (((IData)((0xffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[4U])) 
                                            << 0x10U) 
                                           | ((QData)((IData)(
                                                              vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[3U])) 
                                              >> 0x10U)))) 
                               >> 0x19U) | (0x7fff80U 
                                            & ((IData)(
                                                       ((0xffffffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[4U])) 
                                                             << 0x10U) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[3U])) 
                                                               >> 0x10U))) 
                                                        >> 0x20U)) 
                                               << 7U))));
                } else if ((0xe00002bU == (0xfff07fffU 
                                           & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                                               << 0x10U) 
                                              | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
                                                 >> 0x10U))))) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[0U] 
                        = ((0x7fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[0U]) 
                           | ((IData)((0xffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[4U])) 
                                           << 0x10U) 
                                          | ((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[3U])) 
                                             >> 0x10U)))) 
                              << 7U));
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[1U] 
                        = ((0xff800000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[1U]) 
                           | (((IData)((0xffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[4U])) 
                                            << 0x10U) 
                                           | ((QData)((IData)(
                                                              vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[3U])) 
                                              >> 0x10U)))) 
                               >> 0x19U) | ((IData)(
                                                    ((0xffffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[4U])) 
                                                          << 0x10U) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[3U])) 
                                                            >> 0x10U))) 
                                                     >> 0x20U)) 
                                            << 7U)));
                }
            }
        }
        if ((0x2bU != (0xfe007fffU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                                       << 0x10U) | 
                                      (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
                                       >> 0x10U))))) {
            if ((0x200002bU != (0xfe007fffU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                                                << 0x10U) 
                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
                                                  >> 0x10U))))) {
                if (((0x400002bU == (0xfe00707fU & 
                                     ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                                       << 0x10U) | 
                                      (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
                                       >> 0x10U)))) 
                     || (0x600002bU == (0xfe00707fU 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                                            << 0x10U) 
                                           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
                                              >> 0x10U)))))) {
                    if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__acc_pready_spill) {
                        if ((3U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__status_cnt_q))) {
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__acc_pvalid_spill = 1U;
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__acc_pdata_spill[0U] 
                                = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__next_id;
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__acc_pdata_spill[1U] = 0U;
                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__acc_pdata_spill[2U] 
                                = (0x3eU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                                            >> 0xfU));
                        }
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_valid = 1U;
                    }
                } else if (((0x800002bU == (0xfe0ff07fU 
                                            & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                                                << 0x10U) 
                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
                                                  >> 0x10U)))) 
                            || (0xa00002bU == (0xfe0ff07fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                                                   << 0x10U) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
                                                     >> 0x10U)))))) {
                    if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__acc_pready_spill) {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__acc_pvalid_spill = 1U;
                    }
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__proc_fe_inst_decode__DOT__unnamedblk2__DOT__status = 0U;
                    if ((0x800002bU == (0xfe0ff07fU 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                                            << 0x10U) 
                                           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
                                              >> 0x10U))))) {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__proc_fe_inst_decode__DOT__unnamedblk2__DOT__status 
                            = (3U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                                     >> 4U));
                    } else if ((0xa00002bU == (0xfe0ff07fU 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                                                   << 0x10U) 
                                                  | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
                                                     >> 0x10U))))) {
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__proc_fe_inst_decode__DOT__unnamedblk2__DOT__status 
                            = (3U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[1U] 
                                     >> 0x10U));
                    }
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__acc_pdata_spill[2U] 
                        = (0x3eU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                                    >> 0xfU));
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__acc_pdata_spill[0U] 
                        = (IData)(((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__proc_fe_inst_decode__DOT__unnamedblk2__DOT__status))
                                    ? ((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__proc_fe_inst_decode__DOT__unnamedblk2__DOT__status))
                                        ? (QData)((IData)(
                                                          (3U 
                                                           == (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__status_cnt_q))))
                                        : (QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__axi_dma_busy_o)))
                                    : ((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__proc_fe_inst_decode__DOT__unnamedblk2__DOT__status))
                                        ? (QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__next_id))
                                        : (QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__completed_id)))));
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__acc_pdata_spill[1U] 
                        = (IData)((((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__proc_fe_inst_decode__DOT__unnamedblk2__DOT__status))
                                     ? ((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__proc_fe_inst_decode__DOT__unnamedblk2__DOT__status))
                                         ? (QData)((IData)(
                                                           (3U 
                                                            == (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__status_cnt_q))))
                                         : (QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__axi_dma_busy_o)))
                                     : ((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__proc_fe_inst_decode__DOT__unnamedblk2__DOT__status))
                                         ? (QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__next_id))
                                         : (QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__completed_id)))) 
                                   >> 0x20U));
                }
            }
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__snax_csr_req_bits_write 
        = ((((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_stream_demux_offload__oup_valid_o) 
                    >> 5U)) && (1U & (~ ((((0x2073U 
                                            == (0x707fU 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
                                                   >> 0x10U))) 
                                           || (0x6073U 
                                               == (0x707fU 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
                                                      >> 0x10U)))) 
                                          || (0x3073U 
                                              == (0x707fU 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
                                                     >> 0x10U)))) 
                                         || (0x7073U 
                                             == (0x707fU 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
                                                    >> 0x10U))))))) 
            << 1U) | ((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_stream_demux_offload__oup_valid_o) 
                             >> 5U)) && (1U & (~ ((
                                                   ((0x2073U 
                                                     == 
                                                     (0x707fU 
                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
                                                         >> 0x10U))) 
                                                    || (0x6073U 
                                                        == 
                                                        (0x707fU 
                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
                                                            >> 0x10U)))) 
                                                   || (0x3073U 
                                                       == 
                                                       (0x707fU 
                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
                                                           >> 0x10U)))) 
                                                  || (0x7073U 
                                                      == 
                                                      (0x707fU 
                                                       & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
                                                          >> 0x10U))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__snax_csr_req_valid 
        = ((2U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_stream_demux_offload__oup_valid_o) 
                  >> 4U)) | (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_stream_demux_offload__oup_valid_o) 
                                   >> 5U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[0U] 
        = (0xfffffffdU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[0U]);
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[0U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_q__dst_data_o[0U];
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[1U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_q__dst_data_o[1U];
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[2U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_q__dst_data_o[2U];
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[3U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_q__dst_data_o[3U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[0U] 
        = ((3U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[0U]) 
           | (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[0U] 
              << 2U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[1U] 
        = ((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[0U] 
            >> 0x1eU) | (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[1U] 
                         << 2U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[2U] 
        = ((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[1U] 
            >> 0x1eU) | (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[2U] 
                         << 2U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[3U] 
        = ((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[2U] 
            >> 0x1eU) | (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[3U] 
                         << 2U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[4U] 
        = ((0xfffffffcU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[4U]) 
           | (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[3U] 
              >> 0x1eU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h36d10ee1__0 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT__fwd) 
           & (2U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT____VdfgRegularize_h28f62d58_0_0)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[0U] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[0U]) 
           | (IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h36d10ee1__0));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[4U] 
        = (0xfffffff7U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[4U]);
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[0U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_q__dst_data_o[0U];
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[1U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_q__dst_data_o[1U];
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[2U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_q__dst_data_o[2U];
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[3U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_q__dst_data_o[3U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[4U] 
        = ((0xfU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[4U]) 
           | (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[0U] 
              << 4U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[5U] 
        = ((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[0U] 
            >> 0x1cU) | (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[1U] 
                         << 4U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[6U] 
        = ((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[1U] 
            >> 0x1cU) | (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[2U] 
                         << 4U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[7U] 
        = ((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[2U] 
            >> 0x1cU) | (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[3U] 
                         << 4U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[8U] 
        = (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[3U] 
           >> 0x1cU);
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h36d10ee1__0 
        = (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT__fwd) 
            >> 1U) & (2U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT____VdfgRegularize_h28f62d58_0_0)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[4U] 
        = ((0xfffffffbU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[4U]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h36d10ee1__0) 
              << 2U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h92ffebca__0 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT__req_valid;
    if ((0x103U >= ((IData)(1U) + (0x1ffU & ((IData)(0x82U) 
                                             * (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__slave_select)))))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[(
                                                                                ((IData)(1U) 
                                                                                + 
                                                                                (0x1ffU 
                                                                                & ((IData)(0x82U) 
                                                                                * (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__slave_select)))) 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(1U) 
                                             + (0x1ffU 
                                                & ((IData)(0x82U) 
                                                   * (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__slave_select))))))) 
                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[
                (((IData)(1U) + (0x1ffU & ((IData)(0x82U) 
                                           * (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__slave_select)))) 
                 >> 5U)]) | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h92ffebca__0) 
                             << (0x1fU & ((IData)(1U) 
                                          + (0x1ffU 
                                             & ((IData)(0x82U) 
                                                * (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__slave_select)))))));
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[0U] 
        = (0xfffffffdU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[0U]);
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[0U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_q__dst_data_o[0U];
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[1U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_q__dst_data_o[1U];
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[2U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_q__dst_data_o[2U];
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[3U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_q__dst_data_o[3U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[0U] 
        = ((3U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[0U]) 
           | (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[0U] 
              << 2U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[1U] 
        = ((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[0U] 
            >> 0x1eU) | (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[1U] 
                         << 2U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[2U] 
        = ((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[1U] 
            >> 0x1eU) | (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[2U] 
                         << 2U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[3U] 
        = ((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[2U] 
            >> 0x1eU) | (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[3U] 
                         << 2U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[4U] 
        = ((0xfffffffcU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[4U]) 
           | (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[3U] 
              >> 0x1eU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h36d10ee1__0 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT__fwd) 
           & (2U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT____VdfgRegularize_h28f62d58_0_0)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[0U] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[0U]) 
           | (IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h36d10ee1__0));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[4U] 
        = (0xfffffff7U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[4U]);
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[0U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_q__dst_data_o[0U];
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[1U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_q__dst_data_o[1U];
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[2U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_q__dst_data_o[2U];
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[3U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT____Vcellout__i_isochronous_spill_register_q__dst_data_o[3U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[4U] 
        = ((0xfU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[4U]) 
           | (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[0U] 
              << 4U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[5U] 
        = ((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[0U] 
            >> 0x1cU) | (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[1U] 
                         << 4U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[6U] 
        = ((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[1U] 
            >> 0x1cU) | (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[2U] 
                         << 4U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[7U] 
        = ((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[2U] 
            >> 0x1cU) | (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[3U] 
                         << 4U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[8U] 
        = (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h230f87d8__0[3U] 
           >> 0x1cU);
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h36d10ee1__0 
        = (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT__fwd) 
            >> 1U) & (2U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_iso__DOT__i_isochronous_spill_register_p__DOT____VdfgRegularize_h28f62d58_0_0)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[4U] 
        = ((0xfffffffbU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[4U]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h36d10ee1__0) 
              << 2U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h92ffebca__0 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT__req_valid;
    if ((0x103U >= ((IData)(1U) + (0x1ffU & ((IData)(0x82U) 
                                             * (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__slave_select)))))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[(
                                                                                ((IData)(1U) 
                                                                                + 
                                                                                (0x1ffU 
                                                                                & ((IData)(0x82U) 
                                                                                * (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__slave_select)))) 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(1U) 
                                             + (0x1ffU 
                                                & ((IData)(0x82U) 
                                                   * (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__slave_select))))))) 
                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[
                (((IData)(1U) + (0x1ffU & ((IData)(0x82U) 
                                           * (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__slave_select)))) 
                 >> 5U)]) | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_demux__DOT____Vlvbound_h92ffebca__0) 
                             << (0x1fU & ((IData)(1U) 
                                          + (0x1ffU 
                                             & ((IData)(0x82U) 
                                                * (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__slave_select)))))));
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT____VdfgRegularize_h1d3ec990_0_3 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__itlb_valid) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__hit));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__access_allowed 
        = (IData)(((0x15ULL == (0x15ULL & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__pte)) 
                   & ((((IData)((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__pte 
                                 >> 3U)) & (0U == (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__priv_lvl_q))) 
                       | (1U == (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__priv_lvl_q))) 
                      & (((~ (IData)((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__pte 
                                      >> 3U))) & (1U 
                                                  == (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__priv_lvl_q))) 
                         | (0U == (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__priv_lvl_q))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_snitch__inst_addr_o 
        = (((((- (QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__trans_active))) 
              << 0xcU) & (((QData)((IData)((0x3ffffffU 
                                            & (IData)(
                                                      (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__pte 
                                                       >> 0x10U))))) 
                           << 0x16U) | ((QData)((IData)(
                                                        (0x3ffU 
                                                         & (((IData)(
                                                                     (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__pte 
                                                                      >> 6U)) 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__is_4mega_exp)))))) 
                                                            | ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__pc_q 
                                                                >> 0xcU) 
                                                               & (- (IData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__is_4mega_exp)))))))) 
                                        << 0xcU))) 
            | (((~ (- (QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__trans_active)))) 
                & (QData)((IData)((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__pc_q 
                                   >> 0xcU)))) << 0xcU)) 
           | (QData)((IData)((0xfffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__pc_q))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT____VdfgRegularize_h02df225c_0_3 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__itlb_valid) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__hit));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__access_allowed 
        = (IData)(((0x15ULL == (0x15ULL & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__pte)) 
                   & ((((IData)((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__pte 
                                 >> 3U)) & (0U == (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__priv_lvl_q))) 
                       | (1U == (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__priv_lvl_q))) 
                      & (((~ (IData)((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__pte 
                                      >> 3U))) & (1U 
                                                  == (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__priv_lvl_q))) 
                         | (0U == (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__priv_lvl_q))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_snitch__inst_addr_o 
        = (((((- (QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__trans_active))) 
              << 0xcU) & (((QData)((IData)((0x3ffffffU 
                                            & (IData)(
                                                      (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__pte 
                                                       >> 0x10U))))) 
                           << 0x16U) | ((QData)((IData)(
                                                        (0x3ffU 
                                                         & (((IData)(
                                                                     (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__pte 
                                                                      >> 6U)) 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__is_4mega_exp)))))) 
                                                            | ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__pc_q 
                                                                >> 0xcU) 
                                                               & (- (IData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_itlb__DOT__i_snitch_l0_tlb_inst__DOT__is_4mega_exp)))))))) 
                                        << 0xcU))) 
            | (((~ (- (QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__trans_active)))) 
                & (QData)((IData)((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__pc_q 
                                   >> 0xcU)))) << 0xcU)) 
           | (QData)((IData)((0xfffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__pc_q))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_to_axi_ptw__DOT__is_write 
        = (1U & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_ptw__DOT__req_payload_q[2U] 
                  >> 0xfU) | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_to_axi_ptw__DOT__req_is_amo) 
                              | (0xbU == (0xfU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_ptw__DOT__req_payload_q[2U] 
                                                  >> 0xbU))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_req_data 
        = ((0xffffffff00000000ULL & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_req_data) 
           | (IData)((IData)(((0xaU <= (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__snax_csr_req_addr))
                               ? 0U : (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__snax_csr_req_data)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_req_data 
        = ((0xffffffffULL & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_req_data) 
           | ((QData)((IData)(((0xaU <= (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__snax_csr_req_addr))
                                ? (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__snax_csr_req_data)
                                : 0U))) << 0x20U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_req_addr 
        = ((0xffffffff00000000ULL & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_req_addr) 
           | (IData)((IData)(((0xaU <= (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__snax_csr_req_addr))
                               ? 0U : (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__snax_csr_req_addr)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_req_addr 
        = ((0xffffffffULL & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_req_addr) 
           | ((QData)((IData)(((0xaU <= (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__snax_csr_req_addr))
                                ? ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__snax_csr_req_addr) 
                                   - (IData)(0xaU))
                                : 0U))) << 0x20U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_spill_register_dma_resp__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__acc_pvalid_spill) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__acc_pready_spill));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__req_fifo_push 
        = ((3U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__status_cnt_q)) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_valid));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__snax_csr_req_write 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__snax_csr_req_bits_write;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__snax_csr_req_valid 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__snax_csr_req_valid;
    __Vtemp_45[0U] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[0U];
    __Vtemp_45[1U] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[1U];
    __Vtemp_45[2U] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[2U];
    __Vtemp_45[3U] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[3U];
    __Vtemp_45[4U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[0U] 
                       << 2U) | (3U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[4U]));
    __Vtemp_45[5U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[0U] 
                       >> 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[1U] 
                                    << 2U));
    __Vtemp_45[6U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[1U] 
                       >> 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[2U] 
                                    << 2U));
    __Vtemp_45[7U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[2U] 
                       >> 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[3U] 
                                    << 2U));
    __Vtemp_45[8U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[3U] 
                       >> 0x1eU) | (0xcU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[4U] 
                                            << 2U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT____VdfgRegularize_hac19232a_0_1 
        = ((0x103U >= (0x1ffU & ((IData)(0x82U) * (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__idx_rsp)))) 
           && (1U & (__Vtemp_45[(0xfU & (((IData)(0x82U) 
                                          * (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__idx_rsp)) 
                                         >> 5U))] >> 
                     (0x1fU & ((IData)(0x82U) * (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__idx_rsp))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((0xfffffffeU & (((2U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__gen_multi_port__DOT__i_resp_fifo__DOT__status_cnt_q)) 
                                << 1U) & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[0U])) 
               | ((2U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__gen_multi_port__DOT__i_resp_fifo__DOT__status_cnt_q)) 
                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[0U] 
                     >> 1U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__itlb_trans_valid 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__trans_active) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT____VdfgRegularize_h1d3ec990_0_3));
    __Vfunc_is_inside_cacheable_regions__20__address 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_snitch__inst_addr_o;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x33U)) {
        __Vfunc_is_inside_cacheable_regions__20__cfg[__Vilp1] 
            = Vtestharness__ConstPool__CONST_h81a35695_0[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vfunc_is_inside_cacheable_regions__20__pass = 0U;
    __Vfunc_is_inside_cacheable_regions__20__unnamedblk3__DOT__k = 0U;
    while ((__Vfunc_is_inside_cacheable_regions__20__unnamedblk3__DOT__k 
            < __Vfunc_is_inside_cacheable_regions__20__cfg[0x19U])) {
        vlSelf->__Vfunc_range_check__21__address = __Vfunc_is_inside_cacheable_regions__20__address;
        vlSelf->__Vfunc_range_check__21__mask = ((0x67fU 
                                                  >= 
                                                  ((IData)(0x1a0U) 
                                                   + 
                                                   (0x1ffU 
                                                    & ((IData)(0x60U) 
                                                       * __Vfunc_is_inside_cacheable_regions__20__unnamedblk3__DOT__k))))
                                                  ? 
                                                 (0xffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      __Vfunc_is_inside_cacheable_regions__20__cfg[
                                                                      (((IData)(0x1cfU) 
                                                                        + 
                                                                        (0x1ffU 
                                                                         & ((IData)(0x60U) 
                                                                            * __Vfunc_is_inside_cacheable_regions__20__unnamedblk3__DOT__k))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x1a0U) 
                                                            + 
                                                            (0x1ffU 
                                                             & ((IData)(0x60U) 
                                                                * __Vfunc_is_inside_cacheable_regions__20__unnamedblk3__DOT__k)))))
                                                        ? 0x20U
                                                        : 
                                                       ((IData)(0x40U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x1a0U) 
                                                            + 
                                                            (0x1ffU 
                                                             & ((IData)(0x60U) 
                                                                * __Vfunc_is_inside_cacheable_regions__20__unnamedblk3__DOT__k))))))) 
                                                     | (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(0x1a0U) 
                                                              + 
                                                              (0x1ffU 
                                                               & ((IData)(0x60U) 
                                                                  * __Vfunc_is_inside_cacheable_regions__20__unnamedblk3__DOT__k)))))
                                                          ? 0ULL
                                                          : 
                                                         ((QData)((IData)(
                                                                          __Vfunc_is_inside_cacheable_regions__20__cfg[
                                                                          (((IData)(0x1bfU) 
                                                                            + 
                                                                            (0x1ffU 
                                                                             & ((IData)(0x60U) 
                                                                                * __Vfunc_is_inside_cacheable_regions__20__unnamedblk3__DOT__k))) 
                                                                           >> 5U)])) 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(0x1a0U) 
                                                               + 
                                                               (0x1ffU 
                                                                & ((IData)(0x60U) 
                                                                   * __Vfunc_is_inside_cacheable_regions__20__unnamedblk3__DOT__k))))))) 
                                                        | ((QData)((IData)(
                                                                           __Vfunc_is_inside_cacheable_regions__20__cfg[
                                                                           (((IData)(0x1a0U) 
                                                                             + 
                                                                             (0x1ffU 
                                                                              & ((IData)(0x60U) 
                                                                                * __Vfunc_is_inside_cacheable_regions__20__unnamedblk3__DOT__k))) 
                                                                            >> 5U)])) 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(0x1a0U) 
                                                               + 
                                                               (0x1ffU 
                                                                & ((IData)(0x60U) 
                                                                   * __Vfunc_is_inside_cacheable_regions__20__unnamedblk3__DOT__k))))))))
                                                  : 0ULL);
        vlSelf->__Vfunc_range_check__21__base = ((0x67fU 
                                                  >= 
                                                  ((IData)(0x1d0U) 
                                                   + 
                                                   (0x1ffU 
                                                    & ((IData)(0x60U) 
                                                       * __Vfunc_is_inside_cacheable_regions__20__unnamedblk3__DOT__k))))
                                                  ? 
                                                 (0xffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      __Vfunc_is_inside_cacheable_regions__20__cfg[
                                                                      (((IData)(0x1ffU) 
                                                                        + 
                                                                        (0x1ffU 
                                                                         & ((IData)(0x60U) 
                                                                            * __Vfunc_is_inside_cacheable_regions__20__unnamedblk3__DOT__k))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x1d0U) 
                                                            + 
                                                            (0x1ffU 
                                                             & ((IData)(0x60U) 
                                                                * __Vfunc_is_inside_cacheable_regions__20__unnamedblk3__DOT__k)))))
                                                        ? 0x20U
                                                        : 
                                                       ((IData)(0x40U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x1d0U) 
                                                            + 
                                                            (0x1ffU 
                                                             & ((IData)(0x60U) 
                                                                * __Vfunc_is_inside_cacheable_regions__20__unnamedblk3__DOT__k))))))) 
                                                     | (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(0x1d0U) 
                                                              + 
                                                              (0x1ffU 
                                                               & ((IData)(0x60U) 
                                                                  * __Vfunc_is_inside_cacheable_regions__20__unnamedblk3__DOT__k)))))
                                                          ? 0ULL
                                                          : 
                                                         ((QData)((IData)(
                                                                          __Vfunc_is_inside_cacheable_regions__20__cfg[
                                                                          (((IData)(0x1efU) 
                                                                            + 
                                                                            (0x1ffU 
                                                                             & ((IData)(0x60U) 
                                                                                * __Vfunc_is_inside_cacheable_regions__20__unnamedblk3__DOT__k))) 
                                                                           >> 5U)])) 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(0x1d0U) 
                                                               + 
                                                               (0x1ffU 
                                                                & ((IData)(0x60U) 
                                                                   * __Vfunc_is_inside_cacheable_regions__20__unnamedblk3__DOT__k))))))) 
                                                        | ((QData)((IData)(
                                                                           __Vfunc_is_inside_cacheable_regions__20__cfg[
                                                                           (((IData)(0x1d0U) 
                                                                             + 
                                                                             (0x1ffU 
                                                                              & ((IData)(0x60U) 
                                                                                * __Vfunc_is_inside_cacheable_regions__20__unnamedblk3__DOT__k))) 
                                                                            >> 5U)])) 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(0x1d0U) 
                                                               + 
                                                               (0x1ffU 
                                                                & ((IData)(0x60U) 
                                                                   * __Vfunc_is_inside_cacheable_regions__20__unnamedblk3__DOT__k))))))))
                                                  : 0ULL);
        vlSelf->__Vfunc_range_check__21__Vfuncout = 
            ((vlSelf->__Vfunc_range_check__21__address 
              & vlSelf->__Vfunc_range_check__21__mask) 
             == (vlSelf->__Vfunc_range_check__21__base 
                 & vlSelf->__Vfunc_range_check__21__mask));
        __Vfunc_is_inside_cacheable_regions__20__pass 
            = (((~ ((IData)(1U) << (3U & __Vfunc_is_inside_cacheable_regions__20__unnamedblk3__DOT__k))) 
                & (IData)(__Vfunc_is_inside_cacheable_regions__20__pass)) 
               | (0xfU & ((IData)(vlSelf->__Vfunc_range_check__21__Vfuncout) 
                          << (3U & __Vfunc_is_inside_cacheable_regions__20__unnamedblk3__DOT__k))));
        __Vfunc_is_inside_cacheable_regions__20__unnamedblk3__DOT__k 
            = ((IData)(1U) + __Vfunc_is_inside_cacheable_regions__20__unnamedblk3__DOT__k);
    }
    __Vfunc_is_inside_cacheable_regions__20__Vfuncout 
        = (0U != (IData)(__Vfunc_is_inside_cacheable_regions__20__pass));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_snitch__inst_cacheable_o 
        = __Vfunc_is_inside_cacheable_regions__20__Vfuncout;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__itlb_trans_valid 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__trans_active) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT____VdfgRegularize_h02df225c_0_3));
    __Vfunc_is_inside_cacheable_regions__23__address 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_snitch__inst_addr_o;
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x33U)) {
        __Vfunc_is_inside_cacheable_regions__23__cfg[__Vilp2] 
            = Vtestharness__ConstPool__CONST_h81a35695_0[__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    vlSelf->__Vfunc_is_inside_cacheable_regions__23__pass = 0U;
    __Vfunc_is_inside_cacheable_regions__23__unnamedblk3__DOT__k = 0U;
    while ((__Vfunc_is_inside_cacheable_regions__23__unnamedblk3__DOT__k 
            < __Vfunc_is_inside_cacheable_regions__23__cfg[0x19U])) {
        vlSelf->__Vfunc_range_check__24__address = __Vfunc_is_inside_cacheable_regions__23__address;
        vlSelf->__Vfunc_range_check__24__mask = ((0x67fU 
                                                  >= 
                                                  ((IData)(0x1a0U) 
                                                   + 
                                                   (0x1ffU 
                                                    & ((IData)(0x60U) 
                                                       * __Vfunc_is_inside_cacheable_regions__23__unnamedblk3__DOT__k))))
                                                  ? 
                                                 (0xffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      __Vfunc_is_inside_cacheable_regions__23__cfg[
                                                                      (((IData)(0x1cfU) 
                                                                        + 
                                                                        (0x1ffU 
                                                                         & ((IData)(0x60U) 
                                                                            * __Vfunc_is_inside_cacheable_regions__23__unnamedblk3__DOT__k))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x1a0U) 
                                                            + 
                                                            (0x1ffU 
                                                             & ((IData)(0x60U) 
                                                                * __Vfunc_is_inside_cacheable_regions__23__unnamedblk3__DOT__k)))))
                                                        ? 0x20U
                                                        : 
                                                       ((IData)(0x40U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x1a0U) 
                                                            + 
                                                            (0x1ffU 
                                                             & ((IData)(0x60U) 
                                                                * __Vfunc_is_inside_cacheable_regions__23__unnamedblk3__DOT__k))))))) 
                                                     | (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(0x1a0U) 
                                                              + 
                                                              (0x1ffU 
                                                               & ((IData)(0x60U) 
                                                                  * __Vfunc_is_inside_cacheable_regions__23__unnamedblk3__DOT__k)))))
                                                          ? 0ULL
                                                          : 
                                                         ((QData)((IData)(
                                                                          __Vfunc_is_inside_cacheable_regions__23__cfg[
                                                                          (((IData)(0x1bfU) 
                                                                            + 
                                                                            (0x1ffU 
                                                                             & ((IData)(0x60U) 
                                                                                * __Vfunc_is_inside_cacheable_regions__23__unnamedblk3__DOT__k))) 
                                                                           >> 5U)])) 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(0x1a0U) 
                                                               + 
                                                               (0x1ffU 
                                                                & ((IData)(0x60U) 
                                                                   * __Vfunc_is_inside_cacheable_regions__23__unnamedblk3__DOT__k))))))) 
                                                        | ((QData)((IData)(
                                                                           __Vfunc_is_inside_cacheable_regions__23__cfg[
                                                                           (((IData)(0x1a0U) 
                                                                             + 
                                                                             (0x1ffU 
                                                                              & ((IData)(0x60U) 
                                                                                * __Vfunc_is_inside_cacheable_regions__23__unnamedblk3__DOT__k))) 
                                                                            >> 5U)])) 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(0x1a0U) 
                                                               + 
                                                               (0x1ffU 
                                                                & ((IData)(0x60U) 
                                                                   * __Vfunc_is_inside_cacheable_regions__23__unnamedblk3__DOT__k))))))))
                                                  : 0ULL);
        vlSelf->__Vfunc_range_check__24__base = ((0x67fU 
                                                  >= 
                                                  ((IData)(0x1d0U) 
                                                   + 
                                                   (0x1ffU 
                                                    & ((IData)(0x60U) 
                                                       * __Vfunc_is_inside_cacheable_regions__23__unnamedblk3__DOT__k))))
                                                  ? 
                                                 (0xffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      __Vfunc_is_inside_cacheable_regions__23__cfg[
                                                                      (((IData)(0x1ffU) 
                                                                        + 
                                                                        (0x1ffU 
                                                                         & ((IData)(0x60U) 
                                                                            * __Vfunc_is_inside_cacheable_regions__23__unnamedblk3__DOT__k))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x1d0U) 
                                                            + 
                                                            (0x1ffU 
                                                             & ((IData)(0x60U) 
                                                                * __Vfunc_is_inside_cacheable_regions__23__unnamedblk3__DOT__k)))))
                                                        ? 0x20U
                                                        : 
                                                       ((IData)(0x40U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x1d0U) 
                                                            + 
                                                            (0x1ffU 
                                                             & ((IData)(0x60U) 
                                                                * __Vfunc_is_inside_cacheable_regions__23__unnamedblk3__DOT__k))))))) 
                                                     | (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(0x1d0U) 
                                                              + 
                                                              (0x1ffU 
                                                               & ((IData)(0x60U) 
                                                                  * __Vfunc_is_inside_cacheable_regions__23__unnamedblk3__DOT__k)))))
                                                          ? 0ULL
                                                          : 
                                                         ((QData)((IData)(
                                                                          __Vfunc_is_inside_cacheable_regions__23__cfg[
                                                                          (((IData)(0x1efU) 
                                                                            + 
                                                                            (0x1ffU 
                                                                             & ((IData)(0x60U) 
                                                                                * __Vfunc_is_inside_cacheable_regions__23__unnamedblk3__DOT__k))) 
                                                                           >> 5U)])) 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(0x1d0U) 
                                                               + 
                                                               (0x1ffU 
                                                                & ((IData)(0x60U) 
                                                                   * __Vfunc_is_inside_cacheable_regions__23__unnamedblk3__DOT__k))))))) 
                                                        | ((QData)((IData)(
                                                                           __Vfunc_is_inside_cacheable_regions__23__cfg[
                                                                           (((IData)(0x1d0U) 
                                                                             + 
                                                                             (0x1ffU 
                                                                              & ((IData)(0x60U) 
                                                                                * __Vfunc_is_inside_cacheable_regions__23__unnamedblk3__DOT__k))) 
                                                                            >> 5U)])) 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(0x1d0U) 
                                                               + 
                                                               (0x1ffU 
                                                                & ((IData)(0x60U) 
                                                                   * __Vfunc_is_inside_cacheable_regions__23__unnamedblk3__DOT__k))))))))
                                                  : 0ULL);
        vlSelf->__Vfunc_range_check__24__Vfuncout = 
            ((vlSelf->__Vfunc_range_check__24__address 
              & vlSelf->__Vfunc_range_check__24__mask) 
             == (vlSelf->__Vfunc_range_check__24__base 
                 & vlSelf->__Vfunc_range_check__24__mask));
        vlSelf->__Vfunc_is_inside_cacheable_regions__23__pass 
            = (((~ ((IData)(1U) << (3U & __Vfunc_is_inside_cacheable_regions__23__unnamedblk3__DOT__k))) 
                & (IData)(vlSelf->__Vfunc_is_inside_cacheable_regions__23__pass)) 
               | (0xfU & ((IData)(vlSelf->__Vfunc_range_check__24__Vfuncout) 
                          << (3U & __Vfunc_is_inside_cacheable_regions__23__unnamedblk3__DOT__k))));
        __Vfunc_is_inside_cacheable_regions__23__unnamedblk3__DOT__k 
            = ((IData)(1U) + __Vfunc_is_inside_cacheable_regions__23__unnamedblk3__DOT__k);
    }
    vlSelf->__Vfunc_is_inside_cacheable_regions__23__Vfuncout 
        = (0U != (IData)(vlSelf->__Vfunc_is_inside_cacheable_regions__23__pass));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_snitch__inst_cacheable_o 
        = vlSelf->__Vfunc_is_inside_cacheable_regions__23__Vfuncout;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_to_axi_ptw__DOT__stall_write 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_to_axi_ptw__DOT__is_write) 
           & ((3U == (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_to_axi_ptw__DOT__write_cnt_q)) 
              | ((1U < (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_to_axi_ptw__DOT__read_cnt_q)) 
                 | ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_to_axi_ptw__DOT__dec_read_cnt)) 
                    & (1U == (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_to_axi_ptw__DOT__read_cnt_q))))));
    __Vtemp_49[0U] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_csrman_wrapper__DOT__i_snax_dream_csrman_CsrManager__DOT__csr_0;
    __Vtemp_49[1U] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_csrman_wrapper__DOT__i_snax_dream_csrman_CsrManager__DOT__csr_1;
    __Vtemp_49[2U] = (IData)((((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_csrman_wrapper__DOT__i_snax_dream_csrman_CsrManager__DOT__csr_0)) 
                               << 0x20U) | (QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_csrman_wrapper__DOT__i_snax_dream_csrman_CsrManager__DOT__csr_2))));
    __Vtemp_49[3U] = (IData)(((((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_csrman_wrapper__DOT__i_snax_dream_csrman_CsrManager__DOT__csr_0)) 
                                << 0x20U) | (QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_csrman_wrapper__DOT__i_snax_dream_csrman_CsrManager__DOT__csr_2))) 
                              >> 0x20U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_csrman_wrapper__DOT__i_snax_dream_csrman_CsrManager__DOT___GEN_1 
        = ((3U > (IData)((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_req_addr 
                          >> 0x20U))) ? (((0U == (0x1fU 
                                                  & VL_SHIFTL_III(7,7,32, 
                                                                  (3U 
                                                                   & (IData)(
                                                                             (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_req_addr 
                                                                              >> 0x20U))), 5U)))
                                           ? 0U : (
                                                   __Vtemp_49[
                                                   (((IData)(0x1fU) 
                                                     + 
                                                     (0x7fU 
                                                      & VL_SHIFTL_III(7,7,32, 
                                                                      (3U 
                                                                       & (IData)(
                                                                                (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_req_addr 
                                                                                >> 0x20U))), 5U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(7,7,32, 
                                                                     (3U 
                                                                      & (IData)(
                                                                                (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_req_addr 
                                                                                >> 0x20U))), 5U))))) 
                                         | (__Vtemp_49[
                                            (3U & (
                                                   VL_SHIFTL_III(7,7,32, 
                                                                 (3U 
                                                                  & (IData)(
                                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_req_addr 
                                                                             >> 0x20U))), 5U) 
                                                   >> 5U))] 
                                            >> (0x1fU 
                                                & VL_SHIFTL_III(7,7,32, 
                                                                (3U 
                                                                 & (IData)(
                                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_req_addr 
                                                                            >> 0x20U))), 5U))))
            : ((1U & (IData)((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_req_addr 
                              >> 0x20U))) ? (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_reg_ro_set)
                : (IData)((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_reg_ro_set 
                           >> 0x20U))));
    __Vtemp_55[0U] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__csr_manager__DOT__csr_0;
    __Vtemp_55[1U] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__csr_manager__DOT__csr_1;
    __Vtemp_55[2U] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__csr_manager__DOT__csr_2;
    __Vtemp_55[3U] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__csr_manager__DOT__csr_3;
    __Vtemp_55[4U] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__csr_manager__DOT__csr_4;
    __Vtemp_55[5U] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__csr_manager__DOT__csr_5;
    __Vtemp_55[6U] = (IData)((((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__csr_manager__DOT__csr_7)) 
                               << 0x20U) | (QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__csr_manager__DOT__csr_6))));
    __Vtemp_55[7U] = (IData)(((((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__csr_manager__DOT__csr_7)) 
                                << 0x20U) | (QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__csr_manager__DOT__csr_6))) 
                              >> 0x20U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__csr_manager__DOT___GEN_1 
        = ((8U > (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_req_addr))
            ? (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, 
                                              (7U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_req_addr)), 5U)))
                 ? 0U : (__Vtemp_55[(((IData)(0x1fU) 
                                      + (0xffU & VL_SHIFTL_III(8,8,32, 
                                                               (7U 
                                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_req_addr)), 5U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  (7U 
                                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_req_addr)), 5U))))) 
               | (__Vtemp_55[(7U & (VL_SHIFTL_III(8,8,32, 
                                                  (7U 
                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_req_addr)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(8,8,32, 
                                                                 (7U 
                                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_req_addr)), 5U))))
            : ((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_req_addr))
                ? vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__performance_counter
                : (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__cstate)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__gate_clock = 1U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__write_pointer_n 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__write_pointer_q;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__status_cnt_n 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__status_cnt_q;
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__req_fifo_push) 
         & (3U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__gate_clock = 0U;
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__write_pointer_n 
            = ((2U == (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__write_pointer_q))
                ? 0U : (3U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__write_pointer_q))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__req_fifo_pop) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__req_fifo_push) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__req_fifo_pop)) 
          & (3U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__status_cnt_n 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__status_cnt_q;
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_n[0U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_q[0U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_n[1U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_q[1U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_n[2U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_q[2U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_n[3U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_q[3U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_n[4U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_q[4U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_n[5U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_q[5U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_n[6U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_q[6U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_n[7U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_q[7U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_n[8U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_q[8U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_n[9U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_q[9U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_n[0xaU] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_q[0xaU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_n[0xbU] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_q[0xbU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_n[0xcU] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_q[0xcU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_n[0xdU] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_q[0xdU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_n[0xeU] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_q[0xeU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_n[0xfU] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_q[0xfU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_n[0x10U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_q[0x10U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_n[0x11U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_q[0x11U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_n[0x12U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_q[0x12U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_n[0x13U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_q[0x13U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_n[0x14U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_q[0x14U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_n[0x15U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_q[0x15U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_n[0x16U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_q[0x16U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_n[0x17U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_q[0x17U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_n[0x18U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_q[0x18U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_n[0x19U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_q[0x19U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_n[0x1aU] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_q[0x1aU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_n[0x1bU] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_q[0x1bU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_n[0x1cU] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_q[0x1cU];
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__req_fifo_push) 
         & (3U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT____Vlvbound_h56d43ee9__0[0U] 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[0U];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT____Vlvbound_h56d43ee9__0[1U] 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[1U];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT____Vlvbound_h56d43ee9__0[2U] 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[2U];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT____Vlvbound_h56d43ee9__0[3U] 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[3U];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT____Vlvbound_h56d43ee9__0[4U] 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[4U];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT____Vlvbound_h56d43ee9__0[5U] 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[5U];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT____Vlvbound_h56d43ee9__0[6U] 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[6U];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT____Vlvbound_h56d43ee9__0[7U] 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[7U];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT____Vlvbound_h56d43ee9__0[8U] 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[8U];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT____Vlvbound_h56d43ee9__0[9U] 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__twod_req_d[9U];
        if ((0x38fU >= (0x3ffU & ((IData)(0x130U) * (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WW(912,304,(0x3ffU & ((IData)(0x130U) 
                                               * (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__write_pointer_q))), vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT__mem_n, vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_twod_ext__DOT__i_twod_req_fifo_v3__DOT____Vlvbound_h56d43ee9__0);
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_csr_mux_demux__acc_csr_req_wen_o 
        = ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_csr_mux_demux__acc_csr_req_wen_o)) 
           | ((0xaU > (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__snax_csr_req_addr)) 
              & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__snax_csr_req_write)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_csr_mux_demux__acc_csr_req_wen_o 
        = ((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_csr_mux_demux__acc_csr_req_wen_o)) 
           | (((0xaU <= (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__snax_csr_req_addr)) 
               & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__snax_csr_req_write)) 
              << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_csr_mux_demux__acc_csr_req_valid_o 
        = ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_csr_mux_demux__acc_csr_req_valid_o)) 
           | ((0xaU > (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__snax_csr_req_addr)) 
              & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__snax_csr_req_valid)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_csr_mux_demux__acc_csr_req_valid_o 
        = ((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_csr_mux_demux__acc_csr_req_valid_o)) 
           | (((0xaU <= (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__snax_csr_req_addr)) 
               & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__snax_csr_req_valid)) 
              << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_to_axi_core__DOT__r_ready 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT____VdfgRegularize_hac19232a_0_1) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_to_axi_core__DOT__r_valid));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffeU & (((1U <= (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__rr_q)) 
                            << 1U) & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__req_d))) 
           | (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = (0xfffffffeU & (((1U > (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__rr_q)) 
                           << 1U) & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__req_nodes 
        = (IData)((0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__idx_o 
        = (1U & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_csrman_wrapper__DOT__i_snax_dream_csrman_CsrManager__DOT__io_csr_config_in_req_ready_0 
        = (1U & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_csrman_wrapper__DOT__i_snax_dream_csrman_CsrManager__DOT__read_csr_busy)) 
                 & ((~ (((((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_csr_mux_demux__acc_csr_req_wen_o) 
                           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_csr_mux_demux__acc_csr_req_valid_o)) 
                          >> 1U) & (2U == (IData)((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_req_addr 
                                                   >> 0x20U)))) 
                        & ((1U == (IData)((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_req_data 
                                           >> 0x20U))) 
                           | (0U == (IData)((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_req_data 
                                             >> 0x20U)))))) 
                    | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_reg_set_ready))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__csr_manager__DOT__io_csr_config_in_req_ready_0 
        = (1U & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__csr_manager__DOT__read_csr_busy)) 
                 & ((~ ((((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_csr_mux_demux__acc_csr_req_wen_o) 
                          & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_csr_mux_demux__acc_csr_req_valid_o)) 
                         & (7U == (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_req_addr))) 
                        & ((1U == (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_req_data)) 
                           | (0U == (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_req_data))))) 
                    | (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__cstate)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_to_axi_core__DOT__dec_read_cnt 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_to_axi_core__DOT__r_valid) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_to_axi_core__DOT__r_ready));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__idx_o) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__data_nodes[0U] 
            = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[1U] 
                << 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[0U] 
                             >> 2U));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__data_nodes[1U] 
            = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[2U] 
                << 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[1U] 
                             >> 2U));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__data_nodes[2U] 
            = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[3U] 
                << 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[2U] 
                             >> 2U));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__data_nodes[3U] 
            = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[4U] 
                << 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[3U] 
                             >> 2U));
    } else {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__data_nodes[0U] 
            = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[1U] 
                << 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[0U] 
                             >> 2U));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__data_nodes[1U] 
            = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[2U] 
                << 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[1U] 
                             >> 2U));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__data_nodes[2U] 
            = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[3U] 
                << 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[2U] 
                             >> 2U));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__data_nodes[3U] 
            = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[4U] 
                << 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[3U] 
                             >> 2U));
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_csrman_wrapper__DOT__i_snax_dream_csrman_CsrManager__DOT___write_csr_T 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_csrman_wrapper__DOT__i_snax_dream_csrman_CsrManager__DOT__io_csr_config_in_req_ready_0) 
           & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_csr_mux_demux__acc_csr_req_valid_o) 
              >> 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_req_ready 
        = (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_csrman_wrapper__DOT__i_snax_dream_csrman_CsrManager__DOT__io_csr_config_in_req_ready_0) 
            << 1U) | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__csr_manager__DOT__io_csr_config_in_req_ready_0));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__csr_manager__DOT___write_csr_T 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__csr_manager__DOT__io_csr_config_in_req_ready_0) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_csr_mux_demux__acc_csr_req_valid_o));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_core__axi_req_o[5U] 
        = (0x2200000U | ((0x1ffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_core__axi_req_o[5U]) 
                         | ((0x38000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                            << 0x1bU)) 
                            | ((0xbU == (0xfU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0xbU))) 
                               << 0x18U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_core__axi_req_o[6U] 
        = (((0x1c0U & ((IData)((0xffffffffffffULL & 
                                (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__data_nodes[3U])) 
                                  << 0x10U) | ((QData)((IData)(
                                                               vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__data_nodes[2U])) 
                                               >> 0x10U)))) 
                       << 6U)) | (0x1ffU & ((0xbU == 
                                             (0xfU 
                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0xbU))) 
                                            >> 8U))) 
           | (0xfffffe00U & ((IData)((0xffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__data_nodes[3U])) 
                                          << 0x10U) 
                                         | ((QData)((IData)(
                                                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__data_nodes[2U])) 
                                            >> 0x10U)))) 
                             << 6U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_core__axi_req_o[7U] 
        = (0xffffffU & ((((IData)((0xffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__data_nodes[3U])) 
                                       << 0x10U) | 
                                      ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__data_nodes[2U])) 
                                       >> 0x10U)))) 
                          >> 0x1aU) | (0x1c0U & ((IData)(
                                                         ((0xffffffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__data_nodes[3U])) 
                                                               << 0x10U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__data_nodes[2U])) 
                                                                 >> 0x10U))) 
                                                          >> 0x20U)) 
                                                 << 6U))) 
                        | (0xfffffe00U & ((IData)((
                                                   (0xffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__data_nodes[3U])) 
                                                        << 0x10U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__data_nodes[2U])) 
                                                          >> 0x10U))) 
                                                   >> 0x20U)) 
                                          << 6U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__core_to_axi_req[0U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__data_nodes[0U] 
            << 2U) | (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__req_nodes) 
                       << 1U) | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT____VdfgRegularize_hac19232a_0_1)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__core_to_axi_req[1U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__data_nodes[0U] 
            >> 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__data_nodes[1U] 
                         << 2U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__core_to_axi_req[2U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__data_nodes[1U] 
            >> 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__data_nodes[2U] 
                         << 2U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__core_to_axi_req[3U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__data_nodes[2U] 
            >> 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__data_nodes[3U] 
                         << 2U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__core_to_axi_req[4U] 
        = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__data_nodes[3U] 
           >> 0x1eU);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_csrman_wrapper__DOT__i_snax_dream_csrman_CsrManager__DOT__write_csr 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_csrman_wrapper__DOT__i_snax_dream_csrman_CsrManager__DOT___write_csr_T) 
           & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_csr_mux_demux__acc_csr_req_wen_o) 
              >> 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_csrman_wrapper__DOT__i_snax_dream_csrman_CsrManager__DOT__read_csr 
        = ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_csr_mux_demux__acc_csr_req_wen_o) 
               >> 1U)) & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_csrman_wrapper__DOT__i_snax_dream_csrman_CsrManager__DOT___write_csr_T));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT____Vcellout__i_snax_core_0_acc_0_snax_dream__snax_req_ready_o 
        = (1U & ((0xaU <= (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__snax_csr_req_addr))
                  ? ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_req_ready) 
                     >> 1U) : (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_req_ready)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__csr_manager__DOT__write_csr 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__csr_manager__DOT___write_csr_T) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_csr_mux_demux__acc_csr_req_wen_o));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__csr_manager__DOT__read_csr 
        = ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_csr_mux_demux__acc_csr_req_wen_o)) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__csr_manager__DOT___write_csr_T));
    vlSelf->__Vfunc_to_axi_amo__9__amo = (0xfU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__core_to_axi_req[2U] 
                                                  >> 0xdU));
    vlSelf->__Vfunc_to_axi_amo__9__result = ((8U & (IData)(vlSelf->__Vfunc_to_axi_amo__9__amo))
                                              ? ((4U 
                                                  & (IData)(vlSelf->__Vfunc_to_axi_amo__9__amo))
                                                  ? 0U
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->__Vfunc_to_axi_amo__9__amo))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__Vfunc_to_axi_amo__9__amo))
                                                    ? 0x27U
                                                    : 0x25U)))
                                              : ((4U 
                                                  & (IData)(vlSelf->__Vfunc_to_axi_amo__9__amo))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->__Vfunc_to_axi_amo__9__amo))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__Vfunc_to_axi_amo__9__amo))
                                                    ? 0x26U
                                                    : 0x24U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__Vfunc_to_axi_amo__9__amo))
                                                    ? 0x22U
                                                    : 0x23U))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->__Vfunc_to_axi_amo__9__amo))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__Vfunc_to_axi_amo__9__amo))
                                                    ? 0x21U
                                                    : 0x20U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__Vfunc_to_axi_amo__9__amo))
                                                    ? 0x30U
                                                    : 0U))));
    vlSelf->__Vfunc_to_axi_amo__9__Vfuncout = vlSelf->__Vfunc_to_axi_amo__9__result;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_core__axi_req_o[5U] 
        = ((0xfffffe07U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_core__axi_req_o[5U]) 
           | ((IData)(vlSelf->__Vfunc_to_axi_amo__9__Vfuncout) 
              << 3U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_to_axi_core__DOT__write_data 
        = (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__core_to_axi_req[2U])) 
            << 0x33U) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__core_to_axi_req[1U])) 
                          << 0x13U) | ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__core_to_axi_req[0U])) 
                                       >> 0xdU)));
    if ((3U == (0xfU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__core_to_axi_req[2U] 
                        >> 0xdU)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_to_axi_core__DOT__write_data 
            = (~ (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__core_to_axi_req[2U])) 
                   << 0x33U) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__core_to_axi_req[1U])) 
                                 << 0x13U) | ((QData)((IData)(
                                                              vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__core_to_axi_req[0U])) 
                                              >> 0xdU))));
    }
    vlSelf->__Vfunc_is_amo__8__amo = (0xfU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__core_to_axi_req[2U] 
                                              >> 0xdU));
    {
        if ((((((((((1U == (IData)(vlSelf->__Vfunc_is_amo__8__amo)) 
                    | (2U == (IData)(vlSelf->__Vfunc_is_amo__8__amo))) 
                   | (3U == (IData)(vlSelf->__Vfunc_is_amo__8__amo))) 
                  | (4U == (IData)(vlSelf->__Vfunc_is_amo__8__amo))) 
                 | (5U == (IData)(vlSelf->__Vfunc_is_amo__8__amo))) 
                | (6U == (IData)(vlSelf->__Vfunc_is_amo__8__amo))) 
               | (7U == (IData)(vlSelf->__Vfunc_is_amo__8__amo))) 
              | (8U == (IData)(vlSelf->__Vfunc_is_amo__8__amo))) 
             | (9U == (IData)(vlSelf->__Vfunc_is_amo__8__amo)))) {
            vlSelf->__Vfunc_is_amo__8__Vfuncout = 1U;
            goto __Vlabel8;
        } else {
            vlSelf->__Vfunc_is_amo__8__Vfuncout = 0U;
            goto __Vlabel8;
        }
        __Vlabel8: ;
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_to_axi_core__DOT__req_is_amo 
        = vlSelf->__Vfunc_is_amo__8__Vfuncout;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_csrman_wrapper__DOT__i_snax_dream_csrman_CsrManager__DOT__io_csr_config_in_rsp_valid_0 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_csrman_wrapper__DOT__i_snax_dream_csrman_CsrManager__DOT__read_csr) 
           | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_csrman_wrapper__DOT__i_snax_dream_csrman_CsrManager__DOT__read_csr_busy));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__snax_csr_req_ready 
        = ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT____Vcellout__i_snax_core_0_acc_0_snax_dream__snax_req_ready_o)) 
           | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT____Vcellout__i_snax_core_0_acc_0_snax_dream__snax_req_ready_o));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT___csr_manager_io_csr_config_out_valid 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__csr_manager__DOT__write_csr) 
           & ((7U == (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_req_addr)) 
              & (1U == (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_req_data))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_rsp_data 
        = (((QData)((IData)(((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_csrman_wrapper__DOT__i_snax_dream_csrman_CsrManager__DOT__read_csr)
                              ? vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_csrman_wrapper__DOT__i_snax_dream_csrman_CsrManager__DOT___GEN_1
                              : ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_csrman_wrapper__DOT__i_snax_dream_csrman_CsrManager__DOT__read_csr_busy)
                                  ? vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_csrman_wrapper__DOT__i_snax_dream_csrman_CsrManager__DOT__read_csr_buffer
                                  : 0U)))) << 0x20U) 
           | (QData)((IData)(((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__csr_manager__DOT__read_csr)
                               ? vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__csr_manager__DOT___GEN_1
                               : ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__csr_manager__DOT__read_csr_busy)
                                   ? vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__csr_manager__DOT__read_csr_buffer
                                   : 0U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__csr_manager__DOT__io_csr_config_in_rsp_valid_0 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__csr_manager__DOT__read_csr) 
           | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__csr_manager__DOT__read_csr_busy));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_to_axi_core__DOT__is_write 
        = (1U & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__data_nodes[2U] 
                  >> 0xfU) | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_to_axi_core__DOT__req_is_amo) 
                              | (0xbU == (0xfU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_mux_core__DOT__i_q_mux__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                  >> 0xbU))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_rsp_valid 
        = (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_csrman_wrapper__DOT__i_snax_dream_csrman_CsrManager__DOT__io_csr_config_in_rsp_valid_0) 
            << 1U) | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__csr_manager__DOT__io_csr_config_in_rsp_valid_0));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_to_axi_core__DOT__stall_write 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_to_axi_core__DOT__is_write) 
           & ((3U == (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_to_axi_core__DOT__write_cnt_q)) 
              | ((1U < (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_to_axi_core__DOT__read_cnt_q)) 
                 | ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_to_axi_core__DOT__dec_read_cnt)) 
                    & (1U == (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_reqrsp_to_axi_core__DOT__read_cnt_q))))));
    if ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_rsp_valid))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT____Vcellout__i_snax_core_0_acc_0_snax_dream__snax_rsp_data_o 
            = (IData)((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_rsp_data 
                       >> 0x20U));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT____Vcellout__i_snax_core_0_acc_0_snax_dream__snax_rsp_valid_o 
            = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_rsp_valid) 
                     >> 1U));
    } else {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT____Vcellout__i_snax_core_0_acc_0_snax_dream__snax_rsp_data_o 
            = (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_rsp_data);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT____Vcellout__i_snax_core_0_acc_0_snax_dream__snax_rsp_valid_o 
            = (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc_csr_rsp_valid));
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__snax_csr_rsp_bits_data 
        = (((QData)((IData)(((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT____Vcellout__i_snax_core_0_acc_0_snax_dream__snax_rsp_data_o)) 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT____Vcellout__i_snax_core_0_acc_0_snax_dream__snax_rsp_data_o)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__snax_csr_rsp_valid 
        = ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT____Vcellout__i_snax_core_0_acc_0_snax_dream__snax_rsp_valid_o)) 
           | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT____Vcellout__i_snax_core_0_acc_0_snax_dream__snax_rsp_valid_o));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__snax_resp[0U] 
        = (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__snax_csr_rsp_bits_data);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__snax_resp[1U] = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__snax_resp[2U] 
        = (0x3eU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                    >> 0xfU));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__snax_resp[0U] 
        = (IData)((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__snax_csr_rsp_bits_data 
                   >> 0x20U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__snax_resp[1U] = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__snax_resp[2U] 
        = (0x3eU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                    >> 0xfU));
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__26(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__26\n"); );
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
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__is_4mega_exp 
        = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__tag_q 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__hit));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__pte 
        = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__pte_q 
           & (- (QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__hit))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__trans_ready 
        = (1U & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__trans_active)) 
                 | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__trans_active) 
                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__hit))));
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__27(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__27\n"); );
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
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__is_4mega_exp 
        = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__tag_q 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__hit));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__pte 
        = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__pte_q 
           & (- (QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__hit))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__trans_ready 
        = (1U & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__trans_active)) 
                 | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__trans_active) 
                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__hit))));
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__34(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__34\n"); );
    // Body
    if (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o) {
        vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
            = vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_wifq_exists_inp[0U];
        vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
            = vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_wifq_exists_inp[1U];
        vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
            = vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_wifq_exists_inp[2U];
    } else {
        vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
            = vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_wifq_exists_inp[0U];
        vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
            = vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_wifq_exists_inp[1U];
        vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
            = vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_wifq_exists_inp[2U];
    }
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffffffffffeULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | (IData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                              && ((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U])) 
                                  || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                             >> 2U)) 
                                      == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                >> 0xfU))))))));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffffffffffdULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 1U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 3U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                 >> 0x10U))))))) 
              << 1U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffffffffffbULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 2U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 4U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                 >> 0x11U))))))) 
              << 2U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffffffffff7ULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 3U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 5U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                 >> 0x12U))))))) 
              << 3U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fffffffffefULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 4U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 6U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                 >> 0x13U))))))) 
              << 4U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fffffffffdfULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 5U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 7U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                 >> 0x14U))))))) 
              << 5U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fffffffffbfULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 6U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 8U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                 >> 0x15U))))))) 
              << 6U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fffffffff7fULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 7U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 9U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                 >> 0x16U))))))) 
              << 7U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffffffffeffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 8U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0xaU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                 >> 0x17U))))))) 
              << 8U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffffffffdffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 9U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0xbU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                 >> 0x18U))))))) 
              << 9U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffffffffbffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0xaU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0xcU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                 >> 0x19U))))))) 
              << 0xaU));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffffffff7ffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0xbU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0xdU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                 >> 0x1aU))))))) 
              << 0xbU));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fffffffefffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0xcU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0xeU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                 >> 0x1bU))))))) 
              << 0xcU));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fffffffdfffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0xdU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0xfU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                 >> 0x1cU))))))) 
              << 0xdU));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fffffffbfffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0xeU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0x10U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                 >> 0x1dU))))))) 
              << 0xeU));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fffffff7fffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0xfU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0x11U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                 >> 0x1eU))))))) 
              << 0xfU));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffffffeffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0x10U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0x12U)) 
                                       == (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                           >> 0x1fU)))))) 
              << 0x10U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffffffdffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0x11U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0x13U)) 
                                       == (1U & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U])))))) 
              << 0x11U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffffffbffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0x12U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0x14U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 1U))))))) 
              << 0x12U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffffff7ffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0x13U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0x15U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 2U))))))) 
              << 0x13U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fffffefffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0x14U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0x16U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 3U))))))) 
              << 0x14U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fffffdfffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0x15U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0x17U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 4U))))))) 
              << 0x15U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fffffbfffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0x16U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0x18U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 5U))))))) 
              << 0x16U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fffff7fffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0x17U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0x19U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 6U))))))) 
              << 0x17U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffffeffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0x18U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0x1aU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 7U))))))) 
              << 0x18U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffffdffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0x19U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0x1bU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 8U))))))) 
              << 0x19U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffffbffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0x1aU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0x1cU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 9U))))))) 
              << 0x1aU));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffff7ffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0x1bU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0x1dU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0xaU))))))) 
              << 0x1bU));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fffefffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0x1cU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0x1eU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0xbU))))))) 
              << 0x1cU));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fffdfffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0x1dU))) 
                                   || ((vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                        >> 0x1fU) == 
                                       (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                              >> 0xcU))))))) 
              << 0x1dU));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fffbfffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0x1eU))) 
                                   || ((1U & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U]) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0xdU))))))) 
              << 0x1eU));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fff7fffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0x1fU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 1U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0xeU))))))) 
              << 0x1fU));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffeffffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 2U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0xfU))))))) 
              << 0x20U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffdffffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                             >> 1U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 3U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0x10U))))))) 
              << 0x21U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffbffffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                             >> 2U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 4U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0x11U))))))) 
              << 0x22U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ff7ffffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                             >> 3U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 5U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0x12U))))))) 
              << 0x23U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fefffffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                             >> 4U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 6U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0x13U))))))) 
              << 0x24U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fdfffffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                             >> 5U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 7U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0x14U))))))) 
              << 0x25U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fbfffffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                             >> 6U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 8U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0x15U))))))) 
              << 0x26U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7f7fffffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                             >> 7U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 9U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0x16U))))))) 
              << 0x27U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7effffffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                             >> 8U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0xaU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0x17U))))))) 
              << 0x28U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7dffffffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                             >> 9U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0xbU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0x18U))))))) 
              << 0x29U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7bffffffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                             >> 0xaU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0xcU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0x19U))))))) 
              << 0x2aU));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x77ffffffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                             >> 0xbU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0xdU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0x1aU))))))) 
              << 0x2bU));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x6fffffffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                             >> 0xcU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0xeU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0x1bU))))))) 
              << 0x2cU));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x5fffffffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                             >> 0xdU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0xfU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0x1cU))))))) 
              << 0x2dU));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x3fffffffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                             >> 0xeU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0x10U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0x1dU))))))) 
              << 0x2eU));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffffffffffeULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | (IData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                        >> 0x11U))) 
                              && ((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U])) 
                                  || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                             >> 0x13U)) 
                                      == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                >> 0xfU))))))));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffffffffffdULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 1U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0x14U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                 >> 0x10U))))))) 
              << 1U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffffffffffbULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 2U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0x15U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                 >> 0x11U))))))) 
              << 2U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffffffffff7ULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 3U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0x16U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                 >> 0x12U))))))) 
              << 3U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fffffffffefULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 4U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0x17U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                 >> 0x13U))))))) 
              << 4U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fffffffffdfULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 5U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0x18U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                 >> 0x14U))))))) 
              << 5U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fffffffffbfULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 6U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0x19U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                 >> 0x15U))))))) 
              << 6U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fffffffff7fULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 7U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0x1aU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                 >> 0x16U))))))) 
              << 7U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffffffffeffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 8U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0x1bU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                 >> 0x17U))))))) 
              << 8U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffffffffdffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 9U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0x1cU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                 >> 0x18U))))))) 
              << 9U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffffffffbffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0xaU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0x1dU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                 >> 0x19U))))))) 
              << 0xaU));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffffffff7ffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0xbU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0x1eU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                 >> 0x1aU))))))) 
              << 0xbU));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fffffffefffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0xcU))) 
                                   || ((vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                        >> 0x1fU) == 
                                       (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                              >> 0x1bU))))))) 
              << 0xcU));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fffffffdfffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0xdU))) 
                                   || ((1U & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U]) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                 >> 0x1cU))))))) 
              << 0xdU));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fffffffbfffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0xeU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 1U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                 >> 0x1dU))))))) 
              << 0xeU));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fffffff7fffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0xfU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 2U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                 >> 0x1eU))))))) 
              << 0xfU));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffffffeffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0x10U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 3U)) 
                                       == (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                           >> 0x1fU)))))) 
              << 0x10U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffffffdffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0x11U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 4U)) 
                                       == (1U & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U])))))) 
              << 0x11U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffffffbffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0x12U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 5U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 1U))))))) 
              << 0x12U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffffff7ffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0x13U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 6U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 2U))))))) 
              << 0x13U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fffffefffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0x14U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 7U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 3U))))))) 
              << 0x14U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fffffdfffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0x15U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 8U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 4U))))))) 
              << 0x15U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fffffbfffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0x16U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 9U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 5U))))))) 
              << 0x16U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fffff7fffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0x17U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0xaU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 6U))))))) 
              << 0x17U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffffeffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0x18U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0xbU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 7U))))))) 
              << 0x18U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffffdffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0x19U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0xcU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 8U))))))) 
              << 0x19U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffffbffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0x1aU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0xdU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 9U))))))) 
              << 0x1aU));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffff7ffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0x1bU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0xeU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0xaU))))))) 
              << 0x1bU));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fffefffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0x1cU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0xfU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0xbU))))))) 
              << 0x1cU));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fffdfffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0x1dU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0x10U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0xcU))))))) 
              << 0x1dU));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fffbfffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0x1eU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0x11U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0xdU))))))) 
              << 0x1eU));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fff7fffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 0x1fU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0x12U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0xeU))))))) 
              << 0x1fU));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffeffffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0x13U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0xfU))))))) 
              << 0x20U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffdffffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                             >> 1U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0x14U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0x10U))))))) 
              << 0x21U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffbffffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                             >> 2U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0x15U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0x11U))))))) 
              << 0x22U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ff7ffffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                             >> 3U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0x16U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0x12U))))))) 
              << 0x23U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fefffffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                             >> 4U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0x17U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0x13U))))))) 
              << 0x24U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fdfffffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                             >> 5U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0x18U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0x14U))))))) 
              << 0x25U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fbfffffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                             >> 6U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0x19U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0x15U))))))) 
              << 0x26U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7f7fffffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                             >> 7U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0x1aU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0x16U))))))) 
              << 0x27U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7effffffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                             >> 8U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0x1bU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0x17U))))))) 
              << 0x28U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7dffffffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                             >> 9U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0x1cU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0x18U))))))) 
              << 0x29U));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7bffffffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                             >> 0xaU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0x1dU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0x19U))))))) 
              << 0x2aU));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x77ffffffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                             >> 0xbU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0x1eU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0x1aU))))))) 
              << 0x2bU));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x6fffffffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                             >> 0xcU))) 
                                   || ((vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                        >> 0x1fU) == 
                                       (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                              >> 0x1bU))))))) 
              << 0x2cU));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x5fffffffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                             >> 0xdU))) 
                                   || ((1U & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[3U]) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0x1cU))))))) 
              << 0x2dU));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x3fffffffffffULL & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                             >> 0xeU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[3U] 
                                              >> 1U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                 >> 0x1dU))))))) 
              << 0x2eU));
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__35(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__35\n"); );
    // Body
    if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
            = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_wifq_exists_inp[0U];
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
            = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_wifq_exists_inp[1U];
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
            = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_wifq_exists_inp[2U];
    } else {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
            = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_wifq_exists_inp[0U];
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
            = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_wifq_exists_inp[1U];
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
            = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_wifq_exists_inp[2U];
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffffffffffeULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | (IData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                              && ((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U])) 
                                  || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                             >> 2U)) 
                                      == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                                >> 0xfU))))))));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffffffffffdULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 1U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 3U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                                 >> 0x10U))))))) 
              << 1U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffffffffffbULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 2U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 4U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                                 >> 0x11U))))))) 
              << 2U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffffffffff7ULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 3U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 5U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                                 >> 0x12U))))))) 
              << 3U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fffffffffefULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 4U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 6U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                                 >> 0x13U))))))) 
              << 4U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fffffffffdfULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 5U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 7U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                                 >> 0x14U))))))) 
              << 5U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fffffffffbfULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 6U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 8U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                                 >> 0x15U))))))) 
              << 6U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fffffffff7fULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 7U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 9U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                                 >> 0x16U))))))) 
              << 7U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffffffffeffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 8U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0xaU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                                 >> 0x17U))))))) 
              << 8U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffffffffdffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 9U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0xbU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                                 >> 0x18U))))))) 
              << 9U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffffffffbffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0xaU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0xcU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                                 >> 0x19U))))))) 
              << 0xaU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffffffff7ffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0xbU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0xdU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                                 >> 0x1aU))))))) 
              << 0xbU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fffffffefffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0xcU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0xeU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                                 >> 0x1bU))))))) 
              << 0xcU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fffffffdfffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0xdU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0xfU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                                 >> 0x1cU))))))) 
              << 0xdU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fffffffbfffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0xeU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0x10U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                                 >> 0x1dU))))))) 
              << 0xeU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fffffff7fffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0xfU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0x11U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                                 >> 0x1eU))))))) 
              << 0xfU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffffffeffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0x10U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0x12U)) 
                                       == (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                           >> 0x1fU)))))) 
              << 0x10U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffffffdffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0x11U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0x13U)) 
                                       == (1U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U])))))) 
              << 0x11U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffffffbffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0x12U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0x14U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 1U))))))) 
              << 0x12U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffffff7ffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0x13U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0x15U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 2U))))))) 
              << 0x13U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fffffefffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0x14U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0x16U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 3U))))))) 
              << 0x14U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fffffdfffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0x15U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0x17U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 4U))))))) 
              << 0x15U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fffffbfffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0x16U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0x18U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 5U))))))) 
              << 0x16U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fffff7fffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0x17U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0x19U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 6U))))))) 
              << 0x17U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffffeffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0x18U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0x1aU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 7U))))))) 
              << 0x18U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffffdffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0x19U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0x1bU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 8U))))))) 
              << 0x19U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffffbffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0x1aU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0x1cU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 9U))))))) 
              << 0x1aU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffff7ffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0x1bU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0x1dU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0xaU))))))) 
              << 0x1bU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fffefffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0x1cU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                              >> 0x1eU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0xbU))))))) 
              << 0x1cU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fffdfffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0x1dU))) 
                                   || ((vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U] 
                                        >> 0x1fU) == 
                                       (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                              >> 0xcU))))))) 
              << 0x1dU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fffbfffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0x1eU))) 
                                   || ((1U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U]) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0xdU))))))) 
              << 0x1eU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fff7fffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0x1fU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 1U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0xeU))))))) 
              << 0x1fU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffeffffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U])) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 2U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0xfU))))))) 
              << 0x20U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffdffffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                             >> 1U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 3U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0x10U))))))) 
              << 0x21U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ffbffffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                             >> 2U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 4U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0x11U))))))) 
              << 0x22U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7ff7ffffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                             >> 3U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 5U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0x12U))))))) 
              << 0x23U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fefffffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                             >> 4U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 6U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0x13U))))))) 
              << 0x24U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fdfffffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                             >> 5U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 7U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0x14U))))))) 
              << 0x25U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7fbfffffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                             >> 6U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 8U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0x15U))))))) 
              << 0x26U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7f7fffffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                             >> 7U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 9U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0x16U))))))) 
              << 0x27U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7effffffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                             >> 8U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0xaU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0x17U))))))) 
              << 0x28U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7dffffffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                             >> 9U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0xbU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0x18U))))))) 
              << 0x29U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x7bffffffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                             >> 0xaU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0xcU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0x19U))))))) 
              << 0x2aU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x77ffffffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                             >> 0xbU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0xdU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0x1aU))))))) 
              << 0x2bU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x6fffffffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                             >> 0xcU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0xeU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0x1bU))))))) 
              << 0x2cU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x5fffffffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                             >> 0xdU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0xfU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0x1cU))))))) 
              << 0x2dU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits 
        = ((0x3fffffffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U])) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                             >> 0xeU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0x10U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0x1dU))))))) 
              << 0x2eU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffffffffffeULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | (IData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                        >> 0x11U))) 
                              && ((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U])) 
                                  || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                             >> 0x13U)) 
                                      == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                                >> 0xfU))))))));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffffffffffdULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 1U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0x14U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                                 >> 0x10U))))))) 
              << 1U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffffffffffbULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 2U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0x15U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                                 >> 0x11U))))))) 
              << 2U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffffffffff7ULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 3U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0x16U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                                 >> 0x12U))))))) 
              << 3U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fffffffffefULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 4U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0x17U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                                 >> 0x13U))))))) 
              << 4U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fffffffffdfULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 5U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0x18U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                                 >> 0x14U))))))) 
              << 5U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fffffffffbfULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 6U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0x19U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                                 >> 0x15U))))))) 
              << 6U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fffffffff7fULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 7U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0x1aU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                                 >> 0x16U))))))) 
              << 7U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffffffffeffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 8U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0x1bU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                                 >> 0x17U))))))) 
              << 8U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffffffffdffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 9U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0x1cU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                                 >> 0x18U))))))) 
              << 9U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffffffffbffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0xaU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0x1dU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                                 >> 0x19U))))))) 
              << 0xaU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffffffff7ffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0xbU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                              >> 0x1eU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                                 >> 0x1aU))))))) 
              << 0xbU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fffffffefffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0xcU))) 
                                   || ((vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                        >> 0x1fU) == 
                                       (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                              >> 0x1bU))))))) 
              << 0xcU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fffffffdfffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0xdU))) 
                                   || ((1U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U]) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                                 >> 0x1cU))))))) 
              << 0xdU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fffffffbfffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0xeU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 1U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                                 >> 0x1dU))))))) 
              << 0xeU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fffffff7fffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0xfU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 2U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                                 >> 0x1eU))))))) 
              << 0xfU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffffffeffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0x10U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 3U)) 
                                       == (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                           >> 0x1fU)))))) 
              << 0x10U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffffffdffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0x11U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 4U)) 
                                       == (1U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U])))))) 
              << 0x11U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffffffbffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0x12U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 5U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 1U))))))) 
              << 0x12U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffffff7ffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0x13U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 6U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 2U))))))) 
              << 0x13U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fffffefffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0x14U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 7U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 3U))))))) 
              << 0x14U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fffffdfffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0x15U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 8U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 4U))))))) 
              << 0x15U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fffffbfffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0x16U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 9U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 5U))))))) 
              << 0x16U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fffff7fffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0x17U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0xaU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 6U))))))) 
              << 0x17U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffffeffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0x18U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0xbU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 7U))))))) 
              << 0x18U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffffdffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0x19U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0xcU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 8U))))))) 
              << 0x19U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffffbffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0x1aU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0xdU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 9U))))))) 
              << 0x1aU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffff7ffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0x1bU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0xeU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0xaU))))))) 
              << 0x1bU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fffefffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0x1cU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0xfU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0xbU))))))) 
              << 0x1cU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fffdfffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0x1dU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0x10U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0xcU))))))) 
              << 0x1dU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fffbfffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0x1eU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0x11U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0xdU))))))) 
              << 0x1eU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fff7fffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[0U] 
                                             >> 0x1fU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0x12U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0xeU))))))) 
              << 0x1fU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffeffffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U])) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0x13U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0xfU))))))) 
              << 0x20U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffdffffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                             >> 1U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0x14U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0x10U))))))) 
              << 0x21U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ffbffffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                             >> 2U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0x15U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0x11U))))))) 
              << 0x22U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7ff7ffffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                             >> 3U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0x16U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0x12U))))))) 
              << 0x23U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fefffffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                             >> 4U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0x17U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0x13U))))))) 
              << 0x24U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fdfffffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                             >> 5U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0x18U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0x14U))))))) 
              << 0x25U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7fbfffffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                             >> 6U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0x19U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0x15U))))))) 
              << 0x26U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7f7fffffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                             >> 7U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0x1aU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0x16U))))))) 
              << 0x27U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7effffffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                             >> 8U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0x1bU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0x17U))))))) 
              << 0x28U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7dffffffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                             >> 9U))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0x1cU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0x18U))))))) 
              << 0x29U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x7bffffffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                             >> 0xaU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0x1dU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0x19U))))))) 
              << 0x2aU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x77ffffffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                             >> 0xbU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                              >> 0x1eU)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0x1aU))))))) 
              << 0x2bU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x6fffffffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                             >> 0xcU))) 
                                   || ((vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U] 
                                        >> 0x1fU) == 
                                       (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                              >> 0x1bU))))))) 
              << 0x2cU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x5fffffffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                             >> 0xdU))) 
                                   || ((1U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[3U]) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0x1cU))))))) 
              << 0x2dU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits 
        = ((0x3fffffffffffULL & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
           | ((QData)((IData)(((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U] 
                                         >> 0x11U))) 
                               && ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[1U] 
                                             >> 0xeU))) 
                                   || ((1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[3U] 
                                              >> 1U)) 
                                       == (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_inp[2U] 
                                                 >> 0x1dU))))))) 
              << 0x2eU));
}
