// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_snitch_amo_shim__A9_D40_C1.h"

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__core_arb_ready = 1U;
    vlSelf->ready_o = vlSelf->__PVT__core_ready;
    if ((1U & (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))) {
        vlSelf->__PVT__core_arb_ready = 0U;
        vlSelf->ready_o = 1U;
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__1\n"); );
    // Body
    vlSelf->__PVT__reservation_d = vlSelf->__PVT__reservation_q;
    vlSelf->__PVT__core_valid = (1U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0U]);
    vlSelf->__PVT__load_amo = (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0U] 
                               & ((~ ((0U == (0xfU 
                                              & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                                 >> 0xbU))) 
                                      | ((0xaU == (0xfU 
                                                   & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                                      >> 0xbU))) 
                                         | (0xbU == 
                                            (0xfU & 
                                             (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                              >> 0xbU)))))) 
                                  & (IData)(vlSelf->ready_o)));
    vlSelf->__PVT__core_be = (0xffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0U] 
                                       >> 3U));
    vlSelf->__PVT__core_add = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                         >> 0x10U));
    vlSelf->__PVT__core_wdata = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U])) 
                                  << 0x35U) | (((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0U])) 
                                                  >> 0xbU)));
    vlSelf->__PVT__sc_successful = 0U;
    if ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0U] 
         & (IData)(vlSelf->ready_o))) {
        if ((IData)(((0x5000U == (0x7800U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U])) 
                     & ((~ ((IData)(vlSelf->__PVT__reservation_q) 
                            >> 0xaU)) | ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                                         == (1U & (
                                                   vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0U] 
                                                   >> 2U))))))) {
            vlSelf->__PVT__reservation_d = (0x400U 
                                            | ((0x3feU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                                   >> 0xfU)) 
                                               | (1U 
                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0U] 
                                                     >> 2U))));
        }
        if ((((((~ (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0U] 
                    >> 1U)) | (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o)) 
               | ((1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0U] 
                         >> 2U)) != (1U & (IData)(vlSelf->__PVT__reservation_q)))) 
              & ((0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                            >> 0x10U)) == (0x1ffU & 
                                           ((IData)(vlSelf->__PVT__reservation_q) 
                                            >> 1U)))) 
             & ((~ (((0U == (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                     >> 0xbU))) | (0xaU 
                                                   == 
                                                   (0xfU 
                                                    & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                                       >> 0xbU)))) 
                    | (0xbU == (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                        >> 0xbU))))) 
                | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                   >> 0xfU)))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
        }
        if (((IData)((((IData)(vlSelf->__PVT__reservation_q) 
                       >> 0xaU) & (0x5800U == (0x7800U 
                                               & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U])))) 
             & ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                == (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0U] 
                          >> 2U))))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
            vlSelf->__PVT__sc_successful = ((0x1ffU 
                                             & ((IData)(vlSelf->__PVT__reservation_q) 
                                                >> 1U)) 
                                            == (0x1ffU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                                   >> 0x10U)));
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 1U;
        }
    }
    vlSelf->mem_req_o = vlSelf->__PVT__core_valid;
    vlSelf->__PVT__state_d = vlSelf->__PVT__state_q;
    if ((0U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__load_amo) {
            vlSelf->__PVT__state_d = 1U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__state_d = 2U;
    } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__core_arb_ready) {
            vlSelf->__PVT__state_d = 0U;
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_be = (0xffU & VL_SHIFTL_III(8,32,32, (IData)(0xfU), 
                                                                VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 2U)));
                vlSelf->__PVT__core_add = vlSelf->__PVT__addr_q;
                vlSelf->__PVT__core_wdata = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelf->__PVT__amo_result_q)), 
                                                          VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 5U));
            }
        }
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    } else {
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    }
    vlSelf->mem_wdata_o = vlSelf->__PVT__core_wdata;
    vlSelf->__PVT__core_wen = (1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                      >> 0xfU) | ((IData)(vlSelf->__PVT__sc_successful) 
                                                  & (0x5800U 
                                                     == 
                                                     (0x7800U 
                                                      & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U])))));
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_wen = 1U;
            }
        }
    }
    vlSelf->mem_wen_o = vlSelf->__PVT__core_wen;
    if ((1U & (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))) {
        vlSelf->mem_req_o = (1U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0U]);
        vlSelf->mem_be_o = (0xffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0U] 
                                     >> 3U));
        vlSelf->mem_add_o = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                       >> 0x10U));
        vlSelf->mem_wdata_o = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U])) 
                                << 0x35U) | (((QData)((IData)(
                                                              vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[1U])) 
                                              << 0x15U) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0U])) 
                                                >> 0xbU)));
        vlSelf->mem_wen_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                   >> 0xfU));
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__reservation_q = ((IData)(vlSymsp->TOP.rst_ni)
                                     ? (IData)(vlSelf->__PVT__reservation_d)
                                     : 0U);
    vlSelf->__PVT__sc_successful_q = ((IData)(vlSymsp->TOP.rst_ni) 
                                      && (IData)(vlSelf->__PVT__sc_successful));
    vlSelf->__PVT__sc_q = ((IData)(vlSymsp->TOP.rst_ni) 
                           && ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0U] 
                                & (0x5800U == (0x7800U 
                                               & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U]))) 
                               & (IData)(vlSelf->ready_o)));
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__1\n"); );
    // Body
    if (vlSelf->__PVT__load_amo) {
        vlSelf->__PVT__addr_q = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                           >> 0x10U));
        vlSelf->__PVT__operand_b_q = ((8U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0U])
                                       ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[1U] 
                                           << 0x15U) 
                                          | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0U] 
                                             >> 0xbU))
                                       : ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                           << 0x15U) 
                                          | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[1U] 
                                             >> 0xbU)));
        vlSelf->__PVT__amo_op_q = (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                           >> 0xbU));
        vlSelf->__PVT__idx_q = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0U] 
                                      >> 7U));
    }
    if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__amo_result_q = vlSelf->__PVT__amo_result;
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                          : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                      : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
        }
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__2(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__2\n"); );
    // Body
    vlSelf->__PVT__state_q = ((IData)(vlSymsp->TOP.rst_ni)
                               ? (IData)(vlSelf->__PVT__state_d)
                               : 0U);
    vlSelf->__PVT__core_ready = 1U;
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        }
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__0__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim__1\n"); );
    // Body
    vlSelf->__PVT__reservation_d = vlSelf->__PVT__reservation_q;
    vlSelf->__PVT__core_valid = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                       >> 0x19U));
    vlSelf->__PVT__load_amo = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                >> 0x19U) & ((~ ((0U 
                                                  == 
                                                  (0xfU 
                                                   & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                                      >> 4U))) 
                                                 | ((0xaU 
                                                     == 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                                         >> 4U))) 
                                                    | (0xbU 
                                                       == 
                                                       (0xfU 
                                                        & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                                           >> 4U)))))) 
                                             & (IData)(vlSelf->ready_o)));
    vlSelf->__PVT__core_be = (0xffU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[3U] 
                                        << 4U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                                  >> 0x1cU)));
    vlSelf->__PVT__core_add = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                         >> 9U));
    vlSelf->__PVT__core_wdata = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U])) 
                                  << 0x3cU) | (((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[4U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[3U])) 
                                                  >> 4U)));
    vlSelf->__PVT__sc_successful = 0U;
    if (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U] 
          >> 0x19U) & (IData)(vlSelf->ready_o))) {
        if ((IData)(((0xa0U == (0xf0U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U])) 
                     & ((~ ((IData)(vlSelf->__PVT__reservation_q) 
                            >> 0xaU)) | ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                                         == (1U & (
                                                   vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                                   >> 0x1bU))))))) {
            vlSelf->__PVT__reservation_d = (0x400U 
                                            | ((0x3feU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                                   >> 8U)) 
                                               | (1U 
                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                                     >> 0x1bU))));
        }
        if ((((((~ (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                    >> 0x1aU)) | (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o)) 
               | ((1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                         >> 0x1bU)) != (1U & (IData)(vlSelf->__PVT__reservation_q)))) 
              & ((0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                            >> 9U)) == (0x1ffU & ((IData)(vlSelf->__PVT__reservation_q) 
                                                  >> 1U)))) 
             & ((~ (((0U == (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                     >> 4U))) | (0xaU 
                                                 == 
                                                 (0xfU 
                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                                     >> 4U)))) 
                    | (0xbU == (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                        >> 4U))))) 
                | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                   >> 8U)))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
        }
        if (((IData)((((IData)(vlSelf->__PVT__reservation_q) 
                       >> 0xaU) & (0xb0U == (0xf0U 
                                             & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U])))) 
             & ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                == (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                          >> 0x1bU))))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
            vlSelf->__PVT__sc_successful = ((0x1ffU 
                                             & ((IData)(vlSelf->__PVT__reservation_q) 
                                                >> 1U)) 
                                            == (0x1ffU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                                   >> 9U)));
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 1U;
        }
    }
    vlSelf->mem_req_o = vlSelf->__PVT__core_valid;
    vlSelf->__PVT__state_d = vlSelf->__PVT__state_q;
    if ((0U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__load_amo) {
            vlSelf->__PVT__state_d = 1U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__state_d = 2U;
    } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__core_arb_ready) {
            vlSelf->__PVT__state_d = 0U;
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_be = (0xffU & VL_SHIFTL_III(8,32,32, (IData)(0xfU), 
                                                                VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 2U)));
                vlSelf->__PVT__core_add = vlSelf->__PVT__addr_q;
                vlSelf->__PVT__core_wdata = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelf->__PVT__amo_result_q)), 
                                                          VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 5U));
            }
        }
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    } else {
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    }
    vlSelf->mem_wdata_o = vlSelf->__PVT__core_wdata;
    vlSelf->__PVT__core_wen = (1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                      >> 8U) | ((IData)(vlSelf->__PVT__sc_successful) 
                                                & (0xb0U 
                                                   == 
                                                   (0xf0U 
                                                    & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U])))));
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_wen = 1U;
            }
        }
    }
    vlSelf->mem_wen_o = vlSelf->__PVT__core_wen;
    if ((1U & (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))) {
        vlSelf->mem_req_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                   >> 0x19U));
        vlSelf->mem_be_o = (0xffU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[3U] 
                                      << 4U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                                >> 0x1cU)));
        vlSelf->mem_add_o = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                       >> 9U));
        vlSelf->mem_wdata_o = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U])) 
                                << 0x3cU) | (((QData)((IData)(
                                                              vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[4U])) 
                                              << 0x1cU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[3U])) 
                                                >> 4U)));
        vlSelf->mem_wen_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                   >> 8U));
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__reservation_q = ((IData)(vlSymsp->TOP.rst_ni)
                                     ? (IData)(vlSelf->__PVT__reservation_d)
                                     : 0U);
    vlSelf->__PVT__sc_successful_q = ((IData)(vlSymsp->TOP.rst_ni) 
                                      && (IData)(vlSelf->__PVT__sc_successful));
    vlSelf->__PVT__sc_q = ((IData)(vlSymsp->TOP.rst_ni) 
                           && (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                 >> 0x19U) & (0xb0U 
                                              == (0xf0U 
                                                  & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U]))) 
                               & (IData)(vlSelf->ready_o)));
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim__1\n"); );
    // Body
    if (vlSelf->__PVT__load_amo) {
        vlSelf->__PVT__addr_q = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                           >> 9U));
        vlSelf->__PVT__operand_b_q = ((0x10000000U 
                                       & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[2U])
                                       ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[4U] 
                                           << 0x1cU) 
                                          | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[3U] 
                                             >> 4U))
                                       : ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                           << 0x1cU) 
                                          | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[4U] 
                                             >> 4U)));
        vlSelf->__PVT__amo_op_q = (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                           >> 4U));
        vlSelf->__PVT__idx_q = (1U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[3U]);
    }
    if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__amo_result_q = vlSelf->__PVT__amo_result;
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                          : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                      : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
        }
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__1__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim__1\n"); );
    // Body
    vlSelf->__PVT__reservation_d = vlSelf->__PVT__reservation_q;
    vlSelf->__PVT__core_valid = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                       >> 0x12U));
    vlSelf->__PVT__load_amo = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                >> 0x12U) & ((~ ((0U 
                                                  == 
                                                  (0xfU 
                                                   & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                                       << 3U) 
                                                      | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                                         >> 0x1dU)))) 
                                                 | ((0xaU 
                                                     == 
                                                     (0xfU 
                                                      & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                                          << 3U) 
                                                         | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                                            >> 0x1dU)))) 
                                                    | (0xbU 
                                                       == 
                                                       (0xfU 
                                                        & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                                            << 3U) 
                                                           | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                                              >> 0x1dU))))))) 
                                             & (IData)(vlSelf->ready_o)));
    vlSelf->__PVT__core_be = (0xffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                       >> 0x15U));
    vlSelf->__PVT__core_add = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                         >> 2U));
    vlSelf->__PVT__core_wdata = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[7U])) 
                                  << 0x23U) | (((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[6U])) 
                                                << 3U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U])) 
                                                  >> 0x1dU)));
    vlSelf->__PVT__sc_successful = 0U;
    if (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U] 
          >> 0x12U) & (IData)(vlSelf->ready_o))) {
        if (((0xaU == (0xfU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                << 3U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                          >> 0x1dU)))) 
             & ((~ ((IData)(vlSelf->__PVT__reservation_q) 
                    >> 0xaU)) | ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                                 == (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                           >> 0x14U)))))) {
            vlSelf->__PVT__reservation_d = (0x400U 
                                            | ((0x3feU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                                   >> 1U)) 
                                               | (1U 
                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                                     >> 0x14U))));
        }
        if ((((((~ (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                    >> 0x13U)) | (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o)) 
               | ((1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                         >> 0x14U)) != (1U & (IData)(vlSelf->__PVT__reservation_q)))) 
              & ((0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                            >> 2U)) == (0x1ffU & ((IData)(vlSelf->__PVT__reservation_q) 
                                                  >> 1U)))) 
             & ((~ (((0U == (0xfU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                      << 3U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                                >> 0x1dU)))) 
                     | (0xaU == (0xfU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                          << 3U) | 
                                         (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                          >> 0x1dU))))) 
                    | (0xbU == (0xfU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                         << 3U) | (
                                                   vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                                   >> 0x1dU)))))) 
                | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                   >> 1U)))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
        }
        if (((((IData)(vlSelf->__PVT__reservation_q) 
               >> 0xaU) & (0xbU == (0xfU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                             << 3U) 
                                            | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                               >> 0x1dU))))) 
             & ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                == (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                          >> 0x14U))))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
            vlSelf->__PVT__sc_successful = ((0x1ffU 
                                             & ((IData)(vlSelf->__PVT__reservation_q) 
                                                >> 1U)) 
                                            == (0x1ffU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                                   >> 2U)));
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 1U;
        }
    }
    vlSelf->mem_req_o = vlSelf->__PVT__core_valid;
    vlSelf->__PVT__state_d = vlSelf->__PVT__state_q;
    if ((0U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__load_amo) {
            vlSelf->__PVT__state_d = 1U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__state_d = 2U;
    } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__core_arb_ready) {
            vlSelf->__PVT__state_d = 0U;
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_be = (0xffU & VL_SHIFTL_III(8,32,32, (IData)(0xfU), 
                                                                VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 2U)));
                vlSelf->__PVT__core_add = vlSelf->__PVT__addr_q;
                vlSelf->__PVT__core_wdata = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelf->__PVT__amo_result_q)), 
                                                          VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 5U));
            }
        }
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    } else {
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    }
    vlSelf->mem_wdata_o = vlSelf->__PVT__core_wdata;
    vlSelf->__PVT__core_wen = (1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                      >> 1U) | ((IData)(vlSelf->__PVT__sc_successful) 
                                                & (0xbU 
                                                   == 
                                                   (0xfU 
                                                    & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                                          >> 0x1dU)))))));
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_wen = 1U;
            }
        }
    }
    vlSelf->mem_wen_o = vlSelf->__PVT__core_wen;
    if ((1U & (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))) {
        vlSelf->mem_req_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                   >> 0x12U));
        vlSelf->mem_be_o = (0xffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                     >> 0x15U));
        vlSelf->mem_add_o = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                       >> 2U));
        vlSelf->mem_wdata_o = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[7U])) 
                                << 0x23U) | (((QData)((IData)(
                                                              vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[6U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U])) 
                                                >> 0x1dU)));
        vlSelf->mem_wen_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                   >> 1U));
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__reservation_q = ((IData)(vlSymsp->TOP.rst_ni)
                                     ? (IData)(vlSelf->__PVT__reservation_d)
                                     : 0U);
    vlSelf->__PVT__sc_successful_q = ((IData)(vlSymsp->TOP.rst_ni) 
                                      && (IData)(vlSelf->__PVT__sc_successful));
    vlSelf->__PVT__sc_q = ((IData)(vlSymsp->TOP.rst_ni) 
                           && (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                 >> 0x12U) & (IData)(vlSelf->ready_o)) 
                               & (0xbU == (0xfU & (
                                                   (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                                    << 3U) 
                                                   | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                                      >> 0x1dU))))));
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim__1\n"); );
    // Body
    if (vlSelf->__PVT__load_amo) {
        vlSelf->__PVT__addr_q = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                           >> 2U));
        vlSelf->__PVT__operand_b_q = ((0x200000U & 
                                       vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U])
                                       ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[6U] 
                                           << 3U) | 
                                          (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                           >> 0x1dU))
                                       : ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                           << 3U) | 
                                          (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[6U] 
                                           >> 0x1dU)));
        vlSelf->__PVT__amo_op_q = (0xfU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                            << 3U) 
                                           | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                              >> 0x1dU)));
        vlSelf->__PVT__idx_q = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                      >> 0x19U));
    }
    if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__amo_result_q = vlSelf->__PVT__amo_result;
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                          : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                      : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
        }
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__2__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim__1\n"); );
    // Body
    vlSelf->__PVT__reservation_d = vlSelf->__PVT__reservation_q;
    vlSelf->__PVT__core_valid = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                       >> 0xbU));
    vlSelf->__PVT__load_amo = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                >> 0xbU) & ((~ ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                                     >> 0x16U))) 
                                                | ((0xaU 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                                        >> 0x16U))) 
                                                   | (0xbU 
                                                      == 
                                                      (0xfU 
                                                       & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                                          >> 0x16U)))))) 
                                            & (IData)(vlSelf->ready_o)));
    vlSelf->__PVT__core_be = (0xffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                       >> 0xeU));
    vlSelf->__PVT__core_add = (0x1ffU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                          << 5U) | 
                                         (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                          >> 0x1bU)));
    vlSelf->__PVT__core_wdata = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xaU])) 
                                  << 0x2aU) | (((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[9U])) 
                                                << 0xaU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U])) 
                                                  >> 0x16U)));
    vlSelf->__PVT__sc_successful = 0U;
    if (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U] 
          >> 0xbU) & (IData)(vlSelf->ready_o))) {
        if ((IData)(((0x2800000U == (0x3c00000U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xaU])) 
                     & ((~ ((IData)(vlSelf->__PVT__reservation_q) 
                            >> 0xaU)) | ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                                         == (1U & (
                                                   vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                                   >> 0xdU))))))) {
            vlSelf->__PVT__reservation_d = (0x400U 
                                            | ((0x3feU 
                                                & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                                    << 6U) 
                                                   | (0x3eU 
                                                      & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                                         >> 0x1aU)))) 
                                               | (1U 
                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                                     >> 0xdU))));
        }
        if ((((((~ (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                    >> 0xcU)) | (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o)) 
               | ((1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                         >> 0xdU)) != (1U & (IData)(vlSelf->__PVT__reservation_q)))) 
              & ((0x1ffU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                             << 5U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                       >> 0x1bU))) 
                 == (0x1ffU & ((IData)(vlSelf->__PVT__reservation_q) 
                               >> 1U)))) & ((~ (((0U 
                                                  == 
                                                  (0xfU 
                                                   & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                                      >> 0x16U))) 
                                                 | (0xaU 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                                        >> 0x16U)))) 
                                                | (0xbU 
                                                   == 
                                                   (0xfU 
                                                    & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                                       >> 0x16U))))) 
                                            | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                               >> 0x1aU)))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
        }
        if (((IData)((((IData)(vlSelf->__PVT__reservation_q) 
                       >> 0xaU) & (0x2c00000U == (0x3c00000U 
                                                  & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xaU])))) 
             & ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                == (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                          >> 0xdU))))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
            vlSelf->__PVT__sc_successful = ((0x1ffU 
                                             & ((IData)(vlSelf->__PVT__reservation_q) 
                                                >> 1U)) 
                                            == (0x1ffU 
                                                & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                                      >> 0x1bU))));
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 1U;
        }
    }
    vlSelf->mem_req_o = vlSelf->__PVT__core_valid;
    vlSelf->__PVT__state_d = vlSelf->__PVT__state_q;
    if ((0U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__load_amo) {
            vlSelf->__PVT__state_d = 1U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__state_d = 2U;
    } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__core_arb_ready) {
            vlSelf->__PVT__state_d = 0U;
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_be = (0xffU & VL_SHIFTL_III(8,32,32, (IData)(0xfU), 
                                                                VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 2U)));
                vlSelf->__PVT__core_add = vlSelf->__PVT__addr_q;
                vlSelf->__PVT__core_wdata = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelf->__PVT__amo_result_q)), 
                                                          VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 5U));
            }
        }
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    } else {
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    }
    vlSelf->mem_wdata_o = vlSelf->__PVT__core_wdata;
    vlSelf->__PVT__core_wen = (1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                      >> 0x1aU) | ((IData)(vlSelf->__PVT__sc_successful) 
                                                   & (0x2c00000U 
                                                      == 
                                                      (0x3c00000U 
                                                       & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xaU])))));
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_wen = 1U;
            }
        }
    }
    vlSelf->mem_wen_o = vlSelf->__PVT__core_wen;
    if ((1U & (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))) {
        vlSelf->mem_req_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                   >> 0xbU));
        vlSelf->mem_be_o = (0xffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                     >> 0xeU));
        vlSelf->mem_add_o = (0x1ffU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                        << 5U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                                  >> 0x1bU)));
        vlSelf->mem_wdata_o = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xaU])) 
                                << 0x2aU) | (((QData)((IData)(
                                                              vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[9U])) 
                                              << 0xaU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U])) 
                                                >> 0x16U)));
        vlSelf->mem_wen_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                   >> 0x1aU));
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__reservation_q = ((IData)(vlSymsp->TOP.rst_ni)
                                     ? (IData)(vlSelf->__PVT__reservation_d)
                                     : 0U);
    vlSelf->__PVT__sc_successful_q = ((IData)(vlSymsp->TOP.rst_ni) 
                                      && (IData)(vlSelf->__PVT__sc_successful));
    vlSelf->__PVT__sc_q = ((IData)(vlSymsp->TOP.rst_ni) 
                           && (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                 >> 0xbU) & (0x2c00000U 
                                             == (0x3c00000U 
                                                 & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xaU]))) 
                               & (IData)(vlSelf->ready_o)));
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim__1\n"); );
    // Body
    if (vlSelf->__PVT__load_amo) {
        vlSelf->__PVT__addr_q = (0x1ffU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                            << 5U) 
                                           | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                              >> 0x1bU)));
        vlSelf->__PVT__operand_b_q = ((0x4000U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U])
                                       ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[9U] 
                                           << 0xaU) 
                                          | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                             >> 0x16U))
                                       : ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                           << 0xaU) 
                                          | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[9U] 
                                             >> 0x16U)));
        vlSelf->__PVT__amo_op_q = (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                           >> 0x16U));
        vlSelf->__PVT__idx_q = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                      >> 0x12U));
    }
    if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__amo_result_q = vlSelf->__PVT__amo_result;
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                          : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                      : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
        }
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__3__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim__1\n"); );
    // Body
    vlSelf->__PVT__reservation_d = vlSelf->__PVT__reservation_q;
    vlSelf->__PVT__core_valid = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                       >> 4U));
    vlSelf->__PVT__load_amo = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                >> 4U) & ((~ ((0U == 
                                               (0xfU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                                   >> 0xfU))) 
                                              | ((0xaU 
                                                  == 
                                                  (0xfU 
                                                   & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                                      >> 0xfU))) 
                                                 | (0xbU 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                                        >> 0xfU)))))) 
                                          & (IData)(vlSelf->ready_o)));
    vlSelf->__PVT__core_be = (0xffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                       >> 7U));
    vlSelf->__PVT__core_add = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                         >> 0x14U));
    vlSelf->__PVT__core_wdata = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xdU])) 
                                  << 0x31U) | (((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xcU])) 
                                                << 0x11U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xbU])) 
                                                  >> 0xfU)));
    vlSelf->__PVT__sc_successful = 0U;
    if (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
          >> 4U) & (IData)(vlSelf->ready_o))) {
        if ((IData)(((0x50000U == (0x78000U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xdU])) 
                     & ((~ ((IData)(vlSelf->__PVT__reservation_q) 
                            >> 0xaU)) | ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                                         == (1U & (
                                                   vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                                   >> 6U))))))) {
            vlSelf->__PVT__reservation_d = (0x400U 
                                            | ((0x3feU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                                   >> 0x13U)) 
                                               | (1U 
                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                                     >> 6U))));
        }
        if ((((((~ (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                    >> 5U)) | (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o)) 
               | ((1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                         >> 6U)) != (1U & (IData)(vlSelf->__PVT__reservation_q)))) 
              & ((0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                            >> 0x14U)) == (0x1ffU & 
                                           ((IData)(vlSelf->__PVT__reservation_q) 
                                            >> 1U)))) 
             & ((~ (((0U == (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                     >> 0xfU))) | (0xaU 
                                                   == 
                                                   (0xfU 
                                                    & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                                       >> 0xfU)))) 
                    | (0xbU == (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                        >> 0xfU))))) 
                | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                   >> 0x13U)))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
        }
        if (((IData)((((IData)(vlSelf->__PVT__reservation_q) 
                       >> 0xaU) & (0x58000U == (0x78000U 
                                                & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xdU])))) 
             & ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                == (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                          >> 6U))))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
            vlSelf->__PVT__sc_successful = ((0x1ffU 
                                             & ((IData)(vlSelf->__PVT__reservation_q) 
                                                >> 1U)) 
                                            == (0x1ffU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                                   >> 0x14U)));
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 1U;
        }
    }
    vlSelf->mem_req_o = vlSelf->__PVT__core_valid;
    vlSelf->__PVT__state_d = vlSelf->__PVT__state_q;
    if ((0U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__load_amo) {
            vlSelf->__PVT__state_d = 1U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__state_d = 2U;
    } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__core_arb_ready) {
            vlSelf->__PVT__state_d = 0U;
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_be = (0xffU & VL_SHIFTL_III(8,32,32, (IData)(0xfU), 
                                                                VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 2U)));
                vlSelf->__PVT__core_add = vlSelf->__PVT__addr_q;
                vlSelf->__PVT__core_wdata = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelf->__PVT__amo_result_q)), 
                                                          VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 5U));
            }
        }
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    } else {
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    }
    vlSelf->mem_wdata_o = vlSelf->__PVT__core_wdata;
    vlSelf->__PVT__core_wen = (1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                      >> 0x13U) | ((IData)(vlSelf->__PVT__sc_successful) 
                                                   & (0x58000U 
                                                      == 
                                                      (0x78000U 
                                                       & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xdU])))));
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_wen = 1U;
            }
        }
    }
    vlSelf->mem_wen_o = vlSelf->__PVT__core_wen;
    if ((1U & (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))) {
        vlSelf->mem_req_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                   >> 4U));
        vlSelf->mem_be_o = (0xffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                     >> 7U));
        vlSelf->mem_add_o = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                       >> 0x14U));
        vlSelf->mem_wdata_o = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xdU])) 
                                << 0x31U) | (((QData)((IData)(
                                                              vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xcU])) 
                                              << 0x11U) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xbU])) 
                                                >> 0xfU)));
        vlSelf->mem_wen_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                   >> 0x13U));
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__reservation_q = ((IData)(vlSymsp->TOP.rst_ni)
                                     ? (IData)(vlSelf->__PVT__reservation_d)
                                     : 0U);
    vlSelf->__PVT__sc_successful_q = ((IData)(vlSymsp->TOP.rst_ni) 
                                      && (IData)(vlSelf->__PVT__sc_successful));
    vlSelf->__PVT__sc_q = ((IData)(vlSymsp->TOP.rst_ni) 
                           && (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                 >> 4U) & (0x58000U 
                                           == (0x78000U 
                                               & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xdU]))) 
                               & (IData)(vlSelf->ready_o)));
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim__1\n"); );
    // Body
    if (vlSelf->__PVT__load_amo) {
        vlSelf->__PVT__addr_q = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                           >> 0x14U));
        vlSelf->__PVT__operand_b_q = ((0x80U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xbU])
                                       ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xcU] 
                                           << 0x11U) 
                                          | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                             >> 0xfU))
                                       : ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                           << 0x11U) 
                                          | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xcU] 
                                             >> 0xfU)));
        vlSelf->__PVT__amo_op_q = (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                           >> 0xfU));
        vlSelf->__PVT__idx_q = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                      >> 0xbU));
    }
    if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__amo_result_q = vlSelf->__PVT__amo_result;
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                          : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                      : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
        }
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__4__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim__1\n"); );
    // Body
    vlSelf->__PVT__reservation_d = vlSelf->__PVT__reservation_q;
    vlSelf->__PVT__core_valid = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                       >> 0x1dU));
    vlSelf->__PVT__load_amo = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                >> 0x1dU) & ((~ ((0U 
                                                  == 
                                                  (0xfU 
                                                   & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                                      >> 8U))) 
                                                 | ((0xaU 
                                                     == 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                                         >> 8U))) 
                                                    | (0xbU 
                                                       == 
                                                       (0xfU 
                                                        & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                                           >> 8U)))))) 
                                             & (IData)(vlSelf->ready_o)));
    vlSelf->__PVT__core_be = (0xffU & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xeU]);
    vlSelf->__PVT__core_add = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                         >> 0xdU));
    vlSelf->__PVT__core_wdata = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U])) 
                                  << 0x38U) | (((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xfU])) 
                                                << 0x18U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xeU])) 
                                                  >> 8U)));
    vlSelf->__PVT__sc_successful = 0U;
    if (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
          >> 0x1dU) & (IData)(vlSelf->ready_o))) {
        if ((IData)(((0xa00U == (0xf00U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U])) 
                     & ((~ ((IData)(vlSelf->__PVT__reservation_q) 
                            >> 0xaU)) | ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                                         == (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                             >> 0x1fU)))))) {
            vlSelf->__PVT__reservation_d = (0x400U 
                                            | ((0x3feU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                                   >> 0xcU)) 
                                               | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                                  >> 0x1fU)));
        }
        if ((((((~ (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                    >> 0x1eU)) | (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o)) 
               | ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                   >> 0x1fU) != (1U & (IData)(vlSelf->__PVT__reservation_q)))) 
              & ((0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                            >> 0xdU)) == (0x1ffU & 
                                          ((IData)(vlSelf->__PVT__reservation_q) 
                                           >> 1U)))) 
             & ((~ (((0U == (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                     >> 8U))) | (0xaU 
                                                 == 
                                                 (0xfU 
                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                                     >> 8U)))) 
                    | (0xbU == (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                        >> 8U))))) 
                | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                   >> 0xcU)))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
        }
        if (((IData)((((IData)(vlSelf->__PVT__reservation_q) 
                       >> 0xaU) & (0xb00U == (0xf00U 
                                              & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U])))) 
             & ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                == (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                    >> 0x1fU)))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
            vlSelf->__PVT__sc_successful = ((0x1ffU 
                                             & ((IData)(vlSelf->__PVT__reservation_q) 
                                                >> 1U)) 
                                            == (0x1ffU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                                   >> 0xdU)));
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 1U;
        }
    }
    vlSelf->mem_req_o = vlSelf->__PVT__core_valid;
    vlSelf->__PVT__state_d = vlSelf->__PVT__state_q;
    if ((0U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__load_amo) {
            vlSelf->__PVT__state_d = 1U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__state_d = 2U;
    } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__core_arb_ready) {
            vlSelf->__PVT__state_d = 0U;
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_be = (0xffU & VL_SHIFTL_III(8,32,32, (IData)(0xfU), 
                                                                VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 2U)));
                vlSelf->__PVT__core_add = vlSelf->__PVT__addr_q;
                vlSelf->__PVT__core_wdata = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelf->__PVT__amo_result_q)), 
                                                          VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 5U));
            }
        }
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    } else {
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    }
    vlSelf->mem_wdata_o = vlSelf->__PVT__core_wdata;
    vlSelf->__PVT__core_wen = (1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                      >> 0xcU) | ((IData)(vlSelf->__PVT__sc_successful) 
                                                  & (0xb00U 
                                                     == 
                                                     (0xf00U 
                                                      & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U])))));
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_wen = 1U;
            }
        }
    }
    vlSelf->mem_wen_o = vlSelf->__PVT__core_wen;
    if ((1U & (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))) {
        vlSelf->mem_req_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                   >> 0x1dU));
        vlSelf->mem_be_o = (0xffU & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xeU]);
        vlSelf->mem_add_o = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                       >> 0xdU));
        vlSelf->mem_wdata_o = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U])) 
                                << 0x38U) | (((QData)((IData)(
                                                              vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xfU])) 
                                              << 0x18U) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xeU])) 
                                                >> 8U)));
        vlSelf->mem_wen_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                   >> 0xcU));
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__reservation_q = ((IData)(vlSymsp->TOP.rst_ni)
                                     ? (IData)(vlSelf->__PVT__reservation_d)
                                     : 0U);
    vlSelf->__PVT__sc_successful_q = ((IData)(vlSymsp->TOP.rst_ni) 
                                      && (IData)(vlSelf->__PVT__sc_successful));
    vlSelf->__PVT__sc_q = ((IData)(vlSymsp->TOP.rst_ni) 
                           && (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                 >> 0x1dU) & (0xb00U 
                                              == (0xf00U 
                                                  & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U]))) 
                               & (IData)(vlSelf->ready_o)));
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim__1\n"); );
    // Body
    if (vlSelf->__PVT__load_amo) {
        vlSelf->__PVT__addr_q = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                           >> 0xdU));
        vlSelf->__PVT__operand_b_q = ((1U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xeU])
                                       ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xfU] 
                                           << 0x18U) 
                                          | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xeU] 
                                             >> 8U))
                                       : ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                           << 0x18U) 
                                          | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xfU] 
                                             >> 8U)));
        vlSelf->__PVT__amo_op_q = (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                           >> 8U));
        vlSelf->__PVT__idx_q = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0xeU] 
                                      >> 4U));
    }
    if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__amo_result_q = vlSelf->__PVT__amo_result;
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                          : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                      : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
        }
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__5__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim__1\n"); );
    // Body
    vlSelf->__PVT__reservation_d = vlSelf->__PVT__reservation_q;
    vlSelf->__PVT__core_valid = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                       >> 0x16U));
    vlSelf->__PVT__load_amo = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                >> 0x16U) & ((~ ((0U 
                                                  == 
                                                  (0xfU 
                                                   & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                                      >> 1U))) 
                                                 | ((0xaU 
                                                     == 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                                         >> 1U))) 
                                                    | (0xbU 
                                                       == 
                                                       (0xfU 
                                                        & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                                           >> 1U)))))) 
                                             & (IData)(vlSelf->ready_o)));
    vlSelf->__PVT__core_be = (0xffU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x11U] 
                                        << 7U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                                  >> 0x19U)));
    vlSelf->__PVT__core_add = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                         >> 6U));
    vlSelf->__PVT__core_wdata = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U])) 
                                  << 0x3fU) | (((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x12U])) 
                                                << 0x1fU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x11U])) 
                                                  >> 1U)));
    vlSelf->__PVT__sc_successful = 0U;
    if (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
          >> 0x16U) & (IData)(vlSelf->ready_o))) {
        if ((IData)(((0x14U == (0x1eU & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U])) 
                     & ((~ ((IData)(vlSelf->__PVT__reservation_q) 
                            >> 0xaU)) | ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                                         == (1U & (
                                                   vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                                   >> 0x18U))))))) {
            vlSelf->__PVT__reservation_d = (0x400U 
                                            | ((0x3feU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                                   >> 5U)) 
                                               | (1U 
                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                                     >> 0x18U))));
        }
        if ((((((~ (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                    >> 0x17U)) | (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o)) 
               | ((1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                         >> 0x18U)) != (1U & (IData)(vlSelf->__PVT__reservation_q)))) 
              & ((0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                            >> 6U)) == (0x1ffU & ((IData)(vlSelf->__PVT__reservation_q) 
                                                  >> 1U)))) 
             & ((~ (((0U == (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                     >> 1U))) | (0xaU 
                                                 == 
                                                 (0xfU 
                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                                     >> 1U)))) 
                    | (0xbU == (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                        >> 1U))))) 
                | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                   >> 5U)))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
        }
        if (((IData)((((IData)(vlSelf->__PVT__reservation_q) 
                       >> 0xaU) & (0x16U == (0x1eU 
                                             & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U])))) 
             & ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                == (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                          >> 0x18U))))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
            vlSelf->__PVT__sc_successful = ((0x1ffU 
                                             & ((IData)(vlSelf->__PVT__reservation_q) 
                                                >> 1U)) 
                                            == (0x1ffU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                                   >> 6U)));
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 1U;
        }
    }
    vlSelf->mem_req_o = vlSelf->__PVT__core_valid;
    vlSelf->__PVT__state_d = vlSelf->__PVT__state_q;
    if ((0U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__load_amo) {
            vlSelf->__PVT__state_d = 1U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__state_d = 2U;
    } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__core_arb_ready) {
            vlSelf->__PVT__state_d = 0U;
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_be = (0xffU & VL_SHIFTL_III(8,32,32, (IData)(0xfU), 
                                                                VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 2U)));
                vlSelf->__PVT__core_add = vlSelf->__PVT__addr_q;
                vlSelf->__PVT__core_wdata = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelf->__PVT__amo_result_q)), 
                                                          VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 5U));
            }
        }
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    } else {
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    }
    vlSelf->mem_wdata_o = vlSelf->__PVT__core_wdata;
    vlSelf->__PVT__core_wen = (1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                      >> 5U) | ((IData)(vlSelf->__PVT__sc_successful) 
                                                & (0x16U 
                                                   == 
                                                   (0x1eU 
                                                    & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U])))));
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_wen = 1U;
            }
        }
    }
    vlSelf->mem_wen_o = vlSelf->__PVT__core_wen;
    if ((1U & (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))) {
        vlSelf->mem_req_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                   >> 0x16U));
        vlSelf->mem_be_o = (0xffU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x11U] 
                                      << 7U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                                >> 0x19U)));
        vlSelf->mem_add_o = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                       >> 6U));
        vlSelf->mem_wdata_o = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U])) 
                                << 0x3fU) | (((QData)((IData)(
                                                              vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x12U])) 
                                              << 0x1fU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x11U])) 
                                                >> 1U)));
        vlSelf->mem_wen_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                   >> 5U));
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__reservation_q = ((IData)(vlSymsp->TOP.rst_ni)
                                     ? (IData)(vlSelf->__PVT__reservation_d)
                                     : 0U);
    vlSelf->__PVT__sc_successful_q = ((IData)(vlSymsp->TOP.rst_ni) 
                                      && (IData)(vlSelf->__PVT__sc_successful));
    vlSelf->__PVT__sc_q = ((IData)(vlSymsp->TOP.rst_ni) 
                           && (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                 >> 0x16U) & (0x16U 
                                              == (0x1eU 
                                                  & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U]))) 
                               & (IData)(vlSelf->ready_o)));
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim__1\n"); );
    // Body
    if (vlSelf->__PVT__load_amo) {
        vlSelf->__PVT__addr_q = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                           >> 6U));
        vlSelf->__PVT__operand_b_q = ((0x2000000U & 
                                       vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U])
                                       ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x12U] 
                                           << 0x1fU) 
                                          | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x11U] 
                                             >> 1U))
                                       : ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                           << 0x1fU) 
                                          | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x12U] 
                                             >> 1U)));
        vlSelf->__PVT__amo_op_q = (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                           >> 1U));
        vlSelf->__PVT__idx_q = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                      >> 0x1dU));
    }
    if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__amo_result_q = vlSelf->__PVT__amo_result;
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                          : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                      : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
        }
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__6__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim__1\n"); );
    // Body
    vlSelf->__PVT__reservation_d = vlSelf->__PVT__reservation_q;
    vlSelf->__PVT__core_valid = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                       >> 0xfU));
    vlSelf->__PVT__load_amo = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                >> 0xfU) & ((~ ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x15U] 
                                                     >> 0x1aU))) 
                                                | ((0xaU 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x15U] 
                                                        >> 0x1aU))) 
                                                   | (0xbU 
                                                      == 
                                                      (0xfU 
                                                       & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x15U] 
                                                          >> 0x1aU)))))) 
                                            & (IData)(vlSelf->ready_o)));
    vlSelf->__PVT__core_be = (0xffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                       >> 0x12U));
    vlSelf->__PVT__core_add = (0x1ffU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x16U] 
                                          << 1U) | 
                                         (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x15U] 
                                          >> 0x1fU)));
    vlSelf->__PVT__core_wdata = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x15U])) 
                                  << 0x26U) | (((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x14U])) 
                                                << 6U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U])) 
                                                  >> 0x1aU)));
    vlSelf->__PVT__sc_successful = 0U;
    if (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
          >> 0xfU) & (IData)(vlSelf->ready_o))) {
        if ((IData)(((0x28000000U == (0x3c000000U & 
                                      vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x15U])) 
                     & ((~ ((IData)(vlSelf->__PVT__reservation_q) 
                            >> 0xaU)) | ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                                         == (1U & (
                                                   vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                                   >> 0x11U))))))) {
            vlSelf->__PVT__reservation_d = (0x400U 
                                            | ((0x3feU 
                                                & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x16U] 
                                                    << 2U) 
                                                   | (2U 
                                                      & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x15U] 
                                                         >> 0x1eU)))) 
                                               | (1U 
                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                                     >> 0x11U))));
        }
        if ((((((~ (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                    >> 0x10U)) | (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o)) 
               | ((1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                         >> 0x11U)) != (1U & (IData)(vlSelf->__PVT__reservation_q)))) 
              & ((0x1ffU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x16U] 
                             << 1U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x15U] 
                                       >> 0x1fU))) 
                 == (0x1ffU & ((IData)(vlSelf->__PVT__reservation_q) 
                               >> 1U)))) & ((~ (((0U 
                                                  == 
                                                  (0xfU 
                                                   & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x15U] 
                                                      >> 0x1aU))) 
                                                 | (0xaU 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x15U] 
                                                        >> 0x1aU)))) 
                                                | (0xbU 
                                                   == 
                                                   (0xfU 
                                                    & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x15U] 
                                                       >> 0x1aU))))) 
                                            | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x15U] 
                                               >> 0x1eU)))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
        }
        if (((IData)((((IData)(vlSelf->__PVT__reservation_q) 
                       >> 0xaU) & (0x2c000000U == (0x3c000000U 
                                                   & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x15U])))) 
             & ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                == (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                          >> 0x11U))))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
            vlSelf->__PVT__sc_successful = ((0x1ffU 
                                             & ((IData)(vlSelf->__PVT__reservation_q) 
                                                >> 1U)) 
                                            == (0x1ffU 
                                                & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x16U] 
                                                    << 1U) 
                                                   | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x15U] 
                                                      >> 0x1fU))));
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 1U;
        }
    }
    vlSelf->mem_req_o = vlSelf->__PVT__core_valid;
    vlSelf->__PVT__state_d = vlSelf->__PVT__state_q;
    if ((0U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__load_amo) {
            vlSelf->__PVT__state_d = 1U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__state_d = 2U;
    } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__core_arb_ready) {
            vlSelf->__PVT__state_d = 0U;
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_be = (0xffU & VL_SHIFTL_III(8,32,32, (IData)(0xfU), 
                                                                VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 2U)));
                vlSelf->__PVT__core_add = vlSelf->__PVT__addr_q;
                vlSelf->__PVT__core_wdata = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelf->__PVT__amo_result_q)), 
                                                          VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 5U));
            }
        }
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    } else {
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    }
    vlSelf->mem_wdata_o = vlSelf->__PVT__core_wdata;
    vlSelf->__PVT__core_wen = (1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x15U] 
                                      >> 0x1eU) | ((IData)(vlSelf->__PVT__sc_successful) 
                                                   & (0x2c000000U 
                                                      == 
                                                      (0x3c000000U 
                                                       & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x15U])))));
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_wen = 1U;
            }
        }
    }
    vlSelf->mem_wen_o = vlSelf->__PVT__core_wen;
    if ((1U & (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))) {
        vlSelf->mem_req_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                   >> 0xfU));
        vlSelf->mem_be_o = (0xffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                     >> 0x12U));
        vlSelf->mem_add_o = (0x1ffU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x16U] 
                                        << 1U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x15U] 
                                                  >> 0x1fU)));
        vlSelf->mem_wdata_o = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x15U])) 
                                << 0x26U) | (((QData)((IData)(
                                                              vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x14U])) 
                                              << 6U) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U])) 
                                                >> 0x1aU)));
        vlSelf->mem_wen_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x15U] 
                                   >> 0x1eU));
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__reservation_q = ((IData)(vlSymsp->TOP.rst_ni)
                                     ? (IData)(vlSelf->__PVT__reservation_d)
                                     : 0U);
    vlSelf->__PVT__sc_successful_q = ((IData)(vlSymsp->TOP.rst_ni) 
                                      && (IData)(vlSelf->__PVT__sc_successful));
    vlSelf->__PVT__sc_q = ((IData)(vlSymsp->TOP.rst_ni) 
                           && (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                 >> 0xfU) & (0x2c000000U 
                                             == (0x3c000000U 
                                                 & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x15U]))) 
                               & (IData)(vlSelf->ready_o)));
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim__1\n"); );
    // Body
    if (vlSelf->__PVT__load_amo) {
        vlSelf->__PVT__addr_q = (0x1ffU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x16U] 
                                            << 1U) 
                                           | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x15U] 
                                              >> 0x1fU)));
        vlSelf->__PVT__operand_b_q = ((0x40000U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U])
                                       ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x14U] 
                                           << 6U) | 
                                          (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                           >> 0x1aU))
                                       : ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x15U] 
                                           << 6U) | 
                                          (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x14U] 
                                           >> 0x1aU)));
        vlSelf->__PVT__amo_op_q = (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x15U] 
                                           >> 0x1aU));
        vlSelf->__PVT__idx_q = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                      >> 0x16U));
    }
    if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__amo_result_q = vlSelf->__PVT__amo_result;
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                          : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                      : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
        }
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__7__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__core_arb_ready = 1U;
    vlSelf->ready_o = vlSelf->__PVT__core_ready;
    if ((2U & (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))) {
        vlSelf->__PVT__core_arb_ready = 0U;
        vlSelf->ready_o = 1U;
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__1\n"); );
    // Body
    vlSelf->__PVT__reservation_d = vlSelf->__PVT__reservation_q;
    vlSelf->__PVT__core_valid = (1U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0U]);
    vlSelf->__PVT__load_amo = (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0U] 
                               & ((~ ((0U == (0xfU 
                                              & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                                 >> 0xbU))) 
                                      | ((0xaU == (0xfU 
                                                   & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                                      >> 0xbU))) 
                                         | (0xbU == 
                                            (0xfU & 
                                             (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                              >> 0xbU)))))) 
                                  & (IData)(vlSelf->ready_o)));
    vlSelf->__PVT__core_be = (0xffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0U] 
                                       >> 3U));
    vlSelf->__PVT__core_add = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                         >> 0x10U));
    vlSelf->__PVT__core_wdata = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U])) 
                                  << 0x35U) | (((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0U])) 
                                                  >> 0xbU)));
    vlSelf->__PVT__sc_successful = 0U;
    if ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0U] 
         & (IData)(vlSelf->ready_o))) {
        if ((IData)(((0x5000U == (0x7800U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U])) 
                     & ((~ ((IData)(vlSelf->__PVT__reservation_q) 
                            >> 0xaU)) | ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                                         == (1U & (
                                                   vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0U] 
                                                   >> 2U))))))) {
            vlSelf->__PVT__reservation_d = (0x400U 
                                            | ((0x3feU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                                   >> 0xfU)) 
                                               | (1U 
                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0U] 
                                                     >> 2U))));
        }
        if ((((((~ (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0U] 
                    >> 1U)) | ((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o) 
                               >> 1U)) | ((1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0U] 
                                                 >> 2U)) 
                                          != (1U & (IData)(vlSelf->__PVT__reservation_q)))) 
              & ((0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                            >> 0x10U)) == (0x1ffU & 
                                           ((IData)(vlSelf->__PVT__reservation_q) 
                                            >> 1U)))) 
             & ((~ (((0U == (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                     >> 0xbU))) | (0xaU 
                                                   == 
                                                   (0xfU 
                                                    & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                                       >> 0xbU)))) 
                    | (0xbU == (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                        >> 0xbU))))) 
                | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                   >> 0xfU)))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
        }
        if (((IData)((((IData)(vlSelf->__PVT__reservation_q) 
                       >> 0xaU) & (0x5800U == (0x7800U 
                                               & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U])))) 
             & ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                == (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0U] 
                          >> 2U))))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
            vlSelf->__PVT__sc_successful = ((0x1ffU 
                                             & ((IData)(vlSelf->__PVT__reservation_q) 
                                                >> 1U)) 
                                            == (0x1ffU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                                   >> 0x10U)));
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 1U;
        }
    }
    vlSelf->mem_req_o = vlSelf->__PVT__core_valid;
    vlSelf->__PVT__state_d = vlSelf->__PVT__state_q;
    if ((0U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__load_amo) {
            vlSelf->__PVT__state_d = 1U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__state_d = 2U;
    } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__core_arb_ready) {
            vlSelf->__PVT__state_d = 0U;
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_be = (0xffU & VL_SHIFTL_III(8,32,32, (IData)(0xfU), 
                                                                VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 2U)));
                vlSelf->__PVT__core_add = vlSelf->__PVT__addr_q;
                vlSelf->__PVT__core_wdata = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelf->__PVT__amo_result_q)), 
                                                          VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 5U));
            }
        }
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    } else {
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    }
    vlSelf->mem_wdata_o = vlSelf->__PVT__core_wdata;
    vlSelf->__PVT__core_wen = (1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                      >> 0xfU) | ((IData)(vlSelf->__PVT__sc_successful) 
                                                  & (0x5800U 
                                                     == 
                                                     (0x7800U 
                                                      & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U])))));
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_wen = 1U;
            }
        }
    }
    vlSelf->mem_wen_o = vlSelf->__PVT__core_wen;
    if ((2U & (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))) {
        vlSelf->mem_req_o = (1U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0U]);
        vlSelf->mem_be_o = (0xffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0U] 
                                     >> 3U));
        vlSelf->mem_add_o = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                       >> 0x10U));
        vlSelf->mem_wdata_o = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U])) 
                                << 0x35U) | (((QData)((IData)(
                                                              vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[1U])) 
                                              << 0x15U) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0U])) 
                                                >> 0xbU)));
        vlSelf->mem_wen_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                   >> 0xfU));
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__reservation_q = ((IData)(vlSymsp->TOP.rst_ni)
                                     ? (IData)(vlSelf->__PVT__reservation_d)
                                     : 0U);
    vlSelf->__PVT__sc_successful_q = ((IData)(vlSymsp->TOP.rst_ni) 
                                      && (IData)(vlSelf->__PVT__sc_successful));
    vlSelf->__PVT__sc_q = ((IData)(vlSymsp->TOP.rst_ni) 
                           && ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0U] 
                                & (0x5800U == (0x7800U 
                                               & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U]))) 
                               & (IData)(vlSelf->ready_o)));
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__1\n"); );
    // Body
    if (vlSelf->__PVT__load_amo) {
        vlSelf->__PVT__addr_q = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                           >> 0x10U));
        vlSelf->__PVT__operand_b_q = ((8U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0U])
                                       ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[1U] 
                                           << 0x15U) 
                                          | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0U] 
                                             >> 0xbU))
                                       : ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                           << 0x15U) 
                                          | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[1U] 
                                             >> 0xbU)));
        vlSelf->__PVT__amo_op_q = (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                           >> 0xbU));
        vlSelf->__PVT__idx_q = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0U] 
                                      >> 7U));
    }
    if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__amo_result_q = vlSelf->__PVT__amo_result;
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                          : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                      : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
        }
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__8__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim__1\n"); );
    // Body
    vlSelf->__PVT__reservation_d = vlSelf->__PVT__reservation_q;
    vlSelf->__PVT__core_valid = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                       >> 0x19U));
    vlSelf->__PVT__load_amo = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                >> 0x19U) & ((~ ((0U 
                                                  == 
                                                  (0xfU 
                                                   & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                                      >> 4U))) 
                                                 | ((0xaU 
                                                     == 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                                         >> 4U))) 
                                                    | (0xbU 
                                                       == 
                                                       (0xfU 
                                                        & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                                           >> 4U)))))) 
                                             & (IData)(vlSelf->ready_o)));
    vlSelf->__PVT__core_be = (0xffU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[3U] 
                                        << 4U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                                  >> 0x1cU)));
    vlSelf->__PVT__core_add = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                         >> 9U));
    vlSelf->__PVT__core_wdata = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U])) 
                                  << 0x3cU) | (((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[4U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[3U])) 
                                                  >> 4U)));
    vlSelf->__PVT__sc_successful = 0U;
    if (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U] 
          >> 0x19U) & (IData)(vlSelf->ready_o))) {
        if ((IData)(((0xa0U == (0xf0U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U])) 
                     & ((~ ((IData)(vlSelf->__PVT__reservation_q) 
                            >> 0xaU)) | ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                                         == (1U & (
                                                   vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                                   >> 0x1bU))))))) {
            vlSelf->__PVT__reservation_d = (0x400U 
                                            | ((0x3feU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                                   >> 8U)) 
                                               | (1U 
                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                                     >> 0x1bU))));
        }
        if ((((((~ (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                    >> 0x1aU)) | ((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o) 
                                  >> 1U)) | ((1U & 
                                              (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                               >> 0x1bU)) 
                                             != (1U 
                                                 & (IData)(vlSelf->__PVT__reservation_q)))) 
              & ((0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                            >> 9U)) == (0x1ffU & ((IData)(vlSelf->__PVT__reservation_q) 
                                                  >> 1U)))) 
             & ((~ (((0U == (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                     >> 4U))) | (0xaU 
                                                 == 
                                                 (0xfU 
                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                                     >> 4U)))) 
                    | (0xbU == (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                        >> 4U))))) 
                | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                   >> 8U)))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
        }
        if (((IData)((((IData)(vlSelf->__PVT__reservation_q) 
                       >> 0xaU) & (0xb0U == (0xf0U 
                                             & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U])))) 
             & ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                == (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                          >> 0x1bU))))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
            vlSelf->__PVT__sc_successful = ((0x1ffU 
                                             & ((IData)(vlSelf->__PVT__reservation_q) 
                                                >> 1U)) 
                                            == (0x1ffU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                                   >> 9U)));
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 1U;
        }
    }
    vlSelf->mem_req_o = vlSelf->__PVT__core_valid;
    vlSelf->__PVT__state_d = vlSelf->__PVT__state_q;
    if ((0U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__load_amo) {
            vlSelf->__PVT__state_d = 1U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__state_d = 2U;
    } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__core_arb_ready) {
            vlSelf->__PVT__state_d = 0U;
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_be = (0xffU & VL_SHIFTL_III(8,32,32, (IData)(0xfU), 
                                                                VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 2U)));
                vlSelf->__PVT__core_add = vlSelf->__PVT__addr_q;
                vlSelf->__PVT__core_wdata = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelf->__PVT__amo_result_q)), 
                                                          VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 5U));
            }
        }
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    } else {
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    }
    vlSelf->mem_wdata_o = vlSelf->__PVT__core_wdata;
    vlSelf->__PVT__core_wen = (1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                      >> 8U) | ((IData)(vlSelf->__PVT__sc_successful) 
                                                & (0xb0U 
                                                   == 
                                                   (0xf0U 
                                                    & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U])))));
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_wen = 1U;
            }
        }
    }
    vlSelf->mem_wen_o = vlSelf->__PVT__core_wen;
    if ((2U & (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))) {
        vlSelf->mem_req_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                   >> 0x19U));
        vlSelf->mem_be_o = (0xffU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[3U] 
                                      << 4U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                                >> 0x1cU)));
        vlSelf->mem_add_o = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                       >> 9U));
        vlSelf->mem_wdata_o = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U])) 
                                << 0x3cU) | (((QData)((IData)(
                                                              vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[4U])) 
                                              << 0x1cU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[3U])) 
                                                >> 4U)));
        vlSelf->mem_wen_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                   >> 8U));
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__reservation_q = ((IData)(vlSymsp->TOP.rst_ni)
                                     ? (IData)(vlSelf->__PVT__reservation_d)
                                     : 0U);
    vlSelf->__PVT__sc_successful_q = ((IData)(vlSymsp->TOP.rst_ni) 
                                      && (IData)(vlSelf->__PVT__sc_successful));
    vlSelf->__PVT__sc_q = ((IData)(vlSymsp->TOP.rst_ni) 
                           && (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                 >> 0x19U) & (0xb0U 
                                              == (0xf0U 
                                                  & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U]))) 
                               & (IData)(vlSelf->ready_o)));
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim__1\n"); );
    // Body
    if (vlSelf->__PVT__load_amo) {
        vlSelf->__PVT__addr_q = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                           >> 9U));
        vlSelf->__PVT__operand_b_q = ((0x10000000U 
                                       & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[2U])
                                       ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[4U] 
                                           << 0x1cU) 
                                          | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[3U] 
                                             >> 4U))
                                       : ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                           << 0x1cU) 
                                          | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[4U] 
                                             >> 4U)));
        vlSelf->__PVT__amo_op_q = (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                           >> 4U));
        vlSelf->__PVT__idx_q = (1U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[3U]);
    }
    if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__amo_result_q = vlSelf->__PVT__amo_result;
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                          : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                      : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
        }
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__9__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim__1\n"); );
    // Body
    vlSelf->__PVT__reservation_d = vlSelf->__PVT__reservation_q;
    vlSelf->__PVT__core_valid = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                       >> 0x12U));
    vlSelf->__PVT__load_amo = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                >> 0x12U) & ((~ ((0U 
                                                  == 
                                                  (0xfU 
                                                   & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                                       << 3U) 
                                                      | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                                         >> 0x1dU)))) 
                                                 | ((0xaU 
                                                     == 
                                                     (0xfU 
                                                      & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                                          << 3U) 
                                                         | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                                            >> 0x1dU)))) 
                                                    | (0xbU 
                                                       == 
                                                       (0xfU 
                                                        & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                                            << 3U) 
                                                           | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                                              >> 0x1dU))))))) 
                                             & (IData)(vlSelf->ready_o)));
    vlSelf->__PVT__core_be = (0xffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                       >> 0x15U));
    vlSelf->__PVT__core_add = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                         >> 2U));
    vlSelf->__PVT__core_wdata = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[7U])) 
                                  << 0x23U) | (((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[6U])) 
                                                << 3U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U])) 
                                                  >> 0x1dU)));
    vlSelf->__PVT__sc_successful = 0U;
    if (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U] 
          >> 0x12U) & (IData)(vlSelf->ready_o))) {
        if (((0xaU == (0xfU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                << 3U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                          >> 0x1dU)))) 
             & ((~ ((IData)(vlSelf->__PVT__reservation_q) 
                    >> 0xaU)) | ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                                 == (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                           >> 0x14U)))))) {
            vlSelf->__PVT__reservation_d = (0x400U 
                                            | ((0x3feU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                                   >> 1U)) 
                                               | (1U 
                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                                     >> 0x14U))));
        }
        if ((((((~ (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                    >> 0x13U)) | ((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o) 
                                  >> 1U)) | ((1U & 
                                              (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                               >> 0x14U)) 
                                             != (1U 
                                                 & (IData)(vlSelf->__PVT__reservation_q)))) 
              & ((0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                            >> 2U)) == (0x1ffU & ((IData)(vlSelf->__PVT__reservation_q) 
                                                  >> 1U)))) 
             & ((~ (((0U == (0xfU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                      << 3U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                                >> 0x1dU)))) 
                     | (0xaU == (0xfU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                          << 3U) | 
                                         (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                          >> 0x1dU))))) 
                    | (0xbU == (0xfU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                         << 3U) | (
                                                   vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                                   >> 0x1dU)))))) 
                | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                   >> 1U)))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
        }
        if (((((IData)(vlSelf->__PVT__reservation_q) 
               >> 0xaU) & (0xbU == (0xfU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                             << 3U) 
                                            | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                               >> 0x1dU))))) 
             & ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                == (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                          >> 0x14U))))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
            vlSelf->__PVT__sc_successful = ((0x1ffU 
                                             & ((IData)(vlSelf->__PVT__reservation_q) 
                                                >> 1U)) 
                                            == (0x1ffU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                                   >> 2U)));
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 1U;
        }
    }
    vlSelf->mem_req_o = vlSelf->__PVT__core_valid;
    vlSelf->__PVT__state_d = vlSelf->__PVT__state_q;
    if ((0U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__load_amo) {
            vlSelf->__PVT__state_d = 1U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__state_d = 2U;
    } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__core_arb_ready) {
            vlSelf->__PVT__state_d = 0U;
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_be = (0xffU & VL_SHIFTL_III(8,32,32, (IData)(0xfU), 
                                                                VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 2U)));
                vlSelf->__PVT__core_add = vlSelf->__PVT__addr_q;
                vlSelf->__PVT__core_wdata = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelf->__PVT__amo_result_q)), 
                                                          VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 5U));
            }
        }
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    } else {
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    }
    vlSelf->mem_wdata_o = vlSelf->__PVT__core_wdata;
    vlSelf->__PVT__core_wen = (1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                      >> 1U) | ((IData)(vlSelf->__PVT__sc_successful) 
                                                & (0xbU 
                                                   == 
                                                   (0xfU 
                                                    & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                                          >> 0x1dU)))))));
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_wen = 1U;
            }
        }
    }
    vlSelf->mem_wen_o = vlSelf->__PVT__core_wen;
    if ((2U & (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))) {
        vlSelf->mem_req_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                   >> 0x12U));
        vlSelf->mem_be_o = (0xffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                     >> 0x15U));
        vlSelf->mem_add_o = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                       >> 2U));
        vlSelf->mem_wdata_o = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[7U])) 
                                << 0x23U) | (((QData)((IData)(
                                                              vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[6U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U])) 
                                                >> 0x1dU)));
        vlSelf->mem_wen_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                   >> 1U));
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__reservation_q = ((IData)(vlSymsp->TOP.rst_ni)
                                     ? (IData)(vlSelf->__PVT__reservation_d)
                                     : 0U);
    vlSelf->__PVT__sc_successful_q = ((IData)(vlSymsp->TOP.rst_ni) 
                                      && (IData)(vlSelf->__PVT__sc_successful));
    vlSelf->__PVT__sc_q = ((IData)(vlSymsp->TOP.rst_ni) 
                           && (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                 >> 0x12U) & (IData)(vlSelf->ready_o)) 
                               & (0xbU == (0xfU & (
                                                   (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                                    << 3U) 
                                                   | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                                      >> 0x1dU))))));
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim__1\n"); );
    // Body
    if (vlSelf->__PVT__load_amo) {
        vlSelf->__PVT__addr_q = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                           >> 2U));
        vlSelf->__PVT__operand_b_q = ((0x200000U & 
                                       vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U])
                                       ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[6U] 
                                           << 3U) | 
                                          (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                           >> 0x1dU))
                                       : ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                           << 3U) | 
                                          (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[6U] 
                                           >> 0x1dU)));
        vlSelf->__PVT__amo_op_q = (0xfU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                            << 3U) 
                                           | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                              >> 0x1dU)));
        vlSelf->__PVT__idx_q = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                      >> 0x19U));
    }
    if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__amo_result_q = vlSelf->__PVT__amo_result;
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                          : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                      : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
        }
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__10__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim__1\n"); );
    // Body
    vlSelf->__PVT__reservation_d = vlSelf->__PVT__reservation_q;
    vlSelf->__PVT__core_valid = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                       >> 0xbU));
    vlSelf->__PVT__load_amo = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                >> 0xbU) & ((~ ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                                     >> 0x16U))) 
                                                | ((0xaU 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                                        >> 0x16U))) 
                                                   | (0xbU 
                                                      == 
                                                      (0xfU 
                                                       & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                                          >> 0x16U)))))) 
                                            & (IData)(vlSelf->ready_o)));
    vlSelf->__PVT__core_be = (0xffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                       >> 0xeU));
    vlSelf->__PVT__core_add = (0x1ffU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                          << 5U) | 
                                         (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                          >> 0x1bU)));
    vlSelf->__PVT__core_wdata = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xaU])) 
                                  << 0x2aU) | (((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[9U])) 
                                                << 0xaU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U])) 
                                                  >> 0x16U)));
    vlSelf->__PVT__sc_successful = 0U;
    if (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U] 
          >> 0xbU) & (IData)(vlSelf->ready_o))) {
        if ((IData)(((0x2800000U == (0x3c00000U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xaU])) 
                     & ((~ ((IData)(vlSelf->__PVT__reservation_q) 
                            >> 0xaU)) | ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                                         == (1U & (
                                                   vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                                   >> 0xdU))))))) {
            vlSelf->__PVT__reservation_d = (0x400U 
                                            | ((0x3feU 
                                                & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                                    << 6U) 
                                                   | (0x3eU 
                                                      & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                                         >> 0x1aU)))) 
                                               | (1U 
                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                                     >> 0xdU))));
        }
        if ((((((~ (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                    >> 0xcU)) | ((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o) 
                                 >> 1U)) | ((1U & (
                                                   vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                                   >> 0xdU)) 
                                            != (1U 
                                                & (IData)(vlSelf->__PVT__reservation_q)))) 
              & ((0x1ffU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                             << 5U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                       >> 0x1bU))) 
                 == (0x1ffU & ((IData)(vlSelf->__PVT__reservation_q) 
                               >> 1U)))) & ((~ (((0U 
                                                  == 
                                                  (0xfU 
                                                   & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                                      >> 0x16U))) 
                                                 | (0xaU 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                                        >> 0x16U)))) 
                                                | (0xbU 
                                                   == 
                                                   (0xfU 
                                                    & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                                       >> 0x16U))))) 
                                            | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                               >> 0x1aU)))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
        }
        if (((IData)((((IData)(vlSelf->__PVT__reservation_q) 
                       >> 0xaU) & (0x2c00000U == (0x3c00000U 
                                                  & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xaU])))) 
             & ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                == (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                          >> 0xdU))))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
            vlSelf->__PVT__sc_successful = ((0x1ffU 
                                             & ((IData)(vlSelf->__PVT__reservation_q) 
                                                >> 1U)) 
                                            == (0x1ffU 
                                                & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                                      >> 0x1bU))));
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 1U;
        }
    }
    vlSelf->mem_req_o = vlSelf->__PVT__core_valid;
    vlSelf->__PVT__state_d = vlSelf->__PVT__state_q;
    if ((0U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__load_amo) {
            vlSelf->__PVT__state_d = 1U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__state_d = 2U;
    } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__core_arb_ready) {
            vlSelf->__PVT__state_d = 0U;
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_be = (0xffU & VL_SHIFTL_III(8,32,32, (IData)(0xfU), 
                                                                VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 2U)));
                vlSelf->__PVT__core_add = vlSelf->__PVT__addr_q;
                vlSelf->__PVT__core_wdata = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelf->__PVT__amo_result_q)), 
                                                          VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 5U));
            }
        }
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    } else {
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    }
    vlSelf->mem_wdata_o = vlSelf->__PVT__core_wdata;
    vlSelf->__PVT__core_wen = (1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                      >> 0x1aU) | ((IData)(vlSelf->__PVT__sc_successful) 
                                                   & (0x2c00000U 
                                                      == 
                                                      (0x3c00000U 
                                                       & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xaU])))));
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_wen = 1U;
            }
        }
    }
    vlSelf->mem_wen_o = vlSelf->__PVT__core_wen;
    if ((2U & (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))) {
        vlSelf->mem_req_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                   >> 0xbU));
        vlSelf->mem_be_o = (0xffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                     >> 0xeU));
        vlSelf->mem_add_o = (0x1ffU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                        << 5U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                                  >> 0x1bU)));
        vlSelf->mem_wdata_o = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xaU])) 
                                << 0x2aU) | (((QData)((IData)(
                                                              vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[9U])) 
                                              << 0xaU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U])) 
                                                >> 0x16U)));
        vlSelf->mem_wen_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                   >> 0x1aU));
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__reservation_q = ((IData)(vlSymsp->TOP.rst_ni)
                                     ? (IData)(vlSelf->__PVT__reservation_d)
                                     : 0U);
    vlSelf->__PVT__sc_successful_q = ((IData)(vlSymsp->TOP.rst_ni) 
                                      && (IData)(vlSelf->__PVT__sc_successful));
    vlSelf->__PVT__sc_q = ((IData)(vlSymsp->TOP.rst_ni) 
                           && (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                 >> 0xbU) & (0x2c00000U 
                                             == (0x3c00000U 
                                                 & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xaU]))) 
                               & (IData)(vlSelf->ready_o)));
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim__1\n"); );
    // Body
    if (vlSelf->__PVT__load_amo) {
        vlSelf->__PVT__addr_q = (0x1ffU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                            << 5U) 
                                           | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                              >> 0x1bU)));
        vlSelf->__PVT__operand_b_q = ((0x4000U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U])
                                       ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[9U] 
                                           << 0xaU) 
                                          | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                             >> 0x16U))
                                       : ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                           << 0xaU) 
                                          | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[9U] 
                                             >> 0x16U)));
        vlSelf->__PVT__amo_op_q = (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                           >> 0x16U));
        vlSelf->__PVT__idx_q = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                      >> 0x12U));
    }
    if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__amo_result_q = vlSelf->__PVT__amo_result;
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                          : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                      : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
        }
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__11__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim__1\n"); );
    // Body
    vlSelf->__PVT__reservation_d = vlSelf->__PVT__reservation_q;
    vlSelf->__PVT__core_valid = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                       >> 4U));
    vlSelf->__PVT__load_amo = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                >> 4U) & ((~ ((0U == 
                                               (0xfU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                                   >> 0xfU))) 
                                              | ((0xaU 
                                                  == 
                                                  (0xfU 
                                                   & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                                      >> 0xfU))) 
                                                 | (0xbU 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                                        >> 0xfU)))))) 
                                          & (IData)(vlSelf->ready_o)));
    vlSelf->__PVT__core_be = (0xffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                       >> 7U));
    vlSelf->__PVT__core_add = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                         >> 0x14U));
    vlSelf->__PVT__core_wdata = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xdU])) 
                                  << 0x31U) | (((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xcU])) 
                                                << 0x11U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xbU])) 
                                                  >> 0xfU)));
    vlSelf->__PVT__sc_successful = 0U;
    if (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
          >> 4U) & (IData)(vlSelf->ready_o))) {
        if ((IData)(((0x50000U == (0x78000U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xdU])) 
                     & ((~ ((IData)(vlSelf->__PVT__reservation_q) 
                            >> 0xaU)) | ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                                         == (1U & (
                                                   vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                                   >> 6U))))))) {
            vlSelf->__PVT__reservation_d = (0x400U 
                                            | ((0x3feU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                                   >> 0x13U)) 
                                               | (1U 
                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                                     >> 6U))));
        }
        if ((((((~ (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                    >> 5U)) | ((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o) 
                               >> 1U)) | ((1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                                 >> 6U)) 
                                          != (1U & (IData)(vlSelf->__PVT__reservation_q)))) 
              & ((0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                            >> 0x14U)) == (0x1ffU & 
                                           ((IData)(vlSelf->__PVT__reservation_q) 
                                            >> 1U)))) 
             & ((~ (((0U == (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                     >> 0xfU))) | (0xaU 
                                                   == 
                                                   (0xfU 
                                                    & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                                       >> 0xfU)))) 
                    | (0xbU == (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                        >> 0xfU))))) 
                | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                   >> 0x13U)))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
        }
        if (((IData)((((IData)(vlSelf->__PVT__reservation_q) 
                       >> 0xaU) & (0x58000U == (0x78000U 
                                                & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xdU])))) 
             & ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                == (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                          >> 6U))))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
            vlSelf->__PVT__sc_successful = ((0x1ffU 
                                             & ((IData)(vlSelf->__PVT__reservation_q) 
                                                >> 1U)) 
                                            == (0x1ffU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                                   >> 0x14U)));
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 1U;
        }
    }
    vlSelf->mem_req_o = vlSelf->__PVT__core_valid;
    vlSelf->__PVT__state_d = vlSelf->__PVT__state_q;
    if ((0U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__load_amo) {
            vlSelf->__PVT__state_d = 1U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__state_d = 2U;
    } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__core_arb_ready) {
            vlSelf->__PVT__state_d = 0U;
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_be = (0xffU & VL_SHIFTL_III(8,32,32, (IData)(0xfU), 
                                                                VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 2U)));
                vlSelf->__PVT__core_add = vlSelf->__PVT__addr_q;
                vlSelf->__PVT__core_wdata = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelf->__PVT__amo_result_q)), 
                                                          VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 5U));
            }
        }
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    } else {
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    }
    vlSelf->mem_wdata_o = vlSelf->__PVT__core_wdata;
    vlSelf->__PVT__core_wen = (1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                      >> 0x13U) | ((IData)(vlSelf->__PVT__sc_successful) 
                                                   & (0x58000U 
                                                      == 
                                                      (0x78000U 
                                                       & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xdU])))));
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_wen = 1U;
            }
        }
    }
    vlSelf->mem_wen_o = vlSelf->__PVT__core_wen;
    if ((2U & (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))) {
        vlSelf->mem_req_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                   >> 4U));
        vlSelf->mem_be_o = (0xffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                     >> 7U));
        vlSelf->mem_add_o = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                       >> 0x14U));
        vlSelf->mem_wdata_o = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xdU])) 
                                << 0x31U) | (((QData)((IData)(
                                                              vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xcU])) 
                                              << 0x11U) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xbU])) 
                                                >> 0xfU)));
        vlSelf->mem_wen_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                   >> 0x13U));
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__reservation_q = ((IData)(vlSymsp->TOP.rst_ni)
                                     ? (IData)(vlSelf->__PVT__reservation_d)
                                     : 0U);
    vlSelf->__PVT__sc_successful_q = ((IData)(vlSymsp->TOP.rst_ni) 
                                      && (IData)(vlSelf->__PVT__sc_successful));
    vlSelf->__PVT__sc_q = ((IData)(vlSymsp->TOP.rst_ni) 
                           && (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                 >> 4U) & (0x58000U 
                                           == (0x78000U 
                                               & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xdU]))) 
                               & (IData)(vlSelf->ready_o)));
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim__1\n"); );
    // Body
    if (vlSelf->__PVT__load_amo) {
        vlSelf->__PVT__addr_q = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                           >> 0x14U));
        vlSelf->__PVT__operand_b_q = ((0x80U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xbU])
                                       ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xcU] 
                                           << 0x11U) 
                                          | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                             >> 0xfU))
                                       : ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                           << 0x11U) 
                                          | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xcU] 
                                             >> 0xfU)));
        vlSelf->__PVT__amo_op_q = (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                           >> 0xfU));
        vlSelf->__PVT__idx_q = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                      >> 0xbU));
    }
    if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__amo_result_q = vlSelf->__PVT__amo_result;
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                          : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                      : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
        }
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__12__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim__1\n"); );
    // Body
    vlSelf->__PVT__reservation_d = vlSelf->__PVT__reservation_q;
    vlSelf->__PVT__core_valid = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                       >> 0x1dU));
    vlSelf->__PVT__load_amo = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                >> 0x1dU) & ((~ ((0U 
                                                  == 
                                                  (0xfU 
                                                   & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                                      >> 8U))) 
                                                 | ((0xaU 
                                                     == 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                                         >> 8U))) 
                                                    | (0xbU 
                                                       == 
                                                       (0xfU 
                                                        & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                                           >> 8U)))))) 
                                             & (IData)(vlSelf->ready_o)));
    vlSelf->__PVT__core_be = (0xffU & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xeU]);
    vlSelf->__PVT__core_add = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                         >> 0xdU));
    vlSelf->__PVT__core_wdata = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U])) 
                                  << 0x38U) | (((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xfU])) 
                                                << 0x18U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xeU])) 
                                                  >> 8U)));
    vlSelf->__PVT__sc_successful = 0U;
    if (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
          >> 0x1dU) & (IData)(vlSelf->ready_o))) {
        if ((IData)(((0xa00U == (0xf00U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U])) 
                     & ((~ ((IData)(vlSelf->__PVT__reservation_q) 
                            >> 0xaU)) | ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                                         == (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                             >> 0x1fU)))))) {
            vlSelf->__PVT__reservation_d = (0x400U 
                                            | ((0x3feU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                                   >> 0xcU)) 
                                               | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                                  >> 0x1fU)));
        }
        if ((((((~ (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                    >> 0x1eU)) | ((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o) 
                                  >> 1U)) | ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                              >> 0x1fU) 
                                             != (1U 
                                                 & (IData)(vlSelf->__PVT__reservation_q)))) 
              & ((0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                            >> 0xdU)) == (0x1ffU & 
                                          ((IData)(vlSelf->__PVT__reservation_q) 
                                           >> 1U)))) 
             & ((~ (((0U == (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                     >> 8U))) | (0xaU 
                                                 == 
                                                 (0xfU 
                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                                     >> 8U)))) 
                    | (0xbU == (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                        >> 8U))))) 
                | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                   >> 0xcU)))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
        }
        if (((IData)((((IData)(vlSelf->__PVT__reservation_q) 
                       >> 0xaU) & (0xb00U == (0xf00U 
                                              & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U])))) 
             & ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                == (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                    >> 0x1fU)))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
            vlSelf->__PVT__sc_successful = ((0x1ffU 
                                             & ((IData)(vlSelf->__PVT__reservation_q) 
                                                >> 1U)) 
                                            == (0x1ffU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                                   >> 0xdU)));
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 1U;
        }
    }
    vlSelf->mem_req_o = vlSelf->__PVT__core_valid;
    vlSelf->__PVT__state_d = vlSelf->__PVT__state_q;
    if ((0U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__load_amo) {
            vlSelf->__PVT__state_d = 1U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__state_d = 2U;
    } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__core_arb_ready) {
            vlSelf->__PVT__state_d = 0U;
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_be = (0xffU & VL_SHIFTL_III(8,32,32, (IData)(0xfU), 
                                                                VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 2U)));
                vlSelf->__PVT__core_add = vlSelf->__PVT__addr_q;
                vlSelf->__PVT__core_wdata = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelf->__PVT__amo_result_q)), 
                                                          VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 5U));
            }
        }
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    } else {
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    }
    vlSelf->mem_wdata_o = vlSelf->__PVT__core_wdata;
    vlSelf->__PVT__core_wen = (1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                      >> 0xcU) | ((IData)(vlSelf->__PVT__sc_successful) 
                                                  & (0xb00U 
                                                     == 
                                                     (0xf00U 
                                                      & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U])))));
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_wen = 1U;
            }
        }
    }
    vlSelf->mem_wen_o = vlSelf->__PVT__core_wen;
    if ((2U & (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))) {
        vlSelf->mem_req_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                   >> 0x1dU));
        vlSelf->mem_be_o = (0xffU & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xeU]);
        vlSelf->mem_add_o = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                       >> 0xdU));
        vlSelf->mem_wdata_o = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U])) 
                                << 0x38U) | (((QData)((IData)(
                                                              vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xfU])) 
                                              << 0x18U) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xeU])) 
                                                >> 8U)));
        vlSelf->mem_wen_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                   >> 0xcU));
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__reservation_q = ((IData)(vlSymsp->TOP.rst_ni)
                                     ? (IData)(vlSelf->__PVT__reservation_d)
                                     : 0U);
    vlSelf->__PVT__sc_successful_q = ((IData)(vlSymsp->TOP.rst_ni) 
                                      && (IData)(vlSelf->__PVT__sc_successful));
    vlSelf->__PVT__sc_q = ((IData)(vlSymsp->TOP.rst_ni) 
                           && (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                 >> 0x1dU) & (0xb00U 
                                              == (0xf00U 
                                                  & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U]))) 
                               & (IData)(vlSelf->ready_o)));
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim__1\n"); );
    // Body
    if (vlSelf->__PVT__load_amo) {
        vlSelf->__PVT__addr_q = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                           >> 0xdU));
        vlSelf->__PVT__operand_b_q = ((1U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xeU])
                                       ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xfU] 
                                           << 0x18U) 
                                          | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xeU] 
                                             >> 8U))
                                       : ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                           << 0x18U) 
                                          | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xfU] 
                                             >> 8U)));
        vlSelf->__PVT__amo_op_q = (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                           >> 8U));
        vlSelf->__PVT__idx_q = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0xeU] 
                                      >> 4U));
    }
    if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__amo_result_q = vlSelf->__PVT__amo_result;
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                          : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                      : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
        }
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__13__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim__1\n"); );
    // Body
    vlSelf->__PVT__reservation_d = vlSelf->__PVT__reservation_q;
    vlSelf->__PVT__core_valid = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                       >> 0x16U));
    vlSelf->__PVT__load_amo = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                >> 0x16U) & ((~ ((0U 
                                                  == 
                                                  (0xfU 
                                                   & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                                      >> 1U))) 
                                                 | ((0xaU 
                                                     == 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                                         >> 1U))) 
                                                    | (0xbU 
                                                       == 
                                                       (0xfU 
                                                        & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                                           >> 1U)))))) 
                                             & (IData)(vlSelf->ready_o)));
    vlSelf->__PVT__core_be = (0xffU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x11U] 
                                        << 7U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                                  >> 0x19U)));
    vlSelf->__PVT__core_add = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                         >> 6U));
    vlSelf->__PVT__core_wdata = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U])) 
                                  << 0x3fU) | (((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x12U])) 
                                                << 0x1fU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x11U])) 
                                                  >> 1U)));
    vlSelf->__PVT__sc_successful = 0U;
    if (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
          >> 0x16U) & (IData)(vlSelf->ready_o))) {
        if ((IData)(((0x14U == (0x1eU & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U])) 
                     & ((~ ((IData)(vlSelf->__PVT__reservation_q) 
                            >> 0xaU)) | ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                                         == (1U & (
                                                   vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                                   >> 0x18U))))))) {
            vlSelf->__PVT__reservation_d = (0x400U 
                                            | ((0x3feU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                                   >> 5U)) 
                                               | (1U 
                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                                     >> 0x18U))));
        }
        if ((((((~ (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                    >> 0x17U)) | ((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o) 
                                  >> 1U)) | ((1U & 
                                              (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                               >> 0x18U)) 
                                             != (1U 
                                                 & (IData)(vlSelf->__PVT__reservation_q)))) 
              & ((0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                            >> 6U)) == (0x1ffU & ((IData)(vlSelf->__PVT__reservation_q) 
                                                  >> 1U)))) 
             & ((~ (((0U == (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                     >> 1U))) | (0xaU 
                                                 == 
                                                 (0xfU 
                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                                     >> 1U)))) 
                    | (0xbU == (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                        >> 1U))))) 
                | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                   >> 5U)))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
        }
        if (((IData)((((IData)(vlSelf->__PVT__reservation_q) 
                       >> 0xaU) & (0x16U == (0x1eU 
                                             & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U])))) 
             & ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                == (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                          >> 0x18U))))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
            vlSelf->__PVT__sc_successful = ((0x1ffU 
                                             & ((IData)(vlSelf->__PVT__reservation_q) 
                                                >> 1U)) 
                                            == (0x1ffU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                                   >> 6U)));
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 1U;
        }
    }
    vlSelf->mem_req_o = vlSelf->__PVT__core_valid;
    vlSelf->__PVT__state_d = vlSelf->__PVT__state_q;
    if ((0U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__load_amo) {
            vlSelf->__PVT__state_d = 1U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__state_d = 2U;
    } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__core_arb_ready) {
            vlSelf->__PVT__state_d = 0U;
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_be = (0xffU & VL_SHIFTL_III(8,32,32, (IData)(0xfU), 
                                                                VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 2U)));
                vlSelf->__PVT__core_add = vlSelf->__PVT__addr_q;
                vlSelf->__PVT__core_wdata = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelf->__PVT__amo_result_q)), 
                                                          VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 5U));
            }
        }
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    } else {
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    }
    vlSelf->mem_wdata_o = vlSelf->__PVT__core_wdata;
    vlSelf->__PVT__core_wen = (1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                      >> 5U) | ((IData)(vlSelf->__PVT__sc_successful) 
                                                & (0x16U 
                                                   == 
                                                   (0x1eU 
                                                    & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U])))));
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_wen = 1U;
            }
        }
    }
    vlSelf->mem_wen_o = vlSelf->__PVT__core_wen;
    if ((2U & (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))) {
        vlSelf->mem_req_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                   >> 0x16U));
        vlSelf->mem_be_o = (0xffU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x11U] 
                                      << 7U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                                >> 0x19U)));
        vlSelf->mem_add_o = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                       >> 6U));
        vlSelf->mem_wdata_o = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U])) 
                                << 0x3fU) | (((QData)((IData)(
                                                              vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x12U])) 
                                              << 0x1fU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x11U])) 
                                                >> 1U)));
        vlSelf->mem_wen_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                   >> 5U));
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__reservation_q = ((IData)(vlSymsp->TOP.rst_ni)
                                     ? (IData)(vlSelf->__PVT__reservation_d)
                                     : 0U);
    vlSelf->__PVT__sc_successful_q = ((IData)(vlSymsp->TOP.rst_ni) 
                                      && (IData)(vlSelf->__PVT__sc_successful));
    vlSelf->__PVT__sc_q = ((IData)(vlSymsp->TOP.rst_ni) 
                           && (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                 >> 0x16U) & (0x16U 
                                              == (0x1eU 
                                                  & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U]))) 
                               & (IData)(vlSelf->ready_o)));
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim__1\n"); );
    // Body
    if (vlSelf->__PVT__load_amo) {
        vlSelf->__PVT__addr_q = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                           >> 6U));
        vlSelf->__PVT__operand_b_q = ((0x2000000U & 
                                       vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U])
                                       ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x12U] 
                                           << 0x1fU) 
                                          | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x11U] 
                                             >> 1U))
                                       : ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                           << 0x1fU) 
                                          | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x12U] 
                                             >> 1U)));
        vlSelf->__PVT__amo_op_q = (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                           >> 1U));
        vlSelf->__PVT__idx_q = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                      >> 0x1dU));
    }
    if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__amo_result_q = vlSelf->__PVT__amo_result;
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                          : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                      : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
        }
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__14__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim__1\n"); );
    // Body
    vlSelf->__PVT__reservation_d = vlSelf->__PVT__reservation_q;
    vlSelf->__PVT__core_valid = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                       >> 0xfU));
    vlSelf->__PVT__load_amo = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                >> 0xfU) & ((~ ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x15U] 
                                                     >> 0x1aU))) 
                                                | ((0xaU 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x15U] 
                                                        >> 0x1aU))) 
                                                   | (0xbU 
                                                      == 
                                                      (0xfU 
                                                       & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x15U] 
                                                          >> 0x1aU)))))) 
                                            & (IData)(vlSelf->ready_o)));
    vlSelf->__PVT__core_be = (0xffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                       >> 0x12U));
    vlSelf->__PVT__core_add = (0x1ffU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x16U] 
                                          << 1U) | 
                                         (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x15U] 
                                          >> 0x1fU)));
    vlSelf->__PVT__core_wdata = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x15U])) 
                                  << 0x26U) | (((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x14U])) 
                                                << 6U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U])) 
                                                  >> 0x1aU)));
    vlSelf->__PVT__sc_successful = 0U;
    if (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
          >> 0xfU) & (IData)(vlSelf->ready_o))) {
        if ((IData)(((0x28000000U == (0x3c000000U & 
                                      vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x15U])) 
                     & ((~ ((IData)(vlSelf->__PVT__reservation_q) 
                            >> 0xaU)) | ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                                         == (1U & (
                                                   vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                                   >> 0x11U))))))) {
            vlSelf->__PVT__reservation_d = (0x400U 
                                            | ((0x3feU 
                                                & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x16U] 
                                                    << 2U) 
                                                   | (2U 
                                                      & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x15U] 
                                                         >> 0x1eU)))) 
                                               | (1U 
                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                                     >> 0x11U))));
        }
        if ((((((~ (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                    >> 0x10U)) | ((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o) 
                                  >> 1U)) | ((1U & 
                                              (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                               >> 0x11U)) 
                                             != (1U 
                                                 & (IData)(vlSelf->__PVT__reservation_q)))) 
              & ((0x1ffU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x16U] 
                             << 1U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x15U] 
                                       >> 0x1fU))) 
                 == (0x1ffU & ((IData)(vlSelf->__PVT__reservation_q) 
                               >> 1U)))) & ((~ (((0U 
                                                  == 
                                                  (0xfU 
                                                   & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x15U] 
                                                      >> 0x1aU))) 
                                                 | (0xaU 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x15U] 
                                                        >> 0x1aU)))) 
                                                | (0xbU 
                                                   == 
                                                   (0xfU 
                                                    & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x15U] 
                                                       >> 0x1aU))))) 
                                            | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x15U] 
                                               >> 0x1eU)))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
        }
        if (((IData)((((IData)(vlSelf->__PVT__reservation_q) 
                       >> 0xaU) & (0x2c000000U == (0x3c000000U 
                                                   & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x15U])))) 
             & ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                == (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                          >> 0x11U))))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
            vlSelf->__PVT__sc_successful = ((0x1ffU 
                                             & ((IData)(vlSelf->__PVT__reservation_q) 
                                                >> 1U)) 
                                            == (0x1ffU 
                                                & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x16U] 
                                                    << 1U) 
                                                   | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x15U] 
                                                      >> 0x1fU))));
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 1U;
        }
    }
    vlSelf->mem_req_o = vlSelf->__PVT__core_valid;
    vlSelf->__PVT__state_d = vlSelf->__PVT__state_q;
    if ((0U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__load_amo) {
            vlSelf->__PVT__state_d = 1U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__state_d = 2U;
    } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__core_arb_ready) {
            vlSelf->__PVT__state_d = 0U;
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_be = (0xffU & VL_SHIFTL_III(8,32,32, (IData)(0xfU), 
                                                                VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 2U)));
                vlSelf->__PVT__core_add = vlSelf->__PVT__addr_q;
                vlSelf->__PVT__core_wdata = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelf->__PVT__amo_result_q)), 
                                                          VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 5U));
            }
        }
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    } else {
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    }
    vlSelf->mem_wdata_o = vlSelf->__PVT__core_wdata;
    vlSelf->__PVT__core_wen = (1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x15U] 
                                      >> 0x1eU) | ((IData)(vlSelf->__PVT__sc_successful) 
                                                   & (0x2c000000U 
                                                      == 
                                                      (0x3c000000U 
                                                       & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x15U])))));
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_wen = 1U;
            }
        }
    }
    vlSelf->mem_wen_o = vlSelf->__PVT__core_wen;
    if ((2U & (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))) {
        vlSelf->mem_req_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                   >> 0xfU));
        vlSelf->mem_be_o = (0xffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                     >> 0x12U));
        vlSelf->mem_add_o = (0x1ffU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x16U] 
                                        << 1U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x15U] 
                                                  >> 0x1fU)));
        vlSelf->mem_wdata_o = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x15U])) 
                                << 0x26U) | (((QData)((IData)(
                                                              vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x14U])) 
                                              << 6U) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U])) 
                                                >> 0x1aU)));
        vlSelf->mem_wen_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x15U] 
                                   >> 0x1eU));
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__reservation_q = ((IData)(vlSymsp->TOP.rst_ni)
                                     ? (IData)(vlSelf->__PVT__reservation_d)
                                     : 0U);
    vlSelf->__PVT__sc_successful_q = ((IData)(vlSymsp->TOP.rst_ni) 
                                      && (IData)(vlSelf->__PVT__sc_successful));
    vlSelf->__PVT__sc_q = ((IData)(vlSymsp->TOP.rst_ni) 
                           && (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                 >> 0xfU) & (0x2c000000U 
                                             == (0x3c000000U 
                                                 & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x15U]))) 
                               & (IData)(vlSelf->ready_o)));
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim__1\n"); );
    // Body
    if (vlSelf->__PVT__load_amo) {
        vlSelf->__PVT__addr_q = (0x1ffU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x16U] 
                                            << 1U) 
                                           | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x15U] 
                                              >> 0x1fU)));
        vlSelf->__PVT__operand_b_q = ((0x40000U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U])
                                       ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x14U] 
                                           << 6U) | 
                                          (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                           >> 0x1aU))
                                       : ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x15U] 
                                           << 6U) | 
                                          (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x14U] 
                                           >> 0x1aU)));
        vlSelf->__PVT__amo_op_q = (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x15U] 
                                           >> 0x1aU));
        vlSelf->__PVT__idx_q = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                      >> 0x16U));
    }
    if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__amo_result_q = vlSelf->__PVT__amo_result;
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                          : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                      : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
        }
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__15__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__core_arb_ready = 1U;
    vlSelf->ready_o = vlSelf->__PVT__core_ready;
    if ((4U & (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))) {
        vlSelf->__PVT__core_arb_ready = 0U;
        vlSelf->ready_o = 1U;
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__1\n"); );
    // Body
    vlSelf->__PVT__reservation_d = vlSelf->__PVT__reservation_q;
    vlSelf->__PVT__core_valid = (1U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0U]);
    vlSelf->__PVT__load_amo = (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0U] 
                               & ((~ ((0U == (0xfU 
                                              & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                                 >> 0xbU))) 
                                      | ((0xaU == (0xfU 
                                                   & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                                      >> 0xbU))) 
                                         | (0xbU == 
                                            (0xfU & 
                                             (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                              >> 0xbU)))))) 
                                  & (IData)(vlSelf->ready_o)));
    vlSelf->__PVT__core_be = (0xffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0U] 
                                       >> 3U));
    vlSelf->__PVT__core_add = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                         >> 0x10U));
    vlSelf->__PVT__core_wdata = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U])) 
                                  << 0x35U) | (((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0U])) 
                                                  >> 0xbU)));
    vlSelf->__PVT__sc_successful = 0U;
    if ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0U] 
         & (IData)(vlSelf->ready_o))) {
        if ((IData)(((0x5000U == (0x7800U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U])) 
                     & ((~ ((IData)(vlSelf->__PVT__reservation_q) 
                            >> 0xaU)) | ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                                         == (1U & (
                                                   vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0U] 
                                                   >> 2U))))))) {
            vlSelf->__PVT__reservation_d = (0x400U 
                                            | ((0x3feU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                                   >> 0xfU)) 
                                               | (1U 
                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0U] 
                                                     >> 2U))));
        }
        if ((((((~ (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0U] 
                    >> 1U)) | ((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o) 
                               >> 2U)) | ((1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0U] 
                                                 >> 2U)) 
                                          != (1U & (IData)(vlSelf->__PVT__reservation_q)))) 
              & ((0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                            >> 0x10U)) == (0x1ffU & 
                                           ((IData)(vlSelf->__PVT__reservation_q) 
                                            >> 1U)))) 
             & ((~ (((0U == (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                     >> 0xbU))) | (0xaU 
                                                   == 
                                                   (0xfU 
                                                    & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                                       >> 0xbU)))) 
                    | (0xbU == (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                        >> 0xbU))))) 
                | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                   >> 0xfU)))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
        }
        if (((IData)((((IData)(vlSelf->__PVT__reservation_q) 
                       >> 0xaU) & (0x5800U == (0x7800U 
                                               & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U])))) 
             & ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                == (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0U] 
                          >> 2U))))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
            vlSelf->__PVT__sc_successful = ((0x1ffU 
                                             & ((IData)(vlSelf->__PVT__reservation_q) 
                                                >> 1U)) 
                                            == (0x1ffU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                                   >> 0x10U)));
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 1U;
        }
    }
    vlSelf->mem_req_o = vlSelf->__PVT__core_valid;
    vlSelf->__PVT__state_d = vlSelf->__PVT__state_q;
    if ((0U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__load_amo) {
            vlSelf->__PVT__state_d = 1U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__state_d = 2U;
    } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__core_arb_ready) {
            vlSelf->__PVT__state_d = 0U;
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_be = (0xffU & VL_SHIFTL_III(8,32,32, (IData)(0xfU), 
                                                                VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 2U)));
                vlSelf->__PVT__core_add = vlSelf->__PVT__addr_q;
                vlSelf->__PVT__core_wdata = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelf->__PVT__amo_result_q)), 
                                                          VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 5U));
            }
        }
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    } else {
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    }
    vlSelf->mem_wdata_o = vlSelf->__PVT__core_wdata;
    vlSelf->__PVT__core_wen = (1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                      >> 0xfU) | ((IData)(vlSelf->__PVT__sc_successful) 
                                                  & (0x5800U 
                                                     == 
                                                     (0x7800U 
                                                      & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U])))));
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_wen = 1U;
            }
        }
    }
    vlSelf->mem_wen_o = vlSelf->__PVT__core_wen;
    if ((4U & (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))) {
        vlSelf->mem_req_o = (1U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0U]);
        vlSelf->mem_be_o = (0xffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0U] 
                                     >> 3U));
        vlSelf->mem_add_o = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                       >> 0x10U));
        vlSelf->mem_wdata_o = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U])) 
                                << 0x35U) | (((QData)((IData)(
                                                              vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[1U])) 
                                              << 0x15U) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0U])) 
                                                >> 0xbU)));
        vlSelf->mem_wen_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                   >> 0xfU));
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__reservation_q = ((IData)(vlSymsp->TOP.rst_ni)
                                     ? (IData)(vlSelf->__PVT__reservation_d)
                                     : 0U);
    vlSelf->__PVT__sc_successful_q = ((IData)(vlSymsp->TOP.rst_ni) 
                                      && (IData)(vlSelf->__PVT__sc_successful));
    vlSelf->__PVT__sc_q = ((IData)(vlSymsp->TOP.rst_ni) 
                           && ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0U] 
                                & (0x5800U == (0x7800U 
                                               & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U]))) 
                               & (IData)(vlSelf->ready_o)));
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__1\n"); );
    // Body
    if (vlSelf->__PVT__load_amo) {
        vlSelf->__PVT__addr_q = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                           >> 0x10U));
        vlSelf->__PVT__operand_b_q = ((8U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0U])
                                       ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[1U] 
                                           << 0x15U) 
                                          | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0U] 
                                             >> 0xbU))
                                       : ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                           << 0x15U) 
                                          | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[1U] 
                                             >> 0xbU)));
        vlSelf->__PVT__amo_op_q = (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                           >> 0xbU));
        vlSelf->__PVT__idx_q = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0U] 
                                      >> 7U));
    }
    if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__amo_result_q = vlSelf->__PVT__amo_result;
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                          : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                      : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
        }
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__16__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim__1\n"); );
    // Body
    vlSelf->__PVT__reservation_d = vlSelf->__PVT__reservation_q;
    vlSelf->__PVT__core_valid = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                       >> 0x19U));
    vlSelf->__PVT__load_amo = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                >> 0x19U) & ((~ ((0U 
                                                  == 
                                                  (0xfU 
                                                   & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                                      >> 4U))) 
                                                 | ((0xaU 
                                                     == 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                                         >> 4U))) 
                                                    | (0xbU 
                                                       == 
                                                       (0xfU 
                                                        & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                                           >> 4U)))))) 
                                             & (IData)(vlSelf->ready_o)));
    vlSelf->__PVT__core_be = (0xffU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[3U] 
                                        << 4U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                                  >> 0x1cU)));
    vlSelf->__PVT__core_add = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                         >> 9U));
    vlSelf->__PVT__core_wdata = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U])) 
                                  << 0x3cU) | (((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[4U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[3U])) 
                                                  >> 4U)));
    vlSelf->__PVT__sc_successful = 0U;
    if (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U] 
          >> 0x19U) & (IData)(vlSelf->ready_o))) {
        if ((IData)(((0xa0U == (0xf0U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U])) 
                     & ((~ ((IData)(vlSelf->__PVT__reservation_q) 
                            >> 0xaU)) | ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                                         == (1U & (
                                                   vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                                   >> 0x1bU))))))) {
            vlSelf->__PVT__reservation_d = (0x400U 
                                            | ((0x3feU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                                   >> 8U)) 
                                               | (1U 
                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                                     >> 0x1bU))));
        }
        if ((((((~ (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                    >> 0x1aU)) | ((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o) 
                                  >> 2U)) | ((1U & 
                                              (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                               >> 0x1bU)) 
                                             != (1U 
                                                 & (IData)(vlSelf->__PVT__reservation_q)))) 
              & ((0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                            >> 9U)) == (0x1ffU & ((IData)(vlSelf->__PVT__reservation_q) 
                                                  >> 1U)))) 
             & ((~ (((0U == (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                     >> 4U))) | (0xaU 
                                                 == 
                                                 (0xfU 
                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                                     >> 4U)))) 
                    | (0xbU == (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                        >> 4U))))) 
                | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                   >> 8U)))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
        }
        if (((IData)((((IData)(vlSelf->__PVT__reservation_q) 
                       >> 0xaU) & (0xb0U == (0xf0U 
                                             & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U])))) 
             & ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                == (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                          >> 0x1bU))))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
            vlSelf->__PVT__sc_successful = ((0x1ffU 
                                             & ((IData)(vlSelf->__PVT__reservation_q) 
                                                >> 1U)) 
                                            == (0x1ffU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                                   >> 9U)));
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 1U;
        }
    }
    vlSelf->mem_req_o = vlSelf->__PVT__core_valid;
    vlSelf->__PVT__state_d = vlSelf->__PVT__state_q;
    if ((0U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__load_amo) {
            vlSelf->__PVT__state_d = 1U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__state_d = 2U;
    } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__core_arb_ready) {
            vlSelf->__PVT__state_d = 0U;
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_be = (0xffU & VL_SHIFTL_III(8,32,32, (IData)(0xfU), 
                                                                VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 2U)));
                vlSelf->__PVT__core_add = vlSelf->__PVT__addr_q;
                vlSelf->__PVT__core_wdata = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelf->__PVT__amo_result_q)), 
                                                          VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 5U));
            }
        }
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    } else {
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    }
    vlSelf->mem_wdata_o = vlSelf->__PVT__core_wdata;
    vlSelf->__PVT__core_wen = (1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                      >> 8U) | ((IData)(vlSelf->__PVT__sc_successful) 
                                                & (0xb0U 
                                                   == 
                                                   (0xf0U 
                                                    & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U])))));
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_wen = 1U;
            }
        }
    }
    vlSelf->mem_wen_o = vlSelf->__PVT__core_wen;
    if ((4U & (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))) {
        vlSelf->mem_req_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                   >> 0x19U));
        vlSelf->mem_be_o = (0xffU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[3U] 
                                      << 4U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                                >> 0x1cU)));
        vlSelf->mem_add_o = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                       >> 9U));
        vlSelf->mem_wdata_o = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U])) 
                                << 0x3cU) | (((QData)((IData)(
                                                              vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[4U])) 
                                              << 0x1cU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[3U])) 
                                                >> 4U)));
        vlSelf->mem_wen_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                   >> 8U));
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__reservation_q = ((IData)(vlSymsp->TOP.rst_ni)
                                     ? (IData)(vlSelf->__PVT__reservation_d)
                                     : 0U);
    vlSelf->__PVT__sc_successful_q = ((IData)(vlSymsp->TOP.rst_ni) 
                                      && (IData)(vlSelf->__PVT__sc_successful));
    vlSelf->__PVT__sc_q = ((IData)(vlSymsp->TOP.rst_ni) 
                           && (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U] 
                                 >> 0x19U) & (0xb0U 
                                              == (0xf0U 
                                                  & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U]))) 
                               & (IData)(vlSelf->ready_o)));
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim__1\n"); );
    // Body
    if (vlSelf->__PVT__load_amo) {
        vlSelf->__PVT__addr_q = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                           >> 9U));
        vlSelf->__PVT__operand_b_q = ((0x10000000U 
                                       & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[2U])
                                       ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[4U] 
                                           << 0x1cU) 
                                          | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[3U] 
                                             >> 4U))
                                       : ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                           << 0x1cU) 
                                          | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[4U] 
                                             >> 4U)));
        vlSelf->__PVT__amo_op_q = (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                           >> 4U));
        vlSelf->__PVT__idx_q = (1U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[3U]);
    }
    if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__amo_result_q = vlSelf->__PVT__amo_result;
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                          : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                      : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
        }
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__17__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim__1\n"); );
    // Body
    vlSelf->__PVT__reservation_d = vlSelf->__PVT__reservation_q;
    vlSelf->__PVT__core_valid = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                       >> 0x12U));
    vlSelf->__PVT__load_amo = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                >> 0x12U) & ((~ ((0U 
                                                  == 
                                                  (0xfU 
                                                   & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                                       << 3U) 
                                                      | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                                         >> 0x1dU)))) 
                                                 | ((0xaU 
                                                     == 
                                                     (0xfU 
                                                      & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                                          << 3U) 
                                                         | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                                            >> 0x1dU)))) 
                                                    | (0xbU 
                                                       == 
                                                       (0xfU 
                                                        & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                                            << 3U) 
                                                           | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                                              >> 0x1dU))))))) 
                                             & (IData)(vlSelf->ready_o)));
    vlSelf->__PVT__core_be = (0xffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                       >> 0x15U));
    vlSelf->__PVT__core_add = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                         >> 2U));
    vlSelf->__PVT__core_wdata = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[7U])) 
                                  << 0x23U) | (((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[6U])) 
                                                << 3U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U])) 
                                                  >> 0x1dU)));
    vlSelf->__PVT__sc_successful = 0U;
    if (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U] 
          >> 0x12U) & (IData)(vlSelf->ready_o))) {
        if (((0xaU == (0xfU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                << 3U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                          >> 0x1dU)))) 
             & ((~ ((IData)(vlSelf->__PVT__reservation_q) 
                    >> 0xaU)) | ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                                 == (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                           >> 0x14U)))))) {
            vlSelf->__PVT__reservation_d = (0x400U 
                                            | ((0x3feU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                                   >> 1U)) 
                                               | (1U 
                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                                     >> 0x14U))));
        }
        if ((((((~ (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                    >> 0x13U)) | ((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o) 
                                  >> 2U)) | ((1U & 
                                              (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                               >> 0x14U)) 
                                             != (1U 
                                                 & (IData)(vlSelf->__PVT__reservation_q)))) 
              & ((0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                            >> 2U)) == (0x1ffU & ((IData)(vlSelf->__PVT__reservation_q) 
                                                  >> 1U)))) 
             & ((~ (((0U == (0xfU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                      << 3U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                                >> 0x1dU)))) 
                     | (0xaU == (0xfU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                          << 3U) | 
                                         (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                          >> 0x1dU))))) 
                    | (0xbU == (0xfU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                         << 3U) | (
                                                   vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                                   >> 0x1dU)))))) 
                | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                   >> 1U)))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
        }
        if (((((IData)(vlSelf->__PVT__reservation_q) 
               >> 0xaU) & (0xbU == (0xfU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                             << 3U) 
                                            | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                               >> 0x1dU))))) 
             & ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                == (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                          >> 0x14U))))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
            vlSelf->__PVT__sc_successful = ((0x1ffU 
                                             & ((IData)(vlSelf->__PVT__reservation_q) 
                                                >> 1U)) 
                                            == (0x1ffU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                                   >> 2U)));
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 1U;
        }
    }
    vlSelf->mem_req_o = vlSelf->__PVT__core_valid;
    vlSelf->__PVT__state_d = vlSelf->__PVT__state_q;
    if ((0U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__load_amo) {
            vlSelf->__PVT__state_d = 1U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__state_d = 2U;
    } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__core_arb_ready) {
            vlSelf->__PVT__state_d = 0U;
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_be = (0xffU & VL_SHIFTL_III(8,32,32, (IData)(0xfU), 
                                                                VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 2U)));
                vlSelf->__PVT__core_add = vlSelf->__PVT__addr_q;
                vlSelf->__PVT__core_wdata = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelf->__PVT__amo_result_q)), 
                                                          VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 5U));
            }
        }
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    } else {
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    }
    vlSelf->mem_wdata_o = vlSelf->__PVT__core_wdata;
    vlSelf->__PVT__core_wen = (1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                      >> 1U) | ((IData)(vlSelf->__PVT__sc_successful) 
                                                & (0xbU 
                                                   == 
                                                   (0xfU 
                                                    & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                                          >> 0x1dU)))))));
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_wen = 1U;
            }
        }
    }
    vlSelf->mem_wen_o = vlSelf->__PVT__core_wen;
    if ((4U & (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))) {
        vlSelf->mem_req_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                   >> 0x12U));
        vlSelf->mem_be_o = (0xffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                     >> 0x15U));
        vlSelf->mem_add_o = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                       >> 2U));
        vlSelf->mem_wdata_o = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[7U])) 
                                << 0x23U) | (((QData)((IData)(
                                                              vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[6U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U])) 
                                                >> 0x1dU)));
        vlSelf->mem_wen_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                   >> 1U));
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__reservation_q = ((IData)(vlSymsp->TOP.rst_ni)
                                     ? (IData)(vlSelf->__PVT__reservation_d)
                                     : 0U);
    vlSelf->__PVT__sc_successful_q = ((IData)(vlSymsp->TOP.rst_ni) 
                                      && (IData)(vlSelf->__PVT__sc_successful));
    vlSelf->__PVT__sc_q = ((IData)(vlSymsp->TOP.rst_ni) 
                           && (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                 >> 0x12U) & (IData)(vlSelf->ready_o)) 
                               & (0xbU == (0xfU & (
                                                   (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                                    << 3U) 
                                                   | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                                      >> 0x1dU))))));
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim__1\n"); );
    // Body
    if (vlSelf->__PVT__load_amo) {
        vlSelf->__PVT__addr_q = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                           >> 2U));
        vlSelf->__PVT__operand_b_q = ((0x200000U & 
                                       vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U])
                                       ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[6U] 
                                           << 3U) | 
                                          (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                           >> 0x1dU))
                                       : ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                           << 3U) | 
                                          (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[6U] 
                                           >> 0x1dU)));
        vlSelf->__PVT__amo_op_q = (0xfU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                            << 3U) 
                                           | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[7U] 
                                              >> 0x1dU)));
        vlSelf->__PVT__idx_q = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[5U] 
                                      >> 0x19U));
    }
    if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__amo_result_q = vlSelf->__PVT__amo_result;
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                          : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                      : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
        }
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__18__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim__1\n"); );
    // Body
    vlSelf->__PVT__reservation_d = vlSelf->__PVT__reservation_q;
    vlSelf->__PVT__core_valid = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                       >> 0xbU));
    vlSelf->__PVT__load_amo = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                >> 0xbU) & ((~ ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                                     >> 0x16U))) 
                                                | ((0xaU 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                                        >> 0x16U))) 
                                                   | (0xbU 
                                                      == 
                                                      (0xfU 
                                                       & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                                          >> 0x16U)))))) 
                                            & (IData)(vlSelf->ready_o)));
    vlSelf->__PVT__core_be = (0xffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                       >> 0xeU));
    vlSelf->__PVT__core_add = (0x1ffU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                          << 5U) | 
                                         (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                          >> 0x1bU)));
    vlSelf->__PVT__core_wdata = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xaU])) 
                                  << 0x2aU) | (((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[9U])) 
                                                << 0xaU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U])) 
                                                  >> 0x16U)));
    vlSelf->__PVT__sc_successful = 0U;
    if (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U] 
          >> 0xbU) & (IData)(vlSelf->ready_o))) {
        if ((IData)(((0x2800000U == (0x3c00000U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xaU])) 
                     & ((~ ((IData)(vlSelf->__PVT__reservation_q) 
                            >> 0xaU)) | ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                                         == (1U & (
                                                   vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                                   >> 0xdU))))))) {
            vlSelf->__PVT__reservation_d = (0x400U 
                                            | ((0x3feU 
                                                & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                                    << 6U) 
                                                   | (0x3eU 
                                                      & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                                         >> 0x1aU)))) 
                                               | (1U 
                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                                     >> 0xdU))));
        }
        if ((((((~ (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                    >> 0xcU)) | ((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o) 
                                 >> 2U)) | ((1U & (
                                                   vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                                   >> 0xdU)) 
                                            != (1U 
                                                & (IData)(vlSelf->__PVT__reservation_q)))) 
              & ((0x1ffU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                             << 5U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                       >> 0x1bU))) 
                 == (0x1ffU & ((IData)(vlSelf->__PVT__reservation_q) 
                               >> 1U)))) & ((~ (((0U 
                                                  == 
                                                  (0xfU 
                                                   & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                                      >> 0x16U))) 
                                                 | (0xaU 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                                        >> 0x16U)))) 
                                                | (0xbU 
                                                   == 
                                                   (0xfU 
                                                    & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                                       >> 0x16U))))) 
                                            | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                               >> 0x1aU)))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
        }
        if (((IData)((((IData)(vlSelf->__PVT__reservation_q) 
                       >> 0xaU) & (0x2c00000U == (0x3c00000U 
                                                  & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xaU])))) 
             & ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                == (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                          >> 0xdU))))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
            vlSelf->__PVT__sc_successful = ((0x1ffU 
                                             & ((IData)(vlSelf->__PVT__reservation_q) 
                                                >> 1U)) 
                                            == (0x1ffU 
                                                & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                                      >> 0x1bU))));
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 1U;
        }
    }
    vlSelf->mem_req_o = vlSelf->__PVT__core_valid;
    vlSelf->__PVT__state_d = vlSelf->__PVT__state_q;
    if ((0U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__load_amo) {
            vlSelf->__PVT__state_d = 1U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__state_d = 2U;
    } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__core_arb_ready) {
            vlSelf->__PVT__state_d = 0U;
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_be = (0xffU & VL_SHIFTL_III(8,32,32, (IData)(0xfU), 
                                                                VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 2U)));
                vlSelf->__PVT__core_add = vlSelf->__PVT__addr_q;
                vlSelf->__PVT__core_wdata = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelf->__PVT__amo_result_q)), 
                                                          VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 5U));
            }
        }
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    } else {
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    }
    vlSelf->mem_wdata_o = vlSelf->__PVT__core_wdata;
    vlSelf->__PVT__core_wen = (1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                      >> 0x1aU) | ((IData)(vlSelf->__PVT__sc_successful) 
                                                   & (0x2c00000U 
                                                      == 
                                                      (0x3c00000U 
                                                       & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xaU])))));
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_wen = 1U;
            }
        }
    }
    vlSelf->mem_wen_o = vlSelf->__PVT__core_wen;
    if ((4U & (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))) {
        vlSelf->mem_req_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                   >> 0xbU));
        vlSelf->mem_be_o = (0xffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                     >> 0xeU));
        vlSelf->mem_add_o = (0x1ffU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                        << 5U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                                  >> 0x1bU)));
        vlSelf->mem_wdata_o = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xaU])) 
                                << 0x2aU) | (((QData)((IData)(
                                                              vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[9U])) 
                                              << 0xaU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U])) 
                                                >> 0x16U)));
        vlSelf->mem_wen_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                   >> 0x1aU));
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__reservation_q = ((IData)(vlSymsp->TOP.rst_ni)
                                     ? (IData)(vlSelf->__PVT__reservation_d)
                                     : 0U);
    vlSelf->__PVT__sc_successful_q = ((IData)(vlSymsp->TOP.rst_ni) 
                                      && (IData)(vlSelf->__PVT__sc_successful));
    vlSelf->__PVT__sc_q = ((IData)(vlSymsp->TOP.rst_ni) 
                           && (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                 >> 0xbU) & (0x2c00000U 
                                             == (0x3c00000U 
                                                 & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xaU]))) 
                               & (IData)(vlSelf->ready_o)));
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim__1\n"); );
    // Body
    if (vlSelf->__PVT__load_amo) {
        vlSelf->__PVT__addr_q = (0x1ffU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                            << 5U) 
                                           | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                              >> 0x1bU)));
        vlSelf->__PVT__operand_b_q = ((0x4000U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U])
                                       ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[9U] 
                                           << 0xaU) 
                                          | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                             >> 0x16U))
                                       : ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                           << 0xaU) 
                                          | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[9U] 
                                             >> 0x16U)));
        vlSelf->__PVT__amo_op_q = (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xaU] 
                                           >> 0x16U));
        vlSelf->__PVT__idx_q = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[8U] 
                                      >> 0x12U));
    }
    if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__amo_result_q = vlSelf->__PVT__amo_result;
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                          : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                      : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
        }
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__19__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim__1\n"); );
    // Body
    vlSelf->__PVT__reservation_d = vlSelf->__PVT__reservation_q;
    vlSelf->__PVT__core_valid = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                       >> 4U));
    vlSelf->__PVT__load_amo = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                >> 4U) & ((~ ((0U == 
                                               (0xfU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                                   >> 0xfU))) 
                                              | ((0xaU 
                                                  == 
                                                  (0xfU 
                                                   & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                                      >> 0xfU))) 
                                                 | (0xbU 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                                        >> 0xfU)))))) 
                                          & (IData)(vlSelf->ready_o)));
    vlSelf->__PVT__core_be = (0xffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                       >> 7U));
    vlSelf->__PVT__core_add = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                         >> 0x14U));
    vlSelf->__PVT__core_wdata = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xdU])) 
                                  << 0x31U) | (((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xcU])) 
                                                << 0x11U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xbU])) 
                                                  >> 0xfU)));
    vlSelf->__PVT__sc_successful = 0U;
    if (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
          >> 4U) & (IData)(vlSelf->ready_o))) {
        if ((IData)(((0x50000U == (0x78000U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xdU])) 
                     & ((~ ((IData)(vlSelf->__PVT__reservation_q) 
                            >> 0xaU)) | ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                                         == (1U & (
                                                   vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                                   >> 6U))))))) {
            vlSelf->__PVT__reservation_d = (0x400U 
                                            | ((0x3feU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                                   >> 0x13U)) 
                                               | (1U 
                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                                     >> 6U))));
        }
        if ((((((~ (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                    >> 5U)) | ((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o) 
                               >> 2U)) | ((1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                                 >> 6U)) 
                                          != (1U & (IData)(vlSelf->__PVT__reservation_q)))) 
              & ((0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                            >> 0x14U)) == (0x1ffU & 
                                           ((IData)(vlSelf->__PVT__reservation_q) 
                                            >> 1U)))) 
             & ((~ (((0U == (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                     >> 0xfU))) | (0xaU 
                                                   == 
                                                   (0xfU 
                                                    & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                                       >> 0xfU)))) 
                    | (0xbU == (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                        >> 0xfU))))) 
                | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                   >> 0x13U)))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
        }
        if (((IData)((((IData)(vlSelf->__PVT__reservation_q) 
                       >> 0xaU) & (0x58000U == (0x78000U 
                                                & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xdU])))) 
             & ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                == (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                          >> 6U))))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
            vlSelf->__PVT__sc_successful = ((0x1ffU 
                                             & ((IData)(vlSelf->__PVT__reservation_q) 
                                                >> 1U)) 
                                            == (0x1ffU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                                   >> 0x14U)));
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 1U;
        }
    }
    vlSelf->mem_req_o = vlSelf->__PVT__core_valid;
    vlSelf->__PVT__state_d = vlSelf->__PVT__state_q;
    if ((0U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__load_amo) {
            vlSelf->__PVT__state_d = 1U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__state_d = 2U;
    } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__core_arb_ready) {
            vlSelf->__PVT__state_d = 0U;
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_be = (0xffU & VL_SHIFTL_III(8,32,32, (IData)(0xfU), 
                                                                VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 2U)));
                vlSelf->__PVT__core_add = vlSelf->__PVT__addr_q;
                vlSelf->__PVT__core_wdata = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelf->__PVT__amo_result_q)), 
                                                          VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 5U));
            }
        }
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    } else {
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    }
    vlSelf->mem_wdata_o = vlSelf->__PVT__core_wdata;
    vlSelf->__PVT__core_wen = (1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                      >> 0x13U) | ((IData)(vlSelf->__PVT__sc_successful) 
                                                   & (0x58000U 
                                                      == 
                                                      (0x78000U 
                                                       & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xdU])))));
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_wen = 1U;
            }
        }
    }
    vlSelf->mem_wen_o = vlSelf->__PVT__core_wen;
    if ((4U & (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))) {
        vlSelf->mem_req_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                   >> 4U));
        vlSelf->mem_be_o = (0xffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                     >> 7U));
        vlSelf->mem_add_o = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                       >> 0x14U));
        vlSelf->mem_wdata_o = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xdU])) 
                                << 0x31U) | (((QData)((IData)(
                                                              vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xcU])) 
                                              << 0x11U) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xbU])) 
                                                >> 0xfU)));
        vlSelf->mem_wen_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                   >> 0x13U));
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__reservation_q = ((IData)(vlSymsp->TOP.rst_ni)
                                     ? (IData)(vlSelf->__PVT__reservation_d)
                                     : 0U);
    vlSelf->__PVT__sc_successful_q = ((IData)(vlSymsp->TOP.rst_ni) 
                                      && (IData)(vlSelf->__PVT__sc_successful));
    vlSelf->__PVT__sc_q = ((IData)(vlSymsp->TOP.rst_ni) 
                           && (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                 >> 4U) & (0x58000U 
                                           == (0x78000U 
                                               & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xdU]))) 
                               & (IData)(vlSelf->ready_o)));
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim__1\n"); );
    // Body
    if (vlSelf->__PVT__load_amo) {
        vlSelf->__PVT__addr_q = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                           >> 0x14U));
        vlSelf->__PVT__operand_b_q = ((0x80U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xbU])
                                       ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xcU] 
                                           << 0x11U) 
                                          | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                             >> 0xfU))
                                       : ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                           << 0x11U) 
                                          | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xcU] 
                                             >> 0xfU)));
        vlSelf->__PVT__amo_op_q = (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                           >> 0xfU));
        vlSelf->__PVT__idx_q = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xbU] 
                                      >> 0xbU));
    }
    if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__amo_result_q = vlSelf->__PVT__amo_result;
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                          : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                      : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
        }
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__20__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim__1\n"); );
    // Body
    vlSelf->__PVT__reservation_d = vlSelf->__PVT__reservation_q;
    vlSelf->__PVT__core_valid = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                       >> 0x1dU));
    vlSelf->__PVT__load_amo = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                >> 0x1dU) & ((~ ((0U 
                                                  == 
                                                  (0xfU 
                                                   & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                                      >> 8U))) 
                                                 | ((0xaU 
                                                     == 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                                         >> 8U))) 
                                                    | (0xbU 
                                                       == 
                                                       (0xfU 
                                                        & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                                           >> 8U)))))) 
                                             & (IData)(vlSelf->ready_o)));
    vlSelf->__PVT__core_be = (0xffU & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xeU]);
    vlSelf->__PVT__core_add = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                         >> 0xdU));
    vlSelf->__PVT__core_wdata = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x10U])) 
                                  << 0x38U) | (((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xfU])) 
                                                << 0x18U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xeU])) 
                                                  >> 8U)));
    vlSelf->__PVT__sc_successful = 0U;
    if (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
          >> 0x1dU) & (IData)(vlSelf->ready_o))) {
        if ((IData)(((0xa00U == (0xf00U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x10U])) 
                     & ((~ ((IData)(vlSelf->__PVT__reservation_q) 
                            >> 0xaU)) | ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                                         == (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                             >> 0x1fU)))))) {
            vlSelf->__PVT__reservation_d = (0x400U 
                                            | ((0x3feU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                                   >> 0xcU)) 
                                               | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                                  >> 0x1fU)));
        }
        if ((((((~ (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                    >> 0x1eU)) | ((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o) 
                                  >> 2U)) | ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                              >> 0x1fU) 
                                             != (1U 
                                                 & (IData)(vlSelf->__PVT__reservation_q)))) 
              & ((0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                            >> 0xdU)) == (0x1ffU & 
                                          ((IData)(vlSelf->__PVT__reservation_q) 
                                           >> 1U)))) 
             & ((~ (((0U == (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                     >> 8U))) | (0xaU 
                                                 == 
                                                 (0xfU 
                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                                     >> 8U)))) 
                    | (0xbU == (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                        >> 8U))))) 
                | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                   >> 0xcU)))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
        }
        if (((IData)((((IData)(vlSelf->__PVT__reservation_q) 
                       >> 0xaU) & (0xb00U == (0xf00U 
                                              & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x10U])))) 
             & ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                == (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                    >> 0x1fU)))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
            vlSelf->__PVT__sc_successful = ((0x1ffU 
                                             & ((IData)(vlSelf->__PVT__reservation_q) 
                                                >> 1U)) 
                                            == (0x1ffU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                                   >> 0xdU)));
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 1U;
        }
    }
    vlSelf->mem_req_o = vlSelf->__PVT__core_valid;
    vlSelf->__PVT__state_d = vlSelf->__PVT__state_q;
    if ((0U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__load_amo) {
            vlSelf->__PVT__state_d = 1U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__state_d = 2U;
    } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__core_arb_ready) {
            vlSelf->__PVT__state_d = 0U;
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_be = (0xffU & VL_SHIFTL_III(8,32,32, (IData)(0xfU), 
                                                                VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 2U)));
                vlSelf->__PVT__core_add = vlSelf->__PVT__addr_q;
                vlSelf->__PVT__core_wdata = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelf->__PVT__amo_result_q)), 
                                                          VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 5U));
            }
        }
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    } else {
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    }
    vlSelf->mem_wdata_o = vlSelf->__PVT__core_wdata;
    vlSelf->__PVT__core_wen = (1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                      >> 0xcU) | ((IData)(vlSelf->__PVT__sc_successful) 
                                                  & (0xb00U 
                                                     == 
                                                     (0xf00U 
                                                      & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x10U])))));
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_wen = 1U;
            }
        }
    }
    vlSelf->mem_wen_o = vlSelf->__PVT__core_wen;
    if ((4U & (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))) {
        vlSelf->mem_req_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                   >> 0x1dU));
        vlSelf->mem_be_o = (0xffU & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xeU]);
        vlSelf->mem_add_o = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                       >> 0xdU));
        vlSelf->mem_wdata_o = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x10U])) 
                                << 0x38U) | (((QData)((IData)(
                                                              vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xfU])) 
                                              << 0x18U) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xeU])) 
                                                >> 8U)));
        vlSelf->mem_wen_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                   >> 0xcU));
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__reservation_q = ((IData)(vlSymsp->TOP.rst_ni)
                                     ? (IData)(vlSelf->__PVT__reservation_d)
                                     : 0U);
    vlSelf->__PVT__sc_successful_q = ((IData)(vlSymsp->TOP.rst_ni) 
                                      && (IData)(vlSelf->__PVT__sc_successful));
    vlSelf->__PVT__sc_q = ((IData)(vlSymsp->TOP.rst_ni) 
                           && (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xdU] 
                                 >> 0x1dU) & (0xb00U 
                                              == (0xf00U 
                                                  & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x10U]))) 
                               & (IData)(vlSelf->ready_o)));
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim__1\n"); );
    // Body
    if (vlSelf->__PVT__load_amo) {
        vlSelf->__PVT__addr_q = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                           >> 0xdU));
        vlSelf->__PVT__operand_b_q = ((1U & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xeU])
                                       ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xfU] 
                                           << 0x18U) 
                                          | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xeU] 
                                             >> 8U))
                                       : ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                           << 0x18U) 
                                          | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xfU] 
                                             >> 8U)));
        vlSelf->__PVT__amo_op_q = (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                           >> 8U));
        vlSelf->__PVT__idx_q = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0xeU] 
                                      >> 4U));
    }
    if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__amo_result_q = vlSelf->__PVT__amo_result;
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                          : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (- (QData)((IData)(vlSelf->__PVT__operand_b_q)))
                                      : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q))));
        }
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__21__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_INLINE_OPT void Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim__1(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim__1\n"); );
    // Body
    vlSelf->__PVT__reservation_d = vlSelf->__PVT__reservation_q;
    vlSelf->__PVT__core_valid = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                       >> 0x16U));
    vlSelf->__PVT__load_amo = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                >> 0x16U) & ((~ ((0U 
                                                  == 
                                                  (0xfU 
                                                   & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                                      >> 1U))) 
                                                 | ((0xaU 
                                                     == 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                                         >> 1U))) 
                                                    | (0xbU 
                                                       == 
                                                       (0xfU 
                                                        & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                                           >> 1U)))))) 
                                             & (IData)(vlSelf->ready_o)));
    vlSelf->__PVT__core_be = (0xffU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x11U] 
                                        << 7U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                                  >> 0x19U)));
    vlSelf->__PVT__core_add = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                         >> 6U));
    vlSelf->__PVT__core_wdata = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x13U])) 
                                  << 0x3fU) | (((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x12U])) 
                                                << 0x1fU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x11U])) 
                                                  >> 1U)));
    vlSelf->__PVT__sc_successful = 0U;
    if (((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
          >> 0x16U) & (IData)(vlSelf->ready_o))) {
        if ((IData)(((0x14U == (0x1eU & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x13U])) 
                     & ((~ ((IData)(vlSelf->__PVT__reservation_q) 
                            >> 0xaU)) | ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                                         == (1U & (
                                                   vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                                   >> 0x18U))))))) {
            vlSelf->__PVT__reservation_d = (0x400U 
                                            | ((0x3feU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                                   >> 5U)) 
                                               | (1U 
                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                                     >> 0x18U))));
        }
        if ((((((~ (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                    >> 0x17U)) | ((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o) 
                                  >> 2U)) | ((1U & 
                                              (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                               >> 0x18U)) 
                                             != (1U 
                                                 & (IData)(vlSelf->__PVT__reservation_q)))) 
              & ((0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                            >> 6U)) == (0x1ffU & ((IData)(vlSelf->__PVT__reservation_q) 
                                                  >> 1U)))) 
             & ((~ (((0U == (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                     >> 1U))) | (0xaU 
                                                 == 
                                                 (0xfU 
                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                                     >> 1U)))) 
                    | (0xbU == (0xfU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                        >> 1U))))) 
                | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                   >> 5U)))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
        }
        if (((IData)((((IData)(vlSelf->__PVT__reservation_q) 
                       >> 0xaU) & (0x16U == (0x1eU 
                                             & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x13U])))) 
             & ((1U & (IData)(vlSelf->__PVT__reservation_q)) 
                == (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                          >> 0x18U))))) {
            vlSelf->__PVT__reservation_d = (0x3ffU 
                                            & (IData)(vlSelf->__PVT__reservation_d));
            vlSelf->__PVT__sc_successful = ((0x1ffU 
                                             & ((IData)(vlSelf->__PVT__reservation_q) 
                                                >> 1U)) 
                                            == (0x1ffU 
                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                                   >> 6U)));
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_valid = 1U;
        }
    }
    vlSelf->mem_req_o = vlSelf->__PVT__core_valid;
    vlSelf->__PVT__state_d = vlSelf->__PVT__state_q;
    if ((0U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__load_amo) {
            vlSelf->__PVT__state_d = 1U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__state_d = 2U;
    } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
        if (vlSelf->__PVT__core_arb_ready) {
            vlSelf->__PVT__state_d = 0U;
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_be = (0xffU & VL_SHIFTL_III(8,32,32, (IData)(0xfU), 
                                                                VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 2U)));
                vlSelf->__PVT__core_add = vlSelf->__PVT__addr_q;
                vlSelf->__PVT__core_wdata = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelf->__PVT__amo_result_q)), 
                                                          VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__idx_q), 5U));
            }
        }
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    } else {
        vlSelf->mem_be_o = vlSelf->__PVT__core_be;
        vlSelf->mem_add_o = vlSelf->__PVT__core_add;
    }
    vlSelf->mem_wdata_o = vlSelf->__PVT__core_wdata;
    vlSelf->__PVT__core_wen = (1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                      >> 5U) | ((IData)(vlSelf->__PVT__sc_successful) 
                                                & (0x16U 
                                                   == 
                                                   (0x1eU 
                                                    & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x13U])))));
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U != (IData)(vlSelf->__PVT__state_q))) {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__PVT__core_wen = 1U;
            }
        }
    }
    vlSelf->mem_wen_o = vlSelf->__PVT__core_wen;
    if ((4U & (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))) {
        vlSelf->mem_req_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                   >> 0x16U));
        vlSelf->mem_be_o = (0xffU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x11U] 
                                      << 7U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x10U] 
                                                >> 0x19U)));
        vlSelf->mem_add_o = (0x1ffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                       >> 6U));
        vlSelf->mem_wdata_o = (((QData)((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x13U])) 
                                << 0x3fU) | (((QData)((IData)(
                                                              vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x12U])) 
                                              << 0x1fU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x11U])) 
                                                >> 1U)));
        vlSelf->mem_wen_o = (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__out_req_o[0x13U] 
                                   >> 5U));
    }
}
