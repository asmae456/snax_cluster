// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness___024root.h"

extern const VlUnpacked<CData/*0:0*/, 256> Vtestharness__ConstPool__TABLE_h524e65de_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtestharness__ConstPool__TABLE_h59fa7ce8_0;

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__38(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__38\n"); );
    // Init
    CData/*7:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*7:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
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
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_wifq_exists_req) 
                << 1U) | (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_wifq_exists_req)));
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
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__rifq_oup_gnt = 0U;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__match_in_id_valid = 0U;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__match_in_id = 0U;
    if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_ar_push_fork__DOT__gen_oup_state__BRA__1__KET____DOT__oup_state_q)))) {
        if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_valid) {
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_ar_push_fork__valid_o 
                = (2U | (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_ar_push_fork__valid_o));
        }
    }
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
    vlSelf->__VdfgRegularize_hd87f99a1_305_0 = ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__match_in_id_valid) 
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
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists = 0U;
    if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_req) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists 
            = ((0x7fffffffffffULL == vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__1__KET____DOT__exists_match_bits) 
               | (0x7fffffffffffULL == vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__gen_lookup__BRA__0__KET____DOT__exists_match_bits));
    }
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
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0) 
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
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_clr_excl = 0U;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_clr_addr = 0ULL;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_clr_req = 0U;
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
                                                        * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0))))) 
                                                  && (1U 
                                                      & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                         >> 
                                                         ((IData)(2U) 
                                                          + 
                                                          (0xfU 
                                                           & ((IData)(7U) 
                                                              * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0))))))))))) 
                       && (1U & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__linked_data_q) 
                                 >> ((IData)(2U) + 
                                     (7U & ((IData)(3U) 
                                            * ((0xdU 
                                                >= 
                                                ((IData)(2U) 
                                                 + 
                                                 (0xfU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0))))) 
                                               && (1U 
                                                   & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                      >> 
                                                      ((IData)(2U) 
                                                       + 
                                                       (0xfU 
                                                        & ((IData)(7U) 
                                                           * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0)))))))))))));
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
                                                      * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0))))) 
                                                && (1U 
                                                    & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                       >> 
                                                       ((IData)(1U) 
                                                        + 
                                                        (0xfU 
                                                         & ((IData)(7U) 
                                                            * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0)))))))))))) {
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
                                                         * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0))))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                          >> 
                                                          ((IData)(1U) 
                                                           + 
                                                           (0xfU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0)))))))))))) 
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
                                                         * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0))))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                          >> 
                                                          ((IData)(1U) 
                                                           + 
                                                           (0xfU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0)))))))))))));
            }
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_h75ed23d2__0 
                = (1U & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes));
            if ((0xdU >= ((IData)(1U) + (0xfU & ((IData)(7U) 
                                                 * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0)))))) {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_d 
                    = (((~ ((IData)(1U) << ((IData)(1U) 
                                            + (0xfU 
                                               & ((IData)(7U) 
                                                  * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0)))))) 
                        & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_d)) 
                       | (0x3fffU & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_h75ed23d2__0) 
                                     << ((IData)(1U) 
                                         + (0xfU & 
                                            ((IData)(7U) 
                                             * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0)))))));
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
                                                       * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0))))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                        >> 
                                                        ((IData)(2U) 
                                                         + 
                                                         (0xfU 
                                                          & ((IData)(7U) 
                                                             * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0))))))))))) {
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
                                                          * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0))))) 
                                                    && (1U 
                                                        & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                           >> 
                                                           ((IData)(2U) 
                                                            + 
                                                            (0xfU 
                                                             & ((IData)(7U) 
                                                                * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0))))))))))) 
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
                                                        * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0))))) 
                                                  && (1U 
                                                      & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                         >> 
                                                         ((IData)(2U) 
                                                          + 
                                                          (0xfU 
                                                           & ((IData)(7U) 
                                                              * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0))))))))))));
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
                                                          * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0))))) 
                                                    && (1U 
                                                        & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                           >> 
                                                           ((IData)(2U) 
                                                            + 
                                                            (0xfU 
                                                             & ((IData)(7U) 
                                                                * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0))))))))))) 
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
                                                        * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0))))) 
                                                  && (1U 
                                                      & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                         >> 
                                                         ((IData)(2U) 
                                                          + 
                                                          (0xfU 
                                                           & ((IData)(7U) 
                                                              * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0))))))))))));
                }
                if ((((0xdU >= ((IData)(2U) + (0xfU 
                                               & ((IData)(7U) 
                                                  * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0))))) 
                      && (1U & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                >> ((IData)(2U) + (0xfU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0))))))) 
                     == ((0xdU >= ((IData)(1U) + (0xfU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0))))) 
                         && (1U & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                   >> ((IData)(1U) 
                                       + (0xfU & ((IData)(7U) 
                                                  * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0))))))))) {
                    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_h029d3b68__0 = 1U;
                    if ((0xdU >= (0xfU & ((IData)(7U) 
                                          * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0))))) {
                        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_d 
                            = (((~ ((IData)(0x7fU) 
                                    << (0xfU & ((IData)(7U) 
                                                * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0))))) 
                                & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_d)) 
                               | (0x3fffU & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_h029d3b68__0) 
                                             << (0xfU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0))))));
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
                                                            * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0))))) 
                                                      && (1U 
                                                          & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                             >> 
                                                             ((IData)(2U) 
                                                              + 
                                                              (0xfU 
                                                               & ((IData)(7U) 
                                                                  * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0))))))))))) 
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
                                                         * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0))))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_q) 
                                                          >> 
                                                          ((IData)(2U) 
                                                           + 
                                                           (0xfU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0)))))))))))));
                    if ((0xdU >= ((IData)(2U) + (0xfU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0)))))) {
                        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_d 
                            = (((~ ((IData)(1U) << 
                                    ((IData)(2U) + 
                                     (0xfU & ((IData)(7U) 
                                              * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0)))))) 
                                & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__head_tail_d)) 
                               | (0x3fffU & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT____Vlvbound_h6e80dd38__0) 
                                             << ((IData)(2U) 
                                                 + 
                                                 (0xfU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_305_0)))))));
                    }
                }
            }
        }
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__set = 0U;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_set_gnt = 0U;
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
                if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_wifq_exists_gnt) 
                     & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists)))) {
                    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_clr_excl 
                        = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_aw_lock;
                    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_clr_addr 
                        = (0x3fffffffffffULL & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_aw_addr 
                                                >> 2U));
                    if ((1U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__status_cnt_q))) {
                        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_clr_req = 1U;
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_clr_req)))) {
        if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_set_req) {
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__set = 1U;
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_set_gnt = 1U;
        }
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__clr = 0U;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_res = 0U;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_clr_gnt = 0U;
    if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_clr_req) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__unnamedblk1__DOT__match 
            = (((0x2dfU >= (0x3ffU & ((IData)(0x2eU) 
                                      * (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_aw_id))))
                 ? (0x3fffffffffffULL & (((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[
                                                          (((IData)(0x2dU) 
                                                            + 
                                                            (0x3ffU 
                                                             & ((IData)(0x2eU) 
                                                                * (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_aw_id)))) 
                                                           >> 5U)])) 
                                          << ((0U == 
                                               (0x1fU 
                                                & ((IData)(0x2eU) 
                                                   * (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_aw_id))))
                                               ? 0x20U
                                               : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x2eU) 
                                                      * (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_aw_id)))))) 
                                         | (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x2eU) 
                                                  * (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_aw_id))))
                                              ? 0ULL
                                              : ((QData)((IData)(
                                                                 vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x3ffU 
                                                                    & ((IData)(0x2eU) 
                                                                       * (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_aw_id)))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x2eU) 
                                                      * (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_aw_id)))))) 
                                            | ((QData)((IData)(
                                                               vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[
                                                               (0x1fU 
                                                                & (((IData)(0x2eU) 
                                                                    * (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_aw_id)) 
                                                                   >> 5U))])) 
                                               >> (0x1fU 
                                                   & ((IData)(0x2eU) 
                                                      * (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_aw_id)))))))
                 : 0ULL) == vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_clr_addr);
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_res 
            = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__unnamedblk1__DOT__match;
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__clr 
            = (1U & (~ ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_clr_excl) 
                        & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__unnamedblk1__DOT__match)))));
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_clr_gnt = 1U;
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
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellinp__i_ar_push_fork__ready_i 
        = ((2U & (((~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_res)) 
                   | (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_set_gnt)) 
                  << 1U)) | (0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_read_in_flight_queue__DOT__linked_data_free)));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0U] 
        = (IData)((0x3fffffffffffULL & (((QData)((IData)(
                                                         vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0U])))));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[1U] 
        = ((0xffffc000U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[1U]) 
           | (IData)(((0x3fffffffffffULL & (((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0U])))) 
                      >> 0x20U)));
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__set) 
         & (0U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_id)))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0U] 
            = (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr);
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[1U] 
            = ((0xffffc000U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[1U]) 
               | (IData)((vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr 
                          >> 0x20U)));
    } else if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__clr) 
                & ((0x3fffffffffffULL & (((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0U])))) 
                   == vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_clr_addr))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0U] = 0U;
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[1U] 
            = (0xffffc000U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[1U]);
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[1U] 
        = ((0x3fffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[1U]) 
           | ((IData)((0x3fffffffffffULL & (((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[2U])) 
                                             << 0x12U) 
                                            | ((QData)((IData)(
                                                               vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[1U])) 
                                               >> 0xeU)))) 
              << 0xeU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[2U] 
        = ((0xf0000000U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[2U]) 
           | (((IData)((0x3fffffffffffULL & (((QData)((IData)(
                                                              vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[2U])) 
                                              << 0x12U) 
                                             | ((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[1U])) 
                                                >> 0xeU)))) 
               >> 0x12U) | ((IData)(((0x3fffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[2U])) 
                                          << 0x12U) 
                                         | ((QData)((IData)(
                                                            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[1U])) 
                                            >> 0xeU))) 
                                     >> 0x20U)) << 0xeU)));
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__set) 
         & (1U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_id)))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[1U] 
            = ((0x3fffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[1U]) 
               | ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr) 
                  << 0xeU));
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[2U] 
            = ((0xf0000000U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[2U]) 
               | (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr) 
                   >> 0x12U) | ((IData)((vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr 
                                         >> 0x20U)) 
                                << 0xeU)));
    } else if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__clr) 
                & ((0x3fffffffffffULL & (((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[2U])) 
                                          << 0x12U) 
                                         | ((QData)((IData)(
                                                            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[1U])) 
                                            >> 0xeU))) 
                   == vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_clr_addr))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[1U] 
            = (0x3fffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[1U]);
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[2U] 
            = (0xf0000000U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[2U]);
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[2U] 
        = ((0xfffffffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[2U]) 
           | ((IData)((0x3fffffffffffULL & (((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[4U])) 
                                             << 0x24U) 
                                            | (((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[3U])) 
                                                << 4U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[2U])) 
                                                  >> 0x1cU))))) 
              << 0x1cU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[3U] 
        = (((IData)((0x3fffffffffffULL & (((QData)((IData)(
                                                           vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[4U])) 
                                           << 0x24U) 
                                          | (((QData)((IData)(
                                                              vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[3U])) 
                                              << 4U) 
                                             | ((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[2U])) 
                                                >> 0x1cU))))) 
            >> 4U) | ((IData)(((0x3fffffffffffULL & 
                                (((QData)((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[4U])) 
                                  << 0x24U) | (((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[3U])) 
                                                << 4U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[2U])) 
                                                  >> 0x1cU)))) 
                               >> 0x20U)) << 0x1cU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[4U] 
        = ((0xfffffc00U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[4U]) 
           | ((IData)(((0x3fffffffffffULL & (((QData)((IData)(
                                                              vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[4U])) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[3U])) 
                                                 << 4U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[2U])) 
                                                   >> 0x1cU)))) 
                       >> 0x20U)) >> 4U));
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__set) 
         & (2U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_id)))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[2U] 
            = ((0xfffffffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[2U]) 
               | ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr) 
                  << 0x1cU));
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[3U] 
            = (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr) 
                >> 4U) | ((IData)((vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr 
                                   >> 0x20U)) << 0x1cU));
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[4U] 
            = ((0xfffffc00U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[4U]) 
               | ((IData)((vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr 
                           >> 0x20U)) >> 4U));
    } else if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__clr) 
                & ((0x3fffffffffffULL & (((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[4U])) 
                                          << 0x24U) 
                                         | (((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[3U])) 
                                             << 4U) 
                                            | ((QData)((IData)(
                                                               vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[2U])) 
                                               >> 0x1cU)))) 
                   == vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_clr_addr))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[2U] 
            = (0xfffffffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[2U]);
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[3U] = 0U;
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[4U] 
            = (0xfffffc00U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[4U]);
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[4U] 
        = ((0x3ffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[4U]) 
           | ((IData)((0x3fffffffffffULL & (((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[5U])) 
                                             << 0x16U) 
                                            | ((QData)((IData)(
                                                               vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[4U])) 
                                               >> 0xaU)))) 
              << 0xaU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[5U] 
        = ((0xff000000U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[5U]) 
           | (((IData)((0x3fffffffffffULL & (((QData)((IData)(
                                                              vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[5U])) 
                                              << 0x16U) 
                                             | ((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[4U])) 
                                                >> 0xaU)))) 
               >> 0x16U) | ((IData)(((0x3fffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[5U])) 
                                          << 0x16U) 
                                         | ((QData)((IData)(
                                                            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[4U])) 
                                            >> 0xaU))) 
                                     >> 0x20U)) << 0xaU)));
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__set) 
         & (3U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_id)))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[4U] 
            = ((0x3ffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[4U]) 
               | ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr) 
                  << 0xaU));
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[5U] 
            = ((0xff000000U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[5U]) 
               | (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr) 
                   >> 0x16U) | ((IData)((vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr 
                                         >> 0x20U)) 
                                << 0xaU)));
    } else if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__clr) 
                & ((0x3fffffffffffULL & (((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[5U])) 
                                          << 0x16U) 
                                         | ((QData)((IData)(
                                                            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[4U])) 
                                            >> 0xaU))) 
                   == vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_clr_addr))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[4U] 
            = (0x3ffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[4U]);
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[5U] 
            = (0xff000000U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[5U]);
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[5U] 
        = ((0xffffffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[5U]) 
           | ((IData)((0x3fffffffffffULL & (((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[7U])) 
                                             << 0x28U) 
                                            | (((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[6U])) 
                                                << 8U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[5U])) 
                                                  >> 0x18U))))) 
              << 0x18U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[6U] 
        = (((IData)((0x3fffffffffffULL & (((QData)((IData)(
                                                           vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[7U])) 
                                           << 0x28U) 
                                          | (((QData)((IData)(
                                                              vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[6U])) 
                                              << 8U) 
                                             | ((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[5U])) 
                                                >> 0x18U))))) 
            >> 8U) | ((IData)(((0x3fffffffffffULL & 
                                (((QData)((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[7U])) 
                                  << 0x28U) | (((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[6U])) 
                                                << 8U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[5U])) 
                                                  >> 0x18U)))) 
                               >> 0x20U)) << 0x18U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[7U] 
        = ((0xffffffc0U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[7U]) 
           | ((IData)(((0x3fffffffffffULL & (((QData)((IData)(
                                                              vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[7U])) 
                                              << 0x28U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[6U])) 
                                                 << 8U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[5U])) 
                                                   >> 0x18U)))) 
                       >> 0x20U)) >> 8U));
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__set) 
         & (4U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_id)))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[5U] 
            = ((0xffffffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[5U]) 
               | ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr) 
                  << 0x18U));
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[6U] 
            = (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr) 
                >> 8U) | ((IData)((vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr 
                                   >> 0x20U)) << 0x18U));
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[7U] 
            = ((0xffffffc0U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[7U]) 
               | ((IData)((vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr 
                           >> 0x20U)) >> 8U));
    } else if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__clr) 
                & ((0x3fffffffffffULL & (((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[7U])) 
                                          << 0x28U) 
                                         | (((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[6U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[5U])) 
                                               >> 0x18U)))) 
                   == vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_clr_addr))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[5U] 
            = (0xffffffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[5U]);
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[6U] = 0U;
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[7U] 
            = (0xffffffc0U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[7U]);
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[7U] 
        = ((0x3fU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[7U]) 
           | ((IData)((0x3fffffffffffULL & (((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[8U])) 
                                             << 0x1aU) 
                                            | ((QData)((IData)(
                                                               vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[7U])) 
                                               >> 6U)))) 
              << 6U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[8U] 
        = ((0xfff00000U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[8U]) 
           | (((IData)((0x3fffffffffffULL & (((QData)((IData)(
                                                              vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[8U])) 
                                              << 0x1aU) 
                                             | ((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[7U])) 
                                                >> 6U)))) 
               >> 0x1aU) | ((IData)(((0x3fffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[8U])) 
                                          << 0x1aU) 
                                         | ((QData)((IData)(
                                                            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[7U])) 
                                            >> 6U))) 
                                     >> 0x20U)) << 6U)));
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__set) 
         & (5U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_id)))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[7U] 
            = ((0x3fU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[7U]) 
               | ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr) 
                  << 6U));
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[8U] 
            = ((0xfff00000U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[8U]) 
               | (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr) 
                   >> 0x1aU) | ((IData)((vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr 
                                         >> 0x20U)) 
                                << 6U)));
    } else if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__clr) 
                & ((0x3fffffffffffULL & (((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[8U])) 
                                          << 0x1aU) 
                                         | ((QData)((IData)(
                                                            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[7U])) 
                                            >> 6U))) 
                   == vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_clr_addr))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[7U] 
            = (0x3fU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[7U]);
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[8U] 
            = (0xfff00000U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[8U]);
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[8U] 
        = ((0xfffffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[8U]) 
           | ((IData)((0x3fffffffffffULL & (((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xaU])) 
                                             << 0x2cU) 
                                            | (((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[9U])) 
                                                << 0xcU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[8U])) 
                                                  >> 0x14U))))) 
              << 0x14U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[9U] 
        = (((IData)((0x3fffffffffffULL & (((QData)((IData)(
                                                           vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xaU])) 
                                           << 0x2cU) 
                                          | (((QData)((IData)(
                                                              vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[9U])) 
                                              << 0xcU) 
                                             | ((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[8U])) 
                                                >> 0x14U))))) 
            >> 0xcU) | ((IData)(((0x3fffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xaU])) 
                                      << 0x2cU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[9U])) 
                                                    << 0xcU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[8U])) 
                                                      >> 0x14U)))) 
                                 >> 0x20U)) << 0x14U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xaU] 
        = ((0xfffffffcU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xaU]) 
           | ((IData)(((0x3fffffffffffULL & (((QData)((IData)(
                                                              vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xaU])) 
                                              << 0x2cU) 
                                             | (((QData)((IData)(
                                                                 vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[9U])) 
                                                 << 0xcU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[8U])) 
                                                   >> 0x14U)))) 
                       >> 0x20U)) >> 0xcU));
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__set) 
         & (6U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_id)))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[8U] 
            = ((0xfffffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[8U]) 
               | ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr) 
                  << 0x14U));
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[9U] 
            = (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr) 
                >> 0xcU) | ((IData)((vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr 
                                     >> 0x20U)) << 0x14U));
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xaU] 
            = ((0xfffffffcU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xaU]) 
               | ((IData)((vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr 
                           >> 0x20U)) >> 0xcU));
    } else if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__clr) 
                & ((0x3fffffffffffULL & (((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xaU])) 
                                          << 0x2cU) 
                                         | (((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[9U])) 
                                             << 0xcU) 
                                            | ((QData)((IData)(
                                                               vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[8U])) 
                                               >> 0x14U)))) 
                   == vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_clr_addr))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[8U] 
            = (0xfffffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[8U]);
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[9U] = 0U;
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xaU] 
            = (0xfffffffcU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xaU]);
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xaU] 
        = ((3U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xaU]) 
           | ((IData)((0x3fffffffffffULL & (((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xbU])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xaU])) 
                                               >> 2U)))) 
              << 2U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xbU] 
        = ((0xffff0000U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xbU]) 
           | (((IData)((0x3fffffffffffULL & (((QData)((IData)(
                                                              vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xbU])) 
                                              << 0x1eU) 
                                             | ((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xaU])) 
                                                >> 2U)))) 
               >> 0x1eU) | ((IData)(((0x3fffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xbU])) 
                                          << 0x1eU) 
                                         | ((QData)((IData)(
                                                            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xaU])) 
                                            >> 2U))) 
                                     >> 0x20U)) << 2U)));
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__set) 
         & (7U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_id)))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xaU] 
            = ((3U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xaU]) 
               | ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr) 
                  << 2U));
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xbU] 
            = ((0xffff0000U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xbU]) 
               | (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr) 
                   >> 0x1eU) | ((IData)((vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr 
                                         >> 0x20U)) 
                                << 2U)));
    } else if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__clr) 
                & ((0x3fffffffffffULL & (((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xbU])) 
                                          << 0x1eU) 
                                         | ((QData)((IData)(
                                                            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xaU])) 
                                            >> 2U))) 
                   == vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_clr_addr))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xaU] 
            = (3U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xaU]);
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xbU] 
            = (0xffff0000U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xbU]);
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xbU] 
        = ((0xffffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xbU]) 
           | ((IData)((0x3fffffffffffULL & (((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xcU])) 
                                             << 0x10U) 
                                            | ((QData)((IData)(
                                                               vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xbU])) 
                                               >> 0x10U)))) 
              << 0x10U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xcU] 
        = ((0xc0000000U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xcU]) 
           | (((IData)((0x3fffffffffffULL & (((QData)((IData)(
                                                              vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xcU])) 
                                              << 0x10U) 
                                             | ((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xbU])) 
                                                >> 0x10U)))) 
               >> 0x10U) | ((IData)(((0x3fffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xcU])) 
                                          << 0x10U) 
                                         | ((QData)((IData)(
                                                            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xbU])) 
                                            >> 0x10U))) 
                                     >> 0x20U)) << 0x10U)));
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__set) 
         & (8U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_id)))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xbU] 
            = ((0xffffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xbU]) 
               | ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr) 
                  << 0x10U));
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xcU] 
            = ((0xc0000000U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xcU]) 
               | (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr) 
                   >> 0x10U) | ((IData)((vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr 
                                         >> 0x20U)) 
                                << 0x10U)));
    } else if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__clr) 
                & ((0x3fffffffffffULL & (((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xcU])) 
                                          << 0x10U) 
                                         | ((QData)((IData)(
                                                            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xbU])) 
                                            >> 0x10U))) 
                   == vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_clr_addr))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xbU] 
            = (0xffffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xbU]);
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xcU] 
            = (0xc0000000U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xcU]);
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xcU] 
        = ((0x3fffffffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xcU]) 
           | ((IData)((0x3fffffffffffULL & (((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xeU])) 
                                             << 0x22U) 
                                            | (((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xdU])) 
                                                << 2U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xcU])) 
                                                  >> 0x1eU))))) 
              << 0x1eU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xdU] 
        = (((IData)((0x3fffffffffffULL & (((QData)((IData)(
                                                           vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xeU])) 
                                           << 0x22U) 
                                          | (((QData)((IData)(
                                                              vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xdU])) 
                                              << 2U) 
                                             | ((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xcU])) 
                                                >> 0x1eU))))) 
            >> 2U) | ((IData)(((0x3fffffffffffULL & 
                                (((QData)((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xeU])) 
                                  << 0x22U) | (((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xdU])) 
                                                << 2U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xcU])) 
                                                  >> 0x1eU)))) 
                               >> 0x20U)) << 0x1eU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xeU] 
        = ((0xfffff000U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xeU]) 
           | ((IData)(((0x3fffffffffffULL & (((QData)((IData)(
                                                              vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xeU])) 
                                              << 0x22U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xdU])) 
                                                 << 2U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xcU])) 
                                                   >> 0x1eU)))) 
                       >> 0x20U)) >> 2U));
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__set) 
         & (9U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_id)))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xcU] 
            = ((0x3fffffffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xcU]) 
               | ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr) 
                  << 0x1eU));
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xdU] 
            = (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr) 
                >> 2U) | ((IData)((vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr 
                                   >> 0x20U)) << 0x1eU));
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xeU] 
            = ((0xfffff000U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xeU]) 
               | ((IData)((vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr 
                           >> 0x20U)) >> 2U));
    } else if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__clr) 
                & ((0x3fffffffffffULL & (((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xeU])) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xdU])) 
                                             << 2U) 
                                            | ((QData)((IData)(
                                                               vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xcU])) 
                                               >> 0x1eU)))) 
                   == vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_clr_addr))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xcU] 
            = (0x3fffffffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xcU]);
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xdU] = 0U;
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xeU] 
            = (0xfffff000U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xeU]);
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xeU] 
        = ((0xfffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xeU]) 
           | ((IData)((0x3fffffffffffULL & (((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xfU])) 
                                             << 0x14U) 
                                            | ((QData)((IData)(
                                                               vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xeU])) 
                                               >> 0xcU)))) 
              << 0xcU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xfU] 
        = ((0xfc000000U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xfU]) 
           | (((IData)((0x3fffffffffffULL & (((QData)((IData)(
                                                              vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xfU])) 
                                              << 0x14U) 
                                             | ((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xeU])) 
                                                >> 0xcU)))) 
               >> 0x14U) | ((IData)(((0x3fffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xfU])) 
                                          << 0x14U) 
                                         | ((QData)((IData)(
                                                            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xeU])) 
                                            >> 0xcU))) 
                                     >> 0x20U)) << 0xcU)));
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__set) 
         & (0xaU == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_id)))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xeU] 
            = ((0xfffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xeU]) 
               | ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr) 
                  << 0xcU));
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xfU] 
            = ((0xfc000000U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xfU]) 
               | (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr) 
                   >> 0x14U) | ((IData)((vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr 
                                         >> 0x20U)) 
                                << 0xcU)));
    } else if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__clr) 
                & ((0x3fffffffffffULL & (((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xfU])) 
                                          << 0x14U) 
                                         | ((QData)((IData)(
                                                            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xeU])) 
                                            >> 0xcU))) 
                   == vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_clr_addr))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xeU] 
            = (0xfffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xeU]);
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xfU] 
            = (0xfc000000U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xfU]);
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xfU] 
        = ((0x3ffffffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xfU]) 
           | ((IData)((0x3fffffffffffULL & (((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x11U])) 
                                             << 0x26U) 
                                            | (((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x10U])) 
                                                << 6U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xfU])) 
                                                  >> 0x1aU))))) 
              << 0x1aU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x10U] 
        = (((IData)((0x3fffffffffffULL & (((QData)((IData)(
                                                           vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x11U])) 
                                           << 0x26U) 
                                          | (((QData)((IData)(
                                                              vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x10U])) 
                                              << 6U) 
                                             | ((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xfU])) 
                                                >> 0x1aU))))) 
            >> 6U) | ((IData)(((0x3fffffffffffULL & 
                                (((QData)((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x11U])) 
                                  << 0x26U) | (((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x10U])) 
                                                << 6U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xfU])) 
                                                  >> 0x1aU)))) 
                               >> 0x20U)) << 0x1aU));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x11U] 
        = ((0xffffff00U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x11U]) 
           | ((IData)(((0x3fffffffffffULL & (((QData)((IData)(
                                                              vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x11U])) 
                                              << 0x26U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x10U])) 
                                                 << 6U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xfU])) 
                                                   >> 0x1aU)))) 
                       >> 0x20U)) >> 6U));
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__set) 
         & (0xbU == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_id)))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xfU] 
            = ((0x3ffffffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xfU]) 
               | ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr) 
                  << 0x1aU));
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x10U] 
            = (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr) 
                >> 6U) | ((IData)((vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr 
                                   >> 0x20U)) << 0x1aU));
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x11U] 
            = ((0xffffff00U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x11U]) 
               | ((IData)((vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr 
                           >> 0x20U)) >> 6U));
    } else if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__clr) 
                & ((0x3fffffffffffULL & (((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x11U])) 
                                          << 0x26U) 
                                         | (((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x10U])) 
                                             << 6U) 
                                            | ((QData)((IData)(
                                                               vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0xfU])) 
                                               >> 0x1aU)))) 
                   == vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_clr_addr))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xfU] 
            = (0x3ffffffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0xfU]);
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x10U] = 0U;
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x11U] 
            = (0xffffff00U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x11U]);
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x11U] 
        = ((0xffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x11U]) 
           | ((IData)((0x3fffffffffffULL & (((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x12U])) 
                                             << 0x18U) 
                                            | ((QData)((IData)(
                                                               vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x11U])) 
                                               >> 8U)))) 
              << 8U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x12U] 
        = ((0xffc00000U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x12U]) 
           | (((IData)((0x3fffffffffffULL & (((QData)((IData)(
                                                              vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x12U])) 
                                              << 0x18U) 
                                             | ((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x11U])) 
                                                >> 8U)))) 
               >> 0x18U) | ((IData)(((0x3fffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x12U])) 
                                          << 0x18U) 
                                         | ((QData)((IData)(
                                                            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x11U])) 
                                            >> 8U))) 
                                     >> 0x20U)) << 8U)));
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__set) 
         & (0xcU == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_id)))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x11U] 
            = ((0xffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x11U]) 
               | ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr) 
                  << 8U));
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x12U] 
            = ((0xffc00000U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x12U]) 
               | (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr) 
                   >> 0x18U) | ((IData)((vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr 
                                         >> 0x20U)) 
                                << 8U)));
    } else if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__clr) 
                & ((0x3fffffffffffULL & (((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x12U])) 
                                          << 0x18U) 
                                         | ((QData)((IData)(
                                                            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x11U])) 
                                            >> 8U))) 
                   == vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_clr_addr))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x11U] 
            = (0xffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x11U]);
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x12U] 
            = (0xffc00000U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x12U]);
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x12U] 
        = ((0x3fffffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x12U]) 
           | ((IData)((0x3fffffffffffULL & (((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x14U])) 
                                             << 0x2aU) 
                                            | (((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x13U])) 
                                                << 0xaU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x12U])) 
                                                  >> 0x16U))))) 
              << 0x16U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x13U] 
        = (((IData)((0x3fffffffffffULL & (((QData)((IData)(
                                                           vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x14U])) 
                                           << 0x2aU) 
                                          | (((QData)((IData)(
                                                              vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x13U])) 
                                              << 0xaU) 
                                             | ((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x12U])) 
                                                >> 0x16U))))) 
            >> 0xaU) | ((IData)(((0x3fffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x14U])) 
                                      << 0x2aU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x13U])) 
                                                    << 0xaU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x12U])) 
                                                      >> 0x16U)))) 
                                 >> 0x20U)) << 0x16U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x14U] 
        = ((0xfffffff0U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x14U]) 
           | ((IData)(((0x3fffffffffffULL & (((QData)((IData)(
                                                              vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x14U])) 
                                              << 0x2aU) 
                                             | (((QData)((IData)(
                                                                 vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x13U])) 
                                                 << 0xaU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x12U])) 
                                                   >> 0x16U)))) 
                       >> 0x20U)) >> 0xaU));
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__set) 
         & (0xdU == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_id)))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x12U] 
            = ((0x3fffffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x12U]) 
               | ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr) 
                  << 0x16U));
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x13U] 
            = (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr) 
                >> 0xaU) | ((IData)((vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr 
                                     >> 0x20U)) << 0x16U));
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x14U] 
            = ((0xfffffff0U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x14U]) 
               | ((IData)((vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr 
                           >> 0x20U)) >> 0xaU));
    } else if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__clr) 
                & ((0x3fffffffffffULL & (((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x14U])) 
                                          << 0x2aU) 
                                         | (((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x13U])) 
                                             << 0xaU) 
                                            | ((QData)((IData)(
                                                               vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x12U])) 
                                               >> 0x16U)))) 
                   == vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_clr_addr))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x12U] 
            = (0x3fffffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x12U]);
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x13U] = 0U;
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x14U] 
            = (0xfffffff0U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x14U]);
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x14U] 
        = ((0xfU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x14U]) 
           | ((IData)((0x3fffffffffffULL & (((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x15U])) 
                                             << 0x1cU) 
                                            | ((QData)((IData)(
                                                               vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x14U])) 
                                               >> 4U)))) 
              << 4U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x15U] 
        = ((0xfffc0000U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x15U]) 
           | (((IData)((0x3fffffffffffULL & (((QData)((IData)(
                                                              vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x15U])) 
                                              << 0x1cU) 
                                             | ((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x14U])) 
                                                >> 4U)))) 
               >> 0x1cU) | ((IData)(((0x3fffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x15U])) 
                                          << 0x1cU) 
                                         | ((QData)((IData)(
                                                            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x14U])) 
                                            >> 4U))) 
                                     >> 0x20U)) << 4U)));
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__set) 
         & (0xeU == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_id)))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x14U] 
            = ((0xfU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x14U]) 
               | ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr) 
                  << 4U));
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x15U] 
            = ((0xfffc0000U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x15U]) 
               | (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr) 
                   >> 0x1cU) | ((IData)((vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr 
                                         >> 0x20U)) 
                                << 4U)));
    } else if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__clr) 
                & ((0x3fffffffffffULL & (((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x15U])) 
                                          << 0x1cU) 
                                         | ((QData)((IData)(
                                                            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x14U])) 
                                            >> 4U))) 
                   == vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_clr_addr))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x14U] 
            = (0xfU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x14U]);
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x15U] 
            = (0xfffc0000U & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x15U]);
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x15U] 
        = ((0x3ffffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x15U]) 
           | ((IData)((0x3fffffffffffULL & (((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x16U])) 
                                             << 0xeU) 
                                            | ((QData)((IData)(
                                                               vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x15U])) 
                                               >> 0x12U)))) 
              << 0x12U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x16U] 
        = (((IData)((0x3fffffffffffULL & (((QData)((IData)(
                                                           vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x16U])) 
                                           << 0xeU) 
                                          | ((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x15U])) 
                                             >> 0x12U)))) 
            >> 0xeU) | ((IData)(((0x3fffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x16U])) 
                                      << 0xeU) | ((QData)((IData)(
                                                                  vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x15U])) 
                                                  >> 0x12U))) 
                                 >> 0x20U)) << 0x12U));
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__set) 
         & (0xfU == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_id)))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x15U] 
            = ((0x3ffffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x15U]) 
               | ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr) 
                  << 0x12U));
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x16U] 
            = (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr) 
                >> 0xeU) | ((IData)((vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr 
                                     >> 0x20U)) << 0x12U));
    } else if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__clr) 
                & ((0x3fffffffffffULL & (((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x16U])) 
                                          << 0xeU) 
                                         | ((QData)((IData)(
                                                            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_q[0x15U])) 
                                            >> 0x12U))) 
                   == vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_clr_addr))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x15U] 
            = (0x3ffffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x15U]);
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_art__DOT__tbl_d[0x16U] = 0U;
    }
    if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_state_q) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_state_d = 1U;
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__w_cmd_inp = 0U;
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_inp_cmd = 0U;
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__w_cmd_push = 0U;
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_cut_aw_ready = 0U;
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw_valid = 0U;
        if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_state_q) {
            if ((1U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__status_cnt_q))) {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_state_d = 0U;
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_cut_aw_ready = 1U;
            } else {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_cut_aw_ready = 0U;
            }
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw_valid = 1U;
        } else {
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_state_d = 0U;
        }
    } else {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_state_d = 0U;
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__w_cmd_inp = 0U;
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_inp_cmd = 0U;
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__w_cmd_push = 0U;
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_cut_aw_ready = 0U;
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw_valid = 0U;
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
                if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_wifq_exists_gnt) 
                     & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists)))) {
                    if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_clr_gnt) {
                        if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_aw_lock) 
                             & (0U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_aw_len)))) {
                            if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_res) {
                                if ((1U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__status_cnt_q))) {
                                    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_state_d = 1U;
                                }
                                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw_valid = 1U;
                            }
                            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_cut_aw_ready 
                                = ((1U & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_res))) 
                                   || (1U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__status_cnt_q)));
                        } else {
                            if ((1U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__status_cnt_q))) {
                                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_state_d = 1U;
                            }
                            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_cut_aw_ready 
                                = (1U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__status_cnt_q));
                            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw_valid = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_inp_id = 0U;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_inp_req = 0U;
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
                if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_wifq_exists_gnt) 
                     & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists)))) {
                    if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_clr_gnt) {
                        if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_aw_lock) 
                             & (0U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_aw_len)))) {
                            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__w_cmd_inp 
                                = (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_res) 
                                    << 6U) | (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_aw_id) 
                                               << 2U) 
                                              | (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_aw_user)));
                            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_inp_cmd 
                                = ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__art_check_res)
                                    ? 1U : 2U);
                        } else {
                            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__w_cmd_inp = 0x40U;
                            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_inp_cmd = 0U;
                        }
                        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__w_cmd_push = 1U;
                        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_inp_id 
                            = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_aw_id;
                        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_inp_req = 1U;
                    }
                }
            }
        }
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_ar_push_fork__DOT__oup_ready 
        = (1U | (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_ar_push_fork__DOT__oup_ready));
    if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_ar_push_fork__DOT__gen_oup_state__BRA__0__KET____DOT__oup_state_q)))) {
        if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_valid) {
            if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellinp__i_ar_push_fork__ready_i)))) {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_ar_push_fork__DOT__oup_ready 
                    = (2U & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_ar_push_fork__DOT__oup_ready));
            }
        }
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_ar_push_fork__DOT__oup_ready 
        = (2U | (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_ar_push_fork__DOT__oup_ready));
    if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_ar_push_fork__DOT__gen_oup_state__BRA__1__KET____DOT__oup_state_q)))) {
        if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_valid) {
            if ((1U & (~ ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellinp__i_ar_push_fork__ready_i) 
                          >> 1U)))) {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_ar_push_fork__DOT__oup_ready 
                    = (1U & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_ar_push_fork__DOT__oup_ready));
            }
        }
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_w_cmd_fifo__DOT__gate_clock = 1U;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_w_cmd_fifo__DOT__write_pointer_n 
        = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_w_cmd_fifo__DOT__write_pointer_q;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_w_cmd_fifo__DOT__mem_n 
        = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_w_cmd_fifo__DOT__mem_q;
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__w_cmd_push) 
         & (2U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_w_cmd_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_w_cmd_fifo__DOT__gate_clock = 0U;
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_w_cmd_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_w_cmd_fifo__DOT__write_pointer_q)));
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_w_cmd_fifo__DOT____Vlvbound_h619cf135__0 
            = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__w_cmd_inp;
        if ((0xdU >= (0xfU & ((IData)(7U) * (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_w_cmd_fifo__DOT__write_pointer_q))))) {
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_w_cmd_fifo__DOT__mem_n 
                = (((~ ((IData)(0x7fU) << (0xfU & ((IData)(7U) 
                                                   * (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_w_cmd_fifo__DOT__write_pointer_q))))) 
                    & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_w_cmd_fifo__DOT__mem_n)) 
                   | (0x3fffU & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_w_cmd_fifo__DOT____Vlvbound_h619cf135__0) 
                                 << (0xfU & ((IData)(7U) 
                                             * (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_w_cmd_fifo__DOT__write_pointer_q))))));
        }
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__aw_trans_d 
        = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__aw_trans_q;
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_aw_valid) 
         & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_cut_aw_ready))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__aw_trans_d 
            = (3U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__aw_trans_d)));
    }
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_cut_b_valid) 
         & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_b_ready))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__aw_trans_d 
            = (3U & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__aw_trans_d) 
                     - (IData)(1U)));
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__aw_state_d 
        = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__aw_state_q;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_aw_ready_o 
        = ((1U & (~ ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux.mst_req_o[5U] 
                      >> 2U) & (0U != (3U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux.mst_req_o[5U] 
                                             >> 9U)))))) 
           && ((1U & (~ ((2U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__w_cnt_q)) 
                         | (2U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__aw_trans_q))))) 
               && ((1U & (~ ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__force_wf_q) 
                             & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__aw_free)))) 
                   && ((1U & (~ (((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux.mst_req_o[5U] 
                                   >> 2U) & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__transaction_collision)) 
                                 & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__adapter_ready))))) 
                       && (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_cut_aw_ready)))));
    if ((0U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__aw_state_q))) {
        if ((((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux.mst_req_o[5U] 
               >> 2U) & (0U != (3U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux.mst_req_o[5U] 
                                      >> 9U)))) & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__adapter_ready))) {
            if ((1U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__atop_valid_d))) {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__aw_state_d = 1U;
            }
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_aw_ready_o = 1U;
        }
        if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__start_wf_q) {
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__aw_state_d = 1U;
        }
    } else if (((1U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__aw_state_q)) 
                || (2U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__aw_state_q)))) {
        if (((((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__r_d_valid_q) 
               & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__w_d_valid_q)) 
              & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__aw_free)) 
             | (2U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__aw_state_q)))) {
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__aw_state_d 
                = ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_cut_aw_ready)
                    ? 0U : 2U);
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_aw_ready_o = 0U;
        }
    } else {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__aw_state_d = 0U;
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT____Vcellinp__i_fifo__push_i 
        = ((1U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__status_cnt_q)) 
           & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw_valid));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_oup_gnt = 0U;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__match_in_id_valid = 0U;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__match_in_id = 0U;
    __Vtableidx6 = (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellinp__i_ar_push_fork__ready_i) 
                     << 6U) | (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_ar_push_fork__valid_o) 
                                << 4U) | (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_ar_push_fork__DOT__oup_ready) 
                                           << 2U) | 
                                          (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_valid) 
                                            << 1U) 
                                           | (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_ar_push_fork__DOT__inp_state_q)))));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_ar_push_fork__DOT__inp_state_d 
        = Vtestharness__ConstPool__TABLE_h524e65de_0
        [__Vtableidx6];
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_ready 
        = Vtestharness__ConstPool__TABLE_h59fa7ce8_0
        [__Vtableidx6];
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__gate_clock = 1U;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__mem_n[0U] 
        = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__mem_q[0U];
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__mem_n[1U] 
        = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__mem_q[1U];
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__mem_n[2U] 
        = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__mem_q[2U];
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__fifo_empty 
        = ((~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT____Vcellinp__i_fifo__push_i)) 
           & (0U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__status_cnt_q)));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__match_in_id_valid = 0U;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_oup_gnt = 0U;
    if ((0x57U >= (0x7fU & ((IData)(0x58U) * (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__read_pointer_q))))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[0U] 
            = (((0U == (0x1fU & ((IData)(0x58U) * (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__read_pointer_q))))
                 ? 0U : (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__mem_q[
                         ((IData)(1U) + (3U & (((IData)(0x58U) 
                                                * (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__read_pointer_q)) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x58U) 
                                                  * (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__read_pointer_q)))))) 
               | (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__mem_q[
                  (3U & (((IData)(0x58U) * (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__read_pointer_q)) 
                         >> 5U))] >> (0x1fU & ((IData)(0x58U) 
                                               * (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__read_pointer_q)))));
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[1U] 
            = (((0U == (0x1fU & ((IData)(0x58U) * (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__read_pointer_q))))
                 ? 0U : (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__mem_q[
                         ((IData)(2U) + (3U & (((IData)(0x58U) 
                                                * (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__read_pointer_q)) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x58U) 
                                                  * (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__read_pointer_q)))))) 
               | (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__mem_q[
                  ((IData)(1U) + (3U & (((IData)(0x58U) 
                                         * (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__read_pointer_q)) 
                                        >> 5U)))] >> 
                  (0x1fU & ((IData)(0x58U) * (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__read_pointer_q)))));
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[2U] 
            = (0xffffffU & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__mem_q[
                            ((IData)(2U) + (3U & (((IData)(0x58U) 
                                                   * (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                            >> (0x1fU & ((IData)(0x58U) 
                                         * (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__read_pointer_q)))));
    } else {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[0U] = 0U;
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[1U] = 0U;
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[2U] = 0U;
    }
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_inp_req) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__linked_data_free)))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__match_in_id_valid = 1U;
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__match_in_id 
            = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_inp_id;
    } else if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_oup_req) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__match_in_id_valid = 1U;
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__match_in_id 
            = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_oup_id;
    }
    vlSelf->__VdfgRegularize_hd87f99a1_309_0 = ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__match_in_id_valid) 
                                                & ((~ 
                                                    ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__head_tail_q) 
                                                     >> 7U)) 
                                                   & ((0xfU 
                                                       & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__head_tail_q) 
                                                          >> 0xaU)) 
                                                      == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__match_in_id))));
    if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_ar_push_fork__DOT__gen_oup_state__BRA__0__KET____DOT__oup_state_q) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_ar_push_fork__DOT__gen_oup_state__BRA__0__KET____DOT__oup_state_d = 1U;
        if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_ar_push_fork__DOT__gen_oup_state__BRA__0__KET____DOT__oup_state_q) {
            if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_valid) 
                 & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_ready))) {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_ar_push_fork__DOT__gen_oup_state__BRA__0__KET____DOT__oup_state_d = 0U;
            }
        } else {
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_ar_push_fork__DOT__gen_oup_state__BRA__0__KET____DOT__oup_state_d = 0U;
        }
    } else {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_ar_push_fork__DOT__gen_oup_state__BRA__0__KET____DOT__oup_state_d = 0U;
        if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_valid) {
            if ((1U & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellinp__i_ar_push_fork__ready_i))) {
                if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_ready)))) {
                    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_ar_push_fork__DOT__gen_oup_state__BRA__0__KET____DOT__oup_state_d = 1U;
                }
            }
        }
    }
    if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_ar_push_fork__DOT__gen_oup_state__BRA__1__KET____DOT__oup_state_q) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_ar_push_fork__DOT__gen_oup_state__BRA__1__KET____DOT__oup_state_d = 1U;
        if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_ar_push_fork__DOT__gen_oup_state__BRA__1__KET____DOT__oup_state_q) {
            if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_valid) 
                 & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_ready))) {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_ar_push_fork__DOT__gen_oup_state__BRA__1__KET____DOT__oup_state_d = 0U;
            }
        } else {
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_ar_push_fork__DOT__gen_oup_state__BRA__1__KET____DOT__oup_state_d = 0U;
        }
    } else {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_ar_push_fork__DOT__gen_oup_state__BRA__1__KET____DOT__oup_state_d = 0U;
        if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_valid) {
            if ((2U & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellinp__i_ar_push_fork__ready_i))) {
                if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_ready)))) {
                    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_ar_push_fork__DOT__gen_oup_state__BRA__1__KET____DOT__oup_state_d = 1U;
                }
            }
        }
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__mst_ar_valid_o = 0U;
    if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_state_q) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_state_d = 1U;
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_cut_ar_ready = 0U;
        if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_state_q) {
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__mst_ar_valid_o 
                = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_valid;
            if (((vlSelf->testharness__DOT__i_mem__DOT__i_cut__DOT__slv_resp[2U] 
                  >> 0x14U) & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__mst_ar_valid_o))) {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_state_d = 0U;
            }
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_cut_ar_ready 
                = (1U & (vlSelf->testharness__DOT__i_mem__DOT__i_cut__DOT__slv_resp[2U] 
                         >> 0x14U));
        } else {
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_state_d = 0U;
        }
    } else {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_state_d = 0U;
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_cut_ar_ready = 0U;
        if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_valid) {
            if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_ready) {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__mst_ar_valid_o = 1U;
                if ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__i_cut__DOT__slv_resp[2U] 
                              >> 0x14U)))) {
                    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_state_d = 1U;
                }
                if ((0x100000U & vlSelf->testharness__DOT__i_mem__DOT__i_cut__DOT__slv_resp[2U])) {
                    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_cut_ar_ready = 1U;
                }
            }
        }
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT____Vcellinp__i_fifo__pop_i 
        = ((~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__fifo_empty)) 
           & (vlSelf->testharness__DOT__i_mem__DOT__i_cut__DOT__slv_resp[2U] 
              >> 0x15U));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__match_in_id = 0U;
    if (((0U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT____Vcellinp__i_fifo__push_i))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[0U] 
            = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_aw[0U];
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[1U] 
            = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_aw[1U];
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[2U] 
            = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_aw[2U];
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__idx_matches_in_id 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_309_0) 
            << 1U) | ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__match_in_id_valid) 
                      & ((~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__head_tail_q)) 
                         & ((0xfU & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__head_tail_q) 
                                     >> 3U)) == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__match_in_id)))));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__ar_state_d 
        = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__ar_state_q;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_ar_ready_o = 0U;
    if ((0U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__ar_state_q))) {
        if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__adapter_ready) 
             & ((2U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__atop_valid_d)) 
                | (3U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__atop_valid_d))))) {
            if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__ar_free) {
                if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_cut_ar_ready)))) {
                    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__ar_state_d = 2U;
                }
            } else {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__ar_state_d = 1U;
            }
        }
        if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__start_wf_q) {
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__ar_state_d = 1U;
        }
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_ar_ready_o 
            = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_cut_ar_ready;
        if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__adapter_ready) 
             & ((2U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__atop_valid_d)) 
                | (3U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__atop_valid_d))))) {
            if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__ar_free) {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_ar_ready_o = 0U;
            }
        }
    } else if (((1U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__ar_state_q)) 
                || (2U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__ar_state_q)))) {
        if ((((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__ar_free) 
              & ((0U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__aw_trans_q)) 
                 | (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__force_wf_q)))) 
             | (2U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__ar_state_q)))) {
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__ar_state_d 
                = ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_cut_ar_ready)
                    ? 0U : 2U);
        }
        if ((1U & (~ (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__ar_free) 
                       & ((0U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__aw_trans_q)) 
                          | (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__force_wf_q)))) 
                      | (2U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__ar_state_q)))))) {
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__slv_ar_ready_o 
                = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_cut_ar_ready;
        }
    } else {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_amos__DOT__ar_state_d = 0U;
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__write_pointer_n 
        = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__write_pointer_q;
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT____Vcellinp__i_fifo__push_i) 
         & (1U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__gate_clock = 0U;
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT____Vlvbound_h1f63c8d4__0[0U] 
            = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_aw[0U];
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT____Vlvbound_h1f63c8d4__0[1U] 
            = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_aw[1U];
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT____Vlvbound_h1f63c8d4__0[2U] 
            = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_aw[2U];
        if ((0x57U >= (0x7fU & ((IData)(0x58U) * (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WW(88,88,(0x7fU & ((IData)(0x58U) 
                                            * (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__write_pointer_q))), vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__mem_n, vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT____Vlvbound_h1f63c8d4__0);
        }
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__write_pointer_n 
            = ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__write_pointer_q)));
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__status_cnt_n 
            = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__status_cnt_q;
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__status_cnt_q)));
    } else {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__status_cnt_n 
            = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__status_cnt_q;
    }
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT____Vcellinp__i_fifo__pop_i) 
         & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__fifo_empty)))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT____Vcellinp__i_fifo__push_i) 
           & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT____Vcellinp__i_fifo__pop_i)) 
          & (1U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__status_cnt_q))) 
         & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__fifo_empty)))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__status_cnt_n 
            = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__status_cnt_q;
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__read_pointer_n 
        = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT____Vcellinp__i_fifo__pop_i) 
         & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__fifo_empty)))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__read_pointer_n 
            = ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT____Vcellinp__i_fifo__push_i))) {
        if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT____Vcellinp__i_fifo__pop_i) {
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__write_pointer_n 
                = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__write_pointer_q;
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__status_cnt_n 
                = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__status_cnt_q;
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__read_pointer_n 
                = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT__i_fifo__DOT__read_pointer_q;
        }
    }
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT____Vcellinp__i_fifo__push_i) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_free)))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__match_in_id_valid = 1U;
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__match_in_id 
            = (0xfU & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[0U] 
                       >> 2U));
    } else if ((1U & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_mst_b_fork__valid_o))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__match_in_id_valid = 1U;
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__match_in_id 
            = (0xfU & (vlSelf->testharness__DOT__i_mem__DOT__i_cut__DOT__slv_resp[2U] 
                       >> 0xeU));
    }
    vlSelf->__VdfgRegularize_hd87f99a1_313_0 = ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__match_in_id_valid) 
                                                & ((~ 
                                                    ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_q) 
                                                     >> 7U)) 
                                                   & ((0xfU 
                                                       & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_q) 
                                                          >> 0xaU)) 
                                                      == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__match_in_id))));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_oup_cmd_flat = 0U;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_oup_valid = 0U;
    if ((1U & (~ ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_inp_req) 
                  & (0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__linked_data_free)))))) {
        if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_oup_req) {
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_oup_gnt = 1U;
            if ((0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__idx_matches_in_id))) {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_oup_cmd_flat 
                    = ((7U >= ((IData)(2U) + (7U & 
                                              VL_SHIFTL_III(3,32,32, 
                                                            ((0xdU 
                                                              >= 
                                                              ((IData)(2U) 
                                                               + 
                                                               (0xfU 
                                                                & ((IData)(7U) 
                                                                   * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_309_0))))) 
                                                             && (1U 
                                                                 & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__head_tail_q) 
                                                                    >> 
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (0xfU 
                                                                      & ((IData)(7U) 
                                                                         * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_309_0))))))), 2U))))
                        ? (3U & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__linked_data_q) 
                                 >> ((IData)(2U) + 
                                     (7U & VL_SHIFTL_III(3,32,32, 
                                                         ((0xdU 
                                                           >= 
                                                           ((IData)(2U) 
                                                            + 
                                                            (0xfU 
                                                             & ((IData)(7U) 
                                                                * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_309_0))))) 
                                                          && (1U 
                                                              & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__head_tail_q) 
                                                                 >> 
                                                                 ((IData)(2U) 
                                                                  + 
                                                                  (0xfU 
                                                                   & ((IData)(7U) 
                                                                      * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_309_0))))))), 2U)))))
                        : 0U);
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_oup_valid = 1U;
            }
        }
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__idx_matches_in_id 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0) 
            << 1U) | ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__match_in_id_valid) 
                      & ((~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_q)) 
                         & ((0xfU & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_q) 
                                     >> 3U)) == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__match_in_id)))));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_state_d 
        = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_state_q;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_b 
        = ((0xf0U & (vlSelf->testharness__DOT__i_mem__DOT__i_cut__DOT__slv_resp[2U] 
                     >> 0xaU)) | ((0xcU & (vlSelf->testharness__DOT__i_mem__DOT__i_cut__DOT__slv_resp[2U] 
                                           >> 8U)) 
                                  | (3U & (vlSelf->testharness__DOT__i_mem__DOT__i_cut__DOT__slv_resp[2U] 
                                           >> 0xcU))));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_inj_pop = 0U;
    if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_state_q)))) {
        if ((0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_inj_fifo__DOT__status_cnt_q))) {
            if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_oup_gnt) 
                 & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_oup_valid))) {
                if ((2U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_oup_cmd_flat))) {
                    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_inj_pop 
                        = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_b_ready;
                }
            }
        }
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_b_valid = 0U;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_b_ready = 0U;
    if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_state_q) {
        if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_state_q) {
            if ((2U & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_mst_b_fork__valid_o))) {
                if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_oup_gnt) 
                     & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_oup_valid))) {
                    if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_b_ready) {
                        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_state_d = 0U;
                    }
                    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_b 
                        = ((0xfcU & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_b)) 
                           | (3U & ((0x2000U & vlSelf->testharness__DOT__i_mem__DOT__i_cut__DOT__slv_resp[2U])
                                     ? ((vlSelf->testharness__DOT__i_mem__DOT__i_cut__DOT__slv_resp[2U] 
                                         << 0x14U) 
                                        | (vlSelf->testharness__DOT__i_mem__DOT__i_cut__DOT__slv_resp[2U] 
                                           >> 0xcU))
                                     : (1U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_oup_cmd_flat)))));
                    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_b_valid = 1U;
                    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_b_ready 
                        = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_b_ready;
                }
            }
        } else {
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_state_d = 0U;
        }
    } else {
        if ((0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_inj_fifo__DOT__status_cnt_q))) {
            if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_oup_gnt) 
                 & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_oup_valid))) {
                if ((2U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_oup_cmd_flat))) {
                    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_state_d = 1U;
                }
            }
        }
        if ((0U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_inj_fifo__DOT__status_cnt_q))) {
            if ((2U & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_mst_b_fork__valid_o))) {
                if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_oup_gnt) 
                     & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_oup_valid))) {
                    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_b 
                        = ((0xfcU & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_b)) 
                           | (3U & ((0x2000U & vlSelf->testharness__DOT__i_mem__DOT__i_cut__DOT__slv_resp[2U])
                                     ? ((vlSelf->testharness__DOT__i_mem__DOT__i_cut__DOT__slv_resp[2U] 
                                         << 0x14U) 
                                        | (vlSelf->testharness__DOT__i_mem__DOT__i_cut__DOT__slv_resp[2U] 
                                           >> 0xcU))
                                     : (1U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_oup_cmd_flat)))));
                    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_b_valid = 1U;
                    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_b_ready 
                        = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_b_ready;
                }
            }
        } else if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_oup_gnt) 
                    & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_oup_valid))) {
            if ((2U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_oup_cmd_flat))) {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_b 
                    = ((0xf0U & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_inj_oup) 
                                 << 2U)) | (0xcU & 
                                            ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_inj_oup) 
                                             << 2U)));
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_b_valid = 1U;
            }
        }
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_oup_data_valid = 0U;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__oup_data_o = 0ULL;
    if ((1U & (~ ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT____Vcellinp__i_fifo__push_i) 
                  & (0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_free)))))) {
        if ((1U & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_mst_b_fork__valid_o))) {
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_oup_gnt = 1U;
            if ((0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__idx_matches_in_id))) {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_oup_data_valid = 1U;
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__oup_data_o 
                    = ((0x61U >= ((IData)(2U) + (0x7fU 
                                                 & ((IData)(0x31U) 
                                                    * 
                                                    ((0xdU 
                                                      >= 
                                                      ((IData)(2U) 
                                                       + 
                                                       (0xfU 
                                                        & ((IData)(7U) 
                                                           * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))) 
                                                     && (1U 
                                                         & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_q) 
                                                            >> 
                                                            ((IData)(2U) 
                                                             + 
                                                             (0xfU 
                                                              & ((IData)(7U) 
                                                                 * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0)))))))))))
                        ? (0x7fffffffffffULL & (((QData)((IData)(
                                                                 vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[
                                                                 (((IData)(0x30U) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x31U) 
                                                                       * 
                                                                       ((0xdU 
                                                                         >= 
                                                                         ((IData)(2U) 
                                                                          + 
                                                                          (0xfU 
                                                                           & ((IData)(7U) 
                                                                              * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))) 
                                                                        && (1U 
                                                                            & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_q) 
                                                                               >> 
                                                                               ((IData)(2U) 
                                                                                + 
                                                                                (0xfU 
                                                                                & ((IData)(7U) 
                                                                                * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0)))))))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(0x31U) 
                                                           * 
                                                           ((0xdU 
                                                             >= 
                                                             ((IData)(2U) 
                                                              + 
                                                              (0xfU 
                                                               & ((IData)(7U) 
                                                                  * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))) 
                                                            && (1U 
                                                                & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_q) 
                                                                   >> 
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (0xfU 
                                                                     & ((IData)(7U) 
                                                                        * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))))))))))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(0x31U) 
                                                           * 
                                                           ((0xdU 
                                                             >= 
                                                             ((IData)(2U) 
                                                              + 
                                                              (0xfU 
                                                               & ((IData)(7U) 
                                                                  * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))) 
                                                            && (1U 
                                                                & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_q) 
                                                                   >> 
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (0xfU 
                                                                     & ((IData)(7U) 
                                                                        * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0)))))))))))))) 
                                                | (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x31U) 
                                                             * 
                                                             ((0xdU 
                                                               >= 
                                                               ((IData)(2U) 
                                                                + 
                                                                (0xfU 
                                                                 & ((IData)(7U) 
                                                                    * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))) 
                                                              && (1U 
                                                                  & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_q) 
                                                                     >> 
                                                                     ((IData)(2U) 
                                                                      + 
                                                                      (0xfU 
                                                                       & ((IData)(7U) 
                                                                          * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))))))))))
                                                     ? 0ULL
                                                     : 
                                                    ((QData)((IData)(
                                                                     vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[
                                                                     (((IData)(0x21U) 
                                                                       + 
                                                                       (0x7fU 
                                                                        & ((IData)(0x31U) 
                                                                           * 
                                                                           ((0xdU 
                                                                             >= 
                                                                             ((IData)(2U) 
                                                                              + 
                                                                              (0xfU 
                                                                               & ((IData)(7U) 
                                                                                * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))) 
                                                                            && (1U 
                                                                                & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_q) 
                                                                                >> 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (0xfU 
                                                                                & ((IData)(7U) 
                                                                                * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0)))))))))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(0x31U) 
                                                              * 
                                                              ((0xdU 
                                                                >= 
                                                                ((IData)(2U) 
                                                                 + 
                                                                 (0xfU 
                                                                  & ((IData)(7U) 
                                                                     * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))) 
                                                               && (1U 
                                                                   & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_q) 
                                                                      >> 
                                                                      ((IData)(2U) 
                                                                       + 
                                                                       (0xfU 
                                                                        & ((IData)(7U) 
                                                                           * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0)))))))))))))) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[
                                                                      (((IData)(2U) 
                                                                        + 
                                                                        (0x7fU 
                                                                         & ((IData)(0x31U) 
                                                                            * 
                                                                            ((0xdU 
                                                                              >= 
                                                                              ((IData)(2U) 
                                                                               + 
                                                                               (0xfU 
                                                                                & ((IData)(7U) 
                                                                                * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))) 
                                                                             && (1U 
                                                                                & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_q) 
                                                                                >> 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (0xfU 
                                                                                & ((IData)(7U) 
                                                                                * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0)))))))))) 
                                                                       >> 5U)])) 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(0x31U) 
                                                              * 
                                                              ((0xdU 
                                                                >= 
                                                                ((IData)(2U) 
                                                                 + 
                                                                 (0xfU 
                                                                  & ((IData)(7U) 
                                                                     * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))) 
                                                               && (1U 
                                                                   & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_q) 
                                                                      >> 
                                                                      ((IData)(2U) 
                                                                       + 
                                                                       (0xfU 
                                                                        & ((IData)(7U) 
                                                                           * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0)))))))))))))))
                        : 0ULL);
            }
        }
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_d[0U] 
        = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[0U];
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_d[1U] 
        = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[1U];
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_d[2U] 
        = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[2U];
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_d[3U] 
        = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[3U];
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_d 
        = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_q;
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_aw_trans_reg__DOT____Vcellinp__i_fifo__push_i) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_free)))) {
        if ((0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__idx_matches_in_id))) {
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT____Vlvbound_hadc8d740__0 
                = (1U & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes));
            if ((0x61U >= ((IData)(1U) + (0x7fU & ((IData)(0x31U) 
                                                   * 
                                                   ((0xdU 
                                                     >= 
                                                     ((IData)(1U) 
                                                      + 
                                                      (0xfU 
                                                       & ((IData)(7U) 
                                                          * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))) 
                                                    && (1U 
                                                        & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_q) 
                                                           >> 
                                                           ((IData)(1U) 
                                                            + 
                                                            (0xfU 
                                                             & ((IData)(7U) 
                                                                * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0)))))))))))) {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_d[(
                                                                                ((IData)(1U) 
                                                                                + 
                                                                                (0x7fU 
                                                                                & ((IData)(0x31U) 
                                                                                * 
                                                                                ((0xdU 
                                                                                >= 
                                                                                ((IData)(1U) 
                                                                                + 
                                                                                (0xfU 
                                                                                & ((IData)(7U) 
                                                                                * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))) 
                                                                                && (1U 
                                                                                & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_q) 
                                                                                >> 
                                                                                ((IData)(1U) 
                                                                                + 
                                                                                (0xfU 
                                                                                & ((IData)(7U) 
                                                                                * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0)))))))))) 
                                                                                >> 5U)] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(1U) 
                                             + (0x7fU 
                                                & ((IData)(0x31U) 
                                                   * 
                                                   ((0xdU 
                                                     >= 
                                                     ((IData)(1U) 
                                                      + 
                                                      (0xfU 
                                                       & ((IData)(7U) 
                                                          * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))) 
                                                    && (1U 
                                                        & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_q) 
                                                           >> 
                                                           ((IData)(1U) 
                                                            + 
                                                            (0xfU 
                                                             & ((IData)(7U) 
                                                                * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))))))))))) 
                        & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_d[
                        (((IData)(1U) + (0x7fU & ((IData)(0x31U) 
                                                  * 
                                                  ((0xdU 
                                                    >= 
                                                    ((IData)(1U) 
                                                     + 
                                                     (0xfU 
                                                      & ((IData)(7U) 
                                                         * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_q) 
                                                          >> 
                                                          ((IData)(1U) 
                                                           + 
                                                           (0xfU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0)))))))))) 
                         >> 5U)]) | ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT____Vlvbound_hadc8d740__0) 
                                     << (0x1fU & ((IData)(1U) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(0x31U) 
                                                      * 
                                                      ((0xdU 
                                                        >= 
                                                        ((IData)(1U) 
                                                         + 
                                                         (0xfU 
                                                          & ((IData)(7U) 
                                                             * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))) 
                                                       && (1U 
                                                           & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_q) 
                                                              >> 
                                                              ((IData)(1U) 
                                                               + 
                                                               (0xfU 
                                                                & ((IData)(7U) 
                                                                   * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0)))))))))))));
            }
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT____Vlvbound_h75ed23d2__0 
                = (1U & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes));
            if ((0xdU >= ((IData)(1U) + (0xfU & ((IData)(7U) 
                                                 * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0)))))) {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_d 
                    = (((~ ((IData)(1U) << ((IData)(1U) 
                                            + (0xfU 
                                               & ((IData)(7U) 
                                                  * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0)))))) 
                        & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_d)) 
                       | (0x3fffU & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT____Vlvbound_h75ed23d2__0) 
                                     << ((IData)(1U) 
                                         + (0xfU & 
                                            ((IData)(7U) 
                                             * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0)))))));
            }
        } else {
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT____Vlvbound_hea223ab4__0 
                = ((0x78U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[0U] 
                             << 1U)) | ((4U & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes) 
                                               << 2U)) 
                                        | (2U & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes) 
                                                 << 1U))));
            if ((0xdU >= (0xfU & ((IData)(7U) * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__index_nodes)))))) {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_d 
                    = (((~ ((IData)(0x7fU) << (0xfU 
                                               & ((IData)(7U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__index_nodes)))))) 
                        & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_d)) 
                       | (0x3fffU & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT____Vlvbound_hea223ab4__0) 
                                     << (0xfU & ((IData)(7U) 
                                                 * 
                                                 (1U 
                                                  & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__index_nodes)))))));
            }
        }
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT____Vlvbound_h10205790__0 
            = ((0x1fffffffffff8ULL & (((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[2U])) 
                                       << 0x19U) | 
                                      (0x1fffffffffffff8ULL 
                                       & ((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_aw[1U])) 
                                          >> 7U)))) 
               | (QData)((IData)(((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_aw_lock) 
                                  << 2U))));
        if ((0x61U >= (0x7fU & ((IData)(0x31U) * (1U 
                                                  & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes)))))) {
            VL_ASSIGNSEL_WQ(98,49,(0x7fU & ((IData)(0x31U) 
                                            * (1U & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes)))), vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_d, vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT____Vlvbound_h10205790__0);
        }
    } else if ((1U & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_mst_b_fork__valid_o))) {
        if ((0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__idx_matches_in_id))) {
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT____Vlvbound_h3ac2158c__0 = 0ULL;
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT____Vlvbound_h0c89d6d6__0 = 1U;
            if ((0x61U >= (0x7fU & ((IData)(0x31U) 
                                    * ((0xdU >= ((IData)(2U) 
                                                 + 
                                                 (0xfU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))) 
                                       && (1U & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_q) 
                                                 >> 
                                                 ((IData)(2U) 
                                                  + 
                                                  (0xfU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))))))))) {
                VL_ASSIGNSEL_WQ(98,49,(0x7fU & ((IData)(0x31U) 
                                                * (
                                                   (0xdU 
                                                    >= 
                                                    ((IData)(2U) 
                                                     + 
                                                     (0xfU 
                                                      & ((IData)(7U) 
                                                         * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_q) 
                                                          >> 
                                                          ((IData)(2U) 
                                                           + 
                                                           (0xfU 
                                                            & ((IData)(7U) 
                                                               * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))))))), vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_d, vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT____Vlvbound_h3ac2158c__0);
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_d[(3U 
                                                                                & (((IData)(0x31U) 
                                                                                * 
                                                                                ((0xdU 
                                                                                >= 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (0xfU 
                                                                                & ((IData)(7U) 
                                                                                * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))) 
                                                                                && (1U 
                                                                                & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_q) 
                                                                                >> 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (0xfU 
                                                                                & ((IData)(7U) 
                                                                                * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0)))))))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x31U) 
                                             * ((0xdU 
                                                 >= 
                                                 ((IData)(2U) 
                                                  + 
                                                  (0xfU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))) 
                                                && (1U 
                                                    & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_q) 
                                                       >> 
                                                       ((IData)(2U) 
                                                        + 
                                                        (0xfU 
                                                         & ((IData)(7U) 
                                                            * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))))))))) 
                        & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_d[
                        (3U & (((IData)(0x31U) * ((0xdU 
                                                   >= 
                                                   ((IData)(2U) 
                                                    + 
                                                    (0xfU 
                                                     & ((IData)(7U) 
                                                        * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))) 
                                                  && (1U 
                                                      & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_q) 
                                                         >> 
                                                         ((IData)(2U) 
                                                          + 
                                                          (0xfU 
                                                           & ((IData)(7U) 
                                                              * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0)))))))) 
                               >> 5U))]) | ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT____Vlvbound_h0c89d6d6__0) 
                                            << (0x1fU 
                                                & ((IData)(0x31U) 
                                                   * 
                                                   ((0xdU 
                                                     >= 
                                                     ((IData)(2U) 
                                                      + 
                                                      (0xfU 
                                                       & ((IData)(7U) 
                                                          * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))) 
                                                    && (1U 
                                                        & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_q) 
                                                           >> 
                                                           ((IData)(2U) 
                                                            + 
                                                            (0xfU 
                                                             & ((IData)(7U) 
                                                                * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0)))))))))));
            }
            if ((((0xdU >= ((IData)(2U) + (0xfU & ((IData)(7U) 
                                                   * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))) 
                  && (1U & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_q) 
                            >> ((IData)(2U) + (0xfU 
                                               & ((IData)(7U) 
                                                  * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))))) 
                 == ((0xdU >= ((IData)(1U) + (0xfU 
                                              & ((IData)(7U) 
                                                 * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))) 
                     && (1U & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_q) 
                               >> ((IData)(1U) + (0xfU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))))))) {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT____Vlvbound_h029d3b68__0 = 1U;
                if ((0xdU >= (0xfU & ((IData)(7U) * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))) {
                    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_d 
                        = (((~ ((IData)(0x7fU) << (0xfU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))) 
                            & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_d)) 
                           | (0x3fffU & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT____Vlvbound_h029d3b68__0) 
                                         << (0xfU & 
                                             ((IData)(7U) 
                                              * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))));
                }
            } else {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT____Vlvbound_h6e80dd38__0 
                    = ((0x61U >= ((IData)(1U) + (0x7fU 
                                                 & ((IData)(0x31U) 
                                                    * 
                                                    ((0xdU 
                                                      >= 
                                                      ((IData)(2U) 
                                                       + 
                                                       (0xfU 
                                                        & ((IData)(7U) 
                                                           * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))) 
                                                     && (1U 
                                                         & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_q) 
                                                            >> 
                                                            ((IData)(2U) 
                                                             + 
                                                             (0xfU 
                                                              & ((IData)(7U) 
                                                                 * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))))))))) 
                       && (1U & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_q[
                                 (((IData)(1U) + (0x7fU 
                                                  & ((IData)(0x31U) 
                                                     * 
                                                     ((0xdU 
                                                       >= 
                                                       ((IData)(2U) 
                                                        + 
                                                        (0xfU 
                                                         & ((IData)(7U) 
                                                            * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))) 
                                                      && (1U 
                                                          & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_q) 
                                                             >> 
                                                             ((IData)(2U) 
                                                              + 
                                                              (0xfU 
                                                               & ((IData)(7U) 
                                                                  * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0)))))))))) 
                                  >> 5U)] >> (0x1fU 
                                              & ((IData)(1U) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(0x31U) 
                                                     * 
                                                     ((0xdU 
                                                       >= 
                                                       ((IData)(2U) 
                                                        + 
                                                        (0xfU 
                                                         & ((IData)(7U) 
                                                            * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))) 
                                                      && (1U 
                                                          & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_q) 
                                                             >> 
                                                             ((IData)(2U) 
                                                              + 
                                                              (0xfU 
                                                               & ((IData)(7U) 
                                                                  * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0))))))))))))));
                if ((0xdU >= ((IData)(2U) + (0xfU & 
                                             ((IData)(7U) 
                                              * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0)))))) {
                    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_d 
                        = (((~ ((IData)(1U) << ((IData)(2U) 
                                                + (0xfU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0)))))) 
                            & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__head_tail_d)) 
                           | (0x3fffU & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT____Vlvbound_h6e80dd38__0) 
                                         << ((IData)(2U) 
                                             + (0xfU 
                                                & ((IData)(7U) 
                                                   * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_313_0)))))));
                }
            }
        }
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_inj_fifo__DOT__read_pointer_n 
        = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_inj_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_inj_pop) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_inj_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_inj_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_inj_fifo__DOT__read_pointer_q)));
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_oup_pop 
        = ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_b_ready) 
           & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__slv_b_valid));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellinp__i_mst_b_fork__ready_i 
        = (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__mst_b_ready) 
            << 1U) | (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_oup_gnt));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__linked_data_d 
        = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__linked_data_q;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__head_tail_d 
        = vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__head_tail_q;
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_inp_req) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__linked_data_free)))) {
        if ((0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__idx_matches_in_id))) {
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT____Vlvbound_h3dc79a63__0 
                = (1U & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes));
            if ((7U >= ((IData)(1U) + (7U & VL_SHIFTL_III(3,32,32, 
                                                          ((0xdU 
                                                            >= 
                                                            ((IData)(1U) 
                                                             + 
                                                             (0xfU 
                                                              & ((IData)(7U) 
                                                                 * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_309_0))))) 
                                                           && (1U 
                                                               & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__head_tail_q) 
                                                                  >> 
                                                                  ((IData)(1U) 
                                                                   + 
                                                                   (0xfU 
                                                                    & ((IData)(7U) 
                                                                       * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_309_0))))))), 2U))))) {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__linked_data_d 
                    = (((~ ((IData)(1U) << ((IData)(1U) 
                                            + (7U & 
                                               VL_SHIFTL_III(3,32,32, 
                                                             ((0xdU 
                                                               >= 
                                                               ((IData)(1U) 
                                                                + 
                                                                (0xfU 
                                                                 & ((IData)(7U) 
                                                                    * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_309_0))))) 
                                                              && (1U 
                                                                  & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__head_tail_q) 
                                                                     >> 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (0xfU 
                                                                       & ((IData)(7U) 
                                                                          * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_309_0))))))), 2U))))) 
                        & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__linked_data_d)) 
                       | (0xffU & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT____Vlvbound_h3dc79a63__0) 
                                   << ((IData)(1U) 
                                       + (7U & VL_SHIFTL_III(3,32,32, 
                                                             ((0xdU 
                                                               >= 
                                                               ((IData)(1U) 
                                                                + 
                                                                (0xfU 
                                                                 & ((IData)(7U) 
                                                                    * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_309_0))))) 
                                                              && (1U 
                                                                  & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__head_tail_q) 
                                                                     >> 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (0xfU 
                                                                       & ((IData)(7U) 
                                                                          * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_309_0))))))), 2U))))));
            }
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT____Vlvbound_h75ed23d2__0 
                = (1U & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes));
            if ((0xdU >= ((IData)(1U) + (0xfU & ((IData)(7U) 
                                                 * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_309_0)))))) {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__head_tail_d 
                    = (((~ ((IData)(1U) << ((IData)(1U) 
                                            + (0xfU 
                                               & ((IData)(7U) 
                                                  * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_309_0)))))) 
                        & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__head_tail_d)) 
                       | (0x3fffU & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT____Vlvbound_h75ed23d2__0) 
                                     << ((IData)(1U) 
                                         + (0xfU & 
                                            ((IData)(7U) 
                                             * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_309_0)))))));
            }
        } else {
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT____Vlvbound_hea223ab4__0 
                = (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_inp_id) 
                    << 3U) | ((4U & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes) 
                                     << 2U)) | (2U 
                                                & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes) 
                                                   << 1U))));
            if ((0xdU >= (0xfU & ((IData)(7U) * (1U 
                                                 & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__index_nodes)))))) {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__head_tail_d 
                    = (((~ ((IData)(0x7fU) << (0xfU 
                                               & ((IData)(7U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__index_nodes)))))) 
                        & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__head_tail_d)) 
                       | (0x3fffU & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT____Vlvbound_hea223ab4__0) 
                                     << (0xfU & ((IData)(7U) 
                                                 * 
                                                 (1U 
                                                  & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__index_nodes)))))));
            }
        }
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__linked_data_d 
            = (((~ ((IData)(0xfU) << (7U & VL_SHIFTL_III(3,32,32, 
                                                         (1U 
                                                          & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes)), 2U)))) 
                & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__linked_data_d)) 
               | (0xffU & (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_inp_cmd) 
                            << 2U) << (7U & VL_SHIFTL_III(3,32,32, 
                                                          (1U 
                                                           & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes)), 2U)))));
    } else if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_oup_req) {
        if ((0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__idx_matches_in_id))) {
            if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__b_status_oup_pop) {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__linked_data_d 
                    = ((~ ((IData)(0xfU) << (7U & VL_SHIFTL_III(3,32,32, 
                                                                ((0xdU 
                                                                  >= 
                                                                  ((IData)(2U) 
                                                                   + 
                                                                   (0xfU 
                                                                    & ((IData)(7U) 
                                                                       * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_309_0))))) 
                                                                 && (1U 
                                                                     & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__head_tail_q) 
                                                                        >> 
                                                                        ((IData)(2U) 
                                                                         + 
                                                                         (0xfU 
                                                                          & ((IData)(7U) 
                                                                             * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_309_0))))))), 2U)))) 
                       & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__linked_data_d));
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__linked_data_d 
                    = ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__linked_data_d) 
                       | (0xffU & ((IData)(1U) << (7U 
                                                   & VL_SHIFTL_III(3,32,32, 
                                                                   ((0xdU 
                                                                     >= 
                                                                     ((IData)(2U) 
                                                                      + 
                                                                      (0xfU 
                                                                       & ((IData)(7U) 
                                                                          * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_309_0))))) 
                                                                    && (1U 
                                                                        & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__head_tail_q) 
                                                                           >> 
                                                                           ((IData)(2U) 
                                                                            + 
                                                                            (0xfU 
                                                                             & ((IData)(7U) 
                                                                                * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_309_0))))))), 2U)))));
                if ((((0xdU >= ((IData)(2U) + (0xfU 
                                               & ((IData)(7U) 
                                                  * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_309_0))))) 
                      && (1U & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__head_tail_q) 
                                >> ((IData)(2U) + (0xfU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_309_0))))))) 
                     == ((0xdU >= ((IData)(1U) + (0xfU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_309_0))))) 
                         && (1U & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__head_tail_q) 
                                   >> ((IData)(1U) 
                                       + (0xfU & ((IData)(7U) 
                                                  * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_309_0))))))))) {
                    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT____Vlvbound_h029d3b68__0 = 1U;
                    if ((0xdU >= (0xfU & ((IData)(7U) 
                                          * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_309_0))))) {
                        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__head_tail_d 
                            = (((~ ((IData)(0x7fU) 
                                    << (0xfU & ((IData)(7U) 
                                                * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_309_0))))) 
                                & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__head_tail_d)) 
                               | (0x3fffU & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT____Vlvbound_h029d3b68__0) 
                                             << (0xfU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_309_0))))));
                    }
                } else {
                    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT____Vlvbound_h6e80dd38__0 
                        = ((7U >= ((IData)(1U) + (7U 
                                                  & VL_SHIFTL_III(3,32,32, 
                                                                  ((0xdU 
                                                                    >= 
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (0xfU 
                                                                      & ((IData)(7U) 
                                                                         * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_309_0))))) 
                                                                   && (1U 
                                                                       & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__head_tail_q) 
                                                                          >> 
                                                                          ((IData)(2U) 
                                                                           + 
                                                                           (0xfU 
                                                                            & ((IData)(7U) 
                                                                               * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_309_0))))))), 2U)))) 
                           && (1U & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__linked_data_q) 
                                     >> ((IData)(1U) 
                                         + (7U & VL_SHIFTL_III(3,32,32, 
                                                               ((0xdU 
                                                                 >= 
                                                                 ((IData)(2U) 
                                                                  + 
                                                                  (0xfU 
                                                                   & ((IData)(7U) 
                                                                      * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_309_0))))) 
                                                                && (1U 
                                                                    & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__head_tail_q) 
                                                                       >> 
                                                                       ((IData)(2U) 
                                                                        + 
                                                                        (0xfU 
                                                                         & ((IData)(7U) 
                                                                            * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_309_0))))))), 2U))))));
                    if ((0xdU >= ((IData)(2U) + (0xfU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_309_0)))))) {
                        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__head_tail_d 
                            = (((~ ((IData)(1U) << 
                                    ((IData)(2U) + 
                                     (0xfU & ((IData)(7U) 
                                              * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_309_0)))))) 
                                & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__head_tail_d)) 
                               | (0x3fffU & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT____Vlvbound_h6e80dd38__0) 
                                             << ((IData)(2U) 
                                                 + 
                                                 (0xfU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSelf->__VdfgRegularize_hd87f99a1_309_0)))))));
                    }
                }
            }
        }
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_mst_b_fork__DOT__oup_ready 
        = (1U | (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_mst_b_fork__DOT__oup_ready));
    if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_mst_b_fork__DOT__gen_oup_state__BRA__0__KET____DOT__oup_state_q)))) {
        if ((0x40000U & vlSelf->testharness__DOT__i_mem__DOT__i_cut__DOT__slv_resp[2U])) {
            if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellinp__i_mst_b_fork__ready_i)))) {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_mst_b_fork__DOT__oup_ready 
                    = (2U & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_mst_b_fork__DOT__oup_ready));
            }
        }
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_mst_b_fork__DOT__oup_ready 
        = (2U | (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_mst_b_fork__DOT__oup_ready));
    if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_mst_b_fork__DOT__gen_oup_state__BRA__1__KET____DOT__oup_state_q)))) {
        if ((0x40000U & vlSelf->testharness__DOT__i_mem__DOT__i_cut__DOT__slv_resp[2U])) {
            if ((1U & (~ ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellinp__i_mst_b_fork__ready_i) 
                          >> 1U)))) {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_mst_b_fork__DOT__oup_ready 
                    = (1U & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_mst_b_fork__DOT__oup_ready));
            }
        }
    }
    __Vtableidx7 = (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellinp__i_mst_b_fork__ready_i) 
                     << 6U) | (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellout__i_mst_b_fork__valid_o) 
                                << 4U) | (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_mst_b_fork__DOT__oup_ready) 
                                           << 2U) | 
                                          ((2U & (vlSelf->testharness__DOT__i_mem__DOT__i_cut__DOT__slv_resp[2U] 
                                                  >> 0x11U)) 
                                           | (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_mst_b_fork__DOT__inp_state_q)))));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_mst_b_fork__DOT__inp_state_d 
        = Vtestharness__ConstPool__TABLE_h524e65de_0
        [__Vtableidx7];
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__mst_b_ready_o 
        = Vtestharness__ConstPool__TABLE_h59fa7ce8_0
        [__Vtableidx7];
    if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_mst_b_fork__DOT__gen_oup_state__BRA__0__KET____DOT__oup_state_q) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_mst_b_fork__DOT__gen_oup_state__BRA__0__KET____DOT__oup_state_d = 1U;
        if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_mst_b_fork__DOT__gen_oup_state__BRA__0__KET____DOT__oup_state_q) {
            if (((vlSelf->testharness__DOT__i_mem__DOT__i_cut__DOT__slv_resp[2U] 
                  >> 0x12U) & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__mst_b_ready_o))) {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_mst_b_fork__DOT__gen_oup_state__BRA__0__KET____DOT__oup_state_d = 0U;
            }
        } else {
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_mst_b_fork__DOT__gen_oup_state__BRA__0__KET____DOT__oup_state_d = 0U;
        }
    } else {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_mst_b_fork__DOT__gen_oup_state__BRA__0__KET____DOT__oup_state_d = 0U;
        if ((0x40000U & vlSelf->testharness__DOT__i_mem__DOT__i_cut__DOT__slv_resp[2U])) {
            if ((1U & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellinp__i_mst_b_fork__ready_i))) {
                if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__mst_b_ready_o)))) {
                    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_mst_b_fork__DOT__gen_oup_state__BRA__0__KET____DOT__oup_state_d = 1U;
                }
            }
        }
    }
    if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_mst_b_fork__DOT__gen_oup_state__BRA__1__KET____DOT__oup_state_q) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_mst_b_fork__DOT__gen_oup_state__BRA__1__KET____DOT__oup_state_d = 1U;
        if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_mst_b_fork__DOT__gen_oup_state__BRA__1__KET____DOT__oup_state_q) {
            if (((vlSelf->testharness__DOT__i_mem__DOT__i_cut__DOT__slv_resp[2U] 
                  >> 0x12U) & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__mst_b_ready_o))) {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_mst_b_fork__DOT__gen_oup_state__BRA__1__KET____DOT__oup_state_d = 0U;
            }
        } else {
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_mst_b_fork__DOT__gen_oup_state__BRA__1__KET____DOT__oup_state_d = 0U;
        }
    } else {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_mst_b_fork__DOT__gen_oup_state__BRA__1__KET____DOT__oup_state_d = 0U;
        if ((0x40000U & vlSelf->testharness__DOT__i_mem__DOT__i_cut__DOT__slv_resp[2U])) {
            if ((2U & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT____Vcellinp__i_mst_b_fork__ready_i))) {
                if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT____Vcellout__i_atomics__mst_b_ready_o)))) {
                    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_mst_b_fork__DOT__gen_oup_state__BRA__1__KET____DOT__oup_state_d = 1U;
                }
            }
        }
    }
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__71(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__71\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b0__05d__02ecolumn0__DOT__S 
        = ((8U & ((~ ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b0__05d__02ecolumn0__DOT__n_21) 
                          & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b0__05d__02ecolumn0__DOT__Cout) 
                             >> 2U))) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b0__05d__02ecolumn0__DOT__n_21) 
                                         | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b0__05d__02ecolumn0__DOT__Cout) 
                                            >> 2U)))) 
                  << 3U)) | ((4U & ((~ ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x14U] 
                                         | (~ vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x10U])) 
                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x10U] 
                                           | (~ vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x14U])))) 
                                    << 2U)) | ((2U 
                                                & ((~ 
                                                    (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b0__05d__02ecolumn0__DOT__wc299) 
                                                      | (~ 
                                                         vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x18U])) 
                                                     & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b0__05d__02ecolumn0__DOT__wc299)) 
                                                        | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x18U]))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b0__05d__02ecolumn0__DOT__wc297) 
                                                       | (~ 
                                                          vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[4U])) 
                                                      & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b0__05d__02ecolumn0__DOT__wc297)) 
                                                         | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[4U])))))));
    __Vtemp_1 = ((0x20U & (((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b0__05d__02ecolumn0__DOT__S) 
                                >> 3U)) << 5U) | (0xffffffe0U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b0__05d__02ecolumn0__DOT__Cout) 
                                                     << 1U)))) 
                 | ((0x10U & ((~ (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b0__05d__02ecolumn0__DOT__S) 
                                   | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b0__05d__02ecolumn0__DOT__S) 
                                      >> 2U)) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b0__05d__02ecolumn0__DOT__S) 
                                                 >> 1U))) 
                              << 4U)) | ((8U & ((~ 
                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b0__05d__02ecolumn0__DOT__n_74) 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b0__05d__02ecolumn0__DOT__n_75))) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_col__05b0__05d__02ecolumn0__a))))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ 
                                                    ((~ 
                                                      (((~ 
                                                         vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x18U]) 
                                                        | (~ 
                                                           vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1cU])) 
                                                       & (~ 
                                                          vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0U]))) 
                                                     & (~ 
                                                        ((~ 
                                                          vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x18U]) 
                                                         & (~ 
                                                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1cU]))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     ((~ 
                                                       (((~ 
                                                          vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[4U]) 
                                                         | (~ 
                                                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[8U])) 
                                                        & (~ 
                                                           vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xcU]))) 
                                                      & (~ 
                                                         ((~ 
                                                           vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[4U]) 
                                                          & (~ 
                                                             vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[8U])))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b0__05d__02ecolumn0__DOT__Cout 
        = __Vtemp_1;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b0__05d__02ecolumn0__DOT__wc293 
        = (1U & ((IData)((1U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b0__05d__02ecolumn0__DOT__S)))) 
                 & (IData)((2U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b0__05d__02ecolumn0__DOT__S))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_1 = (7U & 
                                              (~ ((4U 
                                                   & (((~ (IData)(
                                                                  (0x28U 
                                                                   == 
                                                                   (0x28U 
                                                                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b0__05d__02ecolumn0__DOT__Cout))))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x28U 
                                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b0__05d__02ecolumn0__DOT__Cout))))) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & (((~ 
                                                           (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b0__05d__02ecolumn0__DOT__S) 
                                                             >> 3U) 
                                                            & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b0__05d__02ecolumn0__DOT__Cout) 
                                                               >> 4U))) 
                                                          << 1U) 
                                                         & ((0x3ffffffeU 
                                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b0__05d__02ecolumn0__DOT__S) 
                                                                >> 2U)) 
                                                            | (0x1ffffffeU 
                                                               & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b0__05d__02ecolumn0__DOT__Cout) 
                                                                  >> 3U))))) 
                                                     | (1U 
                                                        & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b0__05d__02ecolumn0__DOT__wc293) 
                                                            | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b0__05d__02ecolumn0__DOT__S) 
                                                               >> 2U)) 
                                                           & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b0__05d__02ecolumn0__DOT__wc293)) 
                                                              | (~ 
                                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b0__05d__02ecolumn0__DOT__S) 
                                                                  >> 2U)))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__wc447 
        = (1U & (((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1)) 
                  | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_523)) 
                 & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_523)) 
                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__wc368 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_523));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_word__05b0__05d__02eword__x 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_0) 
            << 2U) | (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1) 
                            >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Out_reg__DOT__wc6963 
        = (1U & ((~ ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__wc447)) 
                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525))) 
                 & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525) 
                    | (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02episo_1.b)))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__72(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__72\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b4__05d__02ecolumn0__DOT__S 
        = ((8U & ((~ ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b4__05d__02ecolumn0__DOT__n_21) 
                          & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b4__05d__02ecolumn0__DOT__Cout) 
                             >> 2U))) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b4__05d__02ecolumn0__DOT__n_21) 
                                         | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b4__05d__02ecolumn0__DOT__Cout) 
                                            >> 2U)))) 
                  << 3U)) | ((4U & ((~ (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x14U] 
                                          >> 4U) | 
                                         (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x10U] 
                                             >> 4U))) 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x10U] 
                                            >> 4U) 
                                           | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x14U] 
                                                 >> 4U))))) 
                                    << 2U)) | ((2U 
                                                & ((~ 
                                                    (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b4__05d__02ecolumn0__DOT__wc299) 
                                                      | (~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x18U] 
                                                          >> 4U))) 
                                                     & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b4__05d__02ecolumn0__DOT__wc299)) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x18U] 
                                                           >> 4U)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b4__05d__02ecolumn0__DOT__wc297) 
                                                       | (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[4U] 
                                                           >> 4U))) 
                                                      & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b4__05d__02ecolumn0__DOT__wc297)) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[4U] 
                                                            >> 4U))))))));
    __Vtemp_1 = ((0x20U & (((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b4__05d__02ecolumn0__DOT__S) 
                                >> 3U)) << 5U) | (0xffffffe0U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b4__05d__02ecolumn0__DOT__Cout) 
                                                     << 1U)))) 
                 | ((0x10U & ((~ (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b4__05d__02ecolumn0__DOT__S) 
                                   | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b4__05d__02ecolumn0__DOT__S) 
                                      >> 2U)) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b4__05d__02ecolumn0__DOT__S) 
                                                 >> 1U))) 
                              << 4U)) | ((8U & ((~ 
                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b4__05d__02ecolumn0__DOT__n_74) 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b4__05d__02ecolumn0__DOT__n_75))) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_col__05b4__05d__02ecolumn0__a))))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ 
                                                    ((~ 
                                                      (((~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x18U] 
                                                          >> 4U)) 
                                                        | (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1cU] 
                                                            >> 4U))) 
                                                       & (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0U] 
                                                           >> 4U)))) 
                                                     & (~ 
                                                        ((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x18U] 
                                                           >> 4U)) 
                                                         & (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1cU] 
                                                             >> 4U)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     ((~ 
                                                       (((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[4U] 
                                                           >> 4U)) 
                                                         | (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[8U] 
                                                             >> 4U))) 
                                                        & (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xcU] 
                                                            >> 4U)))) 
                                                      & (~ 
                                                         ((~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[4U] 
                                                            >> 4U)) 
                                                          & (~ 
                                                             (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[8U] 
                                                              >> 4U))))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b4__05d__02ecolumn0__DOT__Cout 
        = __Vtemp_1;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b4__05d__02ecolumn0__DOT__wc293 
        = (1U & ((IData)((1U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b4__05d__02ecolumn0__DOT__S)))) 
                 & (IData)((2U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b4__05d__02ecolumn0__DOT__S))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_3 = (7U & 
                                              (~ ((4U 
                                                   & (((~ (IData)(
                                                                  (0x28U 
                                                                   == 
                                                                   (0x28U 
                                                                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b4__05d__02ecolumn0__DOT__Cout))))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x28U 
                                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b4__05d__02ecolumn0__DOT__Cout))))) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & (((~ 
                                                           (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b4__05d__02ecolumn0__DOT__S) 
                                                             >> 3U) 
                                                            & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b4__05d__02ecolumn0__DOT__Cout) 
                                                               >> 4U))) 
                                                          << 1U) 
                                                         & ((0x3ffffffeU 
                                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b4__05d__02ecolumn0__DOT__S) 
                                                                >> 2U)) 
                                                            | (0x1ffffffeU 
                                                               & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b4__05d__02ecolumn0__DOT__Cout) 
                                                                  >> 3U))))) 
                                                     | (1U 
                                                        & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b4__05d__02ecolumn0__DOT__wc293) 
                                                            | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b4__05d__02ecolumn0__DOT__S) 
                                                               >> 2U)) 
                                                           & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b4__05d__02ecolumn0__DOT__wc293)) 
                                                              | (~ 
                                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b4__05d__02ecolumn0__DOT__S) 
                                                                  >> 2U)))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b1__05d__02erow_1__DOT__wc588 
        = (1U & (((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_3)) 
                  | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b1__05d__02erow_1__DOT__n_523)) 
                 & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b1__05d__02erow_1__DOT__n_523)) 
                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_3))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b1__05d__02erow_1__DOT__wc509 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_3) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b1__05d__02erow_1__DOT__n_523));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_word__05b1__05d__02eword__x 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_2) 
            << 2U) | (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_3) 
                            >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Out_reg__DOT__wc6930 
        = (1U & ((~ ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b1__05d__02erow_1__DOT__wc588)) 
                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525))) 
                 & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525) 
                    | (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b1__05d__02episo_1.b)))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__73(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__73\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b8__05d__02ecolumn0__DOT__S 
        = ((8U & ((~ ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b8__05d__02ecolumn0__DOT__n_21) 
                          & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b8__05d__02ecolumn0__DOT__Cout) 
                             >> 2U))) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b8__05d__02ecolumn0__DOT__n_21) 
                                         | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b8__05d__02ecolumn0__DOT__Cout) 
                                            >> 2U)))) 
                  << 3U)) | ((4U & ((~ (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x14U] 
                                          >> 8U) | 
                                         (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x10U] 
                                             >> 8U))) 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x10U] 
                                            >> 8U) 
                                           | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x14U] 
                                                 >> 8U))))) 
                                    << 2U)) | ((2U 
                                                & ((~ 
                                                    (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b8__05d__02ecolumn0__DOT__wc299) 
                                                      | (~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x18U] 
                                                          >> 8U))) 
                                                     & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b8__05d__02ecolumn0__DOT__wc299)) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x18U] 
                                                           >> 8U)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b8__05d__02ecolumn0__DOT__wc297) 
                                                       | (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[4U] 
                                                           >> 8U))) 
                                                      & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b8__05d__02ecolumn0__DOT__wc297)) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[4U] 
                                                            >> 8U))))))));
    __Vtemp_1 = ((0x20U & (((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b8__05d__02ecolumn0__DOT__S) 
                                >> 3U)) << 5U) | (0xffffffe0U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b8__05d__02ecolumn0__DOT__Cout) 
                                                     << 1U)))) 
                 | ((0x10U & ((~ (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b8__05d__02ecolumn0__DOT__S) 
                                   | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b8__05d__02ecolumn0__DOT__S) 
                                      >> 2U)) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b8__05d__02ecolumn0__DOT__S) 
                                                 >> 1U))) 
                              << 4U)) | ((8U & ((~ 
                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b8__05d__02ecolumn0__DOT__n_74) 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b8__05d__02ecolumn0__DOT__n_75))) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_col__05b8__05d__02ecolumn0__a))))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ 
                                                    ((~ 
                                                      (((~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x18U] 
                                                          >> 8U)) 
                                                        | (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1cU] 
                                                            >> 8U))) 
                                                       & (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0U] 
                                                           >> 8U)))) 
                                                     & (~ 
                                                        ((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x18U] 
                                                           >> 8U)) 
                                                         & (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1cU] 
                                                             >> 8U)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     ((~ 
                                                       (((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[4U] 
                                                           >> 8U)) 
                                                         | (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[8U] 
                                                             >> 8U))) 
                                                        & (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xcU] 
                                                            >> 8U)))) 
                                                      & (~ 
                                                         ((~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[4U] 
                                                            >> 8U)) 
                                                          & (~ 
                                                             (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[8U] 
                                                              >> 8U))))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b8__05d__02ecolumn0__DOT__Cout 
        = __Vtemp_1;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b8__05d__02ecolumn0__DOT__wc293 
        = (1U & ((IData)((1U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b8__05d__02ecolumn0__DOT__S)))) 
                 & (IData)((2U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b8__05d__02ecolumn0__DOT__S))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_5 = (7U & 
                                              (~ ((4U 
                                                   & (((~ (IData)(
                                                                  (0x28U 
                                                                   == 
                                                                   (0x28U 
                                                                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b8__05d__02ecolumn0__DOT__Cout))))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x28U 
                                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b8__05d__02ecolumn0__DOT__Cout))))) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & (((~ 
                                                           (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b8__05d__02ecolumn0__DOT__S) 
                                                             >> 3U) 
                                                            & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b8__05d__02ecolumn0__DOT__Cout) 
                                                               >> 4U))) 
                                                          << 1U) 
                                                         & ((0x3ffffffeU 
                                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b8__05d__02ecolumn0__DOT__S) 
                                                                >> 2U)) 
                                                            | (0x1ffffffeU 
                                                               & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b8__05d__02ecolumn0__DOT__Cout) 
                                                                  >> 3U))))) 
                                                     | (1U 
                                                        & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b8__05d__02ecolumn0__DOT__wc293) 
                                                            | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b8__05d__02ecolumn0__DOT__S) 
                                                               >> 2U)) 
                                                           & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b8__05d__02ecolumn0__DOT__wc293)) 
                                                              | (~ 
                                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b8__05d__02ecolumn0__DOT__S) 
                                                                  >> 2U)))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b2__05d__02erow_1__DOT__wc729 
        = (1U & (((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5)) 
                  | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b2__05d__02erow_1__DOT__n_523)) 
                 & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b2__05d__02erow_1__DOT__n_523)) 
                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b2__05d__02erow_1__DOT__wc650 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b2__05d__02erow_1__DOT__n_523));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_word__05b2__05d__02eword__x 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4) 
            << 2U) | (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_5) 
                            >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Out_reg__DOT__wc6854 
        = (1U & ((~ ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b2__05d__02erow_1__DOT__wc729)) 
                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525))) 
                 & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525) 
                    | (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b2__05d__02episo_1.b)))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__74(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__74\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b12__05d__02ecolumn0__DOT__S 
        = ((8U & ((~ ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b12__05d__02ecolumn0__DOT__n_21) 
                          & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b12__05d__02ecolumn0__DOT__Cout) 
                             >> 2U))) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b12__05d__02ecolumn0__DOT__n_21) 
                                         | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b12__05d__02ecolumn0__DOT__Cout) 
                                            >> 2U)))) 
                  << 3U)) | ((4U & ((~ (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x14U] 
                                          >> 0xcU) 
                                         | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x10U] 
                                               >> 0xcU))) 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x10U] 
                                            >> 0xcU) 
                                           | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x14U] 
                                                 >> 0xcU))))) 
                                    << 2U)) | ((2U 
                                                & ((~ 
                                                    (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b12__05d__02ecolumn0__DOT__wc299) 
                                                      | (~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x18U] 
                                                          >> 0xcU))) 
                                                     & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b12__05d__02ecolumn0__DOT__wc299)) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x18U] 
                                                           >> 0xcU)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b12__05d__02ecolumn0__DOT__wc297) 
                                                       | (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[4U] 
                                                           >> 0xcU))) 
                                                      & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b12__05d__02ecolumn0__DOT__wc297)) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[4U] 
                                                            >> 0xcU))))))));
    __Vtemp_1 = ((0x20U & (((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b12__05d__02ecolumn0__DOT__S) 
                                >> 3U)) << 5U) | (0xffffffe0U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b12__05d__02ecolumn0__DOT__Cout) 
                                                     << 1U)))) 
                 | ((0x10U & ((~ (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b12__05d__02ecolumn0__DOT__S) 
                                   | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b12__05d__02ecolumn0__DOT__S) 
                                      >> 2U)) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b12__05d__02ecolumn0__DOT__S) 
                                                 >> 1U))) 
                              << 4U)) | ((8U & ((~ 
                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b12__05d__02ecolumn0__DOT__n_74) 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b12__05d__02ecolumn0__DOT__n_75))) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_col__05b12__05d__02ecolumn0__a))))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ 
                                                    ((~ 
                                                      (((~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x18U] 
                                                          >> 0xcU)) 
                                                        | (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1cU] 
                                                            >> 0xcU))) 
                                                       & (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0U] 
                                                           >> 0xcU)))) 
                                                     & (~ 
                                                        ((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x18U] 
                                                           >> 0xcU)) 
                                                         & (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1cU] 
                                                             >> 0xcU)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     ((~ 
                                                       (((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[4U] 
                                                           >> 0xcU)) 
                                                         | (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[8U] 
                                                             >> 0xcU))) 
                                                        & (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xcU] 
                                                            >> 0xcU)))) 
                                                      & (~ 
                                                         ((~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[4U] 
                                                            >> 0xcU)) 
                                                          & (~ 
                                                             (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[8U] 
                                                              >> 0xcU))))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b12__05d__02ecolumn0__DOT__Cout 
        = __Vtemp_1;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b12__05d__02ecolumn0__DOT__wc293 
        = (1U & ((IData)((1U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b12__05d__02ecolumn0__DOT__S)))) 
                 & (IData)((2U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b12__05d__02ecolumn0__DOT__S))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_7 = (7U & 
                                              (~ ((4U 
                                                   & (((~ (IData)(
                                                                  (0x28U 
                                                                   == 
                                                                   (0x28U 
                                                                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b12__05d__02ecolumn0__DOT__Cout))))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x28U 
                                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b12__05d__02ecolumn0__DOT__Cout))))) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & (((~ 
                                                           (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b12__05d__02ecolumn0__DOT__S) 
                                                             >> 3U) 
                                                            & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b12__05d__02ecolumn0__DOT__Cout) 
                                                               >> 4U))) 
                                                          << 1U) 
                                                         & ((0x3ffffffeU 
                                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b12__05d__02ecolumn0__DOT__S) 
                                                                >> 2U)) 
                                                            | (0x1ffffffeU 
                                                               & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b12__05d__02ecolumn0__DOT__Cout) 
                                                                  >> 3U))))) 
                                                     | (1U 
                                                        & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b12__05d__02ecolumn0__DOT__wc293) 
                                                            | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b12__05d__02ecolumn0__DOT__S) 
                                                               >> 2U)) 
                                                           & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b12__05d__02ecolumn0__DOT__wc293)) 
                                                              | (~ 
                                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b12__05d__02ecolumn0__DOT__S) 
                                                                  >> 2U)))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b3__05d__02erow_1__DOT__wc870 
        = (1U & (((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7)) 
                  | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b3__05d__02erow_1__DOT__n_523)) 
                 & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b3__05d__02erow_1__DOT__n_523)) 
                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b3__05d__02erow_1__DOT__wc791 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b3__05d__02erow_1__DOT__n_523));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_word__05b3__05d__02eword__x 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_6) 
            << 2U) | (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7) 
                            >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Out_reg__DOT__wc6768 
        = (1U & ((~ ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b3__05d__02erow_1__DOT__wc870)) 
                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525))) 
                 & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525) 
                    | (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b3__05d__02episo_1.b)))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__75(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__75\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b16__05d__02ecolumn0__DOT__S 
        = ((8U & ((~ ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b16__05d__02ecolumn0__DOT__n_21) 
                          & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b16__05d__02ecolumn0__DOT__Cout) 
                             >> 2U))) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b16__05d__02ecolumn0__DOT__n_21) 
                                         | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b16__05d__02ecolumn0__DOT__Cout) 
                                            >> 2U)))) 
                  << 3U)) | ((4U & ((~ (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x14U] 
                                          >> 0x10U) 
                                         | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x10U] 
                                               >> 0x10U))) 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x10U] 
                                            >> 0x10U) 
                                           | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x14U] 
                                                 >> 0x10U))))) 
                                    << 2U)) | ((2U 
                                                & ((~ 
                                                    (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b16__05d__02ecolumn0__DOT__wc299) 
                                                      | (~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x18U] 
                                                          >> 0x10U))) 
                                                     & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b16__05d__02ecolumn0__DOT__wc299)) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x18U] 
                                                           >> 0x10U)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b16__05d__02ecolumn0__DOT__wc297) 
                                                       | (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[4U] 
                                                           >> 0x10U))) 
                                                      & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b16__05d__02ecolumn0__DOT__wc297)) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[4U] 
                                                            >> 0x10U))))))));
    __Vtemp_1 = ((0x20U & (((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b16__05d__02ecolumn0__DOT__S) 
                                >> 3U)) << 5U) | (0xffffffe0U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b16__05d__02ecolumn0__DOT__Cout) 
                                                     << 1U)))) 
                 | ((0x10U & ((~ (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b16__05d__02ecolumn0__DOT__S) 
                                   | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b16__05d__02ecolumn0__DOT__S) 
                                      >> 2U)) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b16__05d__02ecolumn0__DOT__S) 
                                                 >> 1U))) 
                              << 4U)) | ((8U & ((~ 
                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b16__05d__02ecolumn0__DOT__n_74) 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b16__05d__02ecolumn0__DOT__n_75))) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_col__05b16__05d__02ecolumn0__a))))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ 
                                                    ((~ 
                                                      (((~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x18U] 
                                                          >> 0x10U)) 
                                                        | (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1cU] 
                                                            >> 0x10U))) 
                                                       & (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0U] 
                                                           >> 0x10U)))) 
                                                     & (~ 
                                                        ((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x18U] 
                                                           >> 0x10U)) 
                                                         & (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1cU] 
                                                             >> 0x10U)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     ((~ 
                                                       (((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[4U] 
                                                           >> 0x10U)) 
                                                         | (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[8U] 
                                                             >> 0x10U))) 
                                                        & (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xcU] 
                                                            >> 0x10U)))) 
                                                      & (~ 
                                                         ((~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[4U] 
                                                            >> 0x10U)) 
                                                          & (~ 
                                                             (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[8U] 
                                                              >> 0x10U))))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b16__05d__02ecolumn0__DOT__Cout 
        = __Vtemp_1;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b16__05d__02ecolumn0__DOT__wc293 
        = (1U & ((IData)((1U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b16__05d__02ecolumn0__DOT__S)))) 
                 & (IData)((2U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b16__05d__02ecolumn0__DOT__S))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_9 = (7U & 
                                              (~ ((4U 
                                                   & (((~ (IData)(
                                                                  (0x28U 
                                                                   == 
                                                                   (0x28U 
                                                                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b16__05d__02ecolumn0__DOT__Cout))))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x28U 
                                                                   & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b16__05d__02ecolumn0__DOT__Cout))))) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & (((~ 
                                                           (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b16__05d__02ecolumn0__DOT__S) 
                                                             >> 3U) 
                                                            & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b16__05d__02ecolumn0__DOT__Cout) 
                                                               >> 4U))) 
                                                          << 1U) 
                                                         & ((0x3ffffffeU 
                                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b16__05d__02ecolumn0__DOT__S) 
                                                                >> 2U)) 
                                                            | (0x1ffffffeU 
                                                               & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b16__05d__02ecolumn0__DOT__Cout) 
                                                                  >> 3U))))) 
                                                     | (1U 
                                                        & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b16__05d__02ecolumn0__DOT__wc293) 
                                                            | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b16__05d__02ecolumn0__DOT__S) 
                                                               >> 2U)) 
                                                           & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b16__05d__02ecolumn0__DOT__wc293)) 
                                                              | (~ 
                                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b16__05d__02ecolumn0__DOT__S) 
                                                                  >> 2U)))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b4__05d__02erow_1__DOT__wc1011 
        = (1U & (((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)) 
                  | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b4__05d__02erow_1__DOT__n_523)) 
                 & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b4__05d__02erow_1__DOT__n_523)) 
                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b4__05d__02erow_1__DOT__wc932 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b4__05d__02erow_1__DOT__n_523));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_word__05b4__05d__02eword__x 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8) 
            << 2U) | (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9) 
                            >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Out_reg__DOT__wc6680 
        = (1U & ((~ ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b4__05d__02erow_1__DOT__wc1011)) 
                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525))) 
                 & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525) 
                    | (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b4__05d__02episo_1.b)))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__76(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__76\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b20__05d__02ecolumn0__DOT__S 
        = ((8U & ((~ ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b20__05d__02ecolumn0__DOT__n_21) 
                          & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b20__05d__02ecolumn0__DOT__Cout) 
                             >> 2U))) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b20__05d__02ecolumn0__DOT__n_21) 
                                         | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b20__05d__02ecolumn0__DOT__Cout) 
                                            >> 2U)))) 
                  << 3U)) | ((4U & ((~ (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x14U] 
                                          >> 0x14U) 
                                         | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x10U] 
                                               >> 0x14U))) 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x10U] 
                                            >> 0x14U) 
                                           | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x14U] 
                                                 >> 0x14U))))) 
                                    << 2U)) | ((2U 
                                                & ((~ 
                                                    (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b20__05d__02ecolumn0__DOT__wc299) 
                                                      | (~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x18U] 
                                                          >> 0x14U))) 
                                                     & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b20__05d__02ecolumn0__DOT__wc299)) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x18U] 
                                                           >> 0x14U)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b20__05d__02ecolumn0__DOT__wc297) 
                                                       | (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[4U] 
                                                           >> 0x14U))) 
                                                      & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b20__05d__02ecolumn0__DOT__wc297)) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[4U] 
                                                            >> 0x14U))))))));
    __Vtemp_1 = ((0x20U & (((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b20__05d__02ecolumn0__DOT__S) 
                                >> 3U)) << 5U) | (0xffffffe0U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b20__05d__02ecolumn0__DOT__Cout) 
                                                     << 1U)))) 
                 | ((0x10U & ((~ (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b20__05d__02ecolumn0__DOT__S) 
                                   | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b20__05d__02ecolumn0__DOT__S) 
                                      >> 2U)) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b20__05d__02ecolumn0__DOT__S) 
                                                 >> 1U))) 
                              << 4U)) | ((8U & ((~ 
                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b20__05d__02ecolumn0__DOT__n_74) 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b20__05d__02ecolumn0__DOT__n_75))) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_col__05b20__05d__02ecolumn0__a))))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ 
                                                    ((~ 
                                                      (((~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x18U] 
                                                          >> 0x14U)) 
                                                        | (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1cU] 
                                                            >> 0x14U))) 
                                                       & (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0U] 
                                                           >> 0x14U)))) 
                                                     & (~ 
                                                        ((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x18U] 
                                                           >> 0x14U)) 
                                                         & (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1cU] 
                                                             >> 0x14U)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     ((~ 
                                                       (((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[4U] 
                                                           >> 0x14U)) 
                                                         | (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[8U] 
                                                             >> 0x14U))) 
                                                        & (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xcU] 
                                                            >> 0x14U)))) 
                                                      & (~ 
                                                         ((~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[4U] 
                                                            >> 0x14U)) 
                                                          & (~ 
                                                             (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[8U] 
                                                              >> 0x14U))))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b20__05d__02ecolumn0__DOT__Cout 
        = __Vtemp_1;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b20__05d__02ecolumn0__DOT__wc293 
        = (1U & ((IData)((1U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b20__05d__02ecolumn0__DOT__S)))) 
                 & (IData)((2U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b20__05d__02ecolumn0__DOT__S))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_11 = (7U & 
                                               (~ (
                                                   (4U 
                                                    & (((~ (IData)(
                                                                   (0x28U 
                                                                    == 
                                                                    (0x28U 
                                                                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b20__05d__02ecolumn0__DOT__Cout))))) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x28U 
                                                                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b20__05d__02ecolumn0__DOT__Cout))))) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((~ 
                                                            (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b20__05d__02ecolumn0__DOT__S) 
                                                              >> 3U) 
                                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b20__05d__02ecolumn0__DOT__Cout) 
                                                                >> 4U))) 
                                                           << 1U) 
                                                          & ((0x3ffffffeU 
                                                              & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b20__05d__02ecolumn0__DOT__S) 
                                                                 >> 2U)) 
                                                             | (0x1ffffffeU 
                                                                & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b20__05d__02ecolumn0__DOT__Cout) 
                                                                   >> 3U))))) 
                                                      | (1U 
                                                         & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b20__05d__02ecolumn0__DOT__wc293) 
                                                             | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b20__05d__02ecolumn0__DOT__S) 
                                                                >> 2U)) 
                                                            & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b20__05d__02ecolumn0__DOT__wc293)) 
                                                               | (~ 
                                                                  ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b20__05d__02ecolumn0__DOT__S) 
                                                                   >> 2U)))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b5__05d__02erow_1__DOT__wc1152 
        = (1U & (((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11)) 
                  | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b5__05d__02erow_1__DOT__n_523)) 
                 & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b5__05d__02erow_1__DOT__n_523)) 
                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b5__05d__02erow_1__DOT__wc1073 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b5__05d__02erow_1__DOT__n_523));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_word__05b5__05d__02eword__x 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_10) 
            << 2U) | (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_11) 
                            >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Out_reg__DOT__wc6595 
        = (1U & ((~ ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b5__05d__02erow_1__DOT__wc1152)) 
                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525))) 
                 & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525) 
                    | (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b5__05d__02episo_1.b)))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__77(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__77\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b24__05d__02ecolumn0__DOT__S 
        = ((8U & ((~ ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b24__05d__02ecolumn0__DOT__n_21) 
                          & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b24__05d__02ecolumn0__DOT__Cout) 
                             >> 2U))) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b24__05d__02ecolumn0__DOT__n_21) 
                                         | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b24__05d__02ecolumn0__DOT__Cout) 
                                            >> 2U)))) 
                  << 3U)) | ((4U & ((~ (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x14U] 
                                          >> 0x18U) 
                                         | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x10U] 
                                               >> 0x18U))) 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x10U] 
                                            >> 0x18U) 
                                           | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x14U] 
                                                 >> 0x18U))))) 
                                    << 2U)) | ((2U 
                                                & ((~ 
                                                    (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b24__05d__02ecolumn0__DOT__wc299) 
                                                      | (~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x18U] 
                                                          >> 0x18U))) 
                                                     & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b24__05d__02ecolumn0__DOT__wc299)) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x18U] 
                                                           >> 0x18U)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b24__05d__02ecolumn0__DOT__wc297) 
                                                       | (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[4U] 
                                                           >> 0x18U))) 
                                                      & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b24__05d__02ecolumn0__DOT__wc297)) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[4U] 
                                                            >> 0x18U))))))));
    __Vtemp_1 = ((0x20U & (((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b24__05d__02ecolumn0__DOT__S) 
                                >> 3U)) << 5U) | (0xffffffe0U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b24__05d__02ecolumn0__DOT__Cout) 
                                                     << 1U)))) 
                 | ((0x10U & ((~ (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b24__05d__02ecolumn0__DOT__S) 
                                   | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b24__05d__02ecolumn0__DOT__S) 
                                      >> 2U)) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b24__05d__02ecolumn0__DOT__S) 
                                                 >> 1U))) 
                              << 4U)) | ((8U & ((~ 
                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b24__05d__02ecolumn0__DOT__n_74) 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b24__05d__02ecolumn0__DOT__n_75))) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_col__05b24__05d__02ecolumn0__a))))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ 
                                                    ((~ 
                                                      (((~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x18U] 
                                                          >> 0x18U)) 
                                                        | (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1cU] 
                                                            >> 0x18U))) 
                                                       & (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0U] 
                                                           >> 0x18U)))) 
                                                     & (~ 
                                                        ((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x18U] 
                                                           >> 0x18U)) 
                                                         & (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1cU] 
                                                             >> 0x18U)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     ((~ 
                                                       (((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[4U] 
                                                           >> 0x18U)) 
                                                         | (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[8U] 
                                                             >> 0x18U))) 
                                                        & (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xcU] 
                                                            >> 0x18U)))) 
                                                      & (~ 
                                                         ((~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[4U] 
                                                            >> 0x18U)) 
                                                          & (~ 
                                                             (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[8U] 
                                                              >> 0x18U))))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b24__05d__02ecolumn0__DOT__Cout 
        = __Vtemp_1;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b24__05d__02ecolumn0__DOT__wc293 
        = (1U & ((IData)((1U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b24__05d__02ecolumn0__DOT__S)))) 
                 & (IData)((2U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b24__05d__02ecolumn0__DOT__S))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_13 = (7U & 
                                               (~ (
                                                   (4U 
                                                    & (((~ (IData)(
                                                                   (0x28U 
                                                                    == 
                                                                    (0x28U 
                                                                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b24__05d__02ecolumn0__DOT__Cout))))) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x28U 
                                                                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b24__05d__02ecolumn0__DOT__Cout))))) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((~ 
                                                            (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b24__05d__02ecolumn0__DOT__S) 
                                                              >> 3U) 
                                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b24__05d__02ecolumn0__DOT__Cout) 
                                                                >> 4U))) 
                                                           << 1U) 
                                                          & ((0x3ffffffeU 
                                                              & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b24__05d__02ecolumn0__DOT__S) 
                                                                 >> 2U)) 
                                                             | (0x1ffffffeU 
                                                                & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b24__05d__02ecolumn0__DOT__Cout) 
                                                                   >> 3U))))) 
                                                      | (1U 
                                                         & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b24__05d__02ecolumn0__DOT__wc293) 
                                                             | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b24__05d__02ecolumn0__DOT__S) 
                                                                >> 2U)) 
                                                            & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b24__05d__02ecolumn0__DOT__wc293)) 
                                                               | (~ 
                                                                  ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b24__05d__02ecolumn0__DOT__S) 
                                                                   >> 2U)))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b6__05d__02erow_1__DOT__wc1293 
        = (1U & (((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_13)) 
                  | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b6__05d__02erow_1__DOT__n_523)) 
                 & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b6__05d__02erow_1__DOT__n_523)) 
                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_13))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b6__05d__02erow_1__DOT__wc1214 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_13) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b6__05d__02erow_1__DOT__n_523));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_word__05b6__05d__02eword__x 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_12) 
            << 2U) | (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_13) 
                            >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Out_reg__DOT__wc6510 
        = (1U & ((~ ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b6__05d__02erow_1__DOT__wc1293)) 
                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525))) 
                 & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525) 
                    | (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b6__05d__02episo_1.b)))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__78(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__78\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b28__05d__02ecolumn0__DOT__S 
        = ((8U & ((~ ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b28__05d__02ecolumn0__DOT__n_21) 
                          & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b28__05d__02ecolumn0__DOT__Cout) 
                             >> 2U))) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b28__05d__02ecolumn0__DOT__n_21) 
                                         | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b28__05d__02ecolumn0__DOT__Cout) 
                                            >> 2U)))) 
                  << 3U)) | ((4U & ((~ (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x14U] 
                                          >> 0x1cU) 
                                         | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x10U] 
                                               >> 0x1cU))) 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x10U] 
                                            >> 0x1cU) 
                                           | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x14U] 
                                                 >> 0x1cU))))) 
                                    << 2U)) | ((2U 
                                                & ((~ 
                                                    (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b28__05d__02ecolumn0__DOT__wc299) 
                                                      | (~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x18U] 
                                                          >> 0x1cU))) 
                                                     & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b28__05d__02ecolumn0__DOT__wc299)) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x18U] 
                                                           >> 0x1cU)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b28__05d__02ecolumn0__DOT__wc297) 
                                                       | (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[4U] 
                                                           >> 0x1cU))) 
                                                      & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b28__05d__02ecolumn0__DOT__wc297)) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[4U] 
                                                            >> 0x1cU))))))));
    __Vtemp_1 = ((0x20U & (((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b28__05d__02ecolumn0__DOT__S) 
                                >> 3U)) << 5U) | (0xffffffe0U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b28__05d__02ecolumn0__DOT__Cout) 
                                                     << 1U)))) 
                 | ((0x10U & ((~ (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b28__05d__02ecolumn0__DOT__S) 
                                   | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b28__05d__02ecolumn0__DOT__S) 
                                      >> 2U)) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b28__05d__02ecolumn0__DOT__S) 
                                                 >> 1U))) 
                              << 4U)) | ((8U & ((~ 
                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b28__05d__02ecolumn0__DOT__n_74) 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b28__05d__02ecolumn0__DOT__n_75))) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_col__05b28__05d__02ecolumn0__a))))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ 
                                                    ((~ 
                                                      (((~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x18U] 
                                                          >> 0x1cU)) 
                                                        | (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1cU] 
                                                            >> 0x1cU))) 
                                                       & (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0U] 
                                                           >> 0x1cU)))) 
                                                     & (~ 
                                                        ((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x18U] 
                                                           >> 0x1cU)) 
                                                         & (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1cU] 
                                                             >> 0x1cU)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     ((~ 
                                                       (((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[4U] 
                                                           >> 0x1cU)) 
                                                         | (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[8U] 
                                                             >> 0x1cU))) 
                                                        & (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xcU] 
                                                            >> 0x1cU)))) 
                                                      & (~ 
                                                         ((~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[4U] 
                                                            >> 0x1cU)) 
                                                          & (~ 
                                                             (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[8U] 
                                                              >> 0x1cU))))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b28__05d__02ecolumn0__DOT__Cout 
        = __Vtemp_1;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b28__05d__02ecolumn0__DOT__wc293 
        = (1U & ((IData)((1U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b28__05d__02ecolumn0__DOT__S)))) 
                 & (IData)((2U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b28__05d__02ecolumn0__DOT__S))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_15 = (7U & 
                                               (~ (
                                                   (4U 
                                                    & (((~ (IData)(
                                                                   (0x28U 
                                                                    == 
                                                                    (0x28U 
                                                                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b28__05d__02ecolumn0__DOT__Cout))))) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x28U 
                                                                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b28__05d__02ecolumn0__DOT__Cout))))) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((~ 
                                                            (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b28__05d__02ecolumn0__DOT__S) 
                                                              >> 3U) 
                                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b28__05d__02ecolumn0__DOT__Cout) 
                                                                >> 4U))) 
                                                           << 1U) 
                                                          & ((0x3ffffffeU 
                                                              & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b28__05d__02ecolumn0__DOT__S) 
                                                                 >> 2U)) 
                                                             | (0x1ffffffeU 
                                                                & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b28__05d__02ecolumn0__DOT__Cout) 
                                                                   >> 3U))))) 
                                                      | (1U 
                                                         & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b28__05d__02ecolumn0__DOT__wc293) 
                                                             | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b28__05d__02ecolumn0__DOT__S) 
                                                                >> 2U)) 
                                                            & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b28__05d__02ecolumn0__DOT__wc293)) 
                                                               | (~ 
                                                                  ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b28__05d__02ecolumn0__DOT__S) 
                                                                   >> 2U)))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b7__05d__02erow_1__DOT__wc1434 
        = (1U & (((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_15)) 
                  | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b7__05d__02erow_1__DOT__n_523)) 
                 & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b7__05d__02erow_1__DOT__n_523)) 
                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_15))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b7__05d__02erow_1__DOT__wc1355 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_15) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b7__05d__02erow_1__DOT__n_523));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_word__05b7__05d__02eword__x 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_14) 
            << 2U) | (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_15) 
                            >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Out_reg__DOT__wc6422 
        = (1U & ((~ ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b7__05d__02erow_1__DOT__wc1434)) 
                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525))) 
                 & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525) 
                    | (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b7__05d__02episo_1.b)))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__79(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__79\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b32__05d__02ecolumn0__DOT__S 
        = ((8U & ((~ ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b32__05d__02ecolumn0__DOT__n_21) 
                          & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b32__05d__02ecolumn0__DOT__Cout) 
                             >> 2U))) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b32__05d__02ecolumn0__DOT__n_21) 
                                         | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b32__05d__02ecolumn0__DOT__Cout) 
                                            >> 2U)))) 
                  << 3U)) | ((4U & ((~ ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x15U] 
                                         | (~ vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x11U])) 
                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x11U] 
                                           | (~ vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x15U])))) 
                                    << 2U)) | ((2U 
                                                & ((~ 
                                                    (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b32__05d__02ecolumn0__DOT__wc299) 
                                                      | (~ 
                                                         vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x19U])) 
                                                     & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b32__05d__02ecolumn0__DOT__wc299)) 
                                                        | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x19U]))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b32__05d__02ecolumn0__DOT__wc297) 
                                                       | (~ 
                                                          vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[5U])) 
                                                      & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b32__05d__02ecolumn0__DOT__wc297)) 
                                                         | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[5U])))))));
    __Vtemp_1 = ((0x20U & (((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b32__05d__02ecolumn0__DOT__S) 
                                >> 3U)) << 5U) | (0xffffffe0U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b32__05d__02ecolumn0__DOT__Cout) 
                                                     << 1U)))) 
                 | ((0x10U & ((~ (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b32__05d__02ecolumn0__DOT__S) 
                                   | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b32__05d__02ecolumn0__DOT__S) 
                                      >> 2U)) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b32__05d__02ecolumn0__DOT__S) 
                                                 >> 1U))) 
                              << 4U)) | ((8U & ((~ 
                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b32__05d__02ecolumn0__DOT__n_74) 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b32__05d__02ecolumn0__DOT__n_75))) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_col__05b32__05d__02ecolumn0__a))))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ 
                                                    ((~ 
                                                      (((~ 
                                                         vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x19U]) 
                                                        | (~ 
                                                           vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1dU])) 
                                                       & (~ 
                                                          vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[1U]))) 
                                                     & (~ 
                                                        ((~ 
                                                          vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x19U]) 
                                                         & (~ 
                                                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1dU]))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     ((~ 
                                                       (((~ 
                                                          vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[5U]) 
                                                         | (~ 
                                                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[9U])) 
                                                        & (~ 
                                                           vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xdU]))) 
                                                      & (~ 
                                                         ((~ 
                                                           vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[5U]) 
                                                          & (~ 
                                                             vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[9U])))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b32__05d__02ecolumn0__DOT__Cout 
        = __Vtemp_1;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b32__05d__02ecolumn0__DOT__wc293 
        = (1U & ((IData)((1U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b32__05d__02ecolumn0__DOT__S)))) 
                 & (IData)((2U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b32__05d__02ecolumn0__DOT__S))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_17 = (7U & 
                                               (~ (
                                                   (4U 
                                                    & (((~ (IData)(
                                                                   (0x28U 
                                                                    == 
                                                                    (0x28U 
                                                                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b32__05d__02ecolumn0__DOT__Cout))))) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x28U 
                                                                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b32__05d__02ecolumn0__DOT__Cout))))) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((~ 
                                                            (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b32__05d__02ecolumn0__DOT__S) 
                                                              >> 3U) 
                                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b32__05d__02ecolumn0__DOT__Cout) 
                                                                >> 4U))) 
                                                           << 1U) 
                                                          & ((0x3ffffffeU 
                                                              & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b32__05d__02ecolumn0__DOT__S) 
                                                                 >> 2U)) 
                                                             | (0x1ffffffeU 
                                                                & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b32__05d__02ecolumn0__DOT__Cout) 
                                                                   >> 3U))))) 
                                                      | (1U 
                                                         & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b32__05d__02ecolumn0__DOT__wc293) 
                                                             | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b32__05d__02ecolumn0__DOT__S) 
                                                                >> 2U)) 
                                                            & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b32__05d__02ecolumn0__DOT__wc293)) 
                                                               | (~ 
                                                                  ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b32__05d__02ecolumn0__DOT__S) 
                                                                   >> 2U)))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b8__05d__02erow_1__DOT__wc1575 
        = (1U & (((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_17)) 
                  | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b8__05d__02erow_1__DOT__n_523)) 
                 & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b8__05d__02erow_1__DOT__n_523)) 
                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_17))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b8__05d__02erow_1__DOT__wc1496 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_17) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b8__05d__02erow_1__DOT__n_523));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_word__05b8__05d__02eword__x 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_16) 
            << 2U) | (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_17) 
                            >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Out_reg__DOT__wc6336 
        = (1U & ((~ ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b8__05d__02erow_1__DOT__wc1575)) 
                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525))) 
                 & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525) 
                    | (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b8__05d__02episo_1.b)))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__80(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__80\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b36__05d__02ecolumn0__DOT__S 
        = ((8U & ((~ ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b36__05d__02ecolumn0__DOT__n_21) 
                          & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b36__05d__02ecolumn0__DOT__Cout) 
                             >> 2U))) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b36__05d__02ecolumn0__DOT__n_21) 
                                         | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b36__05d__02ecolumn0__DOT__Cout) 
                                            >> 2U)))) 
                  << 3U)) | ((4U & ((~ (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x15U] 
                                          >> 4U) | 
                                         (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x11U] 
                                             >> 4U))) 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x11U] 
                                            >> 4U) 
                                           | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x15U] 
                                                 >> 4U))))) 
                                    << 2U)) | ((2U 
                                                & ((~ 
                                                    (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b36__05d__02ecolumn0__DOT__wc299) 
                                                      | (~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x19U] 
                                                          >> 4U))) 
                                                     & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b36__05d__02ecolumn0__DOT__wc299)) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x19U] 
                                                           >> 4U)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b36__05d__02ecolumn0__DOT__wc297) 
                                                       | (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[5U] 
                                                           >> 4U))) 
                                                      & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b36__05d__02ecolumn0__DOT__wc297)) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[5U] 
                                                            >> 4U))))))));
    __Vtemp_1 = ((0x20U & (((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b36__05d__02ecolumn0__DOT__S) 
                                >> 3U)) << 5U) | (0xffffffe0U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b36__05d__02ecolumn0__DOT__Cout) 
                                                     << 1U)))) 
                 | ((0x10U & ((~ (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b36__05d__02ecolumn0__DOT__S) 
                                   | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b36__05d__02ecolumn0__DOT__S) 
                                      >> 2U)) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b36__05d__02ecolumn0__DOT__S) 
                                                 >> 1U))) 
                              << 4U)) | ((8U & ((~ 
                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b36__05d__02ecolumn0__DOT__n_74) 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b36__05d__02ecolumn0__DOT__n_75))) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_col__05b36__05d__02ecolumn0__a))))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ 
                                                    ((~ 
                                                      (((~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x19U] 
                                                          >> 4U)) 
                                                        | (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1dU] 
                                                            >> 4U))) 
                                                       & (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[1U] 
                                                           >> 4U)))) 
                                                     & (~ 
                                                        ((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x19U] 
                                                           >> 4U)) 
                                                         & (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1dU] 
                                                             >> 4U)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     ((~ 
                                                       (((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[5U] 
                                                           >> 4U)) 
                                                         | (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[9U] 
                                                             >> 4U))) 
                                                        & (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xdU] 
                                                            >> 4U)))) 
                                                      & (~ 
                                                         ((~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[5U] 
                                                            >> 4U)) 
                                                          & (~ 
                                                             (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[9U] 
                                                              >> 4U))))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b36__05d__02ecolumn0__DOT__Cout 
        = __Vtemp_1;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b36__05d__02ecolumn0__DOT__wc293 
        = (1U & ((IData)((1U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b36__05d__02ecolumn0__DOT__S)))) 
                 & (IData)((2U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b36__05d__02ecolumn0__DOT__S))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_19 = (7U & 
                                               (~ (
                                                   (4U 
                                                    & (((~ (IData)(
                                                                   (0x28U 
                                                                    == 
                                                                    (0x28U 
                                                                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b36__05d__02ecolumn0__DOT__Cout))))) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x28U 
                                                                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b36__05d__02ecolumn0__DOT__Cout))))) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((~ 
                                                            (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b36__05d__02ecolumn0__DOT__S) 
                                                              >> 3U) 
                                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b36__05d__02ecolumn0__DOT__Cout) 
                                                                >> 4U))) 
                                                           << 1U) 
                                                          & ((0x3ffffffeU 
                                                              & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b36__05d__02ecolumn0__DOT__S) 
                                                                 >> 2U)) 
                                                             | (0x1ffffffeU 
                                                                & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b36__05d__02ecolumn0__DOT__Cout) 
                                                                   >> 3U))))) 
                                                      | (1U 
                                                         & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b36__05d__02ecolumn0__DOT__wc293) 
                                                             | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b36__05d__02ecolumn0__DOT__S) 
                                                                >> 2U)) 
                                                            & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b36__05d__02ecolumn0__DOT__wc293)) 
                                                               | (~ 
                                                                  ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b36__05d__02ecolumn0__DOT__S) 
                                                                   >> 2U)))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b9__05d__02erow_1__DOT__wc1716 
        = (1U & (((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_19)) 
                  | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b9__05d__02erow_1__DOT__n_523)) 
                 & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b9__05d__02erow_1__DOT__n_523)) 
                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_19))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b9__05d__02erow_1__DOT__wc1637 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_19) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b9__05d__02erow_1__DOT__n_523));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_word__05b9__05d__02eword__x 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18) 
            << 2U) | (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_19) 
                            >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Out_reg__DOT__wc6418 
        = (1U & ((~ ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b9__05d__02erow_1__DOT__wc1716)) 
                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525))) 
                 & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525) 
                    | (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b9__05d__02episo_1.b)))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__81(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__81\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b40__05d__02ecolumn0__DOT__S 
        = ((8U & ((~ ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b40__05d__02ecolumn0__DOT__n_21) 
                          & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b40__05d__02ecolumn0__DOT__Cout) 
                             >> 2U))) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b40__05d__02ecolumn0__DOT__n_21) 
                                         | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b40__05d__02ecolumn0__DOT__Cout) 
                                            >> 2U)))) 
                  << 3U)) | ((4U & ((~ (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x15U] 
                                          >> 8U) | 
                                         (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x11U] 
                                             >> 8U))) 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x11U] 
                                            >> 8U) 
                                           | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x15U] 
                                                 >> 8U))))) 
                                    << 2U)) | ((2U 
                                                & ((~ 
                                                    (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b40__05d__02ecolumn0__DOT__wc299) 
                                                      | (~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x19U] 
                                                          >> 8U))) 
                                                     & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b40__05d__02ecolumn0__DOT__wc299)) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x19U] 
                                                           >> 8U)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b40__05d__02ecolumn0__DOT__wc297) 
                                                       | (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[5U] 
                                                           >> 8U))) 
                                                      & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b40__05d__02ecolumn0__DOT__wc297)) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[5U] 
                                                            >> 8U))))))));
    __Vtemp_1 = ((0x20U & (((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b40__05d__02ecolumn0__DOT__S) 
                                >> 3U)) << 5U) | (0xffffffe0U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b40__05d__02ecolumn0__DOT__Cout) 
                                                     << 1U)))) 
                 | ((0x10U & ((~ (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b40__05d__02ecolumn0__DOT__S) 
                                   | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b40__05d__02ecolumn0__DOT__S) 
                                      >> 2U)) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b40__05d__02ecolumn0__DOT__S) 
                                                 >> 1U))) 
                              << 4U)) | ((8U & ((~ 
                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b40__05d__02ecolumn0__DOT__n_74) 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b40__05d__02ecolumn0__DOT__n_75))) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_col__05b40__05d__02ecolumn0__a))))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ 
                                                    ((~ 
                                                      (((~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x19U] 
                                                          >> 8U)) 
                                                        | (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1dU] 
                                                            >> 8U))) 
                                                       & (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[1U] 
                                                           >> 8U)))) 
                                                     & (~ 
                                                        ((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x19U] 
                                                           >> 8U)) 
                                                         & (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1dU] 
                                                             >> 8U)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     ((~ 
                                                       (((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[5U] 
                                                           >> 8U)) 
                                                         | (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[9U] 
                                                             >> 8U))) 
                                                        & (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xdU] 
                                                            >> 8U)))) 
                                                      & (~ 
                                                         ((~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[5U] 
                                                            >> 8U)) 
                                                          & (~ 
                                                             (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[9U] 
                                                              >> 8U))))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b40__05d__02ecolumn0__DOT__Cout 
        = __Vtemp_1;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b40__05d__02ecolumn0__DOT__wc293 
        = (1U & ((IData)((1U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b40__05d__02ecolumn0__DOT__S)))) 
                 & (IData)((2U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b40__05d__02ecolumn0__DOT__S))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_21 = (7U & 
                                               (~ (
                                                   (4U 
                                                    & (((~ (IData)(
                                                                   (0x28U 
                                                                    == 
                                                                    (0x28U 
                                                                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b40__05d__02ecolumn0__DOT__Cout))))) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x28U 
                                                                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b40__05d__02ecolumn0__DOT__Cout))))) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((~ 
                                                            (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b40__05d__02ecolumn0__DOT__S) 
                                                              >> 3U) 
                                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b40__05d__02ecolumn0__DOT__Cout) 
                                                                >> 4U))) 
                                                           << 1U) 
                                                          & ((0x3ffffffeU 
                                                              & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b40__05d__02ecolumn0__DOT__S) 
                                                                 >> 2U)) 
                                                             | (0x1ffffffeU 
                                                                & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b40__05d__02ecolumn0__DOT__Cout) 
                                                                   >> 3U))))) 
                                                      | (1U 
                                                         & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b40__05d__02ecolumn0__DOT__wc293) 
                                                             | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b40__05d__02ecolumn0__DOT__S) 
                                                                >> 2U)) 
                                                            & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b40__05d__02ecolumn0__DOT__wc293)) 
                                                               | (~ 
                                                                  ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b40__05d__02ecolumn0__DOT__S) 
                                                                   >> 2U)))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b10__05d__02erow_1__DOT__wc1857 
        = (1U & (((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_21)) 
                  | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b10__05d__02erow_1__DOT__n_523)) 
                 & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b10__05d__02erow_1__DOT__n_523)) 
                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_21))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b10__05d__02erow_1__DOT__wc1778 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_21) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b10__05d__02erow_1__DOT__n_523));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_word__05b10__05d__02eword__x 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_20) 
            << 2U) | (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_21) 
                            >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Out_reg__DOT__wc6531 
        = (1U & ((~ ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b10__05d__02erow_1__DOT__wc1857)) 
                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525))) 
                 & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525) 
                    | (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b10__05d__02episo_1.b)))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__82(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__82\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b44__05d__02ecolumn0__DOT__S 
        = ((8U & ((~ ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b44__05d__02ecolumn0__DOT__n_21) 
                          & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b44__05d__02ecolumn0__DOT__Cout) 
                             >> 2U))) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b44__05d__02ecolumn0__DOT__n_21) 
                                         | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b44__05d__02ecolumn0__DOT__Cout) 
                                            >> 2U)))) 
                  << 3U)) | ((4U & ((~ (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x15U] 
                                          >> 0xcU) 
                                         | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x11U] 
                                               >> 0xcU))) 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x11U] 
                                            >> 0xcU) 
                                           | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x15U] 
                                                 >> 0xcU))))) 
                                    << 2U)) | ((2U 
                                                & ((~ 
                                                    (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b44__05d__02ecolumn0__DOT__wc299) 
                                                      | (~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x19U] 
                                                          >> 0xcU))) 
                                                     & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b44__05d__02ecolumn0__DOT__wc299)) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x19U] 
                                                           >> 0xcU)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b44__05d__02ecolumn0__DOT__wc297) 
                                                       | (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[5U] 
                                                           >> 0xcU))) 
                                                      & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b44__05d__02ecolumn0__DOT__wc297)) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[5U] 
                                                            >> 0xcU))))))));
    __Vtemp_1 = ((0x20U & (((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b44__05d__02ecolumn0__DOT__S) 
                                >> 3U)) << 5U) | (0xffffffe0U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b44__05d__02ecolumn0__DOT__Cout) 
                                                     << 1U)))) 
                 | ((0x10U & ((~ (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b44__05d__02ecolumn0__DOT__S) 
                                   | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b44__05d__02ecolumn0__DOT__S) 
                                      >> 2U)) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b44__05d__02ecolumn0__DOT__S) 
                                                 >> 1U))) 
                              << 4U)) | ((8U & ((~ 
                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b44__05d__02ecolumn0__DOT__n_74) 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b44__05d__02ecolumn0__DOT__n_75))) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_col__05b44__05d__02ecolumn0__a))))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ 
                                                    ((~ 
                                                      (((~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x19U] 
                                                          >> 0xcU)) 
                                                        | (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1dU] 
                                                            >> 0xcU))) 
                                                       & (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[1U] 
                                                           >> 0xcU)))) 
                                                     & (~ 
                                                        ((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x19U] 
                                                           >> 0xcU)) 
                                                         & (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1dU] 
                                                             >> 0xcU)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     ((~ 
                                                       (((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[5U] 
                                                           >> 0xcU)) 
                                                         | (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[9U] 
                                                             >> 0xcU))) 
                                                        & (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xdU] 
                                                            >> 0xcU)))) 
                                                      & (~ 
                                                         ((~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[5U] 
                                                            >> 0xcU)) 
                                                          & (~ 
                                                             (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[9U] 
                                                              >> 0xcU))))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b44__05d__02ecolumn0__DOT__Cout 
        = __Vtemp_1;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b44__05d__02ecolumn0__DOT__wc293 
        = (1U & ((IData)((1U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b44__05d__02ecolumn0__DOT__S)))) 
                 & (IData)((2U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b44__05d__02ecolumn0__DOT__S))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_23 = (7U & 
                                               (~ (
                                                   (4U 
                                                    & (((~ (IData)(
                                                                   (0x28U 
                                                                    == 
                                                                    (0x28U 
                                                                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b44__05d__02ecolumn0__DOT__Cout))))) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x28U 
                                                                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b44__05d__02ecolumn0__DOT__Cout))))) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((~ 
                                                            (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b44__05d__02ecolumn0__DOT__S) 
                                                              >> 3U) 
                                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b44__05d__02ecolumn0__DOT__Cout) 
                                                                >> 4U))) 
                                                           << 1U) 
                                                          & ((0x3ffffffeU 
                                                              & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b44__05d__02ecolumn0__DOT__S) 
                                                                 >> 2U)) 
                                                             | (0x1ffffffeU 
                                                                & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b44__05d__02ecolumn0__DOT__Cout) 
                                                                   >> 3U))))) 
                                                      | (1U 
                                                         & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b44__05d__02ecolumn0__DOT__wc293) 
                                                             | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b44__05d__02ecolumn0__DOT__S) 
                                                                >> 2U)) 
                                                            & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b44__05d__02ecolumn0__DOT__wc293)) 
                                                               | (~ 
                                                                  ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b44__05d__02ecolumn0__DOT__S) 
                                                                   >> 2U)))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b11__05d__02erow_1__DOT__wc1998 
        = (1U & (((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_23)) 
                  | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b11__05d__02erow_1__DOT__n_523)) 
                 & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b11__05d__02erow_1__DOT__n_523)) 
                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_23))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b11__05d__02erow_1__DOT__wc1919 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_23) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b11__05d__02erow_1__DOT__n_523));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_word__05b11__05d__02eword__x 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_22) 
            << 2U) | (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_23) 
                            >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Out_reg__DOT__wc6645 
        = (1U & ((~ ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b11__05d__02erow_1__DOT__wc1998)) 
                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525))) 
                 & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525) 
                    | (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b11__05d__02episo_1.b)))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__83(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__83\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b48__05d__02ecolumn0__DOT__S 
        = ((8U & ((~ ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b48__05d__02ecolumn0__DOT__n_21) 
                          & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b48__05d__02ecolumn0__DOT__Cout) 
                             >> 2U))) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b48__05d__02ecolumn0__DOT__n_21) 
                                         | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b48__05d__02ecolumn0__DOT__Cout) 
                                            >> 2U)))) 
                  << 3U)) | ((4U & ((~ (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x15U] 
                                          >> 0x10U) 
                                         | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x11U] 
                                               >> 0x10U))) 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x11U] 
                                            >> 0x10U) 
                                           | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x15U] 
                                                 >> 0x10U))))) 
                                    << 2U)) | ((2U 
                                                & ((~ 
                                                    (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b48__05d__02ecolumn0__DOT__wc299) 
                                                      | (~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x19U] 
                                                          >> 0x10U))) 
                                                     & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b48__05d__02ecolumn0__DOT__wc299)) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x19U] 
                                                           >> 0x10U)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b48__05d__02ecolumn0__DOT__wc297) 
                                                       | (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[5U] 
                                                           >> 0x10U))) 
                                                      & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b48__05d__02ecolumn0__DOT__wc297)) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[5U] 
                                                            >> 0x10U))))))));
    __Vtemp_1 = ((0x20U & (((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b48__05d__02ecolumn0__DOT__S) 
                                >> 3U)) << 5U) | (0xffffffe0U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b48__05d__02ecolumn0__DOT__Cout) 
                                                     << 1U)))) 
                 | ((0x10U & ((~ (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b48__05d__02ecolumn0__DOT__S) 
                                   | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b48__05d__02ecolumn0__DOT__S) 
                                      >> 2U)) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b48__05d__02ecolumn0__DOT__S) 
                                                 >> 1U))) 
                              << 4U)) | ((8U & ((~ 
                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b48__05d__02ecolumn0__DOT__n_74) 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b48__05d__02ecolumn0__DOT__n_75))) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_col__05b48__05d__02ecolumn0__a))))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ 
                                                    ((~ 
                                                      (((~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x19U] 
                                                          >> 0x10U)) 
                                                        | (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1dU] 
                                                            >> 0x10U))) 
                                                       & (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[1U] 
                                                           >> 0x10U)))) 
                                                     & (~ 
                                                        ((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x19U] 
                                                           >> 0x10U)) 
                                                         & (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1dU] 
                                                             >> 0x10U)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     ((~ 
                                                       (((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[5U] 
                                                           >> 0x10U)) 
                                                         | (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[9U] 
                                                             >> 0x10U))) 
                                                        & (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xdU] 
                                                            >> 0x10U)))) 
                                                      & (~ 
                                                         ((~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[5U] 
                                                            >> 0x10U)) 
                                                          & (~ 
                                                             (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[9U] 
                                                              >> 0x10U))))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b48__05d__02ecolumn0__DOT__Cout 
        = __Vtemp_1;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b48__05d__02ecolumn0__DOT__wc293 
        = (1U & ((IData)((1U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b48__05d__02ecolumn0__DOT__S)))) 
                 & (IData)((2U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b48__05d__02ecolumn0__DOT__S))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_25 = (7U & 
                                               (~ (
                                                   (4U 
                                                    & (((~ (IData)(
                                                                   (0x28U 
                                                                    == 
                                                                    (0x28U 
                                                                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b48__05d__02ecolumn0__DOT__Cout))))) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x28U 
                                                                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b48__05d__02ecolumn0__DOT__Cout))))) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((~ 
                                                            (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b48__05d__02ecolumn0__DOT__S) 
                                                              >> 3U) 
                                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b48__05d__02ecolumn0__DOT__Cout) 
                                                                >> 4U))) 
                                                           << 1U) 
                                                          & ((0x3ffffffeU 
                                                              & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b48__05d__02ecolumn0__DOT__S) 
                                                                 >> 2U)) 
                                                             | (0x1ffffffeU 
                                                                & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b48__05d__02ecolumn0__DOT__Cout) 
                                                                   >> 3U))))) 
                                                      | (1U 
                                                         & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b48__05d__02ecolumn0__DOT__wc293) 
                                                             | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b48__05d__02ecolumn0__DOT__S) 
                                                                >> 2U)) 
                                                            & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b48__05d__02ecolumn0__DOT__wc293)) 
                                                               | (~ 
                                                                  ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b48__05d__02ecolumn0__DOT__S) 
                                                                   >> 2U)))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b12__05d__02erow_1__DOT__wc2139 
        = (1U & (((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_25)) 
                  | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b12__05d__02erow_1__DOT__n_523)) 
                 & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b12__05d__02erow_1__DOT__n_523)) 
                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_25))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b12__05d__02erow_1__DOT__wc2060 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_25) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b12__05d__02erow_1__DOT__n_523));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_word__05b12__05d__02eword__x 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_24) 
            << 2U) | (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_25) 
                            >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Out_reg__DOT__wc6760 
        = (1U & ((~ ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b12__05d__02erow_1__DOT__wc2139)) 
                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525))) 
                 & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525) 
                    | (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b12__05d__02episo_1.b)))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__84(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__84\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b52__05d__02ecolumn0__DOT__S 
        = ((8U & ((~ ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b52__05d__02ecolumn0__DOT__n_21) 
                          & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b52__05d__02ecolumn0__DOT__Cout) 
                             >> 2U))) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b52__05d__02ecolumn0__DOT__n_21) 
                                         | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b52__05d__02ecolumn0__DOT__Cout) 
                                            >> 2U)))) 
                  << 3U)) | ((4U & ((~ (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x15U] 
                                          >> 0x14U) 
                                         | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x11U] 
                                               >> 0x14U))) 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x11U] 
                                            >> 0x14U) 
                                           | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x15U] 
                                                 >> 0x14U))))) 
                                    << 2U)) | ((2U 
                                                & ((~ 
                                                    (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b52__05d__02ecolumn0__DOT__wc299) 
                                                      | (~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x19U] 
                                                          >> 0x14U))) 
                                                     & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b52__05d__02ecolumn0__DOT__wc299)) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x19U] 
                                                           >> 0x14U)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b52__05d__02ecolumn0__DOT__wc297) 
                                                       | (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[5U] 
                                                           >> 0x14U))) 
                                                      & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b52__05d__02ecolumn0__DOT__wc297)) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[5U] 
                                                            >> 0x14U))))))));
    __Vtemp_1 = ((0x20U & (((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b52__05d__02ecolumn0__DOT__S) 
                                >> 3U)) << 5U) | (0xffffffe0U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b52__05d__02ecolumn0__DOT__Cout) 
                                                     << 1U)))) 
                 | ((0x10U & ((~ (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b52__05d__02ecolumn0__DOT__S) 
                                   | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b52__05d__02ecolumn0__DOT__S) 
                                      >> 2U)) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b52__05d__02ecolumn0__DOT__S) 
                                                 >> 1U))) 
                              << 4U)) | ((8U & ((~ 
                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b52__05d__02ecolumn0__DOT__n_74) 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b52__05d__02ecolumn0__DOT__n_75))) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_col__05b52__05d__02ecolumn0__a))))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ 
                                                    ((~ 
                                                      (((~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x19U] 
                                                          >> 0x14U)) 
                                                        | (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1dU] 
                                                            >> 0x14U))) 
                                                       & (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[1U] 
                                                           >> 0x14U)))) 
                                                     & (~ 
                                                        ((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x19U] 
                                                           >> 0x14U)) 
                                                         & (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1dU] 
                                                             >> 0x14U)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     ((~ 
                                                       (((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[5U] 
                                                           >> 0x14U)) 
                                                         | (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[9U] 
                                                             >> 0x14U))) 
                                                        & (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xdU] 
                                                            >> 0x14U)))) 
                                                      & (~ 
                                                         ((~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[5U] 
                                                            >> 0x14U)) 
                                                          & (~ 
                                                             (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[9U] 
                                                              >> 0x14U))))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b52__05d__02ecolumn0__DOT__Cout 
        = __Vtemp_1;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b52__05d__02ecolumn0__DOT__wc293 
        = (1U & ((IData)((1U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b52__05d__02ecolumn0__DOT__S)))) 
                 & (IData)((2U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b52__05d__02ecolumn0__DOT__S))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_27 = (7U & 
                                               (~ (
                                                   (4U 
                                                    & (((~ (IData)(
                                                                   (0x28U 
                                                                    == 
                                                                    (0x28U 
                                                                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b52__05d__02ecolumn0__DOT__Cout))))) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x28U 
                                                                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b52__05d__02ecolumn0__DOT__Cout))))) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((~ 
                                                            (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b52__05d__02ecolumn0__DOT__S) 
                                                              >> 3U) 
                                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b52__05d__02ecolumn0__DOT__Cout) 
                                                                >> 4U))) 
                                                           << 1U) 
                                                          & ((0x3ffffffeU 
                                                              & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b52__05d__02ecolumn0__DOT__S) 
                                                                 >> 2U)) 
                                                             | (0x1ffffffeU 
                                                                & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b52__05d__02ecolumn0__DOT__Cout) 
                                                                   >> 3U))))) 
                                                      | (1U 
                                                         & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b52__05d__02ecolumn0__DOT__wc293) 
                                                             | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b52__05d__02ecolumn0__DOT__S) 
                                                                >> 2U)) 
                                                            & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b52__05d__02ecolumn0__DOT__wc293)) 
                                                               | (~ 
                                                                  ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b52__05d__02ecolumn0__DOT__S) 
                                                                   >> 2U)))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b13__05d__02erow_1__DOT__wc2280 
        = (1U & (((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_27)) 
                  | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b13__05d__02erow_1__DOT__n_523)) 
                 & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b13__05d__02erow_1__DOT__n_523)) 
                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_27))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b13__05d__02erow_1__DOT__wc2201 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_27) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b13__05d__02erow_1__DOT__n_523));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_word__05b13__05d__02eword__x 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_26) 
            << 2U) | (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_27) 
                            >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Out_reg__DOT__wc6874 
        = (1U & ((~ ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b13__05d__02erow_1__DOT__wc2280)) 
                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525))) 
                 & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525) 
                    | (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b13__05d__02episo_1.b)))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__85(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__85\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b56__05d__02ecolumn0__DOT__S 
        = ((8U & ((~ ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b56__05d__02ecolumn0__DOT__n_21) 
                          & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b56__05d__02ecolumn0__DOT__Cout) 
                             >> 2U))) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b56__05d__02ecolumn0__DOT__n_21) 
                                         | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b56__05d__02ecolumn0__DOT__Cout) 
                                            >> 2U)))) 
                  << 3U)) | ((4U & ((~ (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x15U] 
                                          >> 0x18U) 
                                         | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x11U] 
                                               >> 0x18U))) 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x11U] 
                                            >> 0x18U) 
                                           | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x15U] 
                                                 >> 0x18U))))) 
                                    << 2U)) | ((2U 
                                                & ((~ 
                                                    (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b56__05d__02ecolumn0__DOT__wc299) 
                                                      | (~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x19U] 
                                                          >> 0x18U))) 
                                                     & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b56__05d__02ecolumn0__DOT__wc299)) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x19U] 
                                                           >> 0x18U)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b56__05d__02ecolumn0__DOT__wc297) 
                                                       | (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[5U] 
                                                           >> 0x18U))) 
                                                      & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b56__05d__02ecolumn0__DOT__wc297)) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[5U] 
                                                            >> 0x18U))))))));
    __Vtemp_1 = ((0x20U & (((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b56__05d__02ecolumn0__DOT__S) 
                                >> 3U)) << 5U) | (0xffffffe0U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b56__05d__02ecolumn0__DOT__Cout) 
                                                     << 1U)))) 
                 | ((0x10U & ((~ (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b56__05d__02ecolumn0__DOT__S) 
                                   | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b56__05d__02ecolumn0__DOT__S) 
                                      >> 2U)) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b56__05d__02ecolumn0__DOT__S) 
                                                 >> 1U))) 
                              << 4U)) | ((8U & ((~ 
                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b56__05d__02ecolumn0__DOT__n_74) 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b56__05d__02ecolumn0__DOT__n_75))) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_col__05b56__05d__02ecolumn0__a))))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ 
                                                    ((~ 
                                                      (((~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x19U] 
                                                          >> 0x18U)) 
                                                        | (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1dU] 
                                                            >> 0x18U))) 
                                                       & (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[1U] 
                                                           >> 0x18U)))) 
                                                     & (~ 
                                                        ((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x19U] 
                                                           >> 0x18U)) 
                                                         & (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1dU] 
                                                             >> 0x18U)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     ((~ 
                                                       (((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[5U] 
                                                           >> 0x18U)) 
                                                         | (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[9U] 
                                                             >> 0x18U))) 
                                                        & (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xdU] 
                                                            >> 0x18U)))) 
                                                      & (~ 
                                                         ((~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[5U] 
                                                            >> 0x18U)) 
                                                          & (~ 
                                                             (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[9U] 
                                                              >> 0x18U))))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b56__05d__02ecolumn0__DOT__Cout 
        = __Vtemp_1;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b56__05d__02ecolumn0__DOT__wc293 
        = (1U & ((IData)((1U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b56__05d__02ecolumn0__DOT__S)))) 
                 & (IData)((2U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b56__05d__02ecolumn0__DOT__S))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_29 = (7U & 
                                               (~ (
                                                   (4U 
                                                    & (((~ (IData)(
                                                                   (0x28U 
                                                                    == 
                                                                    (0x28U 
                                                                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b56__05d__02ecolumn0__DOT__Cout))))) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x28U 
                                                                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b56__05d__02ecolumn0__DOT__Cout))))) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((~ 
                                                            (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b56__05d__02ecolumn0__DOT__S) 
                                                              >> 3U) 
                                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b56__05d__02ecolumn0__DOT__Cout) 
                                                                >> 4U))) 
                                                           << 1U) 
                                                          & ((0x3ffffffeU 
                                                              & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b56__05d__02ecolumn0__DOT__S) 
                                                                 >> 2U)) 
                                                             | (0x1ffffffeU 
                                                                & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b56__05d__02ecolumn0__DOT__Cout) 
                                                                   >> 3U))))) 
                                                      | (1U 
                                                         & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b56__05d__02ecolumn0__DOT__wc293) 
                                                             | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b56__05d__02ecolumn0__DOT__S) 
                                                                >> 2U)) 
                                                            & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b56__05d__02ecolumn0__DOT__wc293)) 
                                                               | (~ 
                                                                  ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b56__05d__02ecolumn0__DOT__S) 
                                                                   >> 2U)))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b14__05d__02erow_1__DOT__wc2421 
        = (1U & (((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_29)) 
                  | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b14__05d__02erow_1__DOT__n_523)) 
                 & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b14__05d__02erow_1__DOT__n_523)) 
                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_29))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b14__05d__02erow_1__DOT__wc2342 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_29) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b14__05d__02erow_1__DOT__n_523));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_word__05b14__05d__02eword__x 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_28) 
            << 2U) | (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_29) 
                            >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Out_reg__DOT__wc6162 
        = (1U & ((~ ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b14__05d__02erow_1__DOT__wc2421)) 
                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525))) 
                 & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525) 
                    | (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b14__05d__02episo_1.b)))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__86(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__86\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b60__05d__02ecolumn0__DOT__S 
        = ((8U & ((~ ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b60__05d__02ecolumn0__DOT__n_21) 
                          & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b60__05d__02ecolumn0__DOT__Cout) 
                             >> 2U))) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b60__05d__02ecolumn0__DOT__n_21) 
                                         | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b60__05d__02ecolumn0__DOT__Cout) 
                                            >> 2U)))) 
                  << 3U)) | ((4U & ((~ (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x15U] 
                                          >> 0x1cU) 
                                         | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x11U] 
                                               >> 0x1cU))) 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x11U] 
                                            >> 0x1cU) 
                                           | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x15U] 
                                                 >> 0x1cU))))) 
                                    << 2U)) | ((2U 
                                                & ((~ 
                                                    (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b60__05d__02ecolumn0__DOT__wc299) 
                                                      | (~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x19U] 
                                                          >> 0x1cU))) 
                                                     & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b60__05d__02ecolumn0__DOT__wc299)) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x19U] 
                                                           >> 0x1cU)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b60__05d__02ecolumn0__DOT__wc297) 
                                                       | (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[5U] 
                                                           >> 0x1cU))) 
                                                      & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b60__05d__02ecolumn0__DOT__wc297)) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[5U] 
                                                            >> 0x1cU))))))));
    __Vtemp_1 = ((0x20U & (((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b60__05d__02ecolumn0__DOT__S) 
                                >> 3U)) << 5U) | (0xffffffe0U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b60__05d__02ecolumn0__DOT__Cout) 
                                                     << 1U)))) 
                 | ((0x10U & ((~ (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b60__05d__02ecolumn0__DOT__S) 
                                   | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b60__05d__02ecolumn0__DOT__S) 
                                      >> 2U)) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b60__05d__02ecolumn0__DOT__S) 
                                                 >> 1U))) 
                              << 4U)) | ((8U & ((~ 
                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b60__05d__02ecolumn0__DOT__n_74) 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b60__05d__02ecolumn0__DOT__n_75))) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_col__05b60__05d__02ecolumn0__a))))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ 
                                                    ((~ 
                                                      (((~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x19U] 
                                                          >> 0x1cU)) 
                                                        | (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1dU] 
                                                            >> 0x1cU))) 
                                                       & (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[1U] 
                                                           >> 0x1cU)))) 
                                                     & (~ 
                                                        ((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x19U] 
                                                           >> 0x1cU)) 
                                                         & (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1dU] 
                                                             >> 0x1cU)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     ((~ 
                                                       (((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[5U] 
                                                           >> 0x1cU)) 
                                                         | (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[9U] 
                                                             >> 0x1cU))) 
                                                        & (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xdU] 
                                                            >> 0x1cU)))) 
                                                      & (~ 
                                                         ((~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[5U] 
                                                            >> 0x1cU)) 
                                                          & (~ 
                                                             (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[9U] 
                                                              >> 0x1cU))))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b60__05d__02ecolumn0__DOT__Cout 
        = __Vtemp_1;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b60__05d__02ecolumn0__DOT__wc293 
        = (1U & ((IData)((1U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b60__05d__02ecolumn0__DOT__S)))) 
                 & (IData)((2U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b60__05d__02ecolumn0__DOT__S))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_31 = (7U & 
                                               (~ (
                                                   (4U 
                                                    & (((~ (IData)(
                                                                   (0x28U 
                                                                    == 
                                                                    (0x28U 
                                                                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b60__05d__02ecolumn0__DOT__Cout))))) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x28U 
                                                                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b60__05d__02ecolumn0__DOT__Cout))))) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((~ 
                                                            (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b60__05d__02ecolumn0__DOT__S) 
                                                              >> 3U) 
                                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b60__05d__02ecolumn0__DOT__Cout) 
                                                                >> 4U))) 
                                                           << 1U) 
                                                          & ((0x3ffffffeU 
                                                              & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b60__05d__02ecolumn0__DOT__S) 
                                                                 >> 2U)) 
                                                             | (0x1ffffffeU 
                                                                & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b60__05d__02ecolumn0__DOT__Cout) 
                                                                   >> 3U))))) 
                                                      | (1U 
                                                         & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b60__05d__02ecolumn0__DOT__wc293) 
                                                             | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b60__05d__02ecolumn0__DOT__S) 
                                                                >> 2U)) 
                                                            & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b60__05d__02ecolumn0__DOT__wc293)) 
                                                               | (~ 
                                                                  ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b60__05d__02ecolumn0__DOT__S) 
                                                                   >> 2U)))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b15__05d__02erow_1__DOT__wc2562 
        = (1U & (((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_31)) 
                  | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b15__05d__02erow_1__DOT__n_523)) 
                 & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b15__05d__02erow_1__DOT__n_523)) 
                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_31))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b15__05d__02erow_1__DOT__wc2483 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_31) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b15__05d__02erow_1__DOT__n_523));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_word__05b15__05d__02eword__x 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_30) 
            << 2U) | (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_31) 
                            >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Out_reg__DOT__wc6126 
        = (1U & ((~ ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b15__05d__02erow_1__DOT__wc2562)) 
                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525))) 
                 & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525) 
                    | (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b15__05d__02episo_1.b)))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__87(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__87\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b64__05d__02ecolumn0__DOT__S 
        = ((8U & ((~ ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b64__05d__02ecolumn0__DOT__n_21) 
                          & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b64__05d__02ecolumn0__DOT__Cout) 
                             >> 2U))) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b64__05d__02ecolumn0__DOT__n_21) 
                                         | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b64__05d__02ecolumn0__DOT__Cout) 
                                            >> 2U)))) 
                  << 3U)) | ((4U & ((~ ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x16U] 
                                         | (~ vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x12U])) 
                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x12U] 
                                           | (~ vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x16U])))) 
                                    << 2U)) | ((2U 
                                                & ((~ 
                                                    (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b64__05d__02ecolumn0__DOT__wc299) 
                                                      | (~ 
                                                         vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1aU])) 
                                                     & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b64__05d__02ecolumn0__DOT__wc299)) 
                                                        | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1aU]))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b64__05d__02ecolumn0__DOT__wc297) 
                                                       | (~ 
                                                          vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[6U])) 
                                                      & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b64__05d__02ecolumn0__DOT__wc297)) 
                                                         | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[6U])))))));
    __Vtemp_1 = ((0x20U & (((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b64__05d__02ecolumn0__DOT__S) 
                                >> 3U)) << 5U) | (0xffffffe0U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b64__05d__02ecolumn0__DOT__Cout) 
                                                     << 1U)))) 
                 | ((0x10U & ((~ (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b64__05d__02ecolumn0__DOT__S) 
                                   | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b64__05d__02ecolumn0__DOT__S) 
                                      >> 2U)) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b64__05d__02ecolumn0__DOT__S) 
                                                 >> 1U))) 
                              << 4U)) | ((8U & ((~ 
                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b64__05d__02ecolumn0__DOT__n_74) 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b64__05d__02ecolumn0__DOT__n_75))) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_col__05b64__05d__02ecolumn0__a))))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ 
                                                    ((~ 
                                                      (((~ 
                                                         vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1aU]) 
                                                        | (~ 
                                                           vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1eU])) 
                                                       & (~ 
                                                          vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[2U]))) 
                                                     & (~ 
                                                        ((~ 
                                                          vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1aU]) 
                                                         & (~ 
                                                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1eU]))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     ((~ 
                                                       (((~ 
                                                          vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[6U]) 
                                                         | (~ 
                                                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xaU])) 
                                                        & (~ 
                                                           vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xeU]))) 
                                                      & (~ 
                                                         ((~ 
                                                           vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[6U]) 
                                                          & (~ 
                                                             vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xaU])))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b64__05d__02ecolumn0__DOT__Cout 
        = __Vtemp_1;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b64__05d__02ecolumn0__DOT__wc293 
        = (1U & ((IData)((1U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b64__05d__02ecolumn0__DOT__S)))) 
                 & (IData)((2U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b64__05d__02ecolumn0__DOT__S))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_33 = (7U & 
                                               (~ (
                                                   (4U 
                                                    & (((~ (IData)(
                                                                   (0x28U 
                                                                    == 
                                                                    (0x28U 
                                                                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b64__05d__02ecolumn0__DOT__Cout))))) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x28U 
                                                                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b64__05d__02ecolumn0__DOT__Cout))))) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((~ 
                                                            (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b64__05d__02ecolumn0__DOT__S) 
                                                              >> 3U) 
                                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b64__05d__02ecolumn0__DOT__Cout) 
                                                                >> 4U))) 
                                                           << 1U) 
                                                          & ((0x3ffffffeU 
                                                              & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b64__05d__02ecolumn0__DOT__S) 
                                                                 >> 2U)) 
                                                             | (0x1ffffffeU 
                                                                & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b64__05d__02ecolumn0__DOT__Cout) 
                                                                   >> 3U))))) 
                                                      | (1U 
                                                         & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b64__05d__02ecolumn0__DOT__wc293) 
                                                             | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b64__05d__02ecolumn0__DOT__S) 
                                                                >> 2U)) 
                                                            & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b64__05d__02ecolumn0__DOT__wc293)) 
                                                               | (~ 
                                                                  ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b64__05d__02ecolumn0__DOT__S) 
                                                                   >> 2U)))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b16__05d__02erow_1__DOT__wc2703 
        = (1U & (((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_33)) 
                  | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b16__05d__02erow_1__DOT__n_523)) 
                 & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b16__05d__02erow_1__DOT__n_523)) 
                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_33))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b16__05d__02erow_1__DOT__wc2624 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_33) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b16__05d__02erow_1__DOT__n_523));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_word__05b16__05d__02eword__x 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_32) 
            << 2U) | (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_33) 
                            >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Out_reg__DOT__wc6090 
        = (1U & ((~ ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b16__05d__02erow_1__DOT__wc2703)) 
                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525))) 
                 & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525) 
                    | (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b16__05d__02episo_1.b)))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__88(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__88\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b68__05d__02ecolumn0__DOT__S 
        = ((8U & ((~ ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b68__05d__02ecolumn0__DOT__n_21) 
                          & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b68__05d__02ecolumn0__DOT__Cout) 
                             >> 2U))) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b68__05d__02ecolumn0__DOT__n_21) 
                                         | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b68__05d__02ecolumn0__DOT__Cout) 
                                            >> 2U)))) 
                  << 3U)) | ((4U & ((~ (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x16U] 
                                          >> 4U) | 
                                         (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x12U] 
                                             >> 4U))) 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x12U] 
                                            >> 4U) 
                                           | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x16U] 
                                                 >> 4U))))) 
                                    << 2U)) | ((2U 
                                                & ((~ 
                                                    (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b68__05d__02ecolumn0__DOT__wc299) 
                                                      | (~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1aU] 
                                                          >> 4U))) 
                                                     & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b68__05d__02ecolumn0__DOT__wc299)) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1aU] 
                                                           >> 4U)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b68__05d__02ecolumn0__DOT__wc297) 
                                                       | (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[6U] 
                                                           >> 4U))) 
                                                      & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b68__05d__02ecolumn0__DOT__wc297)) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[6U] 
                                                            >> 4U))))))));
    __Vtemp_1 = ((0x20U & (((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b68__05d__02ecolumn0__DOT__S) 
                                >> 3U)) << 5U) | (0xffffffe0U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b68__05d__02ecolumn0__DOT__Cout) 
                                                     << 1U)))) 
                 | ((0x10U & ((~ (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b68__05d__02ecolumn0__DOT__S) 
                                   | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b68__05d__02ecolumn0__DOT__S) 
                                      >> 2U)) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b68__05d__02ecolumn0__DOT__S) 
                                                 >> 1U))) 
                              << 4U)) | ((8U & ((~ 
                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b68__05d__02ecolumn0__DOT__n_74) 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b68__05d__02ecolumn0__DOT__n_75))) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_col__05b68__05d__02ecolumn0__a))))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ 
                                                    ((~ 
                                                      (((~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1aU] 
                                                          >> 4U)) 
                                                        | (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1eU] 
                                                            >> 4U))) 
                                                       & (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[2U] 
                                                           >> 4U)))) 
                                                     & (~ 
                                                        ((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1aU] 
                                                           >> 4U)) 
                                                         & (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1eU] 
                                                             >> 4U)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     ((~ 
                                                       (((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[6U] 
                                                           >> 4U)) 
                                                         | (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xaU] 
                                                             >> 4U))) 
                                                        & (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xeU] 
                                                            >> 4U)))) 
                                                      & (~ 
                                                         ((~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[6U] 
                                                            >> 4U)) 
                                                          & (~ 
                                                             (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xaU] 
                                                              >> 4U))))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b68__05d__02ecolumn0__DOT__Cout 
        = __Vtemp_1;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b68__05d__02ecolumn0__DOT__wc293 
        = (1U & ((IData)((1U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b68__05d__02ecolumn0__DOT__S)))) 
                 & (IData)((2U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b68__05d__02ecolumn0__DOT__S))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_35 = (7U & 
                                               (~ (
                                                   (4U 
                                                    & (((~ (IData)(
                                                                   (0x28U 
                                                                    == 
                                                                    (0x28U 
                                                                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b68__05d__02ecolumn0__DOT__Cout))))) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x28U 
                                                                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b68__05d__02ecolumn0__DOT__Cout))))) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((~ 
                                                            (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b68__05d__02ecolumn0__DOT__S) 
                                                              >> 3U) 
                                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b68__05d__02ecolumn0__DOT__Cout) 
                                                                >> 4U))) 
                                                           << 1U) 
                                                          & ((0x3ffffffeU 
                                                              & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b68__05d__02ecolumn0__DOT__S) 
                                                                 >> 2U)) 
                                                             | (0x1ffffffeU 
                                                                & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b68__05d__02ecolumn0__DOT__Cout) 
                                                                   >> 3U))))) 
                                                      | (1U 
                                                         & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b68__05d__02ecolumn0__DOT__wc293) 
                                                             | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b68__05d__02ecolumn0__DOT__S) 
                                                                >> 2U)) 
                                                            & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b68__05d__02ecolumn0__DOT__wc293)) 
                                                               | (~ 
                                                                  ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b68__05d__02ecolumn0__DOT__S) 
                                                                   >> 2U)))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b17__05d__02erow_1__DOT__wc2844 
        = (1U & (((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_35)) 
                  | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b17__05d__02erow_1__DOT__n_523)) 
                 & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b17__05d__02erow_1__DOT__n_523)) 
                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_35))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b17__05d__02erow_1__DOT__wc2765 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_35) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b17__05d__02erow_1__DOT__n_523));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_word__05b17__05d__02eword__x 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_34) 
            << 2U) | (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_35) 
                            >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Out_reg__DOT__wc6052 
        = (1U & ((~ ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b17__05d__02erow_1__DOT__wc2844)) 
                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525))) 
                 & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525) 
                    | (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b17__05d__02episo_1.b)))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__89(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__89\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b72__05d__02ecolumn0__DOT__S 
        = ((8U & ((~ ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b72__05d__02ecolumn0__DOT__n_21) 
                          & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b72__05d__02ecolumn0__DOT__Cout) 
                             >> 2U))) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b72__05d__02ecolumn0__DOT__n_21) 
                                         | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b72__05d__02ecolumn0__DOT__Cout) 
                                            >> 2U)))) 
                  << 3U)) | ((4U & ((~ (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x16U] 
                                          >> 8U) | 
                                         (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x12U] 
                                             >> 8U))) 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x12U] 
                                            >> 8U) 
                                           | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x16U] 
                                                 >> 8U))))) 
                                    << 2U)) | ((2U 
                                                & ((~ 
                                                    (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b72__05d__02ecolumn0__DOT__wc299) 
                                                      | (~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1aU] 
                                                          >> 8U))) 
                                                     & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b72__05d__02ecolumn0__DOT__wc299)) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1aU] 
                                                           >> 8U)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b72__05d__02ecolumn0__DOT__wc297) 
                                                       | (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[6U] 
                                                           >> 8U))) 
                                                      & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b72__05d__02ecolumn0__DOT__wc297)) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[6U] 
                                                            >> 8U))))))));
    __Vtemp_1 = ((0x20U & (((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b72__05d__02ecolumn0__DOT__S) 
                                >> 3U)) << 5U) | (0xffffffe0U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b72__05d__02ecolumn0__DOT__Cout) 
                                                     << 1U)))) 
                 | ((0x10U & ((~ (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b72__05d__02ecolumn0__DOT__S) 
                                   | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b72__05d__02ecolumn0__DOT__S) 
                                      >> 2U)) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b72__05d__02ecolumn0__DOT__S) 
                                                 >> 1U))) 
                              << 4U)) | ((8U & ((~ 
                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b72__05d__02ecolumn0__DOT__n_74) 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b72__05d__02ecolumn0__DOT__n_75))) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_col__05b72__05d__02ecolumn0__a))))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ 
                                                    ((~ 
                                                      (((~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1aU] 
                                                          >> 8U)) 
                                                        | (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1eU] 
                                                            >> 8U))) 
                                                       & (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[2U] 
                                                           >> 8U)))) 
                                                     & (~ 
                                                        ((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1aU] 
                                                           >> 8U)) 
                                                         & (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1eU] 
                                                             >> 8U)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     ((~ 
                                                       (((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[6U] 
                                                           >> 8U)) 
                                                         | (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xaU] 
                                                             >> 8U))) 
                                                        & (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xeU] 
                                                            >> 8U)))) 
                                                      & (~ 
                                                         ((~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[6U] 
                                                            >> 8U)) 
                                                          & (~ 
                                                             (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xaU] 
                                                              >> 8U))))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b72__05d__02ecolumn0__DOT__Cout 
        = __Vtemp_1;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b72__05d__02ecolumn0__DOT__wc293 
        = (1U & ((IData)((1U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b72__05d__02ecolumn0__DOT__S)))) 
                 & (IData)((2U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b72__05d__02ecolumn0__DOT__S))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_37 = (7U & 
                                               (~ (
                                                   (4U 
                                                    & (((~ (IData)(
                                                                   (0x28U 
                                                                    == 
                                                                    (0x28U 
                                                                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b72__05d__02ecolumn0__DOT__Cout))))) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x28U 
                                                                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b72__05d__02ecolumn0__DOT__Cout))))) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((~ 
                                                            (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b72__05d__02ecolumn0__DOT__S) 
                                                              >> 3U) 
                                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b72__05d__02ecolumn0__DOT__Cout) 
                                                                >> 4U))) 
                                                           << 1U) 
                                                          & ((0x3ffffffeU 
                                                              & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b72__05d__02ecolumn0__DOT__S) 
                                                                 >> 2U)) 
                                                             | (0x1ffffffeU 
                                                                & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b72__05d__02ecolumn0__DOT__Cout) 
                                                                   >> 3U))))) 
                                                      | (1U 
                                                         & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b72__05d__02ecolumn0__DOT__wc293) 
                                                             | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b72__05d__02ecolumn0__DOT__S) 
                                                                >> 2U)) 
                                                            & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b72__05d__02ecolumn0__DOT__wc293)) 
                                                               | (~ 
                                                                  ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b72__05d__02ecolumn0__DOT__S) 
                                                                   >> 2U)))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b18__05d__02erow_1__DOT__wc2985 
        = (1U & (((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_37)) 
                  | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b18__05d__02erow_1__DOT__n_523)) 
                 & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b18__05d__02erow_1__DOT__n_523)) 
                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_37))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b18__05d__02erow_1__DOT__wc2906 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_37) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b18__05d__02erow_1__DOT__n_523));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_word__05b18__05d__02eword__x 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_36) 
            << 2U) | (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_37) 
                            >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Out_reg__DOT__wc6018 
        = (1U & ((~ ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b18__05d__02erow_1__DOT__wc2985)) 
                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525))) 
                 & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525) 
                    | (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b18__05d__02episo_1.b)))));
}
