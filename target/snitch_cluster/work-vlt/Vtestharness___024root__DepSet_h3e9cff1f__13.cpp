// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness___024root.h"

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__141(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__141\n"); );
    // Init
    IData/*16:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0;
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 = 0;
    QData/*63:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0;
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0 = 0;
    CData/*0:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h4f27c258__0;
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h4f27c258__0 = 0;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__pop 
        = (1U & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__empty)) 
                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[4U] 
                    >> 2U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__pop 
        = (1U & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__empty)) 
                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[4U] 
                    >> 2U)));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
        = (0x1ffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_addr[0U]);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0U] 
        = (0x7f8U | (1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[1U] = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[2U] 
        = (testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
           << 0x10U);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[3U] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[3U]) 
           | (1U & (testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
                    >> 0x10U)));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h4f27c258__0 
        = (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_q_valid));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0U] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0U]) 
           | (IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h4f27c258__0));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
        = (0x1ffffU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_addr[1U] 
                        << 0xfU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_addr[0U] 
                                    >> 0x11U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[3U] 
        = (0xff0U | (3U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[3U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[4U] = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[5U] 
        = (testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
           << 0x11U);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[6U] 
        = ((0xfffffffcU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[6U]) 
           | (3U & (testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
                    >> 0xfU)));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h4f27c258__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_q_valid) 
                 >> 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[3U] 
        = ((0xfffffffdU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[3U]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h4f27c258__0) 
              << 1U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
        = (0x1ffffU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_addr[1U] 
                       >> 2U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[6U] 
        = (0x1fe0U | (7U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[6U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[7U] = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[8U] 
        = (testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
           << 0x12U);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[9U] 
        = ((0xfffffff8U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[9U]) 
           | (7U & (testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
                    >> 0xeU)));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h4f27c258__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_q_valid) 
                 >> 2U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[6U] 
        = ((0xfffffffbU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[6U]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h4f27c258__0) 
              << 2U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
        = (0x1ffffU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_addr[2U] 
                        << 0xdU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_addr[1U] 
                                    >> 0x13U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[9U] 
        = (0x3fc0U | (0xfU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[9U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0xaU] = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0xbU] 
        = (testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
           << 0x13U);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0xcU] 
        = ((0xfffffff0U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0xcU]) 
           | (0xfU & (testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
                      >> 0xdU)));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h4f27c258__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_q_valid) 
                 >> 3U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[9U] 
        = ((0xfffffff7U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[9U]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h4f27c258__0) 
              << 3U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
        = (0x1ffffU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_addr[2U] 
                       >> 4U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0xcU] 
        = (0x7f80U | (0x1fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0xcU]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0xdU] = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0xeU] 
        = (testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
           << 0x14U);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0xfU] 
        = ((0xffffffe0U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0xfU]) 
           | (0x1fU & (testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
                       >> 0xcU)));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h4f27c258__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_q_valid) 
                 >> 4U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0xcU] 
        = ((0xffffffefU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0xcU]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h4f27c258__0) 
              << 4U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
        = (0x1ffffU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_addr[3U] 
                        << 0xbU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_addr[2U] 
                                    >> 0x15U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0xfU] 
        = (0xff00U | (0x3fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0xfU]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x10U] = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x11U] 
        = (testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
           << 0x15U);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x12U] 
        = ((0xffffffc0U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x12U]) 
           | (0x3fU & (testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
                       >> 0xbU)));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h4f27c258__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_q_valid) 
                 >> 5U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0xfU] 
        = ((0xffffffdfU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0xfU]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h4f27c258__0) 
              << 5U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
        = (0x1ffffU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_addr[3U] 
                       >> 6U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x12U] 
        = (0x1fe00U | (0x7fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x12U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x13U] = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x14U] 
        = (testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
           << 0x16U);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x15U] 
        = ((0xffffff80U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x15U]) 
           | (0x7fU & (testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
                       >> 0xaU)));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h4f27c258__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_q_valid) 
                 >> 6U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x12U] 
        = ((0xffffffbfU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x12U]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h4f27c258__0) 
              << 6U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
        = (0x1ffffU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_addr[4U] 
                        << 9U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_addr[3U] 
                                  >> 0x17U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x15U] 
        = (0x3fc00U | (0xffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x15U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x16U] = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x17U] 
        = (testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
           << 0x17U);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x18U] 
        = ((0xffffff00U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x18U]) 
           | (0xffU & (testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
                       >> 9U)));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h4f27c258__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_q_valid) 
                 >> 7U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x15U] 
        = ((0xffffff7fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x15U]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h4f27c258__0) 
              << 7U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
        = (0x1ffffU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_addr[4U] 
                       >> 8U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x1aU] 
        = ((0x7ffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x1aU]) 
           | (0xfff80000U & (0x800000U | (testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
                                          << 0x18U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x1bU] 
        = ((0xfffffe00U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x1bU]) 
           | (0x7ffffU & (testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
                          >> 8U)));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0 
        = (((QData)((IData)(((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__empty)
                              ? vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc2stream_0_data[1U]
                              : vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__ram_ext__DOT__Memory
                             [vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__deq_ptr_value][1U]))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__empty)
                                          ? vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc2stream_0_data[0U]
                                          : vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__ram_ext__DOT__Memory
                                         [vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__deq_ptr_value][0U]))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x18U] 
        = (0x7f800U | ((0x1ffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x18U]) 
                       | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0) 
                          << 0x13U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x19U] 
        = ((0x1ffU & ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0) 
                      >> 0xdU)) | ((0x7fe00U & ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0) 
                                                >> 0xdU)) 
                                   | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0 
                                               >> 0x20U)) 
                                      << 0x13U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x1aU] 
        = ((0xfff80000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x1aU]) 
           | ((0x1ffU & ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0 
                                  >> 0x20U)) >> 0xdU)) 
              | (0x7fe00U & ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0 
                                      >> 0x20U)) >> 0xdU))));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h4f27c258__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_q_valid) 
                 >> 8U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x18U] 
        = ((0xfffffeffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x18U]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h4f27c258__0) 
              << 8U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
        = (0x1ffffU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_addr[5U] 
                        << 7U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_addr[4U] 
                                  >> 0x19U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x1dU] 
        = ((0xfffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x1dU]) 
           | (0xfff00000U & (0x1000000U | (testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
                                           << 0x19U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x1eU] 
        = ((0xfffffc00U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x1eU]) 
           | (0xfffffU & (testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
                          >> 7U)));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0 
        = (((QData)((IData)(((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__empty)
                              ? vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc2stream_0_data[3U]
                              : vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__ram_ext__DOT__Memory
                             [vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__deq_ptr_value][3U]))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__empty)
                                          ? vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc2stream_0_data[2U]
                                          : vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__ram_ext__DOT__Memory
                                         [vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__deq_ptr_value][2U]))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x1bU] 
        = (0xff000U | ((0x3ffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x1bU]) 
                       | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0) 
                          << 0x14U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x1cU] 
        = ((0x3ffU & ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0) 
                      >> 0xcU)) | ((0xffc00U & ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0) 
                                                >> 0xcU)) 
                                   | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0 
                                               >> 0x20U)) 
                                      << 0x14U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x1dU] 
        = ((0xfff00000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x1dU]) 
           | ((0x3ffU & ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0 
                                  >> 0x20U)) >> 0xcU)) 
              | (0xffc00U & ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0 
                                      >> 0x20U)) >> 0xcU))));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h4f27c258__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_q_valid) 
                 >> 9U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x1bU] 
        = ((0xfffffdffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x1bU]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h4f27c258__0) 
              << 9U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
        = (0x1ffffU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_addr[5U] 
                       >> 0xaU));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x20U] 
        = ((0x1fffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x20U]) 
           | (0xffe00000U & (0x2000000U | (testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
                                           << 0x1aU))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x21U] 
        = ((0xfffff800U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x21U]) 
           | (0x1fffffU & (testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
                           >> 6U)));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0 
        = (((QData)((IData)(((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__empty)
                              ? vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc2stream_0_data[5U]
                              : vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__ram_ext__DOT__Memory
                             [vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__deq_ptr_value][5U]))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__empty)
                                          ? vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc2stream_0_data[4U]
                                          : vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__ram_ext__DOT__Memory
                                         [vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__deq_ptr_value][4U]))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x1eU] 
        = (0x1fe000U | ((0x7ffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x1eU]) 
                        | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0) 
                           << 0x15U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x1fU] 
        = ((0x7ffU & ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0) 
                      >> 0xbU)) | ((0x1ff800U & ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0) 
                                                 >> 0xbU)) 
                                   | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0 
                                               >> 0x20U)) 
                                      << 0x15U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x20U] 
        = ((0xffe00000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x20U]) 
           | ((0x7ffU & ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0 
                                  >> 0x20U)) >> 0xbU)) 
              | (0x1ff800U & ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0 
                                       >> 0x20U)) >> 0xbU))));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h4f27c258__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_q_valid) 
                 >> 0xaU));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x1eU] 
        = ((0xfffffbffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x1eU]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h4f27c258__0) 
              << 0xaU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
        = (0x1ffffU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_addr[6U] 
                        << 5U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_addr[5U] 
                                  >> 0x1bU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x23U] 
        = ((0x3fffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x23U]) 
           | (0xffc00000U & (0x4000000U | (testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
                                           << 0x1bU))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x24U] 
        = ((0xfffff000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x24U]) 
           | (0x3fffffU & (testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
                           >> 5U)));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0 
        = (((QData)((IData)(((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__empty)
                              ? vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc2stream_0_data[7U]
                              : vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__ram_ext__DOT__Memory
                             [vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__deq_ptr_value][7U]))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__empty)
                                          ? vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc2stream_0_data[6U]
                                          : vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__ram_ext__DOT__Memory
                                         [vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__deq_ptr_value][6U]))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x21U] 
        = (0x3fc000U | ((0xfffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x21U]) 
                        | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0) 
                           << 0x16U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x22U] 
        = ((0xfffU & ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0) 
                      >> 0xaU)) | ((0x3ff000U & ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0) 
                                                 >> 0xaU)) 
                                   | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0 
                                               >> 0x20U)) 
                                      << 0x16U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x23U] 
        = ((0xffc00000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x23U]) 
           | ((0xfffU & ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0 
                                  >> 0x20U)) >> 0xaU)) 
              | (0x3ff000U & ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0 
                                       >> 0x20U)) >> 0xaU))));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h4f27c258__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_q_valid) 
                 >> 0xbU));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x21U] 
        = ((0xfffff7ffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x21U]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h4f27c258__0) 
              << 0xbU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
        = (0x1ffffU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_addr[6U] 
                       >> 0xcU));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x26U] 
        = ((0x7fffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x26U]) 
           | (0xff800000U & (0x8000000U | (testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
                                           << 0x1cU))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x27U] 
        = ((0xffffe000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x27U]) 
           | (0x7fffffU & (testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
                           >> 4U)));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0 
        = (((QData)((IData)(((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__empty)
                              ? vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc2stream_0_data[9U]
                              : vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__ram_ext__DOT__Memory
                             [vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__deq_ptr_value][9U]))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__empty)
                                          ? vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc2stream_0_data[8U]
                                          : vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__ram_ext__DOT__Memory
                                         [vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__deq_ptr_value][8U]))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x24U] 
        = (0x7f8000U | ((0x1fffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x24U]) 
                        | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0) 
                           << 0x17U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x25U] 
        = ((0x1fffU & ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0) 
                       >> 9U)) | ((0x7fe000U & ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0) 
                                                >> 9U)) 
                                  | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0 
                                              >> 0x20U)) 
                                     << 0x17U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x26U] 
        = ((0xff800000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x26U]) 
           | ((0x1fffU & ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0 
                                   >> 0x20U)) >> 9U)) 
              | (0x7fe000U & ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0 
                                       >> 0x20U)) >> 9U))));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h4f27c258__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_q_valid) 
                 >> 0xcU));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x24U] 
        = ((0xffffefffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x24U]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h4f27c258__0) 
              << 0xcU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
        = (0x1ffffU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_addr[7U] 
                        << 3U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_addr[6U] 
                                  >> 0x1dU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x29U] 
        = ((0xffffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x29U]) 
           | (0xff000000U & (0x10000000U | (testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
                                            << 0x1dU))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x2aU] 
        = ((0xffffc000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x2aU]) 
           | (0xffffffU & (testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
                           >> 3U)));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0 
        = (((QData)((IData)(((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__empty)
                              ? vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc2stream_0_data[0xbU]
                              : vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__ram_ext__DOT__Memory
                             [vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__deq_ptr_value][0xbU]))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__empty)
                                          ? vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc2stream_0_data[0xaU]
                                          : vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__ram_ext__DOT__Memory
                                         [vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__deq_ptr_value][0xaU]))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x27U] 
        = (0xff0000U | ((0x3fffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x27U]) 
                        | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0) 
                           << 0x18U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x28U] 
        = ((0x3fffU & ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0) 
                       >> 8U)) | ((0xffc000U & ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0) 
                                                >> 8U)) 
                                  | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0 
                                              >> 0x20U)) 
                                     << 0x18U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x29U] 
        = ((0xff000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x29U]) 
           | ((0x3fffU & ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0 
                                   >> 0x20U)) >> 8U)) 
              | (0xffc000U & ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0 
                                       >> 0x20U)) >> 8U))));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h4f27c258__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_q_valid) 
                 >> 0xdU));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x27U] 
        = ((0xffffdfffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x27U]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h4f27c258__0) 
              << 0xdU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
        = (0x1ffffU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_addr[7U] 
                       >> 0xeU));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x2cU] 
        = ((0x1ffffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x2cU]) 
           | (0xfe000000U & (0x20000000U | (testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
                                            << 0x1eU))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x2dU] 
        = ((0xffff8000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x2dU]) 
           | (0x1ffffffU & (testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
                            >> 2U)));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0 
        = (((QData)((IData)(((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__empty)
                              ? vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc2stream_0_data[0xdU]
                              : vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__ram_ext__DOT__Memory
                             [vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__deq_ptr_value][0xdU]))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__empty)
                                          ? vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc2stream_0_data[0xcU]
                                          : vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__ram_ext__DOT__Memory
                                         [vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__deq_ptr_value][0xcU]))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x2aU] 
        = (0x1fe0000U | ((0x7fffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x2aU]) 
                         | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0) 
                            << 0x19U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x2bU] 
        = ((0x7fffU & ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0) 
                       >> 7U)) | ((0x1ff8000U & ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0) 
                                                 >> 7U)) 
                                  | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0 
                                              >> 0x20U)) 
                                     << 0x19U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x2cU] 
        = ((0xfe000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x2cU]) 
           | ((0x7fffU & ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0 
                                   >> 0x20U)) >> 7U)) 
              | (0x1ff8000U & ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0 
                                        >> 0x20U)) 
                               >> 7U))));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h4f27c258__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_q_valid) 
                 >> 0xeU));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x2aU] 
        = ((0xffffbfffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x2aU]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h4f27c258__0) 
              << 0xeU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
        = (0x1ffffU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_addr[8U] 
                        << 1U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_addr[7U] 
                                  >> 0x1fU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x2fU] 
        = ((0x3ffffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x2fU]) 
           | (0xfc000000U & (0x40000000U | (testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
                                            << 0x1fU))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x30U] 
        = (0xffffU & (testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_hd64def83__0 
                      >> 1U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0 
        = (((QData)((IData)(((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__empty)
                              ? vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc2stream_0_data[0xfU]
                              : vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__ram_ext__DOT__Memory
                             [vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__deq_ptr_value][0xfU]))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__empty)
                                          ? vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__acc2stream_0_data[0xeU]
                                          : vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__ram_ext__DOT__Memory
                                         [vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__i_snax_dream_streamer_top__DOT__streamer__DOT__WriterFifo_0__DOT__fifo__DOT__deq_ptr_value][0xeU]))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x2dU] 
        = (0x3fc0000U | ((0xffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x2dU]) 
                         | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0) 
                            << 0x1aU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x2eU] 
        = ((0xffffU & ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0) 
                       >> 6U)) | ((0x3ff0000U & ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0) 
                                                 >> 6U)) 
                                  | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0 
                                              >> 0x20U)) 
                                     << 0x1aU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x2fU] 
        = ((0xfc000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x2fU]) 
           | ((0xffffU & ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0 
                                   >> 0x20U)) >> 6U)) 
              | (0x3ff0000U & ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h24bde648__0 
                                        >> 0x20U)) 
                               >> 6U))));
    testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h4f27c258__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT__tcdm_req_q_valid) 
                 >> 0xfU));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x2dU] 
        = ((0xffff7fffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x2dU]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_streamer_wrapper__DOT____Vlvbound_h4f27c258__0) 
              << 0xfU));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__write_pointer_n 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__write_pointer_q;
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__push) 
         & (4U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__write_pointer_q)));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_n 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_q;
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_q)));
    } else {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_n 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_q;
    }
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__pop) 
         & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__empty)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__push) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__pop)) 
          & (4U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_q))) 
         & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__empty)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_n 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_q;
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__read_pointer_n 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__read_pointer_q;
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__pop) 
         & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__empty)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_q)) 
         & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__push))) {
        if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__pop) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__write_pointer_n 
                = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__write_pointer_q;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_n 
                = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_q;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__read_pointer_n 
                = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__read_pointer_q;
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__req_ready 
        = ((4U > (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__cnt_q)) 
           | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__pop));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__write_pointer_n 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__write_pointer_q;
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__push) 
         & (4U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__write_pointer_q)));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_n 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_q;
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_q)));
    } else {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_n 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_q;
    }
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__pop) 
         & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__empty)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__push) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__pop)) 
          & (4U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_q))) 
         & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__empty)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_n 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_q;
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__read_pointer_n 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__read_pointer_q;
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__pop) 
         & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__empty)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_q)) 
         & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__push))) {
        if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__pop) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__write_pointer_n 
                = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__write_pointer_q;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_n 
                = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_q;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__read_pointer_n 
                = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__read_pointer_q;
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__req_ready 
        = ((4U > (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__cnt_q)) 
           | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__pop));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT____Vcellout__i_stream_to_mem__req_ready_o 
        = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__rsp_o[0x21U] 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__req_ready));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__tcdm_req[0U] 
        = (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[5U] 
             << 0x1cU) | (0xffffff8U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[4U] 
                                        >> 4U))) | 
           ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[4U] 
             >> 3U) & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__req_ready)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__tcdm_req[1U] 
        = ((7U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[5U] 
                  >> 4U)) | ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[6U] 
                              << 0x1cU) | (0xffffff8U 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[5U] 
                                              >> 4U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__tcdm_req[2U] 
        = ((7U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[6U] 
                  >> 4U)) | (0xfffffff8U & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[7U] 
                                             << 0x1cU) 
                                            | (0xffffff8U 
                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[6U] 
                                                  >> 4U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__tcdm_req[3U] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__tcdm_req[3U]) 
           | (1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[7U] 
                    >> 4U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__tcdm_req[0U] 
        = (2U | (0xfffffff9U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__tcdm_req[0U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT____Vcellout__i_stream_to_mem__req_ready_o 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__rsp_o[0x23U] 
            >> 2U) & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__req_ready));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__tcdm_req[3U] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__tcdm_req[3U]) 
           | (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[5U] 
                << 0x1dU) | (0x1ffffff0U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[4U] 
                                            >> 3U))) 
              | (0x3ffffffeU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[4U] 
                                 >> 2U) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__req_ready) 
                                           << 1U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__tcdm_req[4U] 
        = ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[5U] 
                  >> 3U)) | ((0xeU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[5U] 
                                      >> 3U)) | ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[6U] 
                                                  << 0x1dU) 
                                                 | (0x1ffffff0U 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[5U] 
                                                       >> 3U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__tcdm_req[5U] 
        = ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[6U] 
                  >> 3U)) | ((0xeU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[6U] 
                                      >> 3U)) | (0xfffffff0U 
                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[7U] 
                                                     << 0x1dU) 
                                                    | (0x1ffffff0U 
                                                       & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[6U] 
                                                          >> 3U))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__tcdm_req[6U] 
        = (3U & ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[7U] 
                        >> 3U)) | (2U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[7U] 
                                         >> 3U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__tcdm_req[3U] 
        = (0xcU | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__tcdm_req[3U]);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__cnt_d 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__cnt_q;
    if (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[4U] 
          >> 3U) & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT____Vcellout__i_stream_to_mem__req_ready_o))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__cnt_d 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__cnt_d)));
    }
    if ((1U & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__empty)) 
               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[4U] 
                  >> 2U)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__cnt_d 
            = (0xfU & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__cnt_d) 
                       - (IData)(1U)));
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__cnt_d 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__cnt_q;
    if (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[4U] 
          >> 3U) & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT____Vcellout__i_stream_to_mem__req_ready_o))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__cnt_d 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__cnt_d)));
    }
    if ((1U & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__empty)) 
               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_reqrsp_demux__mst_req_o[4U] 
                  >> 2U)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__cnt_d 
            = (0xfU & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__cnt_d) 
                       - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vtestharness___024root___nba_comb__TOP__154(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___nba_comb__TOP__154\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_99;
    VlWide<3>/*95:0*/ __Vtemp_105;
    VlWide<3>/*95:0*/ __Vtemp_115;
    VlWide<3>/*95:0*/ __Vtemp_126;
    VlWide<4>/*127:0*/ __Vtemp_147;
    VlWide<4>/*127:0*/ __Vtemp_158;
    VlWide<5>/*159:0*/ __Vtemp_179;
    VlWide<5>/*159:0*/ __Vtemp_190;
    VlWide<6>/*191:0*/ __Vtemp_211;
    VlWide<6>/*191:0*/ __Vtemp_222;
    VlWide<7>/*223:0*/ __Vtemp_243;
    VlWide<7>/*223:0*/ __Vtemp_254;
    VlWide<8>/*255:0*/ __Vtemp_275;
    VlWide<8>/*255:0*/ __Vtemp_286;
    VlWide<9>/*287:0*/ __Vtemp_307;
    VlWide<9>/*287:0*/ __Vtemp_318;
    VlWide<10>/*319:0*/ __Vtemp_339;
    VlWide<10>/*319:0*/ __Vtemp_350;
    VlWide<11>/*351:0*/ __Vtemp_371;
    VlWide<11>/*351:0*/ __Vtemp_382;
    VlWide<12>/*383:0*/ __Vtemp_403;
    VlWide<12>/*383:0*/ __Vtemp_414;
    VlWide<13>/*415:0*/ __Vtemp_435;
    VlWide<13>/*415:0*/ __Vtemp_446;
    VlWide<14>/*447:0*/ __Vtemp_467;
    VlWide<14>/*447:0*/ __Vtemp_478;
    VlWide<15>/*479:0*/ __Vtemp_499;
    VlWide<15>/*479:0*/ __Vtemp_510;
    VlWide<16>/*511:0*/ __Vtemp_531;
    VlWide<16>/*511:0*/ __Vtemp_542;
    VlWide<17>/*543:0*/ __Vtemp_563;
    VlWide<17>/*543:0*/ __Vtemp_574;
    VlWide<18>/*575:0*/ __Vtemp_595;
    VlWide<18>/*575:0*/ __Vtemp_606;
    VlWide<19>/*607:0*/ __Vtemp_627;
    VlWide<19>/*607:0*/ __Vtemp_638;
    // Body
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x2fU)) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[__Vilp1] 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x30U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__tcdm_req[0U] 
            << 0x10U) | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT____Vcellout__i_snax_dream_streamer_wrapper__tcdm_req_o[0x30U]);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x31U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__tcdm_req[0U] 
            >> 0x10U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__tcdm_req[1U] 
                         << 0x10U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x32U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__tcdm_req[1U] 
            >> 0x10U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__tcdm_req[2U] 
                         << 0x10U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x33U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__tcdm_req[2U] 
            >> 0x10U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__tcdm_req[3U] 
                         << 0x10U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x34U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__tcdm_req[3U] 
            >> 0x10U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__tcdm_req[4U] 
                         << 0x10U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x35U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__tcdm_req[4U] 
            >> 0x10U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__tcdm_req[5U] 
                         << 0x10U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x36U] 
        = (((0xffe00000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_tcdm__DOT__reqrsp_req[0U] 
                            << 0x10U)) | (0xfffc0000U 
                                          & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_tcdm__DOT__reqrsp_req[0U] 
                                              << 0x11U) 
                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_tcdm__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__req_ready) 
                                                << 0x12U)))) 
           | ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__tcdm_req[5U] 
               >> 0x10U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__tcdm_req[6U] 
                            << 0x10U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x37U] 
        = ((((0x30000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_tcdm__DOT__reqrsp_req[1U] 
                          << 0x10U)) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_tcdm__DOT__reqrsp_req[0U] 
                                        >> 0x10U)) 
            | ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_tcdm__DOT__reqrsp_req[0U] 
                >> 0xfU) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_tcdm__DOT__i_reqrsp_to_tcdm__DOT__i_stream_to_mem__DOT__req_ready) 
                            >> 0xeU))) | ((0x1c0000U 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_tcdm__DOT__reqrsp_req[1U] 
                                              << 0x10U)) 
                                          | (0xffe00000U 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_tcdm__DOT__reqrsp_req[1U] 
                                                << 0x10U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x38U] 
        = (((0x30000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_tcdm__DOT__reqrsp_req[2U] 
                         << 0x10U)) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_tcdm__DOT__reqrsp_req[1U] 
                                       >> 0x10U)) | 
           ((0x1c0000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_tcdm__DOT__reqrsp_req[2U] 
                          << 0x10U)) | (0xffe00000U 
                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_tcdm__DOT__reqrsp_req[2U] 
                                           << 0x10U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x39U] 
        = ((0x3ffffU & ((0x30000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_tcdm__DOT__reqrsp_req[3U] 
                                     << 0x10U)) | (
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_tcdm__DOT__reqrsp_req[2U] 
                                                   >> 0x10U))) 
           | (0x40000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_tcdm__DOT__reqrsp_req[3U] 
                          << 0x10U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[1U] 
            << 0x1fU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0U] 
                         >> 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[1U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[2U] 
            << 0x1fU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[1U] 
                         >> 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[2U] 
        = ((0xff000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[3U] 
                           << 0x16U)) | ((0xff8000U 
                                          & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[3U] 
                                              << 0x17U) 
                                             | (0x7f8000U 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[2U] 
                                                   >> 9U)))) 
                                         | (0x7fffU 
                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[2U] 
                                               >> 1U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[3U] 
        = (((0xc00000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[4U] 
                          << 0x16U)) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[3U] 
                                        >> 0xaU)) | 
           (0xff000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[4U] 
                           << 0x16U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[4U] 
        = (((0xc00000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[5U] 
                          << 0x16U)) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[4U] 
                                        >> 0xaU)) | 
           (0xff000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[5U] 
                           << 0x16U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[5U] 
        = ((0xffff0000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[6U] 
                           << 0xdU)) | ((0xff80U & 
                                         ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[6U] 
                                           << 0xeU) 
                                          | (0x3f80U 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[5U] 
                                                >> 0x12U)))) 
                                        | (0x7fU & 
                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[5U] 
                                            >> 0xaU))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[6U] 
        = (((0xe000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[7U] 
                        << 0xdU)) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[6U] 
                                     >> 0x13U)) | (0xffff0000U 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[7U] 
                                                      << 0xdU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[7U] 
        = ((0x80000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[8U] 
                           << 5U)) | (((0xe000U & (
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[8U] 
                                                   << 0xdU)) 
                                       | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[7U] 
                                          >> 0x13U)) 
                                      | (0x7fff0000U 
                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[8U] 
                                            << 0xdU))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[8U] 
        = ((0xffffff00U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[9U] 
                           << 4U)) | (0xffU & ((0x7fffffe0U 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[9U] 
                                                   << 5U)) 
                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[8U] 
                                                  >> 0x1bU))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[9U] 
        = (((0xf0U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0xaU] 
                      << 4U)) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[9U] 
                                 >> 0x1cU)) | (0xffffff00U 
                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0xaU] 
                                                  << 4U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0xaU] 
        = ((0xff800000U & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0xcU] 
                            << 0x1cU) | (0xf800000U 
                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0xbU] 
                                            >> 4U)))) 
           | (((0xf0U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0xbU] 
                         << 4U)) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0xaU] 
                                    >> 0x1cU)) | (0x7fff00U 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0xbU] 
                                                     << 4U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0xbU] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0xdU] 
            << 0x1bU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0xcU] 
                         >> 5U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0xcU] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0xeU] 
            << 0x1bU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0xdU] 
                         >> 5U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0xdU] 
        = ((0xff000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0xfU] 
                           << 0x12U)) | ((0xff8000U 
                                          & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0xfU] 
                                              << 0x13U) 
                                             | (0x78000U 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0xeU] 
                                                   >> 0xdU)))) 
                                         | (0x7fffU 
                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0xeU] 
                                               >> 5U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0xeU] 
        = (((0xfc0000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x10U] 
                          << 0x12U)) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0xfU] 
                                        >> 0xeU)) | 
           (0xff000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x10U] 
                           << 0x12U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0xfU] 
        = (((0xfc0000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x11U] 
                          << 0x12U)) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x10U] 
                                        >> 0xeU)) | 
           (0xff000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x11U] 
                           << 0x12U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x10U] 
        = ((0xffff0000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x12U] 
                           << 9U)) | ((0xff80U & ((
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x12U] 
                                                   << 0xaU) 
                                                  | (0x380U 
                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x11U] 
                                                        >> 0x16U)))) 
                                      | (0x7fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x11U] 
                                                  >> 0xeU))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x11U] 
        = (((0xfe00U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x13U] 
                        << 9U)) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x12U] 
                                   >> 0x17U)) | (0xffff0000U 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x13U] 
                                                    << 9U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x12U] 
        = ((0x80000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x14U] 
                           << 1U)) | (((0xfe00U & (
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x14U] 
                                                   << 9U)) 
                                       | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x13U] 
                                          >> 0x17U)) 
                                      | (0x7fff0000U 
                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x14U] 
                                            << 9U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x13U] 
        = ((0xffffff00U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x15U]) 
           | (0xffU & ((0x7ffffffeU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x15U] 
                                       << 1U)) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x14U] 
                                                  >> 0x1fU))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x14U] 
        = ((0xffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x16U]) 
           | (0xffffff00U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x16U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x15U] 
        = ((0xff800000U & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x18U] 
                            << 0x18U) | (0x800000U 
                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x17U] 
                                            >> 8U)))) 
           | ((0xffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x17U]) 
              | (0x7fff00U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x17U])));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x16U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x19U] 
            << 0x17U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x18U] 
                         >> 9U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x17U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x1aU] 
            << 0x17U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x19U] 
                         >> 9U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x18U] 
        = ((0xff000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x1bU] 
                           << 0xeU)) | ((0xff8000U 
                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x1bU] 
                                            << 0xfU)) 
                                        | (0x7fffU 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x1aU] 
                                              >> 9U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x19U] 
        = (((0xffc000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x1cU] 
                          << 0xeU)) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x1bU] 
                                       >> 0x12U)) | 
           (0xff000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x1cU] 
                           << 0xeU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x1aU] 
        = (((0xffc000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x1dU] 
                          << 0xeU)) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x1cU] 
                                       >> 0x12U)) | 
           (0xff000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x1dU] 
                           << 0xeU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x1bU] 
        = ((0xffff0000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x1eU] 
                           << 5U)) | ((0xff80U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x1eU] 
                                                  << 6U)) 
                                      | (0x7fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x1dU] 
                                                  >> 0x12U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x1cU] 
        = (((0xffe0U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x1fU] 
                        << 5U)) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x1eU] 
                                   >> 0x1bU)) | (0xffff0000U 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x1fU] 
                                                    << 5U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x1dU] 
        = ((0x80000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x21U] 
                           << 0x1dU)) | (((0xffe0U 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x20U] 
                                              << 5U)) 
                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x1fU] 
                                             >> 0x1bU)) 
                                         | (0x7fff0000U 
                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x20U] 
                                               << 5U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x1eU] 
        = (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x22U] 
             << 0x1cU) | (0xfffff00U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x21U] 
                                        >> 4U))) | 
           (0xffU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x21U] 
                     >> 3U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x1fU] 
        = ((0xffU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x22U] 
                     >> 4U)) | ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x23U] 
                                 << 0x1cU) | (0xfffff00U 
                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x22U] 
                                                 >> 4U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x20U] 
        = ((0xff800000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x24U] 
                           << 0x14U)) | ((0xffU & (
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x23U] 
                                                   >> 4U)) 
                                         | (0x7fff00U 
                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x23U] 
                                               >> 4U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x21U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x25U] 
            << 0x13U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x24U] 
                         >> 0xdU));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x22U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x26U] 
            << 0x13U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x25U] 
                         >> 0xdU));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x23U] 
        = ((0xff000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x27U] 
                           << 0xaU)) | ((0xff8000U 
                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x27U] 
                                            << 0xbU)) 
                                        | (0x7fffU 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x26U] 
                                              >> 0xdU))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x24U] 
        = (((0xfffc00U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x28U] 
                          << 0xaU)) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x27U] 
                                       >> 0x16U)) | 
           (0xff000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x28U] 
                           << 0xaU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x25U] 
        = (((0xfffc00U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x29U] 
                          << 0xaU)) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x28U] 
                                       >> 0x16U)) | 
           (0xff000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x29U] 
                           << 0xaU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x26U] 
        = ((0xffff0000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x2aU] 
                           << 1U)) | ((0xff80U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x2aU] 
                                                  << 2U)) 
                                      | (0x7fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x29U] 
                                                  >> 0x16U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x27U] 
        = (((0xfffeU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x2bU] 
                        << 1U)) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x2aU] 
                                   >> 0x1fU)) | (0xffff0000U 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x2bU] 
                                                    << 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x28U] 
        = ((0x80000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x2dU] 
                           << 0x19U)) | (((0xfffeU 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x2cU] 
                                              << 1U)) 
                                          | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x2bU] 
                                             >> 0x1fU)) 
                                         | (0x7fff0000U 
                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x2cU] 
                                               << 1U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x29U] 
        = (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x2eU] 
             << 0x18U) | (0xffff00U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x2dU] 
                                       >> 8U))) | (0xffU 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x2dU] 
                                                      >> 7U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x2aU] 
        = ((0xffU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x2eU] 
                     >> 8U)) | ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x2fU] 
                                 << 0x18U) | (0xffff00U 
                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x2eU] 
                                                 >> 8U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x2bU] 
        = ((0xff800000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x30U] 
                           << 0x10U)) | ((0xffU & (
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x2fU] 
                                                   >> 8U)) 
                                         | (0x7fff00U 
                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x2fU] 
                                               >> 8U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x2cU] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x31U] 
            << 0xfU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x30U] 
                        >> 0x11U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x2dU] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x32U] 
            << 0xfU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x31U] 
                        >> 0x11U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x2eU] 
        = ((0xff000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x33U] 
                           << 6U)) | ((0xff8000U & 
                                       (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x33U] 
                                        << 7U)) | (
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x32U] 
                                                   >> 0x11U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x2fU] 
        = (((0xffffc0U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x34U] 
                          << 6U)) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x33U] 
                                     >> 0x1aU)) | (0xff000000U 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x34U] 
                                                      << 6U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x30U] 
        = (((0xffffc0U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x35U] 
                          << 6U)) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x34U] 
                                     >> 0x1aU)) | (0xff000000U 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x35U] 
                                                      << 6U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x31U] 
        = (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x37U] 
             << 0x1dU) | (0x1fff0000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x36U] 
                                         >> 3U))) | 
           ((0xff80U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x36U] 
                        >> 2U)) | (0x7fU & ((0xffffc0U 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x36U] 
                                                << 6U)) 
                                            | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x35U] 
                                               >> 0x1aU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x32U] 
        = ((0xffffU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x37U] 
                       >> 3U)) | ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x38U] 
                                   << 0x1dU) | (0x1fff0000U 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x37U] 
                                                   >> 3U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x33U] 
        = ((0x80000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x39U] 
                           << 0x15U)) | ((0xffffU & 
                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x38U] 
                                           >> 3U)) 
                                         | (0x7fff0000U 
                                            & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x39U] 
                                                << 0x1dU) 
                                               | (0x1fff0000U 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x38U] 
                                                     >> 3U))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x34U] 
        = (0xffU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x39U] 
                    >> 0xbU));
    __Vtemp_99[0U] = (IData)((((QData)((IData)((0x1fU 
                                                & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x24U] 
                                                    << 2U) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x23U] 
                                                      >> 0x1eU))))) 
                               << 0x37U) | (((QData)((IData)(
                                                             (0x1fU 
                                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x21U] 
                                                                  << 3U) 
                                                                 | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x20U] 
                                                                    >> 0x1dU))))) 
                                             << 0x32U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x1eU] 
                                                                     << 4U) 
                                                                    | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x1dU] 
                                                                       >> 0x1cU))))) 
                                                << 0x2dU) 
                                               | (((QData)((IData)(
                                                                   (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x1aU] 
                                                                    >> 0x1bU))) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x17U] 
                                                                          >> 0x1aU)))) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x14U] 
                                                                             >> 0x19U)))) 
                                                         << 0x1eU) 
                                                        | (QData)((IData)(
                                                                          ((0x3e000000U 
                                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x11U] 
                                                                               << 1U)) 
                                                                           | ((0x1f00000U 
                                                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0xeU] 
                                                                                >> 3U)) 
                                                                              | ((0xf8000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0xbU] 
                                                                                >> 7U)) 
                                                                                | ((0x7c00U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[8U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x3e0U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[5U] 
                                                                                >> 0xfU)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[2U] 
                                                                                >> 0x13U))))))))))))))));
    __Vtemp_99[1U] = ((0xf0000000U & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x27U] 
                                       << 0x1dU) | 
                                      (0x10000000U 
                                       & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x26U] 
                                          >> 3U)))) 
                      | (IData)(((((QData)((IData)(
                                                   (0x1fU 
                                                    & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x24U] 
                                                        << 2U) 
                                                       | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x23U] 
                                                          >> 0x1eU))))) 
                                   << 0x37U) | (((QData)((IData)(
                                                                 (0x1fU 
                                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x21U] 
                                                                      << 3U) 
                                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x20U] 
                                                                        >> 0x1dU))))) 
                                                 << 0x32U) 
                                                | (((QData)((IData)(
                                                                    (0x1fU 
                                                                     & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x1eU] 
                                                                         << 4U) 
                                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x1dU] 
                                                                           >> 0x1cU))))) 
                                                    << 0x2dU) 
                                                   | (((QData)((IData)(
                                                                       (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x1aU] 
                                                                        >> 0x1bU))) 
                                                       << 0x28U) 
                                                      | (((QData)((IData)(
                                                                          (0x1fU 
                                                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x17U] 
                                                                              >> 0x1aU)))) 
                                                          << 0x23U) 
                                                         | (((QData)((IData)(
                                                                             (0x1fU 
                                                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x14U] 
                                                                                >> 0x19U)))) 
                                                             << 0x1eU) 
                                                            | (QData)((IData)(
                                                                              ((0x3e000000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x11U] 
                                                                                << 1U)) 
                                                                               | ((0x1f00000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0xeU] 
                                                                                >> 3U)) 
                                                                                | ((0xf8000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0xbU] 
                                                                                >> 7U)) 
                                                                                | ((0x7c00U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[8U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x3e0U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[5U] 
                                                                                >> 0xfU)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[2U] 
                                                                                >> 0x13U))))))))))))))) 
                                 >> 0x20U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[0U] 
        = __Vtemp_99[0U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[1U] 
        = __Vtemp_99[1U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[2U] 
        = ((0x7c000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x39U] 
                           << 0x15U)) | ((0x3e00000U 
                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x36U] 
                                             << 0x11U)) 
                                         | ((0x1f0000U 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x33U] 
                                                << 0xdU)) 
                                            | ((0xf800U 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x30U] 
                                                   << 9U)) 
                                               | ((0x7c0U 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x2dU] 
                                                      << 5U)) 
                                                  | ((0x3eU 
                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x2aU] 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x27U] 
                                                           >> 3U))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
        = (((~ ((IData)(1U) << (0x1fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[0U]))) 
            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o) 
           | (0xffffffffULL & ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0U]) 
                               << (0x1fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[0U]))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
        = (((~ ((IData)(1U) << (0x1fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[0U] 
                                         >> 5U)))) 
            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
           | (0xffffffffULL & ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[3U] 
                                      >> 1U)) << (0x1fU 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[0U] 
                                                     >> 5U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
        = (((~ ((IData)(1U) << (0x1fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[0U] 
                                         >> 0xaU)))) 
            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o) 
           | (0xffffffffULL & ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[6U] 
                                      >> 2U)) << (0x1fU 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[0U] 
                                                     >> 0xaU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
        = (((~ ((IData)(1U) << (0x1fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[0U] 
                                         >> 0xfU)))) 
            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o) 
           | (0xffffffffULL & ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[9U] 
                                      >> 3U)) << (0x1fU 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[0U] 
                                                     >> 0xfU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
        = (((~ ((IData)(1U) << (0x1fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[0U] 
                                         >> 0x14U)))) 
            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o) 
           | (0xffffffffULL & ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0xcU] 
                                      >> 4U)) << (0x1fU 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[0U] 
                                                     >> 0x14U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
        = (((~ ((IData)(1U) << (0x1fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[0U] 
                                         >> 0x19U)))) 
            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o) 
           | (0xffffffffULL & ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0xfU] 
                                      >> 5U)) << (0x1fU 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[0U] 
                                                     >> 0x19U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
        = (((~ ((IData)(1U) << (0x1fU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[1U] 
                                          << 2U) | 
                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[0U] 
                                          >> 0x1eU))))) 
            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o) 
           | (0xffffffffULL & ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x12U] 
                                      >> 6U)) << (0x1fU 
                                                  & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[1U] 
                                                      << 2U) 
                                                     | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[0U] 
                                                        >> 0x1eU))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
        = (((~ ((IData)(1U) << (0x1fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[1U] 
                                         >> 3U)))) 
            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o) 
           | (0xffffffffULL & ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x15U] 
                                      >> 7U)) << (0x1fU 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[1U] 
                                                     >> 3U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
        = (((~ ((IData)(1U) << (0x1fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[1U] 
                                         >> 8U)))) 
            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o) 
           | (0xffffffffULL & ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x18U] 
                                      >> 8U)) << (0x1fU 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[1U] 
                                                     >> 8U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
        = (((~ ((IData)(1U) << (0x1fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[1U] 
                                         >> 0xdU)))) 
            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o) 
           | (0xffffffffULL & ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x1bU] 
                                      >> 9U)) << (0x1fU 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[1U] 
                                                     >> 0xdU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
        = (((~ ((IData)(1U) << (0x1fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[1U] 
                                         >> 0x12U)))) 
            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o) 
           | (0xffffffffULL & ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x1eU] 
                                      >> 0xaU)) << 
                               (0x1fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[1U] 
                                         >> 0x12U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
        = (((~ ((IData)(1U) << (0x1fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[1U] 
                                         >> 0x17U)))) 
            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o) 
           | (0xffffffffULL & ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x21U] 
                                      >> 0xbU)) << 
                               (0x1fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[1U] 
                                         >> 0x17U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
        = (((~ ((IData)(1U) << (0x1fU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[2U] 
                                          << 4U) | 
                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[1U] 
                                          >> 0x1cU))))) 
            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o) 
           | (0xffffffffULL & ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x24U] 
                                      >> 0xcU)) << 
                               (0x1fU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[2U] 
                                          << 4U) | 
                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[1U] 
                                          >> 0x1cU))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
        = (((~ ((IData)(1U) << (0x1fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[2U] 
                                         >> 1U)))) 
            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o) 
           | (0xffffffffULL & ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x27U] 
                                      >> 0xdU)) << 
                               (0x1fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[2U] 
                                         >> 1U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
        = (((~ ((IData)(1U) << (0x1fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[2U] 
                                         >> 6U)))) 
            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o) 
           | (0xffffffffULL & ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x2aU] 
                                      >> 0xeU)) << 
                               (0x1fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[2U] 
                                         >> 6U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
        = (((~ ((IData)(1U) << (0x1fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[2U] 
                                         >> 0xbU)))) 
            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o) 
           | (0xffffffffULL & ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x2dU] 
                                      >> 0xfU)) << 
                               (0x1fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[2U] 
                                         >> 0xbU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
        = (((~ ((IData)(1U) << (0x1fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[2U] 
                                         >> 0x10U)))) 
            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o) 
           | (0xffffffffULL & ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x30U] 
                                      >> 0x10U)) << 
                               (0x1fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[2U] 
                                         >> 0x10U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
        = (((~ ((IData)(1U) << (0x1fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[2U] 
                                         >> 0x15U)))) 
            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o) 
           | (0xffffffffULL & ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x33U] 
                                      >> 0x11U)) << 
                               (0x1fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[2U] 
                                         >> 0x15U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
        = (((~ ((IData)(1U) << (0x1fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[2U] 
                                         >> 0x1aU)))) 
            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o) 
           | (0xffffffffULL & ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__req_i[0x36U] 
                                      >> 0x12U)) << 
                               (0x1fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__bank_select[2U] 
                                         >> 0x1aU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__req_i 
        = ((0x40000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                        << 0x12U)) | ((0x20000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                   << 0x11U)) 
                                      | ((0x10000U 
                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                << 0xfU)) 
                                            | ((0x4000U 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                   << 0xeU)) 
                                               | ((0x2000U 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                      << 0xdU)) 
                                                  | ((0x1000U 
                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                         << 0xcU)) 
                                                     | ((0x800U 
                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                            << 0xbU)) 
                                                        | ((0x400U 
                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                               << 0xaU)) 
                                                           | ((0x200U 
                                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  << 9U)) 
                                                              | ((0x100U 
                                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     << 8U)) 
                                                                 | ((0x80U 
                                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                        << 7U)) 
                                                                    | ((0x40U 
                                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           << 6U)) 
                                                                       | ((0x20U 
                                                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                              << 5U)) 
                                                                          | ((0x10U 
                                                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 4U)) 
                                                                             | ((8U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o)))))))))))))))))));
    __Vtemp_105[0U] = (IData)((((QData)((IData)((1U 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                    >> 3U)))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              (1U 
                                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  >> 3U)))) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     >> 3U)))) 
                                                 << 0x3dU) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                        >> 3U)))) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           >> 3U)))) 
                                                       << 0x3bU) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                              >> 3U)))) 
                                                          << 0x3aU) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 3U)))) 
                                                             << 0x39U) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                << 0x38U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                   << 0x37U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                      << 0x36U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                         << 0x35U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                            << 0x34U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                               << 0x33U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 1U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 1U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 1U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 1U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 1U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 1U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 0x1eU)) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 0x1dU)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 0x1cU)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 0x1bU)) 
                                                                                | ((0x8000000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 0x1aU)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 0x19U)) 
                                                                                | ((0x2000000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 0x18U)) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 0x17U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 0x16U)) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 0x15U)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 0x14U)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 0x13U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 0x12U)) 
                                                                                | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__req_i))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_105[1U] = (IData)(((((QData)((IData)((1U 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                     >> 3U)))) 
                                 << 0x3fU) | (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                   >> 3U)))) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                      >> 3U)))) 
                                                  << 0x3dU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                         >> 3U)))) 
                                                     << 0x3cU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                            >> 3U)))) 
                                                        << 0x3bU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                               >> 3U)))) 
                                                           << 0x3aU) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 3U)))) 
                                                              << 0x39U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                 << 0x38U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                    << 0x37U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                       << 0x36U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                          << 0x35U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                             << 0x34U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                                << 0x33U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 1U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 1U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 1U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 1U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 1U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 1U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 0x1eU)) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 0x1dU)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 0x1cU)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 0x1bU)) 
                                                                                | ((0x8000000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 0x1aU)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 0x19U)) 
                                                                                | ((0x2000000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 0x18U)) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 0x17U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 0x16U)) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 0x15U)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 0x14U)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 0x13U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 0x12U)) 
                                                                                | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__req_i))))))))))))))))))))))))))))))))))))))))))))))) 
                               >> 0x20U));
    __Vtemp_115[2U] = ((0x400U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                  << 7U)) | ((0x200U 
                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                 << 6U)) 
                                             | ((0x100U 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                    << 5U)) 
                                                | ((0x80U 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                       << 4U)) 
                                                   | ((0x40U 
                                                       & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                          << 3U)) 
                                                      | ((0x20U 
                                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                             << 2U)) 
                                                         | ((0x10U 
                                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                << 1U)) 
                                                            | ((8U 
                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o) 
                                                               | ((4U 
                                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                      >> 1U)) 
                                                                  | ((2U 
                                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                         >> 2U)) 
                                                                     | (1U 
                                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           >> 3U))))))))))));
    __Vtemp_126[2U] = ((0x200000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                     << 0x11U)) | (
                                                   (0x100000U 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                       << 0x10U)) 
                                                   | ((0x80000U 
                                                       & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                          << 0xfU)) 
                                                      | ((0x40000U 
                                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                             << 0xeU)) 
                                                         | ((0x20000U 
                                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                << 0xdU)) 
                                                            | ((0x10000U 
                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                   << 0xcU)) 
                                                               | ((0x8000U 
                                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                      << 0xbU)) 
                                                                  | ((0x4000U 
                                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                         << 0xaU)) 
                                                                     | ((0x2000U 
                                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                            << 9U)) 
                                                                        | ((0x1000U 
                                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                               << 8U)) 
                                                                           | ((0x800U 
                                                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 8U)) 
                                                                              | __Vtemp_115[2U])))))))))));
    __Vtemp_147[3U] = ((0x400U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                  << 5U)) | ((0x200U 
                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                 << 4U)) 
                                             | ((0x100U 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                    << 3U)) 
                                                | ((0x80U 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                       << 2U)) 
                                                   | ((0x40U 
                                                       & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                          << 1U)) 
                                                      | ((0x20U 
                                                          & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o) 
                                                         | ((0x10U 
                                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                >> 1U)) 
                                                            | ((8U 
                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                   >> 2U)) 
                                                               | ((4U 
                                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                      >> 3U)) 
                                                                  | ((2U 
                                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                         >> 4U)) 
                                                                     | (1U 
                                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           >> 5U))))))))))));
    __Vtemp_158[3U] = ((0x200000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                     << 0xfU)) | ((0x100000U 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                      << 0xeU)) 
                                                  | ((0x80000U 
                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                         << 0xdU)) 
                                                     | ((0x40000U 
                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                            << 0xcU)) 
                                                        | ((0x20000U 
                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                               << 0xcU)) 
                                                           | ((0x10000U 
                                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  << 0xbU)) 
                                                              | ((0x8000U 
                                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     << 0xaU)) 
                                                                 | ((0x4000U 
                                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                                        << 9U)) 
                                                                    | ((0x2000U 
                                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           << 8U)) 
                                                                       | ((0x1000U 
                                                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                              << 7U)) 
                                                                          | ((0x800U 
                                                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 6U)) 
                                                                             | __Vtemp_147[3U])))))))))));
    __Vtemp_179[4U] = ((0x400U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                  << 3U)) | ((0x200U 
                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                 << 2U)) 
                                             | ((0x100U 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                    << 1U)) 
                                                | ((0x80U 
                                                    & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o) 
                                                   | ((0x40U 
                                                       & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                          >> 1U)) 
                                                      | ((0x20U 
                                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                             >> 2U)) 
                                                         | ((0x10U 
                                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                                >> 2U)) 
                                                            | ((8U 
                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                                   >> 3U)) 
                                                               | ((4U 
                                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                                      >> 4U)) 
                                                                  | ((2U 
                                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                                         >> 5U)) 
                                                                     | (1U 
                                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           >> 6U))))))))))));
    __Vtemp_190[4U] = ((0x200000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                     << 0xeU)) | ((0x100000U 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                      << 0xdU)) 
                                                  | ((0x80000U 
                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                         << 0xcU)) 
                                                     | ((0x40000U 
                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                            << 0xbU)) 
                                                        | ((0x20000U 
                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                               << 0xaU)) 
                                                           | ((0x10000U 
                                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  << 9U)) 
                                                              | ((0x8000U 
                                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     << 8U)) 
                                                                 | ((0x4000U 
                                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                        << 7U)) 
                                                                    | ((0x2000U 
                                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           << 6U)) 
                                                                       | ((0x1000U 
                                                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                              << 5U)) 
                                                                          | ((0x800U 
                                                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 4U)) 
                                                                             | __Vtemp_179[4U])))))))))));
    __Vtemp_211[5U] = ((0x400U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                  << 2U)) | ((0x200U 
                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                 << 1U)) 
                                             | ((0x100U 
                                                 & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o) 
                                                | ((0x80U 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                       >> 1U)) 
                                                   | ((0x40U 
                                                       & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                          >> 2U)) 
                                                      | ((0x20U 
                                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                             >> 3U)) 
                                                         | ((0x10U 
                                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                >> 4U)) 
                                                            | ((8U 
                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                   >> 5U)) 
                                                               | ((4U 
                                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                      >> 6U)) 
                                                                  | ((2U 
                                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                         >> 7U)) 
                                                                     | (1U 
                                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           >> 8U))))))))))));
    __Vtemp_222[5U] = ((0x200000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                     << 0xcU)) | ((0x100000U 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                      << 0xbU)) 
                                                  | ((0x80000U 
                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                         << 0xaU)) 
                                                     | ((0x40000U 
                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                            << 9U)) 
                                                        | ((0x20000U 
                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                               << 8U)) 
                                                           | ((0x10000U 
                                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  << 7U)) 
                                                              | ((0x8000U 
                                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     << 6U)) 
                                                                 | ((0x4000U 
                                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                        << 5U)) 
                                                                    | ((0x2000U 
                                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           << 4U)) 
                                                                       | ((0x1000U 
                                                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                              << 3U)) 
                                                                          | ((0x800U 
                                                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 2U)) 
                                                                             | __Vtemp_211[5U])))))))))));
    __Vtemp_243[6U] = ((0x400U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o) 
                       | ((0x200U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                     >> 1U)) | ((0x100U 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                    >> 2U)) 
                                                | ((0x80U 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                       >> 3U)) 
                                                   | ((0x40U 
                                                       & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                          >> 4U)) 
                                                      | ((0x20U 
                                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                             >> 5U)) 
                                                         | ((0x10U 
                                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                >> 6U)) 
                                                            | ((8U 
                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                   >> 7U)) 
                                                               | ((4U 
                                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                      >> 8U)) 
                                                                  | ((2U 
                                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                         >> 9U)) 
                                                                     | (1U 
                                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           >> 0xaU))))))))))));
    __Vtemp_254[6U] = ((0x200000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                     << 0xaU)) | ((0x100000U 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                      << 9U)) 
                                                  | ((0x80000U 
                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                         << 8U)) 
                                                     | ((0x40000U 
                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                            << 7U)) 
                                                        | ((0x20000U 
                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                               << 6U)) 
                                                           | ((0x10000U 
                                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  << 6U)) 
                                                              | ((0x8000U 
                                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     << 5U)) 
                                                                 | ((0x4000U 
                                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                                        << 4U)) 
                                                                    | ((0x2000U 
                                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           << 3U)) 
                                                                       | ((0x1000U 
                                                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                              << 2U)) 
                                                                          | ((0x800U 
                                                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 1U)) 
                                                                             | __Vtemp_243[6U])))))))))));
    __Vtemp_275[7U] = ((0x400U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                  >> 2U)) | ((0x200U 
                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                 >> 3U)) 
                                             | ((0x100U 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                    >> 4U)) 
                                                | ((0x80U 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                       >> 5U)) 
                                                   | ((0x40U 
                                                       & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                          >> 6U)) 
                                                      | ((0x20U 
                                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                             >> 7U)) 
                                                         | ((0x10U 
                                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                >> 8U)) 
                                                            | ((8U 
                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                                   >> 8U)) 
                                                               | ((4U 
                                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                                      >> 9U)) 
                                                                  | ((2U 
                                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                                         >> 0xaU)) 
                                                                     | (1U 
                                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           >> 0xbU))))))))))));
    __Vtemp_286[7U] = ((0x200000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                     << 9U)) | ((0x100000U 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                    << 8U)) 
                                                | ((0x80000U 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                       << 7U)) 
                                                   | ((0x40000U 
                                                       & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                          << 6U)) 
                                                      | ((0x20000U 
                                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                             << 5U)) 
                                                         | ((0x10000U 
                                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                << 4U)) 
                                                            | ((0x8000U 
                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                   << 3U)) 
                                                               | ((0x4000U 
                                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                      << 2U)) 
                                                                  | ((0x2000U 
                                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                         << 1U)) 
                                                                     | ((0x1000U 
                                                                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o) 
                                                                        | ((0x800U 
                                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                               >> 1U)) 
                                                                           | __Vtemp_275[7U])))))))))));
    __Vtemp_307[8U] = ((0x400U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                  >> 4U)) | ((0x200U 
                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                 >> 4U)) 
                                             | ((0x100U 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                    >> 5U)) 
                                                | ((0x80U 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                       >> 6U)) 
                                                   | ((0x40U 
                                                       & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                          >> 7U)) 
                                                      | ((0x20U 
                                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                             >> 8U)) 
                                                         | ((0x10U 
                                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                >> 9U)) 
                                                            | ((8U 
                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                   >> 0xaU)) 
                                                               | ((4U 
                                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                      >> 0xbU)) 
                                                                  | ((2U 
                                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                         >> 0xcU)) 
                                                                     | (1U 
                                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           >> 0xdU))))))))))));
    __Vtemp_318[8U] = ((0x200000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                     << 7U)) | ((0x100000U 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                    << 6U)) 
                                                | ((0x80000U 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                       << 5U)) 
                                                   | ((0x40000U 
                                                       & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                          << 4U)) 
                                                      | ((0x20000U 
                                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                             << 3U)) 
                                                         | ((0x10000U 
                                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                << 2U)) 
                                                            | ((0x8000U 
                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                   << 1U)) 
                                                               | ((0x4000U 
                                                                   & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o) 
                                                                  | ((0x2000U 
                                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                         >> 1U)) 
                                                                     | ((0x1000U 
                                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                            >> 2U)) 
                                                                        | ((0x800U 
                                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                               >> 3U)) 
                                                                           | __Vtemp_307[8U])))))))))));
    __Vtemp_339[9U] = ((0x400U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                  >> 5U)) | ((0x200U 
                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                 >> 6U)) 
                                             | ((0x100U 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                    >> 7U)) 
                                                | ((0x80U 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                       >> 8U)) 
                                                   | ((0x40U 
                                                       & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                          >> 9U)) 
                                                      | ((0x20U 
                                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                             >> 0xaU)) 
                                                         | ((0x10U 
                                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                >> 0xbU)) 
                                                            | ((8U 
                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                   >> 0xcU)) 
                                                               | ((4U 
                                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                      >> 0xdU)) 
                                                                  | ((2U 
                                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                         >> 0xeU)) 
                                                                     | (1U 
                                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           >> 0xfU))))))))))));
    __Vtemp_350[9U] = ((0x200000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                     << 5U)) | ((0x100000U 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                    << 4U)) 
                                                | ((0x80000U 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                       << 3U)) 
                                                   | ((0x40000U 
                                                       & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                          << 2U)) 
                                                      | ((0x20000U 
                                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                             << 1U)) 
                                                         | ((0x10000U 
                                                             & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o) 
                                                            | ((0x8000U 
                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o) 
                                                               | ((0x4000U 
                                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                                      >> 1U)) 
                                                                  | ((0x2000U 
                                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                                         >> 2U)) 
                                                                     | ((0x1000U 
                                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                                            >> 3U)) 
                                                                        | ((0x800U 
                                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                               >> 4U)) 
                                                                           | __Vtemp_339[9U])))))))))));
    __Vtemp_371[0xaU] = ((0x400U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                    >> 7U)) | ((0x200U 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                   >> 8U)) 
                                               | ((0x100U 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                      >> 9U)) 
                                                  | ((0x80U 
                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                         >> 0xaU)) 
                                                     | ((0x40U 
                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                            >> 0xbU)) 
                                                        | ((0x20U 
                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                               >> 0xcU)) 
                                                           | ((0x10U 
                                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  >> 0xdU)) 
                                                              | ((8U 
                                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     >> 0xeU)) 
                                                                 | ((4U 
                                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                                        >> 0xeU)) 
                                                                    | ((2U 
                                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           >> 0xfU)) 
                                                                       | (1U 
                                                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                                             >> 0x10U))))))))))));
    __Vtemp_382[0xaU] = ((0x200000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                       << 4U)) | ((0x100000U 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                      << 3U)) 
                                                  | ((0x80000U 
                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                         << 2U)) 
                                                     | ((0x40000U 
                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                            << 1U)) 
                                                        | ((0x20000U 
                                                            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o) 
                                                           | ((0x10000U 
                                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  >> 1U)) 
                                                              | ((0x8000U 
                                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     >> 2U)) 
                                                                 | ((0x4000U 
                                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                        >> 3U)) 
                                                                    | ((0x2000U 
                                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           >> 4U)) 
                                                                       | ((0x1000U 
                                                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                              >> 5U)) 
                                                                          | ((0x800U 
                                                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 6U)) 
                                                                             | __Vtemp_371[0xaU])))))))))));
    __Vtemp_403[0xbU] = ((0x400U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                    >> 9U)) | ((0x200U 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                   >> 0xaU)) 
                                               | ((0x100U 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                      >> 0xaU)) 
                                                  | ((0x80U 
                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                         >> 0xbU)) 
                                                     | ((0x40U 
                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                            >> 0xcU)) 
                                                        | ((0x20U 
                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                               >> 0xdU)) 
                                                           | ((0x10U 
                                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  >> 0xeU)) 
                                                              | ((8U 
                                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     >> 0xfU)) 
                                                                 | ((4U 
                                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                        >> 0x10U)) 
                                                                    | ((2U 
                                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           >> 0x11U)) 
                                                                       | (1U 
                                                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                             >> 0x12U))))))))))));
    __Vtemp_414[0xbU] = ((0x200000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                       << 2U)) | ((0x100000U 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                      << 1U)) 
                                                  | ((0x80000U 
                                                      & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o) 
                                                     | ((0x40000U 
                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                            >> 1U)) 
                                                        | ((0x20000U 
                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                               >> 2U)) 
                                                           | ((0x10000U 
                                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  >> 3U)) 
                                                              | ((0x8000U 
                                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     >> 4U)) 
                                                                 | ((0x4000U 
                                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                        >> 5U)) 
                                                                    | ((0x2000U 
                                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           >> 6U)) 
                                                                       | ((0x1000U 
                                                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                              >> 7U)) 
                                                                          | ((0x800U 
                                                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 8U)) 
                                                                             | __Vtemp_403[0xbU])))))))))));
    __Vtemp_435[0xcU] = ((0x400U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                    >> 0xaU)) | ((0x200U 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                     >> 0xbU)) 
                                                 | ((0x100U 
                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                        >> 0xcU)) 
                                                    | ((0x80U 
                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                           >> 0xdU)) 
                                                       | ((0x40U 
                                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                              >> 0xeU)) 
                                                          | ((0x20U 
                                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                 >> 0xfU)) 
                                                             | ((0x10U 
                                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                    >> 0x10U)) 
                                                                | ((8U 
                                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                       >> 0x11U)) 
                                                                   | ((4U 
                                                                       & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                          >> 0x12U)) 
                                                                      | ((2U 
                                                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                             >> 0x13U)) 
                                                                         | (1U 
                                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                               >> 0x14U))))))))))));
    __Vtemp_446[0xcU] = ((0x200000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o) 
                         | ((0x100000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                          >> 1U)) | 
                            ((0x80000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                          >> 2U)) | 
                             ((0x40000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                           >> 3U)) 
                              | ((0x20000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                              >> 4U)) 
                                 | ((0x10000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                 >> 5U)) 
                                    | ((0x8000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                   >> 6U)) 
                                       | ((0x4000U 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                              >> 6U)) 
                                          | ((0x2000U 
                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                 >> 7U)) 
                                             | ((0x1000U 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                    >> 8U)) 
                                                | ((0x800U 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                       >> 9U)) 
                                                   | __Vtemp_435[0xcU])))))))))));
    __Vtemp_467[0xdU] = ((0x400U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                    >> 0xcU)) | ((0x200U 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                     >> 0xdU)) 
                                                 | ((0x100U 
                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                        >> 0xeU)) 
                                                    | ((0x80U 
                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                           >> 0xfU)) 
                                                       | ((0x40U 
                                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                              >> 0x10U)) 
                                                          | ((0x20U 
                                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                 >> 0x11U)) 
                                                             | ((0x10U 
                                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                    >> 0x12U)) 
                                                                | ((8U 
                                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                       >> 0x13U)) 
                                                                   | ((4U 
                                                                       & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                          >> 0x14U)) 
                                                                      | ((2U 
                                                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                                             >> 0x14U)) 
                                                                         | (1U 
                                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                                               >> 0x15U))))))))))));
    __Vtemp_478[0xdU] = ((0x200000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                       >> 2U)) | ((0x100000U 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                      >> 2U)) 
                                                  | ((0x80000U 
                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                         >> 3U)) 
                                                     | ((0x40000U 
                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                            >> 4U)) 
                                                        | ((0x20000U 
                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                               >> 5U)) 
                                                           | ((0x10000U 
                                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  >> 6U)) 
                                                              | ((0x8000U 
                                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     >> 7U)) 
                                                                 | ((0x4000U 
                                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                        >> 8U)) 
                                                                    | ((0x2000U 
                                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           >> 9U)) 
                                                                       | ((0x1000U 
                                                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                              >> 0xaU)) 
                                                                          | ((0x800U 
                                                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xbU)) 
                                                                             | __Vtemp_467[0xdU])))))))))));
    __Vtemp_499[0xeU] = ((0x400U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                    >> 0xeU)) | ((0x200U 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                     >> 0xfU)) 
                                                 | ((0x100U 
                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                        >> 0x10U)) 
                                                    | ((0x80U 
                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                           >> 0x10U)) 
                                                       | ((0x40U 
                                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                              >> 0x11U)) 
                                                          | ((0x20U 
                                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                                 >> 0x12U)) 
                                                             | ((0x10U 
                                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                                    >> 0x13U)) 
                                                                | ((8U 
                                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                       >> 0x14U)) 
                                                                   | ((4U 
                                                                       & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                          >> 0x15U)) 
                                                                      | ((2U 
                                                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                             >> 0x16U)) 
                                                                         | (1U 
                                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                               >> 0x17U))))))))))));
    __Vtemp_510[0xeU] = ((0x200000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                       >> 3U)) | ((0x100000U 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                      >> 4U)) 
                                                  | ((0x80000U 
                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                         >> 5U)) 
                                                     | ((0x40000U 
                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                            >> 6U)) 
                                                        | ((0x20000U 
                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                               >> 7U)) 
                                                           | ((0x10000U 
                                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  >> 8U)) 
                                                              | ((0x8000U 
                                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     >> 9U)) 
                                                                 | ((0x4000U 
                                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                        >> 0xaU)) 
                                                                    | ((0x2000U 
                                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           >> 0xbU)) 
                                                                       | ((0x1000U 
                                                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                              >> 0xcU)) 
                                                                          | ((0x800U 
                                                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xdU)) 
                                                                             | __Vtemp_499[0xeU])))))))))));
    __Vtemp_531[0xfU] = ((0x400U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                    >> 0xfU)) | ((0x200U 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                     >> 0x10U)) 
                                                 | ((0x100U 
                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                        >> 0x11U)) 
                                                    | ((0x80U 
                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                           >> 0x12U)) 
                                                       | ((0x40U 
                                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                              >> 0x13U)) 
                                                          | ((0x20U 
                                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                 >> 0x14U)) 
                                                             | ((0x10U 
                                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                    >> 0x15U)) 
                                                                | ((8U 
                                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                       >> 0x16U)) 
                                                                   | ((4U 
                                                                       & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                          >> 0x17U)) 
                                                                      | ((2U 
                                                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                             >> 0x18U)) 
                                                                         | (1U 
                                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                               >> 0x19U))))))))))));
    __Vtemp_542[0xfU] = ((0x200000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                       >> 5U)) | ((0x100000U 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                      >> 6U)) 
                                                  | ((0x80000U 
                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                         >> 7U)) 
                                                     | ((0x40000U 
                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                            >> 8U)) 
                                                        | ((0x20000U 
                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                               >> 9U)) 
                                                           | ((0x10000U 
                                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  >> 0xaU)) 
                                                              | ((0x8000U 
                                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     >> 0xbU)) 
                                                                 | ((0x4000U 
                                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                        >> 0xcU)) 
                                                                    | ((0x2000U 
                                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           >> 0xcU)) 
                                                                       | ((0x1000U 
                                                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                                              >> 0xdU)) 
                                                                          | ((0x800U 
                                                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xeU)) 
                                                                             | __Vtemp_531[0xfU])))))))))));
    __Vtemp_563[0x10U] = ((0x400U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                     >> 0x11U)) | (
                                                   (0x200U 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                       >> 0x12U)) 
                                                   | ((0x100U 
                                                       & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                          >> 0x13U)) 
                                                      | ((0x80U 
                                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                             >> 0x14U)) 
                                                         | ((0x40U 
                                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                >> 0x15U)) 
                                                            | ((0x20U 
                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                   >> 0x16U)) 
                                                               | ((0x10U 
                                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                      >> 0x17U)) 
                                                                  | ((8U 
                                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                         >> 0x18U)) 
                                                                     | ((4U 
                                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                            >> 0x19U)) 
                                                                        | ((2U 
                                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                               >> 0x1aU)) 
                                                                           | (1U 
                                                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0x1aU))))))))))));
    __Vtemp_574[0x10U] = ((0x200000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                        >> 7U)) | (
                                                   (0x100000U 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                       >> 8U)) 
                                                   | ((0x80000U 
                                                       & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                          >> 8U)) 
                                                      | ((0x40000U 
                                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                             >> 9U)) 
                                                         | ((0x20000U 
                                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                                >> 0xaU)) 
                                                            | ((0x10000U 
                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                                   >> 0xbU)) 
                                                               | ((0x8000U 
                                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                      >> 0xcU)) 
                                                                  | ((0x4000U 
                                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                         >> 0xdU)) 
                                                                     | ((0x2000U 
                                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                            >> 0xeU)) 
                                                                        | ((0x1000U 
                                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                               >> 0xfU)) 
                                                                           | ((0x800U 
                                                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0x10U)) 
                                                                              | __Vtemp_563[0x10U])))))))))));
    __Vtemp_595[0x11U] = ((0x400U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                     >> 0x13U)) | (
                                                   (0x200U 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                       >> 0x14U)) 
                                                   | ((0x100U 
                                                       & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                          >> 0x15U)) 
                                                      | ((0x80U 
                                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                             >> 0x16U)) 
                                                         | ((0x40U 
                                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                                >> 0x16U)) 
                                                            | ((0x20U 
                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                                   >> 0x17U)) 
                                                               | ((0x10U 
                                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                                      >> 0x18U)) 
                                                                  | ((8U 
                                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                                         >> 0x19U)) 
                                                                     | ((4U 
                                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                            >> 0x1aU)) 
                                                                        | ((2U 
                                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                               >> 0x1bU)) 
                                                                           | (1U 
                                                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0x1cU))))))))))));
    __Vtemp_606[0x11U] = ((0x200000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                        >> 8U)) | (
                                                   (0x100000U 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                       >> 9U)) 
                                                   | ((0x80000U 
                                                       & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                          >> 0xaU)) 
                                                      | ((0x40000U 
                                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                             >> 0xbU)) 
                                                         | ((0x20000U 
                                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                >> 0xcU)) 
                                                            | ((0x10000U 
                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                   >> 0xdU)) 
                                                               | ((0x8000U 
                                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                      >> 0xeU)) 
                                                                  | ((0x4000U 
                                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                         >> 0xfU)) 
                                                                     | ((0x2000U 
                                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                            >> 0x10U)) 
                                                                        | ((0x1000U 
                                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                               >> 0x11U)) 
                                                                           | ((0x800U 
                                                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0x12U)) 
                                                                              | __Vtemp_595[0x11U])))))))))));
    __Vtemp_627[0x12U] = ((0x400U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                     >> 0x14U)) | (
                                                   (0x200U 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                       >> 0x15U)) 
                                                   | ((0x100U 
                                                       & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                          >> 0x16U)) 
                                                      | ((0x80U 
                                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                             >> 0x17U)) 
                                                         | ((0x40U 
                                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                >> 0x18U)) 
                                                            | ((0x20U 
                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                   >> 0x19U)) 
                                                               | ((0x10U 
                                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                      >> 0x1aU)) 
                                                                  | ((8U 
                                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                         >> 0x1bU)) 
                                                                     | ((4U 
                                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                            >> 0x1cU)) 
                                                                        | ((2U 
                                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                               >> 0x1dU)) 
                                                                           | (1U 
                                                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0x1eU))))))))))));
    __Vtemp_638[0x12U] = ((0x200000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                        >> 0xaU)) | 
                          ((0x100000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                         >> 0xbU)) 
                           | ((0x80000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                           >> 0xcU)) 
                              | ((0x40000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                              >> 0xdU)) 
                                 | ((0x20000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                 >> 0xeU)) 
                                    | ((0x10000U & 
                                        (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                         >> 0xfU)) 
                                       | ((0x8000U 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                              >> 0x10U)) 
                                          | ((0x4000U 
                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                 >> 0x11U)) 
                                             | ((0x2000U 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                    >> 0x12U)) 
                                                | ((0x1000U 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                       >> 0x12U)) 
                                                   | ((0x800U 
                                                       & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                          >> 0x13U)) 
                                                      | __Vtemp_627[0x12U])))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__out_valid[0U] 
        = __Vtemp_105[0U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__out_valid[1U] 
        = __Vtemp_105[1U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__out_valid[2U] 
        = ((0x80000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                           << 0x1aU)) | ((0x40000000U 
                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                             << 0x1aU)) 
                                         | ((0x20000000U 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                << 0x19U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                   << 0x18U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                      << 0x17U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                         << 0x16U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                            << 0x15U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                               << 0x14U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  << 0x13U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     << 0x12U)) 
                                                                 | __Vtemp_126[2U]))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__out_valid[3U] 
        = ((0x80000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                           << 0x19U)) | ((0x40000000U 
                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                             << 0x18U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                << 0x17U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                   << 0x16U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                      << 0x15U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                         << 0x14U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                            << 0x13U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                               << 0x12U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  << 0x11U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     << 0x10U)) 
                                                                 | __Vtemp_158[3U]))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__out_valid[4U] 
        = ((0x80000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                           << 0x17U)) | ((0x40000000U 
                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                             << 0x16U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                << 0x15U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                   << 0x14U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                      << 0x13U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                         << 0x12U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                            << 0x11U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                               << 0x10U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  << 0x10U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     << 0xfU)) 
                                                                 | __Vtemp_190[4U]))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__out_valid[5U] 
        = ((0x80000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                           << 0x15U)) | ((0x40000000U 
                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                             << 0x14U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                << 0x14U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                   << 0x13U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                      << 0x12U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                         << 0x11U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                            << 0x10U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                               << 0xfU)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  << 0xeU)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     << 0xdU)) 
                                                                 | __Vtemp_222[5U]))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__out_valid[6U] 
        = ((0x80000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                           << 0x14U)) | ((0x40000000U 
                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                             << 0x13U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                << 0x12U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                   << 0x11U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                      << 0x10U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                         << 0xfU)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                            << 0xeU)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                               << 0xdU)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  << 0xcU)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     << 0xbU)) 
                                                                 | __Vtemp_254[6U]))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__out_valid[7U] 
        = ((0x80000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                           << 0x12U)) | ((0x40000000U 
                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                             << 0x11U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                << 0x10U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                   << 0xfU)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                      << 0xeU)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                         << 0xdU)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                            << 0xcU)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                               << 0xbU)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  << 0xaU)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     << 0xaU)) 
                                                                 | __Vtemp_286[7U]))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__out_valid[8U] 
        = ((0x80000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                           << 0x10U)) | ((0x40000000U 
                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                             << 0xfU)) 
                                         | ((0x20000000U 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                << 0xeU)) 
                                            | ((0x10000000U 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                   << 0xeU)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                      << 0xdU)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                         << 0xcU)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                            << 0xbU)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                               << 0xaU)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  << 9U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     << 8U)) 
                                                                 | __Vtemp_318[8U]))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__out_valid[9U] 
        = ((0x80000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                           << 0xfU)) | ((0x40000000U 
                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                            << 0xeU)) 
                                        | ((0x20000000U 
                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                               << 0xdU)) 
                                           | ((0x10000000U 
                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                  << 0xcU)) 
                                              | ((0x8000000U 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                     << 0xbU)) 
                                                 | ((0x4000000U 
                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                        << 0xaU)) 
                                                    | ((0x2000000U 
                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                           << 9U)) 
                                                       | ((0x1000000U 
                                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                              << 8U)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                 << 7U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                    << 6U)) 
                                                                | __Vtemp_350[9U]))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__out_valid[0xaU] 
        = ((0x80000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                           << 0xdU)) | ((0x40000000U 
                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                            << 0xcU)) 
                                        | ((0x20000000U 
                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                               << 0xbU)) 
                                           | ((0x10000000U 
                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                  << 0xaU)) 
                                              | ((0x8000000U 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                     << 9U)) 
                                                 | ((0x4000000U 
                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                        << 8U)) 
                                                    | ((0x2000000U 
                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                           << 7U)) 
                                                       | ((0x1000000U 
                                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                              << 6U)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                 << 5U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                    << 4U)) 
                                                                | __Vtemp_382[0xaU]))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__out_valid[0xbU] 
        = ((0x80000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                           << 0xbU)) | ((0x40000000U 
                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                            << 0xaU)) 
                                        | ((0x20000000U 
                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                               << 9U)) 
                                           | ((0x10000000U 
                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                  << 8U)) 
                                              | ((0x8000000U 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                     << 8U)) 
                                                 | ((0x4000000U 
                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                        << 7U)) 
                                                    | ((0x2000000U 
                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                           << 6U)) 
                                                       | ((0x1000000U 
                                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                              << 5U)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                 << 4U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                    << 3U)) 
                                                                | __Vtemp_414[0xbU]))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__out_valid[0xcU] 
        = ((0x80000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                           << 0xaU)) | ((0x40000000U 
                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                            << 9U)) 
                                        | ((0x20000000U 
                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                               << 8U)) 
                                           | ((0x10000000U 
                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                  << 7U)) 
                                              | ((0x8000000U 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                     << 6U)) 
                                                 | ((0x4000000U 
                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                        << 5U)) 
                                                    | ((0x2000000U 
                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                           << 4U)) 
                                                       | ((0x1000000U 
                                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                              << 3U)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                 << 2U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                    << 1U)) 
                                                                | __Vtemp_446[0xcU]))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__out_valid[0xdU] 
        = ((0x80000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                           << 8U)) | ((0x40000000U 
                                       & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                          << 7U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                           << 6U)) 
                                       | ((0x10000000U 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                              << 5U)) 
                                          | ((0x8000000U 
                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                 << 4U)) 
                                             | ((0x4000000U 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                    << 3U)) 
                                                | ((0x2000000U 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                       << 2U)) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                          << 1U)) 
                                                      | ((0x800000U 
                                                          & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o) 
                                                         | ((0x400000U 
                                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                >> 1U)) 
                                                            | __Vtemp_478[0xdU]))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__out_valid[0xeU] 
        = ((0x80000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                           << 6U)) | ((0x40000000U 
                                       & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                          << 5U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                           << 4U)) 
                                       | ((0x10000000U 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                              << 3U)) 
                                          | ((0x8000000U 
                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                 << 2U)) 
                                             | ((0x4000000U 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                    << 2U)) 
                                                | ((0x2000000U 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                       << 1U)) 
                                                   | ((0x1000000U 
                                                       & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o) 
                                                      | ((0x800000U 
                                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                             >> 1U)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                >> 2U)) 
                                                            | __Vtemp_510[0xeU]))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__out_valid[0xfU] 
        = ((0x80000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                           << 5U)) | ((0x40000000U 
                                       & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                          << 4U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                           << 3U)) 
                                       | ((0x10000000U 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                              << 2U)) 
                                          | ((0x8000000U 
                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                 << 1U)) 
                                             | ((0x4000000U 
                                                 & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o) 
                                                | ((0x2000000U 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                       >> 1U)) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                          >> 2U)) 
                                                      | ((0x800000U 
                                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                             >> 3U)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                >> 4U)) 
                                                            | __Vtemp_542[0xfU]))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__out_valid[0x10U] 
        = ((0x80000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                           << 3U)) | ((0x40000000U 
                                       & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                          << 2U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                           << 1U)) 
                                       | ((0x10000000U 
                                           & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o) 
                                          | ((0x8000000U 
                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                 >> 1U)) 
                                             | ((0x4000000U 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                    >> 2U)) 
                                                | ((0x2000000U 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                       >> 3U)) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                          >> 4U)) 
                                                      | ((0x800000U 
                                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                             >> 5U)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                >> 6U)) 
                                                            | __Vtemp_574[0x10U]))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__out_valid[0x11U] 
        = ((0x80000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                           << 1U)) | ((0x40000000U 
                                       & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o) 
                                      | ((0x20000000U 
                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                             >> 1U)) 
                                         | ((0x10000000U 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                >> 2U)) 
                                            | ((0x8000000U 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                   >> 3U)) 
                                               | ((0x4000000U 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                      >> 4U)) 
                                                  | ((0x2000000U 
                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                         >> 4U)) 
                                                     | ((0x1000000U 
                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                            >> 5U)) 
                                                        | ((0x800000U 
                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                               >> 6U)) 
                                                           | ((0x400000U 
                                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  >> 7U)) 
                                                              | __Vtemp_606[0x11U]))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__out_valid[0x12U] 
        = ((0x80000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o) 
           | ((0x40000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                              >> 1U)) | ((0x20000000U 
                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                             >> 2U)) 
                                         | ((0x10000000U 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                >> 3U)) 
                                            | ((0x8000000U 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                   >> 4U)) 
                                               | ((0x4000000U 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                      >> 5U)) 
                                                  | ((0x2000000U 
                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                         >> 6U)) 
                                                     | ((0x1000000U 
                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                            >> 7U)) 
                                                        | ((0x800000U 
                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                               >> 8U)) 
                                                           | ((0x400000U 
                                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  >> 9U)) 
                                                              | __Vtemp_638[0x12U]))))))))));
}

void Vtestharness___024root___eval_triggers__act(Vtestharness___024root* vlSelf);
void Vtestharness___024root___eval_act(Vtestharness___024root* vlSelf);

bool Vtestharness___024root___eval_phase__act(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<596> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtestharness___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtestharness___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtestharness___024root___eval_nba(Vtestharness___024root* vlSelf);

bool Vtestharness___024root___eval_phase__nba(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtestharness___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestharness___024root___dump_triggers__nba(Vtestharness___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestharness___024root___dump_triggers__act(Vtestharness___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestharness___024root___eval(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtestharness___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/workspaces/snax_cluster/target/snitch_cluster/test/testharness.sv", 7, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtestharness___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/workspaces/snax_cluster/target/snitch_cluster/test/testharness.sv", 7, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtestharness___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtestharness___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtestharness___024root___eval_debug_assertions(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
}
#endif  // VL_DEBUG
