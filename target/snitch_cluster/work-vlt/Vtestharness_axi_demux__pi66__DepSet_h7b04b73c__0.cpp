// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_axi_demux__pi66.h"

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__4(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__4\n"); );
    // Body
    vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_core__axi_req_o[5U] 
           & (IData)(vlSelf->__PVT__slv_aw_ready_chan));
    vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_core__axi_req_o[5U] 
           & (IData)(vlSelf->__PVT__slv_aw_ready_sel));
    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_core__axi_req_o[2U] 
            >> 0x14U) & (IData)(vlSelf->__Vcellout__i_w_spill_reg__ready_o));
    vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_core__axi_req_o[0U] 
            >> 1U) & (IData)(vlSelf->__PVT__slv_ar_ready_chan));
    vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_core__axi_req_o[0U] 
            >> 1U) & (IData)(vlSelf->__PVT__slv_ar_ready_sel));
    vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_core__axi_req_o[2U] 
               >> 0x13U)) & (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_core__axi_req_o[2U] 
              >> 0x13U));
    vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_core__axi_req_o[0U]) 
           & (IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_core__axi_req_o[0U]);
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__7(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__7\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_down = 0U;
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (0U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_down 
            = (1U & (IData)(((0x900000U == (0x900000U 
                                            & vlSelf->__PVT__slv_req_cut[2U])) 
                             & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[2U] 
                                >> 0xfU))));
    }
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (1U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_down 
            = (1U & (IData)(((0x900000U == (0x900000U 
                                            & vlSelf->__PVT__slv_req_cut[2U])) 
                             & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[5U] 
                                >> 1U))));
    }
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (2U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_down 
            = (1U & (IData)(((0x900000U == (0x900000U 
                                            & vlSelf->__PVT__slv_req_cut[2U])) 
                             & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[7U] 
                                >> 0x13U))));
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((8U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[0xaU] 
                      >> 1U)) | ((4U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[7U] 
                                        >> 0x10U)) 
                                 | ((2U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[5U] 
                                           << 1U)) 
                                    | (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[2U] 
                                             >> 0xeU))))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((8U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[9U] 
                      >> 0x1aU)) | ((4U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[7U] 
                                           >> 9U)) 
                                    | ((2U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[4U] 
                                              >> 0x18U)) 
                                       | (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[2U] 
                                                >> 7U))))));
    vlSelf->__PVT__slv_resp_cut[2U] = (0x37fffU & vlSelf->__PVT__slv_resp_cut[2U]);
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (0U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->__PVT__slv_resp_cut[2U] = ((0x37fffU 
                                            & vlSelf->__PVT__slv_resp_cut[2U]) 
                                           | (0x8000U 
                                              & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[2U]));
    }
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (1U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->__PVT__slv_resp_cut[2U] = ((0x37fffU 
                                            & vlSelf->__PVT__slv_resp_cut[2U]) 
                                           | (0x8000U 
                                              & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[5U] 
                                                 << 0xeU)));
    }
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (2U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->__PVT__slv_resp_cut[2U] = ((0x37fffU 
                                            & vlSelf->__PVT__slv_resp_cut[2U]) 
                                           | (0x8000U 
                                              & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[7U] 
                                                 >> 4U)));
    }
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (3U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_down 
            = (1U & (IData)(((0x900000U == (0x900000U 
                                            & vlSelf->__PVT__slv_req_cut[2U])) 
                             & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[0xaU] 
                                >> 5U))));
        vlSelf->__PVT__slv_resp_cut[2U] = ((0x37fffU 
                                            & vlSelf->__PVT__slv_resp_cut[2U]) 
                                           | (0x8000U 
                                              & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[0xaU] 
                                                 << 0xaU)));
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_ready 
        = ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_valid) 
           & ((0x147U >= ((IData)(0x50U) + (0x1ffU 
                                            & ((IData)(0x52U) 
                                               * (IData)(vlSelf->__PVT__slv_ar_select))))) 
              && (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[
                        (((IData)(0x50U) + (0x1ffU 
                                            & ((IData)(0x52U) 
                                               * (IData)(vlSelf->__PVT__slv_ar_select)))) 
                         >> 5U)] >> (0x1fU & ((IData)(0x50U) 
                                              + (0x1ffU 
                                                 & ((IData)(0x52U) 
                                                    * (IData)(vlSelf->__PVT__slv_ar_select)))))))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_ready 
        = ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_valid) 
           & ((0x147U >= ((IData)(0x51U) + (0x1ffU 
                                            & ((IData)(0x52U) 
                                               * (IData)(vlSelf->__PVT__slv_aw_select))))) 
              && (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[
                        (((IData)(0x51U) + (0x1ffU 
                                            & ((IData)(0x52U) 
                                               * (IData)(vlSelf->__PVT__slv_aw_select)))) 
                         >> 5U)] >> (0x1fU & ((IData)(0x51U) 
                                              + (0x1ffU 
                                                 & ((IData)(0x52U) 
                                                    * (IData)(vlSelf->__PVT__slv_aw_select)))))))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q;
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_down) 
         ^ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_d 
            = (7U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_down)
                      ? ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)) : ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))));
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U)) | (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d) 
                                 >> 3U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffff8U & (((3U <= (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                            << 3U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffcU & (((2U <= (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                               << 2U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))) 
              | ((0xfffffffeU & (((1U <= (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                                  << 1U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))) 
                 | (1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffffff8U & (((3U > (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                            << 3U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffcU & (((2U > (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                               << 2U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))) 
              | (0xfffffffeU & (((1U > (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                                 << 1U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U)) | (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d) 
                                 >> 3U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffff8U & (((3U <= (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                            << 3U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffcU & (((2U <= (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                               << 2U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))) 
              | ((0xfffffffeU & (((1U <= (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                                  << 1U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))) 
                 | (1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffffff8U & (((3U > (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                            << 3U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffcU & (((2U > (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                               << 2U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))) 
              | (0xfffffffeU & (((1U > (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                                 << 1U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_d 
        = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_q;
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__load_ar_lock = 0U;
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_push = 0U;
    vlSelf->__PVT__slv_resp_cut[2U] = (0x2ffffU & vlSelf->__PVT__slv_resp_cut[2U]);
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_q) {
        if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_ready) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_d = 0U;
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__load_ar_lock = 1U;
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_push = 1U;
            vlSelf->__PVT__slv_resp_cut[2U] = (0x10000U 
                                               | vlSelf->__PVT__slv_resp_cut[2U]);
        }
    } else if ((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__cnt_full)))))) {
        if ((1U & ((vlSelf->__PVT__slv_req_cut[0U] 
                    >> 1U) & ((~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_select_occupied)) 
                              | ((IData)(vlSelf->__PVT__slv_ar_select) 
                                 == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lookup_ar_select)))))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_ready)))) {
                vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_d = 1U;
                vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__load_ar_lock = 1U;
            }
            if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_ready) {
                vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_push = 1U;
                vlSelf->__PVT__slv_resp_cut[2U] = (0x10000U 
                                                   | vlSelf->__PVT__slv_resp_cut[2U]);
            }
        }
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_d 
        = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q;
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__load_aw_lock = 0U;
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__atop_inject = 0U;
    vlSelf->__PVT__slv_resp_cut[2U] = (0x1ffffU & vlSelf->__PVT__slv_resp_cut[2U]);
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q) {
        if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_ready) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_d = 0U;
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__load_aw_lock = 1U;
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__atop_inject 
                = (1U & (vlSelf->__PVT__slv_req_cut[5U] 
                         >> 8U));
            vlSelf->__PVT__slv_resp_cut[2U] = (0x20000U 
                                               | vlSelf->__PVT__slv_resp_cut[2U]);
        }
    } else if ((((~ (IData)((0U != (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__cnt_full)))) 
                 & (3U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q)))) 
                & (~ ((0U != (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__cnt_full)) 
                      & (vlSelf->__PVT__slv_req_cut[5U] 
                         >> 8U))))) {
        if (((vlSelf->__PVT__slv_req_cut[5U] & ((0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))) 
                                                | ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select) 
                                                   == (IData)(vlSelf->__PVT__slv_aw_select)))) 
             & ((~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_select_occupied)) 
                | ((IData)(vlSelf->__PVT__slv_aw_select) 
                   == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lookup_aw_select))))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_ready)))) {
                vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_d = 1U;
                vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__load_aw_lock = 1U;
            }
            if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_ready) {
                vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__atop_inject 
                    = (1U & (vlSelf->__PVT__slv_req_cut[5U] 
                             >> 8U));
                vlSelf->__PVT__slv_resp_cut[2U] = (0x20000U 
                                                   | vlSelf->__PVT__slv_resp_cut[2U]);
            }
        }
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en 
        = ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_push)
            ? (0xfU & ((IData)(1U) << (3U & (vlSelf->__Vcellout__i_ar_spill_reg__data_o[2U] 
                                             >> 0xfU))))
            : 0U);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en 
        = ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__atop_inject)
            ? (0xfU & ((IData)(1U) << (3U & (vlSelf->__Vcellout__i_aw_spill_reg__data_o[2U] 
                                             >> 0x15U))))
            : 0U);
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__8(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__8\n"); );
    // Body
    if ((0x4000U & vlSelf->__PVT__slv_resp_cut[2U])) {
        vlSelf->__PVT__slv_resp_cut[2U] = ((0x3cfffU 
                                            & vlSelf->__PVT__slv_resp_cut[2U]) 
                                           | (0x3ffffU 
                                              & (((0x147U 
                                                   >= 
                                                   ((IData)(0x4cU) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x52U) 
                                                        * 
                                                        (3U 
                                                         & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))))
                                                   ? 
                                                  (3U 
                                                   & (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x4cU) 
                                                            + 
                                                            (0x1ffU 
                                                             & ((IData)(0x52U) 
                                                                * 
                                                                (3U 
                                                                 & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                        ? 0U
                                                        : 
                                                       (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[
                                                        (((IData)(0x4dU) 
                                                          + 
                                                          (0x1ffU 
                                                           & ((IData)(0x52U) 
                                                              * 
                                                              (3U 
                                                               & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x4cU) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                      | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[
                                                         (((IData)(0x4cU) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x52U) 
                                                               * 
                                                               (3U 
                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x4cU) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes)))))))))
                                                   : 0U) 
                                                 << 0xcU)));
        vlSelf->__PVT__slv_resp_cut[2U] = ((0x3f3ffU 
                                            & vlSelf->__PVT__slv_resp_cut[2U]) 
                                           | (0x3ffffU 
                                              & (((0x147U 
                                                   >= 
                                                   ((IData)(0x4aU) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x52U) 
                                                        * 
                                                        (3U 
                                                         & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))))
                                                   ? 
                                                  (3U 
                                                   & (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x4aU) 
                                                            + 
                                                            (0x1ffU 
                                                             & ((IData)(0x52U) 
                                                                * 
                                                                (3U 
                                                                 & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                        ? 0U
                                                        : 
                                                       (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[
                                                        (((IData)(0x4bU) 
                                                          + 
                                                          (0x1ffU 
                                                           & ((IData)(0x52U) 
                                                              * 
                                                              (3U 
                                                               & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x4aU) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                      | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[
                                                         (((IData)(0x4aU) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x52U) 
                                                               * 
                                                               (3U 
                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x4aU) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes)))))))))
                                                   : 0U) 
                                                 << 0xaU)));
        vlSelf->__PVT__slv_resp_cut[2U] = ((0x3fcffU 
                                            & vlSelf->__PVT__slv_resp_cut[2U]) 
                                           | (0x3ffffU 
                                              & (((0x147U 
                                                   >= 
                                                   ((IData)(0x48U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x52U) 
                                                        * 
                                                        (3U 
                                                         & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))))
                                                   ? 
                                                  (3U 
                                                   & (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x48U) 
                                                            + 
                                                            (0x1ffU 
                                                             & ((IData)(0x52U) 
                                                                * 
                                                                (3U 
                                                                 & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                        ? 0U
                                                        : 
                                                       (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[
                                                        (((IData)(0x49U) 
                                                          + 
                                                          (0x1ffU 
                                                           & ((IData)(0x52U) 
                                                              * 
                                                              (3U 
                                                               & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x48U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                      | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[
                                                         (((IData)(0x48U) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x52U) 
                                                               * 
                                                               (3U 
                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x48U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes)))))))))
                                                   : 0U) 
                                                 << 8U)));
    } else {
        vlSelf->__PVT__slv_resp_cut[2U] = (0x3c0ffU 
                                           & vlSelf->__PVT__slv_resp_cut[2U]);
    }
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__9(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__9\n"); );
    // Body
    if ((0x80U & vlSelf->__PVT__slv_resp_cut[2U])) {
        vlSelf->__PVT__slv_resp_cut[2U] = ((0x3ff9fU 
                                            & vlSelf->__PVT__slv_resp_cut[2U]) 
                                           | (0x3ffffU 
                                              & (((0x147U 
                                                   >= 
                                                   ((IData)(0x45U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x52U) 
                                                        * 
                                                        (3U 
                                                         & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))
                                                   ? 
                                                  (3U 
                                                   & (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x45U) 
                                                            + 
                                                            (0x1ffU 
                                                             & ((IData)(0x52U) 
                                                                * 
                                                                (3U 
                                                                 & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                        ? 0U
                                                        : 
                                                       (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[
                                                        (((IData)(0x46U) 
                                                          + 
                                                          (0x1ffU 
                                                           & ((IData)(0x52U) 
                                                              * 
                                                              (3U 
                                                               & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x45U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                      | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[
                                                         (((IData)(0x45U) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x52U) 
                                                               * 
                                                               (3U 
                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x45U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))))
                                                   : 0U) 
                                                 << 5U)));
        vlSelf->__PVT__slv_resp_cut[0U] = ((0x1fU & 
                                            vlSelf->__PVT__slv_resp_cut[0U]) 
                                           | ((IData)(
                                                      ((0x147U 
                                                        >= 
                                                        ((IData)(5U) 
                                                         + 
                                                         (0x1ffU 
                                                          & ((IData)(0x52U) 
                                                             * 
                                                             (3U 
                                                              & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[
                                                                         (((IData)(0x44U) 
                                                                           + 
                                                                           (0x1ffU 
                                                                            & ((IData)(0x52U) 
                                                                               * 
                                                                               (3U 
                                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((0U 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(5U) 
                                                               + 
                                                               (0x1ffU 
                                                                & ((IData)(0x52U) 
                                                                   * 
                                                                   (3U 
                                                                    & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                           ? 0x20U
                                                           : 
                                                          ((IData)(0x40U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(5U) 
                                                               + 
                                                               (0x1ffU 
                                                                & ((IData)(0x52U) 
                                                                   * 
                                                                   (3U 
                                                                    & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                        | (((0U 
                                                             == 
                                                             (0x1fU 
                                                              & ((IData)(5U) 
                                                                 + 
                                                                 (0x1ffU 
                                                                  & ((IData)(0x52U) 
                                                                     * 
                                                                     (3U 
                                                                      & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                             ? 0ULL
                                                             : 
                                                            ((QData)((IData)(
                                                                             vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[
                                                                             (((IData)(0x24U) 
                                                                               + 
                                                                               (0x1ffU 
                                                                                & ((IData)(0x52U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                              >> 5U)])) 
                                                             << 
                                                             ((IData)(0x20U) 
                                                              - 
                                                              (0x1fU 
                                                               & ((IData)(5U) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & ((IData)(0x52U) 
                                                                      * 
                                                                      (3U 
                                                                       & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[
                                                                              (((IData)(5U) 
                                                                                + 
                                                                                (0x1ffU 
                                                                                & ((IData)(0x52U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                               >> 5U)])) 
                                                              >> 
                                                              (0x1fU 
                                                               & ((IData)(5U) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & ((IData)(0x52U) 
                                                                      * 
                                                                      (3U 
                                                                       & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))))
                                                        : 0ULL)) 
                                              << 5U));
        vlSelf->__PVT__slv_resp_cut[1U] = (((IData)(
                                                    ((0x147U 
                                                      >= 
                                                      ((IData)(5U) 
                                                       + 
                                                       (0x1ffU 
                                                        & ((IData)(0x52U) 
                                                           * 
                                                           (3U 
                                                            & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[
                                                                       (((IData)(0x44U) 
                                                                         + 
                                                                         (0x1ffU 
                                                                          & ((IData)(0x52U) 
                                                                             * 
                                                                             (3U 
                                                                              & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(5U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                         ? 0x20U
                                                         : 
                                                        ((IData)(0x40U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(5U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                      | (((0U 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(5U) 
                                                               + 
                                                               (0x1ffU 
                                                                & ((IData)(0x52U) 
                                                                   * 
                                                                   (3U 
                                                                    & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                           ? 0ULL
                                                           : 
                                                          ((QData)((IData)(
                                                                           vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[
                                                                           (((IData)(0x24U) 
                                                                             + 
                                                                             (0x1ffU 
                                                                              & ((IData)(0x52U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                            >> 5U)])) 
                                                           << 
                                                           ((IData)(0x20U) 
                                                            - 
                                                            (0x1fU 
                                                             & ((IData)(5U) 
                                                                + 
                                                                (0x1ffU 
                                                                 & ((IData)(0x52U) 
                                                                    * 
                                                                    (3U 
                                                                     & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                         | ((QData)((IData)(
                                                                            vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[
                                                                            (((IData)(5U) 
                                                                              + 
                                                                              (0x1ffU 
                                                                               & ((IData)(0x52U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                             >> 5U)])) 
                                                            >> 
                                                            (0x1fU 
                                                             & ((IData)(5U) 
                                                                + 
                                                                (0x1ffU 
                                                                 & ((IData)(0x52U) 
                                                                    * 
                                                                    (3U 
                                                                     & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))))
                                                      : 0ULL)) 
                                            >> 0x1bU) 
                                           | ((IData)(
                                                      (((0x147U 
                                                         >= 
                                                         ((IData)(5U) 
                                                          + 
                                                          (0x1ffU 
                                                           & ((IData)(0x52U) 
                                                              * 
                                                              (3U 
                                                               & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[
                                                                          (((IData)(0x44U) 
                                                                            + 
                                                                            (0x1ffU 
                                                                             & ((IData)(0x52U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                           >> 5U)])) 
                                                          << 
                                                          ((0U 
                                                            == 
                                                            (0x1fU 
                                                             & ((IData)(5U) 
                                                                + 
                                                                (0x1ffU 
                                                                 & ((IData)(0x52U) 
                                                                    * 
                                                                    (3U 
                                                                     & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                            ? 0x20U
                                                            : 
                                                           ((IData)(0x40U) 
                                                            - 
                                                            (0x1fU 
                                                             & ((IData)(5U) 
                                                                + 
                                                                (0x1ffU 
                                                                 & ((IData)(0x52U) 
                                                                    * 
                                                                    (3U 
                                                                     & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                         | (((0U 
                                                              == 
                                                              (0x1fU 
                                                               & ((IData)(5U) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & ((IData)(0x52U) 
                                                                      * 
                                                                      (3U 
                                                                       & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                              ? 0ULL
                                                              : 
                                                             ((QData)((IData)(
                                                                              vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[
                                                                              (((IData)(0x24U) 
                                                                                + 
                                                                                (0x1ffU 
                                                                                & ((IData)(0x52U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                               >> 5U)])) 
                                                              << 
                                                              ((IData)(0x20U) 
                                                               - 
                                                               (0x1fU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (0x1ffU 
                                                                    & ((IData)(0x52U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                            | ((QData)((IData)(
                                                                               vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[
                                                                               (((IData)(5U) 
                                                                                + 
                                                                                (0x1ffU 
                                                                                & ((IData)(0x52U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                                >> 5U)])) 
                                                               >> 
                                                               (0x1fU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (0x1ffU 
                                                                    & ((IData)(0x52U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))))
                                                         : 0ULL) 
                                                       >> 0x20U)) 
                                              << 5U));
        vlSelf->__PVT__slv_resp_cut[2U] = ((0x3ffe0U 
                                            & vlSelf->__PVT__slv_resp_cut[2U]) 
                                           | (0x3ffffU 
                                              & ((IData)(
                                                         (((0x147U 
                                                            >= 
                                                            ((IData)(5U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))
                                                            ? 
                                                           (((QData)((IData)(
                                                                             vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[
                                                                             (((IData)(0x44U) 
                                                                               + 
                                                                               (0x1ffU 
                                                                                & ((IData)(0x52U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                              >> 5U)])) 
                                                             << 
                                                             ((0U 
                                                               == 
                                                               (0x1fU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (0x1ffU 
                                                                    & ((IData)(0x52U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                               ? 0x20U
                                                               : 
                                                              ((IData)(0x40U) 
                                                               - 
                                                               (0x1fU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (0x1ffU 
                                                                    & ((IData)(0x52U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                            | (((0U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (0x1ffU 
                                                                      & ((IData)(0x52U) 
                                                                         * 
                                                                         (3U 
                                                                          & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                                 ? 0ULL
                                                                 : 
                                                                ((QData)((IData)(
                                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[
                                                                                (((IData)(0x24U) 
                                                                                + 
                                                                                (0x1ffU 
                                                                                & ((IData)(0x52U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                                >> 5U)])) 
                                                                 << 
                                                                 ((IData)(0x20U) 
                                                                  - 
                                                                  (0x1fU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (0x1ffU 
                                                                       & ((IData)(0x52U) 
                                                                          * 
                                                                          (3U 
                                                                           & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                               | ((QData)((IData)(
                                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[
                                                                                (((IData)(5U) 
                                                                                + 
                                                                                (0x1ffU 
                                                                                & ((IData)(0x52U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                                >> 5U)])) 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (0x1ffU 
                                                                       & ((IData)(0x52U) 
                                                                          * 
                                                                          (3U 
                                                                           & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))))
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 >> 0x1bU)));
        vlSelf->__PVT__slv_resp_cut[0U] = ((0xffffffe7U 
                                            & vlSelf->__PVT__slv_resp_cut[0U]) 
                                           | (((0x147U 
                                                >= 
                                                ((IData)(3U) 
                                                 + 
                                                 (0x1ffU 
                                                  & ((IData)(0x52U) 
                                                     * 
                                                     (3U 
                                                      & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))
                                                ? (3U 
                                                   & (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(3U) 
                                                            + 
                                                            (0x1ffU 
                                                             & ((IData)(0x52U) 
                                                                * 
                                                                (3U 
                                                                 & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                        ? 0U
                                                        : 
                                                       (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[
                                                        (((IData)(4U) 
                                                          + 
                                                          (0x1ffU 
                                                           & ((IData)(0x52U) 
                                                              * 
                                                              (3U 
                                                               & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(3U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                      | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[
                                                         (((IData)(3U) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x52U) 
                                                               * 
                                                               (3U 
                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(3U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))))
                                                : 0U) 
                                              << 3U));
        vlSelf->__PVT__slv_resp_cut[0U] = ((0xfffffffbU 
                                            & vlSelf->__PVT__slv_resp_cut[0U]) 
                                           | (((0x147U 
                                                >= 
                                                ((IData)(2U) 
                                                 + 
                                                 (0x1ffU 
                                                  & ((IData)(0x52U) 
                                                     * 
                                                     (3U 
                                                      & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))) 
                                               && (1U 
                                                   & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[
                                                      (((IData)(2U) 
                                                        + 
                                                        (0x1ffU 
                                                         & ((IData)(0x52U) 
                                                            * 
                                                            (3U 
                                                             & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                       >> 5U)] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          (0x1ffU 
                                                           & ((IData)(0x52U) 
                                                              * 
                                                              (3U 
                                                               & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                              << 2U));
        vlSelf->__PVT__slv_resp_cut[0U] = ((0xfffffffcU 
                                            & vlSelf->__PVT__slv_resp_cut[0U]) 
                                           | ((0x147U 
                                               >= (0x1ffU 
                                                   & ((IData)(0x52U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))
                                               ? (3U 
                                                  & (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x52U) 
                                                           * 
                                                           (3U 
                                                            & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))
                                                       ? 0U
                                                       : 
                                                      (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[
                                                       (((IData)(1U) 
                                                         + 
                                                         (0x1ffU 
                                                          & ((IData)(0x52U) 
                                                             * 
                                                             (3U 
                                                              & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x52U) 
                                                            * 
                                                            (3U 
                                                             & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))) 
                                                     | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_resps_i[
                                                        (0xfU 
                                                         & (((IData)(0x52U) 
                                                             * 
                                                             (3U 
                                                              & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x52U) 
                                                            * 
                                                            (3U 
                                                             & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                               : 0U));
    } else {
        vlSelf->__PVT__slv_resp_cut[0U] = 0U;
        vlSelf->__PVT__slv_resp_cut[1U] = 0U;
        vlSelf->__PVT__slv_resp_cut[2U] = (0x3ff80U 
                                           & vlSelf->__PVT__slv_resp_cut[2U]);
    }
}

extern const VlWide<31>/*991:0*/ Vtestharness__ConstPool__CONST_h5607ec9a_0;

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__0(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__0\n"); );
    // Init
    VlWide<3>/*86:0*/ i_demux_simple__DOT____Vlvbound_h496bca7c__0;
    VL_ZERO_W(87, i_demux_simple__DOT____Vlvbound_h496bca7c__0);
    VlWide<3>/*74:0*/ i_demux_simple__DOT____Vlvbound_h4b4c4e41__0;
    VL_ZERO_W(75, i_demux_simple__DOT____Vlvbound_h4b4c4e41__0);
    CData/*0:0*/ i_demux_simple__DOT____Vlvbound_hc7a17057__0;
    i_demux_simple__DOT____Vlvbound_hc7a17057__0 = 0;
    VlWide<3>/*80:0*/ i_demux_simple__DOT____Vlvbound_h4328facc__0;
    VL_ZERO_W(81, i_demux_simple__DOT____Vlvbound_h4328facc__0);
    CData/*0:0*/ i_demux_simple__DOT____Vlvbound_h5411f145__0;
    i_demux_simple__DOT____Vlvbound_h5411f145__0 = 0;
    // Body
    if (vlSymsp->TOP.rst_ni) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d;
        if (vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        if (vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        }
        if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__load_ar_lock) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_q 
                = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_d;
        }
        if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__load_aw_lock) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q 
                = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_d;
        }
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        if (((IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        }
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_d;
        if (((IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_q 
                = vlSelf->__PVT__slv_aw_select;
        }
        if ((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en))) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q 
                = ((0xfcU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q)) 
                   | (IData)(vlSelf->__PVT__slv_ar_select));
        }
        if ((2U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en))) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q 
                = ((0xf3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q)) 
                   | ((IData)(vlSelf->__PVT__slv_ar_select) 
                      << 2U));
        }
        if ((4U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en))) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q 
                = ((0xcfU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q)) 
                   | ((IData)(vlSelf->__PVT__slv_ar_select) 
                      << 4U));
        }
        if ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en))) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q 
                = ((0x3fU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q)) 
                   | ((IData)(vlSelf->__PVT__slv_ar_select) 
                      << 6U));
        }
        if (vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        if (((IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        }
        if (vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        if ((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en))) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q 
                = ((0xfcU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q)) 
                   | (IData)(vlSelf->__PVT__slv_aw_select));
        }
        if ((2U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en))) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q 
                = ((0xf3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q)) 
                   | ((IData)(vlSelf->__PVT__slv_aw_select) 
                      << 2U));
        }
        if ((4U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en))) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q 
                = ((0xcfU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q)) 
                   | ((IData)(vlSelf->__PVT__slv_aw_select) 
                      << 4U));
        }
        if ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en))) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q 
                = ((0x3fU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q)) 
                   | ((IData)(vlSelf->__PVT__slv_aw_select) 
                      << 6U));
        }
        if (vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        if (vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = vlSelf->__PVT__slv_resp_cut[0U];
            vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = vlSelf->__PVT__slv_resp_cut[1U];
            vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = (0x7fU & vlSelf->__PVT__slv_resp_cut[2U]);
        }
        if (vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q 
                = (0x3fU & (vlSelf->__PVT__slv_resp_cut[2U] 
                            >> 8U));
        }
        if (vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q 
                = ((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_error)
                    ? 3U : (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar));
        }
        if (vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_core__axi_req_o[3U] 
                    << 0xbU) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_core__axi_req_o[2U] 
                                >> 0x15U));
            vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_core__axi_req_o[4U] 
                    << 0xbU) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_core__axi_req_o[3U] 
                                >> 0x15U));
            vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_core__axi_req_o[4U] 
                   >> 0x15U);
        }
        if (vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q 
                = ((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_error)
                    ? 3U : (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw));
        }
        if (vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_core__axi_req_o[1U] 
                    << 0x1eU) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_core__axi_req_o[0U] 
                                 >> 2U));
            vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_core__axi_req_o[2U] 
                    << 0x1eU) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_core__axi_req_o[1U] 
                                 >> 2U));
            vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = (0x1ffffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_core__axi_req_o[2U] 
                               >> 2U));
        }
        if (vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_core__axi_req_o[6U] 
                    << 0x1fU) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_core__axi_req_o[5U] 
                                 >> 1U));
            vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_core__axi_req_o[7U] 
                    << 0x1fU) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_core__axi_req_o[6U] 
                                 >> 1U));
            vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = (0x7fffffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_core__axi_req_o[7U] 
                                >> 1U));
        }
    } else {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q = 0U;
        vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q 
            = (0xfcU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q 
            = (0xf3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q 
            = (0xcfU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q 
            = (0x3fU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q));
        vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0U;
        vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q 
            = (0xfcU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q 
            = (0xf3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q 
            = (0xcfU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q 
            = (0x3fU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q));
        vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
        vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0U;
        vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0U;
        vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
        vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0U;
        vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
        vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP.rst_ni) && (1U & ((~ (IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_b_mux__gnt_i)) 
                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP.rst_ni) && (1U & ((~ (IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_r_mux__gnt_i)) 
                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__cnt_full 
        = (((IData)((((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                      >> 2U) | (3U == (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
            << 3U) | (((IData)((((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                 >> 2U) | (3U == (3U 
                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                       << 2U) | (((IData)((((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 2U) 
                                           | (3U == 
                                              (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 1U) | (IData)(
                                                   (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                     >> 2U) 
                                                    | (3U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__cnt_full 
        = (((IData)((((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                      >> 2U) | (3U == (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
            << 3U) | (((IData)((((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                 >> 2U) | (3U == (3U 
                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                       << 2U) | (((IData)((((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 2U) 
                                           | (3U == 
                                              (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 1U) | (IData)(
                                                   (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                     >> 2U) 
                                                    | (3U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))))));
    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__Vcellout__i_w_spill_reg__ready_o = (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                                                     | (~ (IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_r_mux__gnt_i 
        = (1U & ((~ (IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_b_mux__gnt_i 
        = (1U & ((~ (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__slv_ar_ready_sel = (1U & ((~ (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                                             | (~ (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__slv_aw_ready_sel = (1U & ((~ (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                                             | (~ (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__slv_ar_ready_chan = (1U & ((~ (IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                                              | (~ (IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__slv_aw_ready_chan = (1U & ((~ (IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                                              | (~ (IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    if (vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) {
        vlSelf->slv_resp_o[0U] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U];
        vlSelf->slv_resp_o[1U] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U];
    } else {
        vlSelf->slv_resp_o[0U] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
        vlSelf->slv_resp_o[1U] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
    }
    vlSelf->slv_resp_o[2U] = ((((IData)(vlSelf->__PVT__slv_aw_ready_chan) 
                                & (IData)(vlSelf->__PVT__slv_aw_ready_sel)) 
                               << 0x11U) | ((((IData)(vlSelf->__PVT__slv_ar_ready_chan) 
                                              & (IData)(vlSelf->__PVT__slv_ar_ready_sel)) 
                                             << 0x10U) 
                                            | (((IData)(vlSelf->__Vcellout__i_w_spill_reg__ready_o) 
                                                << 0xfU) 
                                               | ((((IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                    | (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                   << 0xeU) 
                                                  | ((((IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                        ? (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q)
                                                        : (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q)) 
                                                      << 8U) 
                                                     | ((((IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                          | (IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                         << 7U) 
                                                        | ((IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                            ? 
                                                           vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                                            : 
                                                           vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U])))))));
    vlSelf->__PVT__slv_ar_select = ((IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                     ? (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q)
                                     : (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q));
    vlSelf->__PVT__slv_aw_select = ((IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                     ? (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q)
                                     : (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q));
    if (vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) {
        vlSelf->__Vcellout__i_ar_spill_reg__data_o[0U] 
            = vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U];
        vlSelf->__Vcellout__i_ar_spill_reg__data_o[1U] 
            = vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U];
        vlSelf->__Vcellout__i_ar_spill_reg__data_o[2U] 
            = vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U];
    } else {
        vlSelf->__Vcellout__i_ar_spill_reg__data_o[0U] 
            = vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
        vlSelf->__Vcellout__i_ar_spill_reg__data_o[1U] 
            = vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
        vlSelf->__Vcellout__i_ar_spill_reg__data_o[2U] 
            = vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U];
    }
    if (vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) {
        vlSelf->__Vcellout__i_aw_spill_reg__data_o[0U] 
            = vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U];
        vlSelf->__Vcellout__i_aw_spill_reg__data_o[1U] 
            = vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U];
        vlSelf->__Vcellout__i_aw_spill_reg__data_o[2U] 
            = vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U];
    } else {
        vlSelf->__Vcellout__i_aw_spill_reg__data_o[0U] 
            = vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
        vlSelf->__Vcellout__i_aw_spill_reg__data_o[1U] 
            = vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
        vlSelf->__Vcellout__i_aw_spill_reg__data_o[2U] 
            = vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U];
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select 
        = ((0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q)))
            ? (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_q)
            : (IData)(vlSelf->__PVT__slv_aw_select));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lookup_ar_select 
        = (3U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q) 
                 >> (7U & VL_SHIFTL_III(3,3,32, (3U 
                                                 & (vlSelf->__Vcellout__i_ar_spill_reg__data_o[2U] 
                                                    >> 0xfU)), 1U))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_select_occupied 
        = (1U & ((((IData)((0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                   << 3U) | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                              << 2U) | (((IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 1U) | (0U 
                                                   != 
                                                   (3U 
                                                    & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)))))) 
                 >> (3U & (vlSelf->__Vcellout__i_ar_spill_reg__data_o[2U] 
                           >> 0xfU))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lookup_aw_select 
        = (3U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q) 
                 >> (7U & VL_SHIFTL_III(3,3,32, (3U 
                                                 & (vlSelf->__Vcellout__i_aw_spill_reg__data_o[2U] 
                                                    >> 0x15U)), 1U))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_select_occupied 
        = (1U & ((((IData)((0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                   << 3U) | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                              << 2U) | (((IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 1U) | (0U 
                                                   != 
                                                   (3U 
                                                    & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)))))) 
                 >> (3U & (vlSelf->__Vcellout__i_aw_spill_reg__data_o[2U] 
                           >> 0x15U))));
    vlSelf->__PVT__slv_req_cut[0U] = ((vlSelf->__Vcellout__i_ar_spill_reg__data_o[0U] 
                                       << 2U) | (((
                                                   ((IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                    | (IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                   & ((IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                      | (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_r_mux__gnt_i)));
    vlSelf->__PVT__slv_req_cut[1U] = ((vlSelf->__Vcellout__i_ar_spill_reg__data_o[0U] 
                                       >> 0x1eU) | 
                                      (vlSelf->__Vcellout__i_ar_spill_reg__data_o[1U] 
                                       << 2U));
    vlSelf->__PVT__slv_req_cut[2U] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                         ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                         : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                       << 0x15U) | 
                                      ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                         | (IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                        << 0x14U) | 
                                       (((IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_b_mux__gnt_i) 
                                         << 0x13U) 
                                        | ((vlSelf->__Vcellout__i_ar_spill_reg__data_o[1U] 
                                            >> 0x1eU) 
                                           | (vlSelf->__Vcellout__i_ar_spill_reg__data_o[2U] 
                                              << 2U)))));
    vlSelf->__PVT__slv_req_cut[3U] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                         ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                         : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                       >> 0xbU) | (
                                                   ((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                     ? 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                     : 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                                   << 0x15U));
    vlSelf->__PVT__slv_req_cut[4U] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                         ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                         : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                       >> 0xbU) | (
                                                   ((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                     ? 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                                     : 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                                   << 0x15U));
    vlSelf->__PVT__slv_req_cut[5U] = ((vlSelf->__Vcellout__i_aw_spill_reg__data_o[0U] 
                                       << 1U) | (((IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                  | (IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                 & ((IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                    | (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__slv_req_cut[6U] = ((vlSelf->__Vcellout__i_aw_spill_reg__data_o[0U] 
                                       >> 0x1fU) | 
                                      (vlSelf->__Vcellout__i_aw_spill_reg__data_o[1U] 
                                       << 1U));
    vlSelf->__PVT__slv_req_cut[7U] = ((vlSelf->__Vcellout__i_aw_spill_reg__data_o[1U] 
                                       >> 0x1fU) | 
                                      (vlSelf->__Vcellout__i_aw_spill_reg__data_o[2U] 
                                       << 1U));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q)))) {
        if ((((~ (IData)((0U != (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__cnt_full)))) 
              & (3U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q)))) 
             & (~ ((0U != (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__cnt_full)) 
                   & (vlSelf->__PVT__slv_req_cut[5U] 
                      >> 8U))))) {
            if (((vlSelf->__PVT__slv_req_cut[5U] & 
                  ((0U == (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))) 
                   | ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select) 
                      == (IData)(vlSelf->__PVT__slv_aw_select)))) 
                 & ((~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_select_occupied)) 
                    | ((IData)(vlSelf->__PVT__slv_aw_select) 
                       == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lookup_aw_select))))) {
                vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up = 1U;
            }
        }
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_valid = 0U;
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_q) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_valid = 1U;
    } else if ((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__cnt_full)))))) {
        if ((1U & ((vlSelf->__PVT__slv_req_cut[0U] 
                    >> 1U) & ((~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_select_occupied)) 
                              | ((IData)(vlSelf->__PVT__slv_ar_select) 
                                 == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lookup_ar_select)))))) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_valid = 1U;
        }
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_valid = 0U;
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_valid = 1U;
    } else if ((((~ (IData)((0U != (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__cnt_full)))) 
                 & (3U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q)))) 
                & (~ ((0U != (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__cnt_full)) 
                      & (vlSelf->__PVT__slv_req_cut[5U] 
                         >> 8U))))) {
        if (((vlSelf->__PVT__slv_req_cut[5U] & ((0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))) 
                                                | ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select) 
                                                   == (IData)(vlSelf->__PVT__slv_aw_select)))) 
             & ((~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_select_occupied)) 
                | ((IData)(vlSelf->__PVT__slv_aw_select) 
                   == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lookup_aw_select))))) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_valid = 1U;
        }
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en 
        = ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up)
            ? (0xfU & ((IData)(1U) << (3U & (vlSelf->__Vcellout__i_aw_spill_reg__data_o[2U] 
                                             >> 0x15U))))
            : 0U);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid 
        = ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up) 
           | (0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[1U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[1U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[2U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[3U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[3U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[4U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[4U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[5U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[5U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[6U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[6U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[7U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[7U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[8U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[8U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[9U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[9U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0xaU];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xbU] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0xbU];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0xcU];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xdU] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0xdU];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xeU] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0xeU];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0xfU];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x10U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x10U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x11U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x11U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x12U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x12U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x13U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x13U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x14U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x14U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x15U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x16U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x16U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x17U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x18U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x18U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x19U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1aU] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x1aU];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1bU] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x1bU];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x1cU];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1dU] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x1dU];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1eU] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x1eU];
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[6U] << 0x1fU) 
           | (vlSelf->__PVT__slv_req_cut[5U] >> 1U));
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[7U] << 0x1fU) 
           | (vlSelf->__PVT__slv_req_cut[6U] >> 1U));
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[2U] 
        = (0x7fffffU & (vlSelf->__PVT__slv_req_cut[7U] 
                        >> 1U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[5U] 
        = (i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
           << 1U);
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[6U] 
        = ((i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
            >> 0x1fU) | (i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
                         << 1U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[7U] 
        = ((0xff000000U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[7U]) 
           | ((i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
               >> 0x1fU) | (i_demux_simple__DOT____Vlvbound_h496bca7c__0[2U] 
                            << 1U)));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_valid) 
         & (0U == (IData)(vlSelf->__PVT__slv_aw_select)))) {
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[5U] 
            = (1U | vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[5U]);
    }
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[3U] << 0xbU) 
           | (vlSelf->__PVT__slv_req_cut[2U] >> 0x15U));
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[4U] << 0xbU) 
           | (vlSelf->__PVT__slv_req_cut[3U] >> 0x15U));
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[2U] 
        = (vlSelf->__PVT__slv_req_cut[4U] >> 0x15U);
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U] 
        = ((0xfffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U]) 
           | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
              << 0x15U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[3U] 
        = ((0xfffffU & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
                        >> 0xbU)) | ((0x100000U & (
                                                   i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
                                                   >> 0xbU)) 
                                     | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                                        << 0x15U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[4U] 
        = ((0xfffffU & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                        >> 0xbU)) | ((0x100000U & (
                                                   i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                                                   >> 0xbU)) 
                                     | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[2U] 
                                        << 0x15U)));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (0U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->i_demux_simple__DOT____Vlvbound_hcdc9c603__1 
            = (1U & (vlSelf->__PVT__slv_req_cut[2U] 
                     >> 0x14U));
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U] 
            = ((0xffefffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U]) 
               | ((IData)(vlSelf->i_demux_simple__DOT____Vlvbound_hcdc9c603__1) 
                  << 0x14U));
    }
    i_demux_simple__DOT____Vlvbound_hc7a17057__0 = 
        (1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U] 
        = ((0xfff7ffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U]) 
           | ((IData)(i_demux_simple__DOT____Vlvbound_hc7a17057__0) 
              << 0x13U));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[1U] << 0x1eU) 
           | (vlSelf->__PVT__slv_req_cut[0U] >> 2U));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[2U] << 0x1eU) 
           | (vlSelf->__PVT__slv_req_cut[1U] >> 2U));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[2U] 
        = (0x1ffffU & (vlSelf->__PVT__slv_req_cut[2U] 
                       >> 2U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0U] 
        = ((1U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0U]) 
           | (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
              << 2U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[1U] 
        = ((1U & (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
                  >> 0x1eU)) | ((2U & (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
                                       >> 0x1eU)) | 
                                (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                                 << 2U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U] 
        = ((0xfff80000U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U]) 
           | ((1U & (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                     >> 0x1eU)) | ((2U & (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                                          >> 0x1eU)) 
                                   | (i_demux_simple__DOT____Vlvbound_h4328facc__0[2U] 
                                      << 2U))));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_valid) 
         & (0U == (IData)(vlSelf->__PVT__slv_ar_select)))) {
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0U] 
            = (2U | vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0U]);
    }
    i_demux_simple__DOT____Vlvbound_h5411f145__0 = 
        (1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0U] 
        = ((0xfffffffeU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0U]) 
           | (IData)(i_demux_simple__DOT____Vlvbound_h5411f145__0));
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[6U] << 0x1fU) 
           | (vlSelf->__PVT__slv_req_cut[5U] >> 1U));
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[7U] << 0x1fU) 
           | (vlSelf->__PVT__slv_req_cut[6U] >> 1U));
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[2U] 
        = (0x7fffffU & (vlSelf->__PVT__slv_req_cut[7U] 
                        >> 1U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
        = ((0xffffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xcU]) 
           | (i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
              << 0x19U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xdU] 
        = ((0xffffffU & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
                         >> 7U)) | ((0x1000000U & (
                                                   i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
                                                   >> 7U)) 
                                    | (i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
                                       << 0x19U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xeU] 
        = ((0xffffffU & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
                         >> 7U)) | ((0x1000000U & (
                                                   i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
                                                   >> 7U)) 
                                    | (i_demux_simple__DOT____Vlvbound_h496bca7c__0[2U] 
                                       << 0x19U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
        = ((0xffff0000U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xfU]) 
           | (0xffffffU & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[2U] 
                           >> 7U)));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_valid) 
         & (1U == (IData)(vlSelf->__PVT__slv_aw_select)))) {
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
            = (0x1000000U | vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xcU]);
    }
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[3U] << 0xbU) 
           | (vlSelf->__PVT__slv_req_cut[2U] >> 0x15U));
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[4U] << 0xbU) 
           | (vlSelf->__PVT__slv_req_cut[3U] >> 0x15U));
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[2U] 
        = (vlSelf->__PVT__slv_req_cut[4U] >> 0x15U);
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
        = ((0xfffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xaU]) 
           | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
              << 0xdU));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xbU] 
        = ((0xfffU & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
                      >> 0x13U)) | ((0x1000U & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
                                                >> 0x13U)) 
                                    | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                                       << 0xdU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
        = ((0xff000000U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xcU]) 
           | ((0xfffU & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                         >> 0x13U)) | ((0x1000U & (
                                                   i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                                                   >> 0x13U)) 
                                       | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[2U] 
                                          << 0xdU))));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (1U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->i_demux_simple__DOT____Vlvbound_hcdc9c603__1 
            = (1U & (vlSelf->__PVT__slv_req_cut[2U] 
                     >> 0x14U));
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
            = ((0xffffefffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xaU]) 
               | ((IData)(vlSelf->i_demux_simple__DOT____Vlvbound_hcdc9c603__1) 
                  << 0xcU));
    }
    i_demux_simple__DOT____Vlvbound_hc7a17057__0 = 
        (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies) 
               >> 1U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
        = ((0xfffff7ffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xaU]) 
           | ((IData)(i_demux_simple__DOT____Vlvbound_hc7a17057__0) 
              << 0xbU));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[1U] << 0x1eU) 
           | (vlSelf->__PVT__slv_req_cut[0U] >> 2U));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[2U] << 0x1eU) 
           | (vlSelf->__PVT__slv_req_cut[1U] >> 2U));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[2U] 
        = (0x1ffffU & (vlSelf->__PVT__slv_req_cut[2U] 
                       >> 2U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[7U] 
        = ((0x1ffffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[7U]) 
           | (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
              << 0x1aU));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[8U] 
        = ((0x1ffffffU & (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
                          >> 6U)) | ((0x2000000U & 
                                      (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
                                       >> 6U)) | (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                                                  << 0x1aU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[9U] 
        = ((0x1ffffffU & (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                          >> 6U)) | ((0x2000000U & 
                                      (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                                       >> 6U)) | (i_demux_simple__DOT____Vlvbound_h4328facc__0[2U] 
                                                  << 0x1aU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
        = ((0xfffff800U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xaU]) 
           | (0x1ffffffU & (i_demux_simple__DOT____Vlvbound_h4328facc__0[2U] 
                            >> 6U)));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_valid) 
         & (1U == (IData)(vlSelf->__PVT__slv_ar_select)))) {
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[7U] 
            = (0x2000000U | vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[7U]);
    }
    i_demux_simple__DOT____Vlvbound_h5411f145__0 = 
        (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies) 
               >> 1U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[7U] 
        = ((0xfeffffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[7U]) 
           | ((IData)(i_demux_simple__DOT____Vlvbound_h5411f145__0) 
              << 0x18U));
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[6U] << 0x1fU) 
           | (vlSelf->__PVT__slv_req_cut[5U] >> 1U));
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[7U] << 0x1fU) 
           | (vlSelf->__PVT__slv_req_cut[6U] >> 1U));
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[2U] 
        = (0x7fffffU & (vlSelf->__PVT__slv_req_cut[7U] 
                        >> 1U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x14U] 
        = ((0xffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x14U]) 
           | (i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
              << 0x11U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
        = ((0xffffU & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
                       >> 0xfU)) | ((0x10000U & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
                                                 >> 0xfU)) 
                                    | (i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
                                       << 0x11U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x16U] 
        = ((0xffffU & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
                       >> 0xfU)) | ((0x10000U & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
                                                 >> 0xfU)) 
                                    | (i_demux_simple__DOT____Vlvbound_h496bca7c__0[2U] 
                                       << 0x11U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
        = ((0xffffff00U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U]) 
           | (0xffffU & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[2U] 
                         >> 0xfU)));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_valid) 
         & (2U == (IData)(vlSelf->__PVT__slv_aw_select)))) {
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x14U] 
            = (0x10000U | vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x14U]);
    }
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[3U] << 0xbU) 
           | (vlSelf->__PVT__slv_req_cut[2U] >> 0x15U));
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[4U] << 0xbU) 
           | (vlSelf->__PVT__slv_req_cut[3U] >> 0x15U));
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[2U] 
        = (vlSelf->__PVT__slv_req_cut[4U] >> 0x15U);
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x12U] 
        = ((0xfU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x12U]) 
           | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
              << 5U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x13U] 
        = ((0xfU & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
                    >> 0x1bU)) | ((0x10U & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
                                            >> 0x1bU)) 
                                  | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                                     << 5U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x14U] 
        = ((0xffff0000U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x14U]) 
           | ((0xfU & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                       >> 0x1bU)) | ((0x10U & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                                               >> 0x1bU)) 
                                     | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[2U] 
                                        << 5U))));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (2U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->i_demux_simple__DOT____Vlvbound_hcdc9c603__1 
            = (1U & (vlSelf->__PVT__slv_req_cut[2U] 
                     >> 0x14U));
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x12U] 
            = ((0xffffffefU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x12U]) 
               | ((IData)(vlSelf->i_demux_simple__DOT____Vlvbound_hcdc9c603__1) 
                  << 4U));
    }
    i_demux_simple__DOT____Vlvbound_hc7a17057__0 = 
        (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies) 
               >> 2U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x12U] 
        = ((0xfffffff7U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x12U]) 
           | ((IData)(i_demux_simple__DOT____Vlvbound_hc7a17057__0) 
              << 3U));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[1U] << 0x1eU) 
           | (vlSelf->__PVT__slv_req_cut[0U] >> 2U));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[2U] << 0x1eU) 
           | (vlSelf->__PVT__slv_req_cut[1U] >> 2U));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[2U] 
        = (0x1ffffU & (vlSelf->__PVT__slv_req_cut[2U] 
                       >> 2U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
        = ((0x1ffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xfU]) 
           | (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
              << 0x12U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x10U] 
        = ((0x1ffffU & (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
                        >> 0xeU)) | ((0x20000U & (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
                                                  >> 0xeU)) 
                                     | (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                                        << 0x12U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x11U] 
        = ((0x1ffffU & (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                        >> 0xeU)) | ((0x20000U & (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                                                  >> 0xeU)) 
                                     | (i_demux_simple__DOT____Vlvbound_h4328facc__0[2U] 
                                        << 0x12U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x12U] 
        = ((0xfffffff8U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x12U]) 
           | (0x1ffffU & (i_demux_simple__DOT____Vlvbound_h4328facc__0[2U] 
                          >> 0xeU)));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_valid) 
         & (2U == (IData)(vlSelf->__PVT__slv_ar_select)))) {
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
            = (0x20000U | vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xfU]);
    }
    i_demux_simple__DOT____Vlvbound_h5411f145__0 = 
        (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies) 
               >> 2U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
        = ((0xfffeffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xfU]) 
           | ((IData)(i_demux_simple__DOT____Vlvbound_h5411f145__0) 
              << 0x10U));
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[6U] << 0x1fU) 
           | (vlSelf->__PVT__slv_req_cut[5U] >> 1U));
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[7U] << 0x1fU) 
           | (vlSelf->__PVT__slv_req_cut[6U] >> 1U));
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[2U] 
        = (0x7fffffU & (vlSelf->__PVT__slv_req_cut[7U] 
                        >> 1U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
        = ((0xffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1cU]) 
           | (i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
              << 9U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1dU] 
        = ((0xffU & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
                     >> 0x17U)) | ((0x100U & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
                                              >> 0x17U)) 
                                   | (i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
                                      << 9U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1eU] 
        = ((0xffU & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
                     >> 0x17U)) | ((0x100U & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
                                              >> 0x17U)) 
                                   | (i_demux_simple__DOT____Vlvbound_h496bca7c__0[2U] 
                                      << 9U)));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_valid) 
         & (3U == (IData)(vlSelf->__PVT__slv_aw_select)))) {
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
            = (0x100U | vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1cU]);
    }
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[3U] << 0xbU) 
           | (vlSelf->__PVT__slv_req_cut[2U] >> 0x15U));
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[4U] << 0xbU) 
           | (vlSelf->__PVT__slv_req_cut[3U] >> 0x15U));
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[2U] 
        = (vlSelf->__PVT__slv_req_cut[4U] >> 0x15U);
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
        = ((0xfffffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x19U]) 
           | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
              << 0x1dU));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1aU] 
        = ((0xfffffffU & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
                          >> 3U)) | ((0x10000000U & 
                                      (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
                                       >> 3U)) | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                                                  << 0x1dU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1bU] 
        = ((0xfffffffU & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                          >> 3U)) | ((0x10000000U & 
                                      (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                                       >> 3U)) | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[2U] 
                                                  << 0x1dU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
        = ((0xffffff00U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1cU]) 
           | (0xfffffffU & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[2U] 
                            >> 3U)));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (3U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->i_demux_simple__DOT____Vlvbound_hcdc9c603__1 
            = (1U & (vlSelf->__PVT__slv_req_cut[2U] 
                     >> 0x14U));
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
            = ((0xefffffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x19U]) 
               | ((IData)(vlSelf->i_demux_simple__DOT____Vlvbound_hcdc9c603__1) 
                  << 0x1cU));
    }
    i_demux_simple__DOT____Vlvbound_hc7a17057__0 = 
        (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies) 
               >> 3U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
        = ((0xf7ffffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x19U]) 
           | ((IData)(i_demux_simple__DOT____Vlvbound_hc7a17057__0) 
              << 0x1bU));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[1U] << 0x1eU) 
           | (vlSelf->__PVT__slv_req_cut[0U] >> 2U));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[2U] << 0x1eU) 
           | (vlSelf->__PVT__slv_req_cut[1U] >> 2U));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[2U] 
        = (0x1ffffU & (vlSelf->__PVT__slv_req_cut[2U] 
                       >> 2U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
        = ((0x1ffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U]) 
           | (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
              << 0xaU));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x18U] 
        = ((0x1ffU & (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
                      >> 0x16U)) | ((0x200U & (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
                                               >> 0x16U)) 
                                    | (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                                       << 0xaU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
        = ((0xf8000000U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x19U]) 
           | ((0x1ffU & (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                         >> 0x16U)) | ((0x200U & (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                                                  >> 0x16U)) 
                                       | (i_demux_simple__DOT____Vlvbound_h4328facc__0[2U] 
                                          << 0xaU))));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_valid) 
         & (3U == (IData)(vlSelf->__PVT__slv_ar_select)))) {
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
            = (0x200U | vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U]);
    }
    i_demux_simple__DOT____Vlvbound_h5411f145__0 = 
        (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies) 
               >> 3U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
        = ((0xfffffeffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U]) 
           | ((IData)(i_demux_simple__DOT____Vlvbound_h5411f145__0) 
              << 8U));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__7(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__7\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_down = 0U;
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (0U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_down 
            = (1U & (IData)(((0x900000U == (0x900000U 
                                            & vlSelf->__PVT__slv_req_cut[2U])) 
                             & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[2U] 
                                >> 0xfU))));
    }
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (1U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_down 
            = (1U & (IData)(((0x900000U == (0x900000U 
                                            & vlSelf->__PVT__slv_req_cut[2U])) 
                             & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[5U] 
                                >> 1U))));
    }
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (2U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_down 
            = (1U & (IData)(((0x900000U == (0x900000U 
                                            & vlSelf->__PVT__slv_req_cut[2U])) 
                             & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[7U] 
                                >> 0x13U))));
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((8U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[0xaU] 
                      >> 1U)) | ((4U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[7U] 
                                        >> 0x10U)) 
                                 | ((2U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[5U] 
                                           << 1U)) 
                                    | (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[2U] 
                                             >> 0xeU))))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((8U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[9U] 
                      >> 0x1aU)) | ((4U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[7U] 
                                           >> 9U)) 
                                    | ((2U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[4U] 
                                              >> 0x18U)) 
                                       | (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[2U] 
                                                >> 7U))))));
    vlSelf->__PVT__slv_resp_cut[2U] = (0x37fffU & vlSelf->__PVT__slv_resp_cut[2U]);
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (0U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->__PVT__slv_resp_cut[2U] = ((0x37fffU 
                                            & vlSelf->__PVT__slv_resp_cut[2U]) 
                                           | (0x8000U 
                                              & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[2U]));
    }
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (1U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->__PVT__slv_resp_cut[2U] = ((0x37fffU 
                                            & vlSelf->__PVT__slv_resp_cut[2U]) 
                                           | (0x8000U 
                                              & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[5U] 
                                                 << 0xeU)));
    }
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (2U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->__PVT__slv_resp_cut[2U] = ((0x37fffU 
                                            & vlSelf->__PVT__slv_resp_cut[2U]) 
                                           | (0x8000U 
                                              & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[7U] 
                                                 >> 4U)));
    }
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (3U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_down 
            = (1U & (IData)(((0x900000U == (0x900000U 
                                            & vlSelf->__PVT__slv_req_cut[2U])) 
                             & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[0xaU] 
                                >> 5U))));
        vlSelf->__PVT__slv_resp_cut[2U] = ((0x37fffU 
                                            & vlSelf->__PVT__slv_resp_cut[2U]) 
                                           | (0x8000U 
                                              & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[0xaU] 
                                                 << 0xaU)));
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_ready 
        = ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_valid) 
           & ((0x147U >= ((IData)(0x50U) + (0x1ffU 
                                            & ((IData)(0x52U) 
                                               * (IData)(vlSelf->__PVT__slv_ar_select))))) 
              && (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[
                        (((IData)(0x50U) + (0x1ffU 
                                            & ((IData)(0x52U) 
                                               * (IData)(vlSelf->__PVT__slv_ar_select)))) 
                         >> 5U)] >> (0x1fU & ((IData)(0x50U) 
                                              + (0x1ffU 
                                                 & ((IData)(0x52U) 
                                                    * (IData)(vlSelf->__PVT__slv_ar_select)))))))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_ready 
        = ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_valid) 
           & ((0x147U >= ((IData)(0x51U) + (0x1ffU 
                                            & ((IData)(0x52U) 
                                               * (IData)(vlSelf->__PVT__slv_aw_select))))) 
              && (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[
                        (((IData)(0x51U) + (0x1ffU 
                                            & ((IData)(0x52U) 
                                               * (IData)(vlSelf->__PVT__slv_aw_select)))) 
                         >> 5U)] >> (0x1fU & ((IData)(0x51U) 
                                              + (0x1ffU 
                                                 & ((IData)(0x52U) 
                                                    * (IData)(vlSelf->__PVT__slv_aw_select)))))))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q;
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_down) 
         ^ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_d 
            = (7U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_down)
                      ? ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)) : ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))));
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U)) | (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d) 
                                 >> 3U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffff8U & (((3U <= (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                            << 3U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffcU & (((2U <= (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                               << 2U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))) 
              | ((0xfffffffeU & (((1U <= (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                                  << 1U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))) 
                 | (1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffffff8U & (((3U > (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                            << 3U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffcU & (((2U > (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                               << 2U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))) 
              | (0xfffffffeU & (((1U > (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                                 << 1U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U)) | (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d) 
                                 >> 3U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffff8U & (((3U <= (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                            << 3U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffcU & (((2U <= (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                               << 2U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))) 
              | ((0xfffffffeU & (((1U <= (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                                  << 1U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))) 
                 | (1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffffff8U & (((3U > (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                            << 3U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffcU & (((2U > (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                               << 2U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))) 
              | (0xfffffffeU & (((1U > (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                                 << 1U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_d 
        = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_q;
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__load_ar_lock = 0U;
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_push = 0U;
    vlSelf->__PVT__slv_resp_cut[2U] = (0x2ffffU & vlSelf->__PVT__slv_resp_cut[2U]);
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_q) {
        if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_ready) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_d = 0U;
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__load_ar_lock = 1U;
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_push = 1U;
            vlSelf->__PVT__slv_resp_cut[2U] = (0x10000U 
                                               | vlSelf->__PVT__slv_resp_cut[2U]);
        }
    } else if ((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__cnt_full)))))) {
        if ((1U & ((vlSelf->__PVT__slv_req_cut[0U] 
                    >> 1U) & ((~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_select_occupied)) 
                              | ((IData)(vlSelf->__PVT__slv_ar_select) 
                                 == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lookup_ar_select)))))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_ready)))) {
                vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_d = 1U;
                vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__load_ar_lock = 1U;
            }
            if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_ready) {
                vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_push = 1U;
                vlSelf->__PVT__slv_resp_cut[2U] = (0x10000U 
                                                   | vlSelf->__PVT__slv_resp_cut[2U]);
            }
        }
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_d 
        = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q;
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__load_aw_lock = 0U;
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__atop_inject = 0U;
    vlSelf->__PVT__slv_resp_cut[2U] = (0x1ffffU & vlSelf->__PVT__slv_resp_cut[2U]);
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q) {
        if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_ready) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_d = 0U;
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__load_aw_lock = 1U;
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__atop_inject 
                = (1U & (vlSelf->__PVT__slv_req_cut[5U] 
                         >> 8U));
            vlSelf->__PVT__slv_resp_cut[2U] = (0x20000U 
                                               | vlSelf->__PVT__slv_resp_cut[2U]);
        }
    } else if ((((~ (IData)((0U != (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__cnt_full)))) 
                 & (3U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q)))) 
                & (~ ((0U != (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__cnt_full)) 
                      & (vlSelf->__PVT__slv_req_cut[5U] 
                         >> 8U))))) {
        if (((vlSelf->__PVT__slv_req_cut[5U] & ((0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))) 
                                                | ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select) 
                                                   == (IData)(vlSelf->__PVT__slv_aw_select)))) 
             & ((~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_select_occupied)) 
                | ((IData)(vlSelf->__PVT__slv_aw_select) 
                   == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lookup_aw_select))))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_ready)))) {
                vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_d = 1U;
                vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__load_aw_lock = 1U;
            }
            if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_ready) {
                vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__atop_inject 
                    = (1U & (vlSelf->__PVT__slv_req_cut[5U] 
                             >> 8U));
                vlSelf->__PVT__slv_resp_cut[2U] = (0x20000U 
                                                   | vlSelf->__PVT__slv_resp_cut[2U]);
            }
        }
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en 
        = ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_push)
            ? (0xfU & ((IData)(1U) << (3U & (vlSelf->__Vcellout__i_ar_spill_reg__data_o[2U] 
                                             >> 0xfU))))
            : 0U);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en 
        = ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__atop_inject)
            ? (0xfU & ((IData)(1U) << (3U & (vlSelf->__Vcellout__i_aw_spill_reg__data_o[2U] 
                                             >> 0x15U))))
            : 0U);
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__8(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__8\n"); );
    // Body
    if ((0x4000U & vlSelf->__PVT__slv_resp_cut[2U])) {
        vlSelf->__PVT__slv_resp_cut[2U] = ((0x3cfffU 
                                            & vlSelf->__PVT__slv_resp_cut[2U]) 
                                           | (0x3ffffU 
                                              & (((0x147U 
                                                   >= 
                                                   ((IData)(0x4cU) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x52U) 
                                                        * 
                                                        (3U 
                                                         & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))))
                                                   ? 
                                                  (3U 
                                                   & (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x4cU) 
                                                            + 
                                                            (0x1ffU 
                                                             & ((IData)(0x52U) 
                                                                * 
                                                                (3U 
                                                                 & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                        ? 0U
                                                        : 
                                                       (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[
                                                        (((IData)(0x4dU) 
                                                          + 
                                                          (0x1ffU 
                                                           & ((IData)(0x52U) 
                                                              * 
                                                              (3U 
                                                               & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x4cU) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                      | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[
                                                         (((IData)(0x4cU) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x52U) 
                                                               * 
                                                               (3U 
                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x4cU) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes)))))))))
                                                   : 0U) 
                                                 << 0xcU)));
        vlSelf->__PVT__slv_resp_cut[2U] = ((0x3f3ffU 
                                            & vlSelf->__PVT__slv_resp_cut[2U]) 
                                           | (0x3ffffU 
                                              & (((0x147U 
                                                   >= 
                                                   ((IData)(0x4aU) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x52U) 
                                                        * 
                                                        (3U 
                                                         & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))))
                                                   ? 
                                                  (3U 
                                                   & (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x4aU) 
                                                            + 
                                                            (0x1ffU 
                                                             & ((IData)(0x52U) 
                                                                * 
                                                                (3U 
                                                                 & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                        ? 0U
                                                        : 
                                                       (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[
                                                        (((IData)(0x4bU) 
                                                          + 
                                                          (0x1ffU 
                                                           & ((IData)(0x52U) 
                                                              * 
                                                              (3U 
                                                               & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x4aU) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                      | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[
                                                         (((IData)(0x4aU) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x52U) 
                                                               * 
                                                               (3U 
                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x4aU) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes)))))))))
                                                   : 0U) 
                                                 << 0xaU)));
        vlSelf->__PVT__slv_resp_cut[2U] = ((0x3fcffU 
                                            & vlSelf->__PVT__slv_resp_cut[2U]) 
                                           | (0x3ffffU 
                                              & (((0x147U 
                                                   >= 
                                                   ((IData)(0x48U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x52U) 
                                                        * 
                                                        (3U 
                                                         & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))))
                                                   ? 
                                                  (3U 
                                                   & (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x48U) 
                                                            + 
                                                            (0x1ffU 
                                                             & ((IData)(0x52U) 
                                                                * 
                                                                (3U 
                                                                 & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                        ? 0U
                                                        : 
                                                       (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[
                                                        (((IData)(0x49U) 
                                                          + 
                                                          (0x1ffU 
                                                           & ((IData)(0x52U) 
                                                              * 
                                                              (3U 
                                                               & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x48U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                      | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[
                                                         (((IData)(0x48U) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x52U) 
                                                               * 
                                                               (3U 
                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x48U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes)))))))))
                                                   : 0U) 
                                                 << 8U)));
    } else {
        vlSelf->__PVT__slv_resp_cut[2U] = (0x3c0ffU 
                                           & vlSelf->__PVT__slv_resp_cut[2U]);
    }
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__9(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__9\n"); );
    // Body
    if ((0x80U & vlSelf->__PVT__slv_resp_cut[2U])) {
        vlSelf->__PVT__slv_resp_cut[2U] = ((0x3ff9fU 
                                            & vlSelf->__PVT__slv_resp_cut[2U]) 
                                           | (0x3ffffU 
                                              & (((0x147U 
                                                   >= 
                                                   ((IData)(0x45U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x52U) 
                                                        * 
                                                        (3U 
                                                         & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))
                                                   ? 
                                                  (3U 
                                                   & (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x45U) 
                                                            + 
                                                            (0x1ffU 
                                                             & ((IData)(0x52U) 
                                                                * 
                                                                (3U 
                                                                 & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                        ? 0U
                                                        : 
                                                       (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[
                                                        (((IData)(0x46U) 
                                                          + 
                                                          (0x1ffU 
                                                           & ((IData)(0x52U) 
                                                              * 
                                                              (3U 
                                                               & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x45U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                      | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[
                                                         (((IData)(0x45U) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x52U) 
                                                               * 
                                                               (3U 
                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x45U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))))
                                                   : 0U) 
                                                 << 5U)));
        vlSelf->__PVT__slv_resp_cut[0U] = ((0x1fU & 
                                            vlSelf->__PVT__slv_resp_cut[0U]) 
                                           | ((IData)(
                                                      ((0x147U 
                                                        >= 
                                                        ((IData)(5U) 
                                                         + 
                                                         (0x1ffU 
                                                          & ((IData)(0x52U) 
                                                             * 
                                                             (3U 
                                                              & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[
                                                                         (((IData)(0x44U) 
                                                                           + 
                                                                           (0x1ffU 
                                                                            & ((IData)(0x52U) 
                                                                               * 
                                                                               (3U 
                                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((0U 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(5U) 
                                                               + 
                                                               (0x1ffU 
                                                                & ((IData)(0x52U) 
                                                                   * 
                                                                   (3U 
                                                                    & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                           ? 0x20U
                                                           : 
                                                          ((IData)(0x40U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(5U) 
                                                               + 
                                                               (0x1ffU 
                                                                & ((IData)(0x52U) 
                                                                   * 
                                                                   (3U 
                                                                    & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                        | (((0U 
                                                             == 
                                                             (0x1fU 
                                                              & ((IData)(5U) 
                                                                 + 
                                                                 (0x1ffU 
                                                                  & ((IData)(0x52U) 
                                                                     * 
                                                                     (3U 
                                                                      & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                             ? 0ULL
                                                             : 
                                                            ((QData)((IData)(
                                                                             vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[
                                                                             (((IData)(0x24U) 
                                                                               + 
                                                                               (0x1ffU 
                                                                                & ((IData)(0x52U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                              >> 5U)])) 
                                                             << 
                                                             ((IData)(0x20U) 
                                                              - 
                                                              (0x1fU 
                                                               & ((IData)(5U) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & ((IData)(0x52U) 
                                                                      * 
                                                                      (3U 
                                                                       & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[
                                                                              (((IData)(5U) 
                                                                                + 
                                                                                (0x1ffU 
                                                                                & ((IData)(0x52U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                               >> 5U)])) 
                                                              >> 
                                                              (0x1fU 
                                                               & ((IData)(5U) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & ((IData)(0x52U) 
                                                                      * 
                                                                      (3U 
                                                                       & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))))
                                                        : 0ULL)) 
                                              << 5U));
        vlSelf->__PVT__slv_resp_cut[1U] = (((IData)(
                                                    ((0x147U 
                                                      >= 
                                                      ((IData)(5U) 
                                                       + 
                                                       (0x1ffU 
                                                        & ((IData)(0x52U) 
                                                           * 
                                                           (3U 
                                                            & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[
                                                                       (((IData)(0x44U) 
                                                                         + 
                                                                         (0x1ffU 
                                                                          & ((IData)(0x52U) 
                                                                             * 
                                                                             (3U 
                                                                              & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(5U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                         ? 0x20U
                                                         : 
                                                        ((IData)(0x40U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(5U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                      | (((0U 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(5U) 
                                                               + 
                                                               (0x1ffU 
                                                                & ((IData)(0x52U) 
                                                                   * 
                                                                   (3U 
                                                                    & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                           ? 0ULL
                                                           : 
                                                          ((QData)((IData)(
                                                                           vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[
                                                                           (((IData)(0x24U) 
                                                                             + 
                                                                             (0x1ffU 
                                                                              & ((IData)(0x52U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                            >> 5U)])) 
                                                           << 
                                                           ((IData)(0x20U) 
                                                            - 
                                                            (0x1fU 
                                                             & ((IData)(5U) 
                                                                + 
                                                                (0x1ffU 
                                                                 & ((IData)(0x52U) 
                                                                    * 
                                                                    (3U 
                                                                     & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                         | ((QData)((IData)(
                                                                            vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[
                                                                            (((IData)(5U) 
                                                                              + 
                                                                              (0x1ffU 
                                                                               & ((IData)(0x52U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                             >> 5U)])) 
                                                            >> 
                                                            (0x1fU 
                                                             & ((IData)(5U) 
                                                                + 
                                                                (0x1ffU 
                                                                 & ((IData)(0x52U) 
                                                                    * 
                                                                    (3U 
                                                                     & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))))
                                                      : 0ULL)) 
                                            >> 0x1bU) 
                                           | ((IData)(
                                                      (((0x147U 
                                                         >= 
                                                         ((IData)(5U) 
                                                          + 
                                                          (0x1ffU 
                                                           & ((IData)(0x52U) 
                                                              * 
                                                              (3U 
                                                               & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[
                                                                          (((IData)(0x44U) 
                                                                            + 
                                                                            (0x1ffU 
                                                                             & ((IData)(0x52U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                           >> 5U)])) 
                                                          << 
                                                          ((0U 
                                                            == 
                                                            (0x1fU 
                                                             & ((IData)(5U) 
                                                                + 
                                                                (0x1ffU 
                                                                 & ((IData)(0x52U) 
                                                                    * 
                                                                    (3U 
                                                                     & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                            ? 0x20U
                                                            : 
                                                           ((IData)(0x40U) 
                                                            - 
                                                            (0x1fU 
                                                             & ((IData)(5U) 
                                                                + 
                                                                (0x1ffU 
                                                                 & ((IData)(0x52U) 
                                                                    * 
                                                                    (3U 
                                                                     & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                         | (((0U 
                                                              == 
                                                              (0x1fU 
                                                               & ((IData)(5U) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & ((IData)(0x52U) 
                                                                      * 
                                                                      (3U 
                                                                       & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                              ? 0ULL
                                                              : 
                                                             ((QData)((IData)(
                                                                              vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[
                                                                              (((IData)(0x24U) 
                                                                                + 
                                                                                (0x1ffU 
                                                                                & ((IData)(0x52U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                               >> 5U)])) 
                                                              << 
                                                              ((IData)(0x20U) 
                                                               - 
                                                               (0x1fU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (0x1ffU 
                                                                    & ((IData)(0x52U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                            | ((QData)((IData)(
                                                                               vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[
                                                                               (((IData)(5U) 
                                                                                + 
                                                                                (0x1ffU 
                                                                                & ((IData)(0x52U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                                >> 5U)])) 
                                                               >> 
                                                               (0x1fU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (0x1ffU 
                                                                    & ((IData)(0x52U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))))
                                                         : 0ULL) 
                                                       >> 0x20U)) 
                                              << 5U));
        vlSelf->__PVT__slv_resp_cut[2U] = ((0x3ffe0U 
                                            & vlSelf->__PVT__slv_resp_cut[2U]) 
                                           | (0x3ffffU 
                                              & ((IData)(
                                                         (((0x147U 
                                                            >= 
                                                            ((IData)(5U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))
                                                            ? 
                                                           (((QData)((IData)(
                                                                             vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[
                                                                             (((IData)(0x44U) 
                                                                               + 
                                                                               (0x1ffU 
                                                                                & ((IData)(0x52U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                              >> 5U)])) 
                                                             << 
                                                             ((0U 
                                                               == 
                                                               (0x1fU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (0x1ffU 
                                                                    & ((IData)(0x52U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                               ? 0x20U
                                                               : 
                                                              ((IData)(0x40U) 
                                                               - 
                                                               (0x1fU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (0x1ffU 
                                                                    & ((IData)(0x52U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                            | (((0U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (0x1ffU 
                                                                      & ((IData)(0x52U) 
                                                                         * 
                                                                         (3U 
                                                                          & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                                 ? 0ULL
                                                                 : 
                                                                ((QData)((IData)(
                                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[
                                                                                (((IData)(0x24U) 
                                                                                + 
                                                                                (0x1ffU 
                                                                                & ((IData)(0x52U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                                >> 5U)])) 
                                                                 << 
                                                                 ((IData)(0x20U) 
                                                                  - 
                                                                  (0x1fU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (0x1ffU 
                                                                       & ((IData)(0x52U) 
                                                                          * 
                                                                          (3U 
                                                                           & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                               | ((QData)((IData)(
                                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[
                                                                                (((IData)(5U) 
                                                                                + 
                                                                                (0x1ffU 
                                                                                & ((IData)(0x52U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                                >> 5U)])) 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (0x1ffU 
                                                                       & ((IData)(0x52U) 
                                                                          * 
                                                                          (3U 
                                                                           & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))))
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 >> 0x1bU)));
        vlSelf->__PVT__slv_resp_cut[0U] = ((0xffffffe7U 
                                            & vlSelf->__PVT__slv_resp_cut[0U]) 
                                           | (((0x147U 
                                                >= 
                                                ((IData)(3U) 
                                                 + 
                                                 (0x1ffU 
                                                  & ((IData)(0x52U) 
                                                     * 
                                                     (3U 
                                                      & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))
                                                ? (3U 
                                                   & (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(3U) 
                                                            + 
                                                            (0x1ffU 
                                                             & ((IData)(0x52U) 
                                                                * 
                                                                (3U 
                                                                 & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                        ? 0U
                                                        : 
                                                       (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[
                                                        (((IData)(4U) 
                                                          + 
                                                          (0x1ffU 
                                                           & ((IData)(0x52U) 
                                                              * 
                                                              (3U 
                                                               & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(3U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                      | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[
                                                         (((IData)(3U) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x52U) 
                                                               * 
                                                               (3U 
                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(3U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))))
                                                : 0U) 
                                              << 3U));
        vlSelf->__PVT__slv_resp_cut[0U] = ((0xfffffffbU 
                                            & vlSelf->__PVT__slv_resp_cut[0U]) 
                                           | (((0x147U 
                                                >= 
                                                ((IData)(2U) 
                                                 + 
                                                 (0x1ffU 
                                                  & ((IData)(0x52U) 
                                                     * 
                                                     (3U 
                                                      & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))) 
                                               && (1U 
                                                   & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[
                                                      (((IData)(2U) 
                                                        + 
                                                        (0x1ffU 
                                                         & ((IData)(0x52U) 
                                                            * 
                                                            (3U 
                                                             & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                       >> 5U)] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          (0x1ffU 
                                                           & ((IData)(0x52U) 
                                                              * 
                                                              (3U 
                                                               & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                              << 2U));
        vlSelf->__PVT__slv_resp_cut[0U] = ((0xfffffffcU 
                                            & vlSelf->__PVT__slv_resp_cut[0U]) 
                                           | ((0x147U 
                                               >= (0x1ffU 
                                                   & ((IData)(0x52U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))
                                               ? (3U 
                                                  & (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x52U) 
                                                           * 
                                                           (3U 
                                                            & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))
                                                       ? 0U
                                                       : 
                                                      (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[
                                                       (((IData)(1U) 
                                                         + 
                                                         (0x1ffU 
                                                          & ((IData)(0x52U) 
                                                             * 
                                                             (3U 
                                                              & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x52U) 
                                                            * 
                                                            (3U 
                                                             & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))) 
                                                     | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_resps_i[
                                                        (0xfU 
                                                         & (((IData)(0x52U) 
                                                             * 
                                                             (3U 
                                                              & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x52U) 
                                                            * 
                                                            (3U 
                                                             & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                               : 0U));
    } else {
        vlSelf->__PVT__slv_resp_cut[0U] = 0U;
        vlSelf->__PVT__slv_resp_cut[1U] = 0U;
        vlSelf->__PVT__slv_resp_cut[2U] = (0x3ff80U 
                                           & vlSelf->__PVT__slv_resp_cut[2U]);
    }
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__0(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__0\n"); );
    // Init
    VlWide<3>/*86:0*/ i_demux_simple__DOT____Vlvbound_h496bca7c__0;
    VL_ZERO_W(87, i_demux_simple__DOT____Vlvbound_h496bca7c__0);
    VlWide<3>/*74:0*/ i_demux_simple__DOT____Vlvbound_h4b4c4e41__0;
    VL_ZERO_W(75, i_demux_simple__DOT____Vlvbound_h4b4c4e41__0);
    CData/*0:0*/ i_demux_simple__DOT____Vlvbound_hc7a17057__0;
    i_demux_simple__DOT____Vlvbound_hc7a17057__0 = 0;
    VlWide<3>/*80:0*/ i_demux_simple__DOT____Vlvbound_h4328facc__0;
    VL_ZERO_W(81, i_demux_simple__DOT____Vlvbound_h4328facc__0);
    CData/*0:0*/ i_demux_simple__DOT____Vlvbound_h5411f145__0;
    i_demux_simple__DOT____Vlvbound_h5411f145__0 = 0;
    // Body
    if (vlSymsp->TOP.rst_ni) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d;
        if (vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) {
            vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U];
            vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain;
        }
        if (vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) {
            vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
            vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain;
        }
        if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__load_ar_lock) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_q 
                = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_d;
        }
        if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__load_aw_lock) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q 
                = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_d;
        }
        if (vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) {
            vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        }
        if (vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) {
            vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        }
        if (vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) {
            vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        }
        if (vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) {
            vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        }
        if (vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain) {
            vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        }
        if (((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        if (vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        }
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_d;
        if (((IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_q 
                = vlSelf->__PVT__slv_aw_select;
        }
        if ((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en))) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q 
                = ((0xfcU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q)) 
                   | (IData)(vlSelf->__PVT__slv_ar_select));
        }
        if ((2U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en))) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q 
                = ((0xf3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q)) 
                   | ((IData)(vlSelf->__PVT__slv_ar_select) 
                      << 2U));
        }
        if ((4U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en))) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q 
                = ((0xcfU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q)) 
                   | ((IData)(vlSelf->__PVT__slv_ar_select) 
                      << 4U));
        }
        if ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en))) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q 
                = ((0x3fU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q)) 
                   | ((IData)(vlSelf->__PVT__slv_ar_select) 
                      << 6U));
        }
        if (((IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        if (((IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        }
        if (vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        if ((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en))) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q 
                = ((0xfcU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q)) 
                   | (IData)(vlSelf->__PVT__slv_aw_select));
        }
        if ((2U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en))) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q 
                = ((0xf3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q)) 
                   | ((IData)(vlSelf->__PVT__slv_aw_select) 
                      << 2U));
        }
        if ((4U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en))) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q 
                = ((0xcfU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q)) 
                   | ((IData)(vlSelf->__PVT__slv_aw_select) 
                      << 4U));
        }
        if ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en))) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q 
                = ((0x3fU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q)) 
                   | ((IData)(vlSelf->__PVT__slv_aw_select) 
                      << 6U));
        }
        if (vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        if (vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = vlSelf->__PVT__slv_resp_cut[0U];
            vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = vlSelf->__PVT__slv_resp_cut[1U];
            vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = (0x7fU & vlSelf->__PVT__slv_resp_cut[2U]);
        }
        if (vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q 
                = (0x3fU & (vlSelf->__PVT__slv_resp_cut[2U] 
                            >> 8U));
        }
    } else {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q = 0U;
        vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q = 0U;
        vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q 
            = (0xfcU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q 
            = (0xf3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q 
            = (0xcfU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q 
            = (0x3fU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q));
        vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0U;
        vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q 
            = (0xfcU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q 
            = (0xf3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q 
            = (0xcfU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q 
            = (0x3fU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q));
        vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
        vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0U;
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP.rst_ni) && (1U & ((~ (IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_b_mux__gnt_i)) 
                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP.rst_ni) && (1U & ((~ (IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_r_mux__gnt_i)) 
                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes))));
    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_r_mux__gnt_i 
        = (1U & ((~ (IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_b_mux__gnt_i 
        = (1U & ((~ (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__cnt_full 
        = (((IData)((((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                      >> 2U) | (3U == (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
            << 3U) | (((IData)((((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                 >> 2U) | (3U == (3U 
                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                       << 2U) | (((IData)((((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 2U) 
                                           | (3U == 
                                              (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 1U) | (IData)(
                                                   (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                     >> 2U) 
                                                    | (3U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__cnt_full 
        = (((IData)((((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                      >> 2U) | (3U == (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
            << 3U) | (((IData)((((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                 >> 2U) | (3U == (3U 
                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                       << 2U) | (((IData)((((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 2U) 
                                           | (3U == 
                                              (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 1U) | (IData)(
                                                   (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                     >> 2U) 
                                                    | (3U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))))));
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_ni)))) {
        vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0U;
        vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
        vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0U;
        vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
        vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
    }
    vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__slv_ar_select = ((IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                     ? (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q)
                                     : (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q));
    vlSelf->__PVT__slv_aw_select = ((IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                     ? (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q)
                                     : (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q));
    if (vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) {
        vlSelf->__Vcellout__i_ar_spill_reg__data_o[0U] 
            = vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U];
        vlSelf->__Vcellout__i_ar_spill_reg__data_o[1U] 
            = vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U];
        vlSelf->__Vcellout__i_ar_spill_reg__data_o[2U] 
            = vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U];
    } else {
        vlSelf->__Vcellout__i_ar_spill_reg__data_o[0U] 
            = vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
        vlSelf->__Vcellout__i_ar_spill_reg__data_o[1U] 
            = vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
        vlSelf->__Vcellout__i_ar_spill_reg__data_o[2U] 
            = vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U];
    }
    if (vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) {
        vlSelf->__Vcellout__i_aw_spill_reg__data_o[0U] 
            = vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U];
        vlSelf->__Vcellout__i_aw_spill_reg__data_o[1U] 
            = vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U];
        vlSelf->__Vcellout__i_aw_spill_reg__data_o[2U] 
            = vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U];
    } else {
        vlSelf->__Vcellout__i_aw_spill_reg__data_o[0U] 
            = vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
        vlSelf->__Vcellout__i_aw_spill_reg__data_o[1U] 
            = vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
        vlSelf->__Vcellout__i_aw_spill_reg__data_o[2U] 
            = vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U];
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select 
        = ((0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q)))
            ? (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_q)
            : (IData)(vlSelf->__PVT__slv_aw_select));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lookup_ar_select 
        = (3U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q) 
                 >> (7U & VL_SHIFTL_III(3,3,32, (3U 
                                                 & (vlSelf->__Vcellout__i_ar_spill_reg__data_o[2U] 
                                                    >> 0xfU)), 1U))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_select_occupied 
        = (1U & ((((IData)((0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                   << 3U) | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                              << 2U) | (((IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 1U) | (0U 
                                                   != 
                                                   (3U 
                                                    & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)))))) 
                 >> (3U & (vlSelf->__Vcellout__i_ar_spill_reg__data_o[2U] 
                           >> 0xfU))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lookup_aw_select 
        = (3U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q) 
                 >> (7U & VL_SHIFTL_III(3,3,32, (3U 
                                                 & (vlSelf->__Vcellout__i_aw_spill_reg__data_o[2U] 
                                                    >> 0x15U)), 1U))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_select_occupied 
        = (1U & ((((IData)((0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                   << 3U) | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                              << 2U) | (((IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 1U) | (0U 
                                                   != 
                                                   (3U 
                                                    & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)))))) 
                 >> (3U & (vlSelf->__Vcellout__i_aw_spill_reg__data_o[2U] 
                           >> 0x15U))));
    vlSelf->__PVT__slv_req_cut[0U] = ((vlSelf->__Vcellout__i_ar_spill_reg__data_o[0U] 
                                       << 2U) | (((
                                                   ((IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                    | (IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                   & ((IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                      | (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_r_mux__gnt_i)));
    vlSelf->__PVT__slv_req_cut[1U] = ((vlSelf->__Vcellout__i_ar_spill_reg__data_o[0U] 
                                       >> 0x1eU) | 
                                      (vlSelf->__Vcellout__i_ar_spill_reg__data_o[1U] 
                                       << 2U));
    vlSelf->__PVT__slv_req_cut[2U] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                         ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                         : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                       << 0x15U) | 
                                      ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                         | (IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                        << 0x14U) | 
                                       (((IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_b_mux__gnt_i) 
                                         << 0x13U) 
                                        | ((vlSelf->__Vcellout__i_ar_spill_reg__data_o[1U] 
                                            >> 0x1eU) 
                                           | (vlSelf->__Vcellout__i_ar_spill_reg__data_o[2U] 
                                              << 2U)))));
    vlSelf->__PVT__slv_req_cut[3U] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                         ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                         : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                       >> 0xbU) | (
                                                   ((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                     ? 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                     : 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                                   << 0x15U));
    vlSelf->__PVT__slv_req_cut[4U] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                         ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                         : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                       >> 0xbU) | (
                                                   ((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                     ? 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                                     : 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                                   << 0x15U));
    vlSelf->__PVT__slv_req_cut[5U] = ((vlSelf->__Vcellout__i_aw_spill_reg__data_o[0U] 
                                       << 1U) | (((IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                  | (IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                 & ((IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                    | (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__slv_req_cut[6U] = ((vlSelf->__Vcellout__i_aw_spill_reg__data_o[0U] 
                                       >> 0x1fU) | 
                                      (vlSelf->__Vcellout__i_aw_spill_reg__data_o[1U] 
                                       << 1U));
    vlSelf->__PVT__slv_req_cut[7U] = ((vlSelf->__Vcellout__i_aw_spill_reg__data_o[1U] 
                                       >> 0x1fU) | 
                                      (vlSelf->__Vcellout__i_aw_spill_reg__data_o[2U] 
                                       << 1U));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q)))) {
        if ((((~ (IData)((0U != (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__cnt_full)))) 
              & (3U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q)))) 
             & (~ ((0U != (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__cnt_full)) 
                   & (vlSelf->__PVT__slv_req_cut[5U] 
                      >> 8U))))) {
            if (((vlSelf->__PVT__slv_req_cut[5U] & 
                  ((0U == (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))) 
                   | ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select) 
                      == (IData)(vlSelf->__PVT__slv_aw_select)))) 
                 & ((~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_select_occupied)) 
                    | ((IData)(vlSelf->__PVT__slv_aw_select) 
                       == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lookup_aw_select))))) {
                vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up = 1U;
            }
        }
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_valid = 0U;
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_q) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_valid = 1U;
    } else if ((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__cnt_full)))))) {
        if ((1U & ((vlSelf->__PVT__slv_req_cut[0U] 
                    >> 1U) & ((~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_select_occupied)) 
                              | ((IData)(vlSelf->__PVT__slv_ar_select) 
                                 == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lookup_ar_select)))))) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_valid = 1U;
        }
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_valid = 0U;
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_valid = 1U;
    } else if ((((~ (IData)((0U != (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__cnt_full)))) 
                 & (3U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q)))) 
                & (~ ((0U != (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__cnt_full)) 
                      & (vlSelf->__PVT__slv_req_cut[5U] 
                         >> 8U))))) {
        if (((vlSelf->__PVT__slv_req_cut[5U] & ((0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))) 
                                                | ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select) 
                                                   == (IData)(vlSelf->__PVT__slv_aw_select)))) 
             & ((~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_select_occupied)) 
                | ((IData)(vlSelf->__PVT__slv_aw_select) 
                   == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lookup_aw_select))))) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_valid = 1U;
        }
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en 
        = ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up)
            ? (0xfU & ((IData)(1U) << (3U & (vlSelf->__Vcellout__i_aw_spill_reg__data_o[2U] 
                                             >> 0x15U))))
            : 0U);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid 
        = ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up) 
           | (0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[1U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[1U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[2U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[3U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[3U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[4U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[4U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[5U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[5U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[6U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[6U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[7U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[7U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[8U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[8U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[9U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[9U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0xaU];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xbU] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0xbU];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0xcU];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xdU] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0xdU];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xeU] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0xeU];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0xfU];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x10U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x10U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x11U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x11U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x12U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x12U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x13U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x13U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x14U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x14U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x15U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x16U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x16U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x17U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x18U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x18U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x19U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1aU] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x1aU];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1bU] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x1bU];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x1cU];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1dU] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x1dU];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1eU] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x1eU];
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[6U] << 0x1fU) 
           | (vlSelf->__PVT__slv_req_cut[5U] >> 1U));
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[7U] << 0x1fU) 
           | (vlSelf->__PVT__slv_req_cut[6U] >> 1U));
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[2U] 
        = (0x7fffffU & (vlSelf->__PVT__slv_req_cut[7U] 
                        >> 1U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[5U] 
        = (i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
           << 1U);
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[6U] 
        = ((i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
            >> 0x1fU) | (i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
                         << 1U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[7U] 
        = ((0xff000000U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[7U]) 
           | ((i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
               >> 0x1fU) | (i_demux_simple__DOT____Vlvbound_h496bca7c__0[2U] 
                            << 1U)));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_valid) 
         & (0U == (IData)(vlSelf->__PVT__slv_aw_select)))) {
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[5U] 
            = (1U | vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[5U]);
    }
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[3U] << 0xbU) 
           | (vlSelf->__PVT__slv_req_cut[2U] >> 0x15U));
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[4U] << 0xbU) 
           | (vlSelf->__PVT__slv_req_cut[3U] >> 0x15U));
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[2U] 
        = (vlSelf->__PVT__slv_req_cut[4U] >> 0x15U);
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U] 
        = ((0xfffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U]) 
           | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
              << 0x15U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[3U] 
        = ((0xfffffU & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
                        >> 0xbU)) | ((0x100000U & (
                                                   i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
                                                   >> 0xbU)) 
                                     | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                                        << 0x15U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[4U] 
        = ((0xfffffU & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                        >> 0xbU)) | ((0x100000U & (
                                                   i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                                                   >> 0xbU)) 
                                     | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[2U] 
                                        << 0x15U)));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (0U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->i_demux_simple__DOT____Vlvbound_hcdc9c603__1 
            = (1U & (vlSelf->__PVT__slv_req_cut[2U] 
                     >> 0x14U));
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U] 
            = ((0xffefffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U]) 
               | ((IData)(vlSelf->i_demux_simple__DOT____Vlvbound_hcdc9c603__1) 
                  << 0x14U));
    }
    i_demux_simple__DOT____Vlvbound_hc7a17057__0 = 
        (1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U] 
        = ((0xfff7ffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U]) 
           | ((IData)(i_demux_simple__DOT____Vlvbound_hc7a17057__0) 
              << 0x13U));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[1U] << 0x1eU) 
           | (vlSelf->__PVT__slv_req_cut[0U] >> 2U));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[2U] << 0x1eU) 
           | (vlSelf->__PVT__slv_req_cut[1U] >> 2U));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[2U] 
        = (0x1ffffU & (vlSelf->__PVT__slv_req_cut[2U] 
                       >> 2U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0U] 
        = ((1U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0U]) 
           | (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
              << 2U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[1U] 
        = ((1U & (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
                  >> 0x1eU)) | ((2U & (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
                                       >> 0x1eU)) | 
                                (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                                 << 2U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U] 
        = ((0xfff80000U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U]) 
           | ((1U & (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                     >> 0x1eU)) | ((2U & (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                                          >> 0x1eU)) 
                                   | (i_demux_simple__DOT____Vlvbound_h4328facc__0[2U] 
                                      << 2U))));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_valid) 
         & (0U == (IData)(vlSelf->__PVT__slv_ar_select)))) {
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0U] 
            = (2U | vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0U]);
    }
    i_demux_simple__DOT____Vlvbound_h5411f145__0 = 
        (1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0U] 
        = ((0xfffffffeU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0U]) 
           | (IData)(i_demux_simple__DOT____Vlvbound_h5411f145__0));
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[6U] << 0x1fU) 
           | (vlSelf->__PVT__slv_req_cut[5U] >> 1U));
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[7U] << 0x1fU) 
           | (vlSelf->__PVT__slv_req_cut[6U] >> 1U));
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[2U] 
        = (0x7fffffU & (vlSelf->__PVT__slv_req_cut[7U] 
                        >> 1U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
        = ((0xffffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xcU]) 
           | (i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
              << 0x19U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xdU] 
        = ((0xffffffU & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
                         >> 7U)) | ((0x1000000U & (
                                                   i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
                                                   >> 7U)) 
                                    | (i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
                                       << 0x19U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xeU] 
        = ((0xffffffU & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
                         >> 7U)) | ((0x1000000U & (
                                                   i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
                                                   >> 7U)) 
                                    | (i_demux_simple__DOT____Vlvbound_h496bca7c__0[2U] 
                                       << 0x19U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
        = ((0xffff0000U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xfU]) 
           | (0xffffffU & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[2U] 
                           >> 7U)));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_valid) 
         & (1U == (IData)(vlSelf->__PVT__slv_aw_select)))) {
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
            = (0x1000000U | vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xcU]);
    }
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[3U] << 0xbU) 
           | (vlSelf->__PVT__slv_req_cut[2U] >> 0x15U));
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[4U] << 0xbU) 
           | (vlSelf->__PVT__slv_req_cut[3U] >> 0x15U));
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[2U] 
        = (vlSelf->__PVT__slv_req_cut[4U] >> 0x15U);
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
        = ((0xfffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xaU]) 
           | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
              << 0xdU));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xbU] 
        = ((0xfffU & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
                      >> 0x13U)) | ((0x1000U & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
                                                >> 0x13U)) 
                                    | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                                       << 0xdU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
        = ((0xff000000U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xcU]) 
           | ((0xfffU & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                         >> 0x13U)) | ((0x1000U & (
                                                   i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                                                   >> 0x13U)) 
                                       | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[2U] 
                                          << 0xdU))));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (1U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->i_demux_simple__DOT____Vlvbound_hcdc9c603__1 
            = (1U & (vlSelf->__PVT__slv_req_cut[2U] 
                     >> 0x14U));
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
            = ((0xffffefffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xaU]) 
               | ((IData)(vlSelf->i_demux_simple__DOT____Vlvbound_hcdc9c603__1) 
                  << 0xcU));
    }
    i_demux_simple__DOT____Vlvbound_hc7a17057__0 = 
        (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies) 
               >> 1U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
        = ((0xfffff7ffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xaU]) 
           | ((IData)(i_demux_simple__DOT____Vlvbound_hc7a17057__0) 
              << 0xbU));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[1U] << 0x1eU) 
           | (vlSelf->__PVT__slv_req_cut[0U] >> 2U));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[2U] << 0x1eU) 
           | (vlSelf->__PVT__slv_req_cut[1U] >> 2U));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[2U] 
        = (0x1ffffU & (vlSelf->__PVT__slv_req_cut[2U] 
                       >> 2U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[7U] 
        = ((0x1ffffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[7U]) 
           | (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
              << 0x1aU));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[8U] 
        = ((0x1ffffffU & (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
                          >> 6U)) | ((0x2000000U & 
                                      (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
                                       >> 6U)) | (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                                                  << 0x1aU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[9U] 
        = ((0x1ffffffU & (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                          >> 6U)) | ((0x2000000U & 
                                      (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                                       >> 6U)) | (i_demux_simple__DOT____Vlvbound_h4328facc__0[2U] 
                                                  << 0x1aU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
        = ((0xfffff800U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xaU]) 
           | (0x1ffffffU & (i_demux_simple__DOT____Vlvbound_h4328facc__0[2U] 
                            >> 6U)));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_valid) 
         & (1U == (IData)(vlSelf->__PVT__slv_ar_select)))) {
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[7U] 
            = (0x2000000U | vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[7U]);
    }
    i_demux_simple__DOT____Vlvbound_h5411f145__0 = 
        (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies) 
               >> 1U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[7U] 
        = ((0xfeffffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[7U]) 
           | ((IData)(i_demux_simple__DOT____Vlvbound_h5411f145__0) 
              << 0x18U));
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[6U] << 0x1fU) 
           | (vlSelf->__PVT__slv_req_cut[5U] >> 1U));
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[7U] << 0x1fU) 
           | (vlSelf->__PVT__slv_req_cut[6U] >> 1U));
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[2U] 
        = (0x7fffffU & (vlSelf->__PVT__slv_req_cut[7U] 
                        >> 1U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x14U] 
        = ((0xffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x14U]) 
           | (i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
              << 0x11U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
        = ((0xffffU & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
                       >> 0xfU)) | ((0x10000U & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
                                                 >> 0xfU)) 
                                    | (i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
                                       << 0x11U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x16U] 
        = ((0xffffU & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
                       >> 0xfU)) | ((0x10000U & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
                                                 >> 0xfU)) 
                                    | (i_demux_simple__DOT____Vlvbound_h496bca7c__0[2U] 
                                       << 0x11U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
        = ((0xffffff00U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U]) 
           | (0xffffU & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[2U] 
                         >> 0xfU)));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_valid) 
         & (2U == (IData)(vlSelf->__PVT__slv_aw_select)))) {
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x14U] 
            = (0x10000U | vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x14U]);
    }
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[3U] << 0xbU) 
           | (vlSelf->__PVT__slv_req_cut[2U] >> 0x15U));
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[4U] << 0xbU) 
           | (vlSelf->__PVT__slv_req_cut[3U] >> 0x15U));
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[2U] 
        = (vlSelf->__PVT__slv_req_cut[4U] >> 0x15U);
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x12U] 
        = ((0xfU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x12U]) 
           | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
              << 5U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x13U] 
        = ((0xfU & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
                    >> 0x1bU)) | ((0x10U & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
                                            >> 0x1bU)) 
                                  | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                                     << 5U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x14U] 
        = ((0xffff0000U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x14U]) 
           | ((0xfU & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                       >> 0x1bU)) | ((0x10U & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                                               >> 0x1bU)) 
                                     | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[2U] 
                                        << 5U))));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (2U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->i_demux_simple__DOT____Vlvbound_hcdc9c603__1 
            = (1U & (vlSelf->__PVT__slv_req_cut[2U] 
                     >> 0x14U));
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x12U] 
            = ((0xffffffefU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x12U]) 
               | ((IData)(vlSelf->i_demux_simple__DOT____Vlvbound_hcdc9c603__1) 
                  << 4U));
    }
    i_demux_simple__DOT____Vlvbound_hc7a17057__0 = 
        (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies) 
               >> 2U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x12U] 
        = ((0xfffffff7U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x12U]) 
           | ((IData)(i_demux_simple__DOT____Vlvbound_hc7a17057__0) 
              << 3U));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[1U] << 0x1eU) 
           | (vlSelf->__PVT__slv_req_cut[0U] >> 2U));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[2U] << 0x1eU) 
           | (vlSelf->__PVT__slv_req_cut[1U] >> 2U));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[2U] 
        = (0x1ffffU & (vlSelf->__PVT__slv_req_cut[2U] 
                       >> 2U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
        = ((0x1ffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xfU]) 
           | (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
              << 0x12U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x10U] 
        = ((0x1ffffU & (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
                        >> 0xeU)) | ((0x20000U & (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
                                                  >> 0xeU)) 
                                     | (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                                        << 0x12U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x11U] 
        = ((0x1ffffU & (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                        >> 0xeU)) | ((0x20000U & (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                                                  >> 0xeU)) 
                                     | (i_demux_simple__DOT____Vlvbound_h4328facc__0[2U] 
                                        << 0x12U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x12U] 
        = ((0xfffffff8U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x12U]) 
           | (0x1ffffU & (i_demux_simple__DOT____Vlvbound_h4328facc__0[2U] 
                          >> 0xeU)));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_valid) 
         & (2U == (IData)(vlSelf->__PVT__slv_ar_select)))) {
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
            = (0x20000U | vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xfU]);
    }
    i_demux_simple__DOT____Vlvbound_h5411f145__0 = 
        (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies) 
               >> 2U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
        = ((0xfffeffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xfU]) 
           | ((IData)(i_demux_simple__DOT____Vlvbound_h5411f145__0) 
              << 0x10U));
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[6U] << 0x1fU) 
           | (vlSelf->__PVT__slv_req_cut[5U] >> 1U));
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[7U] << 0x1fU) 
           | (vlSelf->__PVT__slv_req_cut[6U] >> 1U));
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[2U] 
        = (0x7fffffU & (vlSelf->__PVT__slv_req_cut[7U] 
                        >> 1U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
        = ((0xffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1cU]) 
           | (i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
              << 9U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1dU] 
        = ((0xffU & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
                     >> 0x17U)) | ((0x100U & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
                                              >> 0x17U)) 
                                   | (i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
                                      << 9U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1eU] 
        = ((0xffU & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
                     >> 0x17U)) | ((0x100U & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
                                              >> 0x17U)) 
                                   | (i_demux_simple__DOT____Vlvbound_h496bca7c__0[2U] 
                                      << 9U)));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_valid) 
         & (3U == (IData)(vlSelf->__PVT__slv_aw_select)))) {
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
            = (0x100U | vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1cU]);
    }
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[3U] << 0xbU) 
           | (vlSelf->__PVT__slv_req_cut[2U] >> 0x15U));
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[4U] << 0xbU) 
           | (vlSelf->__PVT__slv_req_cut[3U] >> 0x15U));
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[2U] 
        = (vlSelf->__PVT__slv_req_cut[4U] >> 0x15U);
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
        = ((0xfffffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x19U]) 
           | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
              << 0x1dU));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1aU] 
        = ((0xfffffffU & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
                          >> 3U)) | ((0x10000000U & 
                                      (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
                                       >> 3U)) | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                                                  << 0x1dU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1bU] 
        = ((0xfffffffU & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                          >> 3U)) | ((0x10000000U & 
                                      (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                                       >> 3U)) | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[2U] 
                                                  << 0x1dU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
        = ((0xffffff00U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1cU]) 
           | (0xfffffffU & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[2U] 
                            >> 3U)));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (3U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->i_demux_simple__DOT____Vlvbound_hcdc9c603__1 
            = (1U & (vlSelf->__PVT__slv_req_cut[2U] 
                     >> 0x14U));
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
            = ((0xefffffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x19U]) 
               | ((IData)(vlSelf->i_demux_simple__DOT____Vlvbound_hcdc9c603__1) 
                  << 0x1cU));
    }
    i_demux_simple__DOT____Vlvbound_hc7a17057__0 = 
        (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies) 
               >> 3U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
        = ((0xf7ffffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x19U]) 
           | ((IData)(i_demux_simple__DOT____Vlvbound_hc7a17057__0) 
              << 0x1bU));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[1U] << 0x1eU) 
           | (vlSelf->__PVT__slv_req_cut[0U] >> 2U));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[2U] << 0x1eU) 
           | (vlSelf->__PVT__slv_req_cut[1U] >> 2U));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[2U] 
        = (0x1ffffU & (vlSelf->__PVT__slv_req_cut[2U] 
                       >> 2U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
        = ((0x1ffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U]) 
           | (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
              << 0xaU));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x18U] 
        = ((0x1ffU & (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
                      >> 0x16U)) | ((0x200U & (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
                                               >> 0x16U)) 
                                    | (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                                       << 0xaU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
        = ((0xf8000000U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x19U]) 
           | ((0x1ffU & (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                         >> 0x16U)) | ((0x200U & (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                                                  >> 0x16U)) 
                                       | (i_demux_simple__DOT____Vlvbound_h4328facc__0[2U] 
                                          << 0xaU))));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_valid) 
         & (3U == (IData)(vlSelf->__PVT__slv_ar_select)))) {
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
            = (0x200U | vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U]);
    }
    i_demux_simple__DOT____Vlvbound_h5411f145__0 = 
        (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies) 
               >> 3U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
        = ((0xfffffeffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U]) 
           | ((IData)(i_demux_simple__DOT____Vlvbound_h5411f145__0) 
              << 8U));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__4(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__4\n"); );
    // Body
    vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_ptw__axi_req_o[5U] 
           & (IData)(vlSelf->__PVT__slv_aw_ready_chan));
    vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_ptw__axi_req_o[5U] 
           & (IData)(vlSelf->__PVT__slv_aw_ready_sel));
    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_ptw__axi_req_o[2U] 
            >> 0x14U) & (IData)(vlSelf->__Vcellout__i_w_spill_reg__ready_o));
    vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_ptw__axi_req_o[0U] 
            >> 1U) & (IData)(vlSelf->__PVT__slv_ar_ready_chan));
    vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_ptw__axi_req_o[0U] 
            >> 1U) & (IData)(vlSelf->__PVT__slv_ar_ready_sel));
    vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_ptw__axi_req_o[2U] 
               >> 0x13U)) & (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_ptw__axi_req_o[2U] 
              >> 0x13U));
    vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_ptw__axi_req_o[0U]) 
           & (IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_ptw__axi_req_o[0U]);
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__7(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__7\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_down = 0U;
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (0U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_down 
            = (1U & (IData)(((0x900000U == (0x900000U 
                                            & vlSelf->__PVT__slv_req_cut[2U])) 
                             & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[2U] 
                                >> 0xfU))));
    }
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (1U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_down 
            = (1U & (IData)(((0x900000U == (0x900000U 
                                            & vlSelf->__PVT__slv_req_cut[2U])) 
                             & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[5U] 
                                >> 1U))));
    }
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (2U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_down 
            = (1U & (IData)(((0x900000U == (0x900000U 
                                            & vlSelf->__PVT__slv_req_cut[2U])) 
                             & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[7U] 
                                >> 0x13U))));
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((8U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[0xaU] 
                      >> 1U)) | ((4U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[7U] 
                                        >> 0x10U)) 
                                 | ((2U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[5U] 
                                           << 1U)) 
                                    | (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[2U] 
                                             >> 0xeU))))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((8U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[9U] 
                      >> 0x1aU)) | ((4U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[7U] 
                                           >> 9U)) 
                                    | ((2U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[4U] 
                                              >> 0x18U)) 
                                       | (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[2U] 
                                                >> 7U))))));
    vlSelf->__PVT__slv_resp_cut[2U] = (0x37fffU & vlSelf->__PVT__slv_resp_cut[2U]);
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (0U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->__PVT__slv_resp_cut[2U] = ((0x37fffU 
                                            & vlSelf->__PVT__slv_resp_cut[2U]) 
                                           | (0x8000U 
                                              & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[2U]));
    }
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (1U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->__PVT__slv_resp_cut[2U] = ((0x37fffU 
                                            & vlSelf->__PVT__slv_resp_cut[2U]) 
                                           | (0x8000U 
                                              & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[5U] 
                                                 << 0xeU)));
    }
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (2U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->__PVT__slv_resp_cut[2U] = ((0x37fffU 
                                            & vlSelf->__PVT__slv_resp_cut[2U]) 
                                           | (0x8000U 
                                              & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[7U] 
                                                 >> 4U)));
    }
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (3U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_down 
            = (1U & (IData)(((0x900000U == (0x900000U 
                                            & vlSelf->__PVT__slv_req_cut[2U])) 
                             & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[0xaU] 
                                >> 5U))));
        vlSelf->__PVT__slv_resp_cut[2U] = ((0x37fffU 
                                            & vlSelf->__PVT__slv_resp_cut[2U]) 
                                           | (0x8000U 
                                              & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[0xaU] 
                                                 << 0xaU)));
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_ready 
        = ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_valid) 
           & ((0x147U >= ((IData)(0x50U) + (0x1ffU 
                                            & ((IData)(0x52U) 
                                               * (IData)(vlSelf->__PVT__slv_ar_select))))) 
              && (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[
                        (((IData)(0x50U) + (0x1ffU 
                                            & ((IData)(0x52U) 
                                               * (IData)(vlSelf->__PVT__slv_ar_select)))) 
                         >> 5U)] >> (0x1fU & ((IData)(0x50U) 
                                              + (0x1ffU 
                                                 & ((IData)(0x52U) 
                                                    * (IData)(vlSelf->__PVT__slv_ar_select)))))))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_ready 
        = ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_valid) 
           & ((0x147U >= ((IData)(0x51U) + (0x1ffU 
                                            & ((IData)(0x52U) 
                                               * (IData)(vlSelf->__PVT__slv_aw_select))))) 
              && (1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[
                        (((IData)(0x51U) + (0x1ffU 
                                            & ((IData)(0x52U) 
                                               * (IData)(vlSelf->__PVT__slv_aw_select)))) 
                         >> 5U)] >> (0x1fU & ((IData)(0x51U) 
                                              + (0x1ffU 
                                                 & ((IData)(0x52U) 
                                                    * (IData)(vlSelf->__PVT__slv_aw_select)))))))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q;
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_down) 
         ^ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_d 
            = (7U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_down)
                      ? ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)) : ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))));
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U)) | (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d) 
                                 >> 3U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffff8U & (((3U <= (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                            << 3U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffcU & (((2U <= (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                               << 2U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))) 
              | ((0xfffffffeU & (((1U <= (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                                  << 1U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))) 
                 | (1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffffff8U & (((3U > (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                            << 3U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffcU & (((2U > (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                               << 2U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))) 
              | (0xfffffffeU & (((1U > (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                                 << 1U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U)) | (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d) 
                                 >> 3U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffff8U & (((3U <= (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                            << 3U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffcU & (((2U <= (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                               << 2U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))) 
              | ((0xfffffffeU & (((1U <= (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                                  << 1U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))) 
                 | (1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffffff8U & (((3U > (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                            << 3U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffcU & (((2U > (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                               << 2U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))) 
              | (0xfffffffeU & (((1U > (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                                 << 1U) & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_d 
        = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_q;
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__load_ar_lock = 0U;
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_push = 0U;
    vlSelf->__PVT__slv_resp_cut[2U] = (0x2ffffU & vlSelf->__PVT__slv_resp_cut[2U]);
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_q) {
        if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_ready) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_d = 0U;
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__load_ar_lock = 1U;
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_push = 1U;
            vlSelf->__PVT__slv_resp_cut[2U] = (0x10000U 
                                               | vlSelf->__PVT__slv_resp_cut[2U]);
        }
    } else if ((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__cnt_full)))))) {
        if ((1U & ((vlSelf->__PVT__slv_req_cut[0U] 
                    >> 1U) & ((~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_select_occupied)) 
                              | ((IData)(vlSelf->__PVT__slv_ar_select) 
                                 == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lookup_ar_select)))))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_ready)))) {
                vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_d = 1U;
                vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__load_ar_lock = 1U;
            }
            if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_ready) {
                vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_push = 1U;
                vlSelf->__PVT__slv_resp_cut[2U] = (0x10000U 
                                                   | vlSelf->__PVT__slv_resp_cut[2U]);
            }
        }
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_d 
        = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q;
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__load_aw_lock = 0U;
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__atop_inject = 0U;
    vlSelf->__PVT__slv_resp_cut[2U] = (0x1ffffU & vlSelf->__PVT__slv_resp_cut[2U]);
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q) {
        if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_ready) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_d = 0U;
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__load_aw_lock = 1U;
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__atop_inject 
                = (1U & (vlSelf->__PVT__slv_req_cut[5U] 
                         >> 8U));
            vlSelf->__PVT__slv_resp_cut[2U] = (0x20000U 
                                               | vlSelf->__PVT__slv_resp_cut[2U]);
        }
    } else if ((((~ (IData)((0U != (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__cnt_full)))) 
                 & (3U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q)))) 
                & (~ ((0U != (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__cnt_full)) 
                      & (vlSelf->__PVT__slv_req_cut[5U] 
                         >> 8U))))) {
        if (((vlSelf->__PVT__slv_req_cut[5U] & ((0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))) 
                                                | ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select) 
                                                   == (IData)(vlSelf->__PVT__slv_aw_select)))) 
             & ((~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_select_occupied)) 
                | ((IData)(vlSelf->__PVT__slv_aw_select) 
                   == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lookup_aw_select))))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_ready)))) {
                vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_d = 1U;
                vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__load_aw_lock = 1U;
            }
            if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_ready) {
                vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__atop_inject 
                    = (1U & (vlSelf->__PVT__slv_req_cut[5U] 
                             >> 8U));
                vlSelf->__PVT__slv_resp_cut[2U] = (0x20000U 
                                                   | vlSelf->__PVT__slv_resp_cut[2U]);
            }
        }
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en 
        = ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_push)
            ? (0xfU & ((IData)(1U) << (3U & (vlSelf->__Vcellout__i_ar_spill_reg__data_o[2U] 
                                             >> 0xfU))))
            : 0U);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en 
        = ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__atop_inject)
            ? (0xfU & ((IData)(1U) << (3U & (vlSelf->__Vcellout__i_aw_spill_reg__data_o[2U] 
                                             >> 0x15U))))
            : 0U);
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__8(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__8\n"); );
    // Body
    if ((0x4000U & vlSelf->__PVT__slv_resp_cut[2U])) {
        vlSelf->__PVT__slv_resp_cut[2U] = ((0x3cfffU 
                                            & vlSelf->__PVT__slv_resp_cut[2U]) 
                                           | (0x3ffffU 
                                              & (((0x147U 
                                                   >= 
                                                   ((IData)(0x4cU) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x52U) 
                                                        * 
                                                        (3U 
                                                         & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))))
                                                   ? 
                                                  (3U 
                                                   & (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x4cU) 
                                                            + 
                                                            (0x1ffU 
                                                             & ((IData)(0x52U) 
                                                                * 
                                                                (3U 
                                                                 & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                        ? 0U
                                                        : 
                                                       (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[
                                                        (((IData)(0x4dU) 
                                                          + 
                                                          (0x1ffU 
                                                           & ((IData)(0x52U) 
                                                              * 
                                                              (3U 
                                                               & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x4cU) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                      | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[
                                                         (((IData)(0x4cU) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x52U) 
                                                               * 
                                                               (3U 
                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x4cU) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes)))))))))
                                                   : 0U) 
                                                 << 0xcU)));
        vlSelf->__PVT__slv_resp_cut[2U] = ((0x3f3ffU 
                                            & vlSelf->__PVT__slv_resp_cut[2U]) 
                                           | (0x3ffffU 
                                              & (((0x147U 
                                                   >= 
                                                   ((IData)(0x4aU) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x52U) 
                                                        * 
                                                        (3U 
                                                         & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))))
                                                   ? 
                                                  (3U 
                                                   & (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x4aU) 
                                                            + 
                                                            (0x1ffU 
                                                             & ((IData)(0x52U) 
                                                                * 
                                                                (3U 
                                                                 & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                        ? 0U
                                                        : 
                                                       (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[
                                                        (((IData)(0x4bU) 
                                                          + 
                                                          (0x1ffU 
                                                           & ((IData)(0x52U) 
                                                              * 
                                                              (3U 
                                                               & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x4aU) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                      | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[
                                                         (((IData)(0x4aU) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x52U) 
                                                               * 
                                                               (3U 
                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x4aU) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes)))))))))
                                                   : 0U) 
                                                 << 0xaU)));
        vlSelf->__PVT__slv_resp_cut[2U] = ((0x3fcffU 
                                            & vlSelf->__PVT__slv_resp_cut[2U]) 
                                           | (0x3ffffU 
                                              & (((0x147U 
                                                   >= 
                                                   ((IData)(0x48U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x52U) 
                                                        * 
                                                        (3U 
                                                         & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))))
                                                   ? 
                                                  (3U 
                                                   & (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x48U) 
                                                            + 
                                                            (0x1ffU 
                                                             & ((IData)(0x52U) 
                                                                * 
                                                                (3U 
                                                                 & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                        ? 0U
                                                        : 
                                                       (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[
                                                        (((IData)(0x49U) 
                                                          + 
                                                          (0x1ffU 
                                                           & ((IData)(0x52U) 
                                                              * 
                                                              (3U 
                                                               & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x48U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                      | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[
                                                         (((IData)(0x48U) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x52U) 
                                                               * 
                                                               (3U 
                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x48U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes)))))))))
                                                   : 0U) 
                                                 << 8U)));
    } else {
        vlSelf->__PVT__slv_resp_cut[2U] = (0x3c0ffU 
                                           & vlSelf->__PVT__slv_resp_cut[2U]);
    }
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__9(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__9\n"); );
    // Body
    if ((0x80U & vlSelf->__PVT__slv_resp_cut[2U])) {
        vlSelf->__PVT__slv_resp_cut[2U] = ((0x3ff9fU 
                                            & vlSelf->__PVT__slv_resp_cut[2U]) 
                                           | (0x3ffffU 
                                              & (((0x147U 
                                                   >= 
                                                   ((IData)(0x45U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x52U) 
                                                        * 
                                                        (3U 
                                                         & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))
                                                   ? 
                                                  (3U 
                                                   & (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x45U) 
                                                            + 
                                                            (0x1ffU 
                                                             & ((IData)(0x52U) 
                                                                * 
                                                                (3U 
                                                                 & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                        ? 0U
                                                        : 
                                                       (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[
                                                        (((IData)(0x46U) 
                                                          + 
                                                          (0x1ffU 
                                                           & ((IData)(0x52U) 
                                                              * 
                                                              (3U 
                                                               & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x45U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                      | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[
                                                         (((IData)(0x45U) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x52U) 
                                                               * 
                                                               (3U 
                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x45U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))))
                                                   : 0U) 
                                                 << 5U)));
        vlSelf->__PVT__slv_resp_cut[0U] = ((0x1fU & 
                                            vlSelf->__PVT__slv_resp_cut[0U]) 
                                           | ((IData)(
                                                      ((0x147U 
                                                        >= 
                                                        ((IData)(5U) 
                                                         + 
                                                         (0x1ffU 
                                                          & ((IData)(0x52U) 
                                                             * 
                                                             (3U 
                                                              & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[
                                                                         (((IData)(0x44U) 
                                                                           + 
                                                                           (0x1ffU 
                                                                            & ((IData)(0x52U) 
                                                                               * 
                                                                               (3U 
                                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((0U 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(5U) 
                                                               + 
                                                               (0x1ffU 
                                                                & ((IData)(0x52U) 
                                                                   * 
                                                                   (3U 
                                                                    & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                           ? 0x20U
                                                           : 
                                                          ((IData)(0x40U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(5U) 
                                                               + 
                                                               (0x1ffU 
                                                                & ((IData)(0x52U) 
                                                                   * 
                                                                   (3U 
                                                                    & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                        | (((0U 
                                                             == 
                                                             (0x1fU 
                                                              & ((IData)(5U) 
                                                                 + 
                                                                 (0x1ffU 
                                                                  & ((IData)(0x52U) 
                                                                     * 
                                                                     (3U 
                                                                      & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                             ? 0ULL
                                                             : 
                                                            ((QData)((IData)(
                                                                             vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[
                                                                             (((IData)(0x24U) 
                                                                               + 
                                                                               (0x1ffU 
                                                                                & ((IData)(0x52U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                              >> 5U)])) 
                                                             << 
                                                             ((IData)(0x20U) 
                                                              - 
                                                              (0x1fU 
                                                               & ((IData)(5U) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & ((IData)(0x52U) 
                                                                      * 
                                                                      (3U 
                                                                       & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[
                                                                              (((IData)(5U) 
                                                                                + 
                                                                                (0x1ffU 
                                                                                & ((IData)(0x52U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                               >> 5U)])) 
                                                              >> 
                                                              (0x1fU 
                                                               & ((IData)(5U) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & ((IData)(0x52U) 
                                                                      * 
                                                                      (3U 
                                                                       & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))))
                                                        : 0ULL)) 
                                              << 5U));
        vlSelf->__PVT__slv_resp_cut[1U] = (((IData)(
                                                    ((0x147U 
                                                      >= 
                                                      ((IData)(5U) 
                                                       + 
                                                       (0x1ffU 
                                                        & ((IData)(0x52U) 
                                                           * 
                                                           (3U 
                                                            & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[
                                                                       (((IData)(0x44U) 
                                                                         + 
                                                                         (0x1ffU 
                                                                          & ((IData)(0x52U) 
                                                                             * 
                                                                             (3U 
                                                                              & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(5U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                         ? 0x20U
                                                         : 
                                                        ((IData)(0x40U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(5U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                      | (((0U 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(5U) 
                                                               + 
                                                               (0x1ffU 
                                                                & ((IData)(0x52U) 
                                                                   * 
                                                                   (3U 
                                                                    & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                           ? 0ULL
                                                           : 
                                                          ((QData)((IData)(
                                                                           vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[
                                                                           (((IData)(0x24U) 
                                                                             + 
                                                                             (0x1ffU 
                                                                              & ((IData)(0x52U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                            >> 5U)])) 
                                                           << 
                                                           ((IData)(0x20U) 
                                                            - 
                                                            (0x1fU 
                                                             & ((IData)(5U) 
                                                                + 
                                                                (0x1ffU 
                                                                 & ((IData)(0x52U) 
                                                                    * 
                                                                    (3U 
                                                                     & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                         | ((QData)((IData)(
                                                                            vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[
                                                                            (((IData)(5U) 
                                                                              + 
                                                                              (0x1ffU 
                                                                               & ((IData)(0x52U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                             >> 5U)])) 
                                                            >> 
                                                            (0x1fU 
                                                             & ((IData)(5U) 
                                                                + 
                                                                (0x1ffU 
                                                                 & ((IData)(0x52U) 
                                                                    * 
                                                                    (3U 
                                                                     & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))))
                                                      : 0ULL)) 
                                            >> 0x1bU) 
                                           | ((IData)(
                                                      (((0x147U 
                                                         >= 
                                                         ((IData)(5U) 
                                                          + 
                                                          (0x1ffU 
                                                           & ((IData)(0x52U) 
                                                              * 
                                                              (3U 
                                                               & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[
                                                                          (((IData)(0x44U) 
                                                                            + 
                                                                            (0x1ffU 
                                                                             & ((IData)(0x52U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                           >> 5U)])) 
                                                          << 
                                                          ((0U 
                                                            == 
                                                            (0x1fU 
                                                             & ((IData)(5U) 
                                                                + 
                                                                (0x1ffU 
                                                                 & ((IData)(0x52U) 
                                                                    * 
                                                                    (3U 
                                                                     & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                            ? 0x20U
                                                            : 
                                                           ((IData)(0x40U) 
                                                            - 
                                                            (0x1fU 
                                                             & ((IData)(5U) 
                                                                + 
                                                                (0x1ffU 
                                                                 & ((IData)(0x52U) 
                                                                    * 
                                                                    (3U 
                                                                     & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                         | (((0U 
                                                              == 
                                                              (0x1fU 
                                                               & ((IData)(5U) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & ((IData)(0x52U) 
                                                                      * 
                                                                      (3U 
                                                                       & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                              ? 0ULL
                                                              : 
                                                             ((QData)((IData)(
                                                                              vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[
                                                                              (((IData)(0x24U) 
                                                                                + 
                                                                                (0x1ffU 
                                                                                & ((IData)(0x52U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                               >> 5U)])) 
                                                              << 
                                                              ((IData)(0x20U) 
                                                               - 
                                                               (0x1fU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (0x1ffU 
                                                                    & ((IData)(0x52U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                            | ((QData)((IData)(
                                                                               vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[
                                                                               (((IData)(5U) 
                                                                                + 
                                                                                (0x1ffU 
                                                                                & ((IData)(0x52U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                                >> 5U)])) 
                                                               >> 
                                                               (0x1fU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (0x1ffU 
                                                                    & ((IData)(0x52U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))))
                                                         : 0ULL) 
                                                       >> 0x20U)) 
                                              << 5U));
        vlSelf->__PVT__slv_resp_cut[2U] = ((0x3ffe0U 
                                            & vlSelf->__PVT__slv_resp_cut[2U]) 
                                           | (0x3ffffU 
                                              & ((IData)(
                                                         (((0x147U 
                                                            >= 
                                                            ((IData)(5U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))
                                                            ? 
                                                           (((QData)((IData)(
                                                                             vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[
                                                                             (((IData)(0x44U) 
                                                                               + 
                                                                               (0x1ffU 
                                                                                & ((IData)(0x52U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                              >> 5U)])) 
                                                             << 
                                                             ((0U 
                                                               == 
                                                               (0x1fU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (0x1ffU 
                                                                    & ((IData)(0x52U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                               ? 0x20U
                                                               : 
                                                              ((IData)(0x40U) 
                                                               - 
                                                               (0x1fU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (0x1ffU 
                                                                    & ((IData)(0x52U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                            | (((0U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (0x1ffU 
                                                                      & ((IData)(0x52U) 
                                                                         * 
                                                                         (3U 
                                                                          & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                                 ? 0ULL
                                                                 : 
                                                                ((QData)((IData)(
                                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[
                                                                                (((IData)(0x24U) 
                                                                                + 
                                                                                (0x1ffU 
                                                                                & ((IData)(0x52U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                                >> 5U)])) 
                                                                 << 
                                                                 ((IData)(0x20U) 
                                                                  - 
                                                                  (0x1fU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (0x1ffU 
                                                                       & ((IData)(0x52U) 
                                                                          * 
                                                                          (3U 
                                                                           & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                               | ((QData)((IData)(
                                                                                vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[
                                                                                (((IData)(5U) 
                                                                                + 
                                                                                (0x1ffU 
                                                                                & ((IData)(0x52U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                                                >> 5U)])) 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (0x1ffU 
                                                                       & ((IData)(0x52U) 
                                                                          * 
                                                                          (3U 
                                                                           & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))))
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 >> 0x1bU)));
        vlSelf->__PVT__slv_resp_cut[0U] = ((0xffffffe7U 
                                            & vlSelf->__PVT__slv_resp_cut[0U]) 
                                           | (((0x147U 
                                                >= 
                                                ((IData)(3U) 
                                                 + 
                                                 (0x1ffU 
                                                  & ((IData)(0x52U) 
                                                     * 
                                                     (3U 
                                                      & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))
                                                ? (3U 
                                                   & (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(3U) 
                                                            + 
                                                            (0x1ffU 
                                                             & ((IData)(0x52U) 
                                                                * 
                                                                (3U 
                                                                 & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                                        ? 0U
                                                        : 
                                                       (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[
                                                        (((IData)(4U) 
                                                          + 
                                                          (0x1ffU 
                                                           & ((IData)(0x52U) 
                                                              * 
                                                              (3U 
                                                               & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(3U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                                      | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[
                                                         (((IData)(3U) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x52U) 
                                                               * 
                                                               (3U 
                                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(3U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x52U) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))))
                                                : 0U) 
                                              << 3U));
        vlSelf->__PVT__slv_resp_cut[0U] = ((0xfffffffbU 
                                            & vlSelf->__PVT__slv_resp_cut[0U]) 
                                           | (((0x147U 
                                                >= 
                                                ((IData)(2U) 
                                                 + 
                                                 (0x1ffU 
                                                  & ((IData)(0x52U) 
                                                     * 
                                                     (3U 
                                                      & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))) 
                                               && (1U 
                                                   & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[
                                                      (((IData)(2U) 
                                                        + 
                                                        (0x1ffU 
                                                         & ((IData)(0x52U) 
                                                            * 
                                                            (3U 
                                                             & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                       >> 5U)] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          (0x1ffU 
                                                           & ((IData)(0x52U) 
                                                              * 
                                                              (3U 
                                                               & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))))) 
                                              << 2U));
        vlSelf->__PVT__slv_resp_cut[0U] = ((0xfffffffcU 
                                            & vlSelf->__PVT__slv_resp_cut[0U]) 
                                           | ((0x147U 
                                               >= (0x1ffU 
                                                   & ((IData)(0x52U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))
                                               ? (3U 
                                                  & (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x52U) 
                                                           * 
                                                           (3U 
                                                            & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))
                                                       ? 0U
                                                       : 
                                                      (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[
                                                       (((IData)(1U) 
                                                         + 
                                                         (0x1ffU 
                                                          & ((IData)(0x52U) 
                                                             * 
                                                             (3U 
                                                              & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x52U) 
                                                            * 
                                                            (3U 
                                                             & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))))))) 
                                                     | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT____Vcellinp__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_resps_i[
                                                        (0xfU 
                                                         & (((IData)(0x52U) 
                                                             * 
                                                             (3U 
                                                              & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x52U) 
                                                            * 
                                                            (3U 
                                                             & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes)))))))
                                               : 0U));
    } else {
        vlSelf->__PVT__slv_resp_cut[0U] = 0U;
        vlSelf->__PVT__slv_resp_cut[1U] = 0U;
        vlSelf->__PVT__slv_resp_cut[2U] = (0x3ff80U 
                                           & vlSelf->__PVT__slv_resp_cut[2U]);
    }
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__0(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__0\n"); );
    // Init
    VlWide<3>/*86:0*/ i_demux_simple__DOT____Vlvbound_h496bca7c__0;
    VL_ZERO_W(87, i_demux_simple__DOT____Vlvbound_h496bca7c__0);
    VlWide<3>/*74:0*/ i_demux_simple__DOT____Vlvbound_h4b4c4e41__0;
    VL_ZERO_W(75, i_demux_simple__DOT____Vlvbound_h4b4c4e41__0);
    CData/*0:0*/ i_demux_simple__DOT____Vlvbound_hc7a17057__0;
    i_demux_simple__DOT____Vlvbound_hc7a17057__0 = 0;
    VlWide<3>/*80:0*/ i_demux_simple__DOT____Vlvbound_h4328facc__0;
    VL_ZERO_W(81, i_demux_simple__DOT____Vlvbound_h4328facc__0);
    CData/*0:0*/ i_demux_simple__DOT____Vlvbound_h5411f145__0;
    i_demux_simple__DOT____Vlvbound_h5411f145__0 = 0;
    // Body
    if (vlSymsp->TOP.rst_ni) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d;
        if (vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        if (vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        }
        if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__load_ar_lock) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_q 
                = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_d;
        }
        if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__load_aw_lock) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q 
                = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_d;
        }
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        if (((IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        if (((IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        }
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q 
            = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_d;
        if (((IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_q 
                = vlSelf->__PVT__slv_aw_select;
        }
        if ((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en))) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q 
                = ((0xfcU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q)) 
                   | (IData)(vlSelf->__PVT__slv_ar_select));
        }
        if ((2U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en))) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q 
                = ((0xf3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q)) 
                   | ((IData)(vlSelf->__PVT__slv_ar_select) 
                      << 2U));
        }
        if ((4U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en))) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q 
                = ((0xcfU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q)) 
                   | ((IData)(vlSelf->__PVT__slv_ar_select) 
                      << 4U));
        }
        if ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en))) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q 
                = ((0x3fU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q)) 
                   | ((IData)(vlSelf->__PVT__slv_ar_select) 
                      << 6U));
        }
        if (((IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (((IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        if (((IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill;
        }
        if (vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q 
                = vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q;
        }
        if (vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        if ((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en))) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q 
                = ((0xfcU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q)) 
                   | (IData)(vlSelf->__PVT__slv_aw_select));
        }
        if ((2U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en))) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q 
                = ((0xf3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q)) 
                   | ((IData)(vlSelf->__PVT__slv_aw_select) 
                      << 2U));
        }
        if ((4U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en))) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q 
                = ((0xcfU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q)) 
                   | ((IData)(vlSelf->__PVT__slv_aw_select) 
                      << 4U));
        }
        if ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en))) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q 
                = ((0x3fU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q)) 
                   | ((IData)(vlSelf->__PVT__slv_aw_select) 
                      << 6U));
        }
        if (vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        if (vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = vlSelf->__PVT__slv_resp_cut[0U];
            vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = vlSelf->__PVT__slv_resp_cut[1U];
            vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = (0x7fU & vlSelf->__PVT__slv_resp_cut[2U]);
        }
        if (vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q 
                = (0x3fU & (vlSelf->__PVT__slv_resp_cut[2U] 
                            >> 8U));
        }
        if (vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q 
                = ((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_error)
                    ? 3U : (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar));
        }
        if (vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_ptw__axi_req_o[3U] 
                    << 0xbU) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_ptw__axi_req_o[2U] 
                                >> 0x15U));
            vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_ptw__axi_req_o[4U] 
                    << 0xbU) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_ptw__axi_req_o[3U] 
                                >> 0x15U));
            vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_ptw__axi_req_o[4U] 
                   >> 0x15U);
        }
        if (vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q 
                = ((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_error)
                    ? 3U : (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw));
        }
        if (vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_ptw__axi_req_o[1U] 
                    << 0x1eU) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_ptw__axi_req_o[0U] 
                                 >> 2U));
            vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_ptw__axi_req_o[2U] 
                    << 0x1eU) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_ptw__axi_req_o[1U] 
                                 >> 2U));
            vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = (0x1ffffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_ptw__axi_req_o[2U] 
                               >> 2U));
        }
        if (vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_ptw__axi_req_o[6U] 
                    << 0x1fU) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_ptw__axi_req_o[5U] 
                                 >> 1U));
            vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_ptw__axi_req_o[7U] 
                    << 0x1fU) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_ptw__axi_req_o[6U] 
                                 >> 1U));
            vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = (0x7fffffU & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__i_reqrsp_to_axi_ptw__axi_req_o[7U] 
                                >> 1U));
        }
    } else {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q = 0U;
        vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_q = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q 
            = (0xfcU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q 
            = (0xf3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q 
            = (0xcfU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q 
            = (0x3fU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q));
        vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = 0U;
        vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q 
            = (0xfcU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q 
            = (0xf3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q 
            = (0xcfU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q 
            = (0x3fU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q));
        vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
        vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0U;
        vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0U;
        vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
        vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = 0U;
        vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
        vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP.rst_ni) && (1U & ((~ (IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_b_mux__gnt_i)) 
                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP.rst_ni) && (1U & ((~ (IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_r_mux__gnt_i)) 
                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__cnt_full 
        = (((IData)((((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                      >> 2U) | (3U == (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
            << 3U) | (((IData)((((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                 >> 2U) | (3U == (3U 
                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                       << 2U) | (((IData)((((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 2U) 
                                           | (3U == 
                                              (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 1U) | (IData)(
                                                   (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                     >> 2U) 
                                                    | (3U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))))));
    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__Vcellout__i_w_spill_reg__ready_o = (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                                                     | (~ (IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__cnt_full 
        = (((IData)((((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                      >> 2U) | (3U == (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
            << 3U) | (((IData)((((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                 >> 2U) | (3U == (3U 
                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                       << 2U) | (((IData)((((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 2U) 
                                           | (3U == 
                                              (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                  << 1U) | (IData)(
                                                   (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                     >> 2U) 
                                                    | (3U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))))));
    vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_r_mux__gnt_i 
        = (1U & ((~ (IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_b_mux__gnt_i 
        = (1U & ((~ (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__slv_ar_ready_sel = (1U & ((~ (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                                             | (~ (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__slv_aw_ready_sel = (1U & ((~ (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                                             | (~ (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__slv_ar_ready_chan = (1U & ((~ (IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                                              | (~ (IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__slv_aw_ready_chan = (1U & ((~ (IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                                              | (~ (IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    if (vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) {
        vlSelf->slv_resp_o[0U] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U];
        vlSelf->slv_resp_o[1U] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U];
    } else {
        vlSelf->slv_resp_o[0U] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
        vlSelf->slv_resp_o[1U] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
    }
    vlSelf->slv_resp_o[2U] = ((((IData)(vlSelf->__PVT__slv_aw_ready_chan) 
                                & (IData)(vlSelf->__PVT__slv_aw_ready_sel)) 
                               << 0x11U) | ((((IData)(vlSelf->__PVT__slv_ar_ready_chan) 
                                              & (IData)(vlSelf->__PVT__slv_ar_ready_sel)) 
                                             << 0x10U) 
                                            | (((IData)(vlSelf->__Vcellout__i_w_spill_reg__ready_o) 
                                                << 0xfU) 
                                               | ((((IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                    | (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                   << 0xeU) 
                                                  | ((((IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                        ? (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q)
                                                        : (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q)) 
                                                      << 8U) 
                                                     | ((((IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                          | (IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                         << 7U) 
                                                        | ((IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                            ? 
                                                           vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                                            : 
                                                           vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U])))))));
    vlSelf->__PVT__slv_ar_select = ((IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                     ? (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q)
                                     : (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q));
    vlSelf->__PVT__slv_aw_select = ((IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                     ? (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q)
                                     : (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q));
    if (vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) {
        vlSelf->__Vcellout__i_ar_spill_reg__data_o[0U] 
            = vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U];
        vlSelf->__Vcellout__i_ar_spill_reg__data_o[1U] 
            = vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U];
        vlSelf->__Vcellout__i_ar_spill_reg__data_o[2U] 
            = vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U];
    } else {
        vlSelf->__Vcellout__i_ar_spill_reg__data_o[0U] 
            = vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
        vlSelf->__Vcellout__i_ar_spill_reg__data_o[1U] 
            = vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
        vlSelf->__Vcellout__i_ar_spill_reg__data_o[2U] 
            = vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U];
    }
    if (vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) {
        vlSelf->__Vcellout__i_aw_spill_reg__data_o[0U] 
            = vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U];
        vlSelf->__Vcellout__i_aw_spill_reg__data_o[1U] 
            = vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U];
        vlSelf->__Vcellout__i_aw_spill_reg__data_o[2U] 
            = vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U];
    } else {
        vlSelf->__Vcellout__i_aw_spill_reg__data_o[0U] 
            = vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
        vlSelf->__Vcellout__i_aw_spill_reg__data_o[1U] 
            = vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
        vlSelf->__Vcellout__i_aw_spill_reg__data_o[2U] 
            = vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U];
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select 
        = ((0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q)))
            ? (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_q)
            : (IData)(vlSelf->__PVT__slv_aw_select));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lookup_ar_select 
        = (3U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q) 
                 >> (7U & VL_SHIFTL_III(3,3,32, (3U 
                                                 & (vlSelf->__Vcellout__i_ar_spill_reg__data_o[2U] 
                                                    >> 0xfU)), 1U))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_select_occupied 
        = (1U & ((((IData)((0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                   << 3U) | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                              << 2U) | (((IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 1U) | (0U 
                                                   != 
                                                   (3U 
                                                    & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)))))) 
                 >> (3U & (vlSelf->__Vcellout__i_ar_spill_reg__data_o[2U] 
                           >> 0xfU))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lookup_aw_select 
        = (3U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q) 
                 >> (7U & VL_SHIFTL_III(3,3,32, (3U 
                                                 & (vlSelf->__Vcellout__i_aw_spill_reg__data_o[2U] 
                                                    >> 0x15U)), 1U))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_select_occupied 
        = (1U & ((((IData)((0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                   << 3U) | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                              << 2U) | (((IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 1U) | (0U 
                                                   != 
                                                   (3U 
                                                    & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)))))) 
                 >> (3U & (vlSelf->__Vcellout__i_aw_spill_reg__data_o[2U] 
                           >> 0x15U))));
    vlSelf->__PVT__slv_req_cut[0U] = ((vlSelf->__Vcellout__i_ar_spill_reg__data_o[0U] 
                                       << 2U) | (((
                                                   ((IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                    | (IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                   & ((IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                      | (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_r_mux__gnt_i)));
    vlSelf->__PVT__slv_req_cut[1U] = ((vlSelf->__Vcellout__i_ar_spill_reg__data_o[0U] 
                                       >> 0x1eU) | 
                                      (vlSelf->__Vcellout__i_ar_spill_reg__data_o[1U] 
                                       << 2U));
    vlSelf->__PVT__slv_req_cut[2U] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                         ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                         : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                       << 0x15U) | 
                                      ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                         | (IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                        << 0x14U) | 
                                       (((IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_b_mux__gnt_i) 
                                         << 0x13U) 
                                        | ((vlSelf->__Vcellout__i_ar_spill_reg__data_o[1U] 
                                            >> 0x1eU) 
                                           | (vlSelf->__Vcellout__i_ar_spill_reg__data_o[2U] 
                                              << 2U)))));
    vlSelf->__PVT__slv_req_cut[3U] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                         ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                         : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                       >> 0xbU) | (
                                                   ((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                     ? 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                     : 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                                   << 0x15U));
    vlSelf->__PVT__slv_req_cut[4U] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                         ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                         : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                       >> 0xbU) | (
                                                   ((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                     ? 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                                     : 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                                   << 0x15U));
    vlSelf->__PVT__slv_req_cut[5U] = ((vlSelf->__Vcellout__i_aw_spill_reg__data_o[0U] 
                                       << 1U) | (((IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                  | (IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                 & ((IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                    | (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__slv_req_cut[6U] = ((vlSelf->__Vcellout__i_aw_spill_reg__data_o[0U] 
                                       >> 0x1fU) | 
                                      (vlSelf->__Vcellout__i_aw_spill_reg__data_o[1U] 
                                       << 1U));
    vlSelf->__PVT__slv_req_cut[7U] = ((vlSelf->__Vcellout__i_aw_spill_reg__data_o[1U] 
                                       >> 0x1fU) | 
                                      (vlSelf->__Vcellout__i_aw_spill_reg__data_o[2U] 
                                       << 1U));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q)))) {
        if ((((~ (IData)((0U != (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__cnt_full)))) 
              & (3U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q)))) 
             & (~ ((0U != (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__cnt_full)) 
                   & (vlSelf->__PVT__slv_req_cut[5U] 
                      >> 8U))))) {
            if (((vlSelf->__PVT__slv_req_cut[5U] & 
                  ((0U == (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))) 
                   | ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select) 
                      == (IData)(vlSelf->__PVT__slv_aw_select)))) 
                 & ((~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_select_occupied)) 
                    | ((IData)(vlSelf->__PVT__slv_aw_select) 
                       == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lookup_aw_select))))) {
                vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up = 1U;
            }
        }
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_valid = 0U;
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_q) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_valid = 1U;
    } else if ((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__cnt_full)))))) {
        if ((1U & ((vlSelf->__PVT__slv_req_cut[0U] 
                    >> 1U) & ((~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_select_occupied)) 
                              | ((IData)(vlSelf->__PVT__slv_ar_select) 
                                 == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lookup_ar_select)))))) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_valid = 1U;
        }
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_valid = 0U;
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_valid = 1U;
    } else if ((((~ (IData)((0U != (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__cnt_full)))) 
                 & (3U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q)))) 
                & (~ ((0U != (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__cnt_full)) 
                      & (vlSelf->__PVT__slv_req_cut[5U] 
                         >> 8U))))) {
        if (((vlSelf->__PVT__slv_req_cut[5U] & ((0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))) 
                                                | ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select) 
                                                   == (IData)(vlSelf->__PVT__slv_aw_select)))) 
             & ((~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_select_occupied)) 
                | ((IData)(vlSelf->__PVT__slv_aw_select) 
                   == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lookup_aw_select))))) {
            vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_valid = 1U;
        }
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en 
        = ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up)
            ? (0xfU & ((IData)(1U) << (3U & (vlSelf->__Vcellout__i_aw_spill_reg__data_o[2U] 
                                             >> 0x15U))))
            : 0U);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid 
        = ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up) 
           | (0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[1U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[1U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[2U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[3U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[3U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[4U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[4U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[5U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[5U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[6U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[6U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[7U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[7U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[8U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[8U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[9U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[9U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0xaU];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xbU] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0xbU];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0xcU];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xdU] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0xdU];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xeU] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0xeU];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0xfU];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x10U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x10U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x11U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x11U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x12U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x12U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x13U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x13U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x14U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x14U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x15U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x16U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x16U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x17U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x18U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x18U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x19U];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1aU] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x1aU];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1bU] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x1bU];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x1cU];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1dU] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x1dU];
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1eU] 
        = Vtestharness__ConstPool__CONST_h5607ec9a_0[0x1eU];
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[6U] << 0x1fU) 
           | (vlSelf->__PVT__slv_req_cut[5U] >> 1U));
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[7U] << 0x1fU) 
           | (vlSelf->__PVT__slv_req_cut[6U] >> 1U));
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[2U] 
        = (0x7fffffU & (vlSelf->__PVT__slv_req_cut[7U] 
                        >> 1U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[5U] 
        = (i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
           << 1U);
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[6U] 
        = ((i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
            >> 0x1fU) | (i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
                         << 1U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[7U] 
        = ((0xff000000U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[7U]) 
           | ((i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
               >> 0x1fU) | (i_demux_simple__DOT____Vlvbound_h496bca7c__0[2U] 
                            << 1U)));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_valid) 
         & (0U == (IData)(vlSelf->__PVT__slv_aw_select)))) {
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[5U] 
            = (1U | vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[5U]);
    }
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[3U] << 0xbU) 
           | (vlSelf->__PVT__slv_req_cut[2U] >> 0x15U));
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[4U] << 0xbU) 
           | (vlSelf->__PVT__slv_req_cut[3U] >> 0x15U));
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[2U] 
        = (vlSelf->__PVT__slv_req_cut[4U] >> 0x15U);
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U] 
        = ((0xfffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U]) 
           | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
              << 0x15U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[3U] 
        = ((0xfffffU & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
                        >> 0xbU)) | ((0x100000U & (
                                                   i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
                                                   >> 0xbU)) 
                                     | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                                        << 0x15U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[4U] 
        = ((0xfffffU & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                        >> 0xbU)) | ((0x100000U & (
                                                   i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                                                   >> 0xbU)) 
                                     | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[2U] 
                                        << 0x15U)));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (0U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->i_demux_simple__DOT____Vlvbound_hcdc9c603__1 
            = (1U & (vlSelf->__PVT__slv_req_cut[2U] 
                     >> 0x14U));
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U] 
            = ((0xffefffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U]) 
               | ((IData)(vlSelf->i_demux_simple__DOT____Vlvbound_hcdc9c603__1) 
                  << 0x14U));
    }
    i_demux_simple__DOT____Vlvbound_hc7a17057__0 = 
        (1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U] 
        = ((0xfff7ffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U]) 
           | ((IData)(i_demux_simple__DOT____Vlvbound_hc7a17057__0) 
              << 0x13U));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[1U] << 0x1eU) 
           | (vlSelf->__PVT__slv_req_cut[0U] >> 2U));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[2U] << 0x1eU) 
           | (vlSelf->__PVT__slv_req_cut[1U] >> 2U));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[2U] 
        = (0x1ffffU & (vlSelf->__PVT__slv_req_cut[2U] 
                       >> 2U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0U] 
        = ((1U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0U]) 
           | (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
              << 2U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[1U] 
        = ((1U & (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
                  >> 0x1eU)) | ((2U & (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
                                       >> 0x1eU)) | 
                                (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                                 << 2U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U] 
        = ((0xfff80000U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U]) 
           | ((1U & (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                     >> 0x1eU)) | ((2U & (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                                          >> 0x1eU)) 
                                   | (i_demux_simple__DOT____Vlvbound_h4328facc__0[2U] 
                                      << 2U))));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_valid) 
         & (0U == (IData)(vlSelf->__PVT__slv_ar_select)))) {
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0U] 
            = (2U | vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0U]);
    }
    i_demux_simple__DOT____Vlvbound_h5411f145__0 = 
        (1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0U] 
        = ((0xfffffffeU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0U]) 
           | (IData)(i_demux_simple__DOT____Vlvbound_h5411f145__0));
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[6U] << 0x1fU) 
           | (vlSelf->__PVT__slv_req_cut[5U] >> 1U));
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[7U] << 0x1fU) 
           | (vlSelf->__PVT__slv_req_cut[6U] >> 1U));
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[2U] 
        = (0x7fffffU & (vlSelf->__PVT__slv_req_cut[7U] 
                        >> 1U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
        = ((0xffffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xcU]) 
           | (i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
              << 0x19U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xdU] 
        = ((0xffffffU & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
                         >> 7U)) | ((0x1000000U & (
                                                   i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
                                                   >> 7U)) 
                                    | (i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
                                       << 0x19U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xeU] 
        = ((0xffffffU & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
                         >> 7U)) | ((0x1000000U & (
                                                   i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
                                                   >> 7U)) 
                                    | (i_demux_simple__DOT____Vlvbound_h496bca7c__0[2U] 
                                       << 0x19U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
        = ((0xffff0000U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xfU]) 
           | (0xffffffU & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[2U] 
                           >> 7U)));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_valid) 
         & (1U == (IData)(vlSelf->__PVT__slv_aw_select)))) {
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
            = (0x1000000U | vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xcU]);
    }
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[3U] << 0xbU) 
           | (vlSelf->__PVT__slv_req_cut[2U] >> 0x15U));
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[4U] << 0xbU) 
           | (vlSelf->__PVT__slv_req_cut[3U] >> 0x15U));
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[2U] 
        = (vlSelf->__PVT__slv_req_cut[4U] >> 0x15U);
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
        = ((0xfffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xaU]) 
           | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
              << 0xdU));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xbU] 
        = ((0xfffU & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
                      >> 0x13U)) | ((0x1000U & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
                                                >> 0x13U)) 
                                    | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                                       << 0xdU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
        = ((0xff000000U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xcU]) 
           | ((0xfffU & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                         >> 0x13U)) | ((0x1000U & (
                                                   i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                                                   >> 0x13U)) 
                                       | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[2U] 
                                          << 0xdU))));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (1U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->i_demux_simple__DOT____Vlvbound_hcdc9c603__1 
            = (1U & (vlSelf->__PVT__slv_req_cut[2U] 
                     >> 0x14U));
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
            = ((0xffffefffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xaU]) 
               | ((IData)(vlSelf->i_demux_simple__DOT____Vlvbound_hcdc9c603__1) 
                  << 0xcU));
    }
    i_demux_simple__DOT____Vlvbound_hc7a17057__0 = 
        (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies) 
               >> 1U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
        = ((0xfffff7ffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xaU]) 
           | ((IData)(i_demux_simple__DOT____Vlvbound_hc7a17057__0) 
              << 0xbU));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[1U] << 0x1eU) 
           | (vlSelf->__PVT__slv_req_cut[0U] >> 2U));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[2U] << 0x1eU) 
           | (vlSelf->__PVT__slv_req_cut[1U] >> 2U));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[2U] 
        = (0x1ffffU & (vlSelf->__PVT__slv_req_cut[2U] 
                       >> 2U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[7U] 
        = ((0x1ffffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[7U]) 
           | (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
              << 0x1aU));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[8U] 
        = ((0x1ffffffU & (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
                          >> 6U)) | ((0x2000000U & 
                                      (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
                                       >> 6U)) | (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                                                  << 0x1aU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[9U] 
        = ((0x1ffffffU & (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                          >> 6U)) | ((0x2000000U & 
                                      (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                                       >> 6U)) | (i_demux_simple__DOT____Vlvbound_h4328facc__0[2U] 
                                                  << 0x1aU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
        = ((0xfffff800U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xaU]) 
           | (0x1ffffffU & (i_demux_simple__DOT____Vlvbound_h4328facc__0[2U] 
                            >> 6U)));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_valid) 
         & (1U == (IData)(vlSelf->__PVT__slv_ar_select)))) {
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[7U] 
            = (0x2000000U | vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[7U]);
    }
    i_demux_simple__DOT____Vlvbound_h5411f145__0 = 
        (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies) 
               >> 1U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[7U] 
        = ((0xfeffffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[7U]) 
           | ((IData)(i_demux_simple__DOT____Vlvbound_h5411f145__0) 
              << 0x18U));
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[6U] << 0x1fU) 
           | (vlSelf->__PVT__slv_req_cut[5U] >> 1U));
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[7U] << 0x1fU) 
           | (vlSelf->__PVT__slv_req_cut[6U] >> 1U));
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[2U] 
        = (0x7fffffU & (vlSelf->__PVT__slv_req_cut[7U] 
                        >> 1U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x14U] 
        = ((0xffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x14U]) 
           | (i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
              << 0x11U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
        = ((0xffffU & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
                       >> 0xfU)) | ((0x10000U & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
                                                 >> 0xfU)) 
                                    | (i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
                                       << 0x11U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x16U] 
        = ((0xffffU & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
                       >> 0xfU)) | ((0x10000U & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
                                                 >> 0xfU)) 
                                    | (i_demux_simple__DOT____Vlvbound_h496bca7c__0[2U] 
                                       << 0x11U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
        = ((0xffffff00U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U]) 
           | (0xffffU & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[2U] 
                         >> 0xfU)));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_valid) 
         & (2U == (IData)(vlSelf->__PVT__slv_aw_select)))) {
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x14U] 
            = (0x10000U | vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x14U]);
    }
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[3U] << 0xbU) 
           | (vlSelf->__PVT__slv_req_cut[2U] >> 0x15U));
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[4U] << 0xbU) 
           | (vlSelf->__PVT__slv_req_cut[3U] >> 0x15U));
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[2U] 
        = (vlSelf->__PVT__slv_req_cut[4U] >> 0x15U);
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x12U] 
        = ((0xfU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x12U]) 
           | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
              << 5U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x13U] 
        = ((0xfU & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
                    >> 0x1bU)) | ((0x10U & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
                                            >> 0x1bU)) 
                                  | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                                     << 5U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x14U] 
        = ((0xffff0000U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x14U]) 
           | ((0xfU & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                       >> 0x1bU)) | ((0x10U & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                                               >> 0x1bU)) 
                                     | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[2U] 
                                        << 5U))));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (2U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->i_demux_simple__DOT____Vlvbound_hcdc9c603__1 
            = (1U & (vlSelf->__PVT__slv_req_cut[2U] 
                     >> 0x14U));
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x12U] 
            = ((0xffffffefU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x12U]) 
               | ((IData)(vlSelf->i_demux_simple__DOT____Vlvbound_hcdc9c603__1) 
                  << 4U));
    }
    i_demux_simple__DOT____Vlvbound_hc7a17057__0 = 
        (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies) 
               >> 2U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x12U] 
        = ((0xfffffff7U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x12U]) 
           | ((IData)(i_demux_simple__DOT____Vlvbound_hc7a17057__0) 
              << 3U));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[1U] << 0x1eU) 
           | (vlSelf->__PVT__slv_req_cut[0U] >> 2U));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[2U] << 0x1eU) 
           | (vlSelf->__PVT__slv_req_cut[1U] >> 2U));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[2U] 
        = (0x1ffffU & (vlSelf->__PVT__slv_req_cut[2U] 
                       >> 2U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
        = ((0x1ffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xfU]) 
           | (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
              << 0x12U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x10U] 
        = ((0x1ffffU & (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
                        >> 0xeU)) | ((0x20000U & (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
                                                  >> 0xeU)) 
                                     | (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                                        << 0x12U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x11U] 
        = ((0x1ffffU & (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                        >> 0xeU)) | ((0x20000U & (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                                                  >> 0xeU)) 
                                     | (i_demux_simple__DOT____Vlvbound_h4328facc__0[2U] 
                                        << 0x12U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x12U] 
        = ((0xfffffff8U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x12U]) 
           | (0x1ffffU & (i_demux_simple__DOT____Vlvbound_h4328facc__0[2U] 
                          >> 0xeU)));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_valid) 
         & (2U == (IData)(vlSelf->__PVT__slv_ar_select)))) {
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
            = (0x20000U | vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xfU]);
    }
    i_demux_simple__DOT____Vlvbound_h5411f145__0 = 
        (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies) 
               >> 2U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
        = ((0xfffeffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xfU]) 
           | ((IData)(i_demux_simple__DOT____Vlvbound_h5411f145__0) 
              << 0x10U));
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[6U] << 0x1fU) 
           | (vlSelf->__PVT__slv_req_cut[5U] >> 1U));
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[7U] << 0x1fU) 
           | (vlSelf->__PVT__slv_req_cut[6U] >> 1U));
    i_demux_simple__DOT____Vlvbound_h496bca7c__0[2U] 
        = (0x7fffffU & (vlSelf->__PVT__slv_req_cut[7U] 
                        >> 1U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
        = ((0xffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1cU]) 
           | (i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
              << 9U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1dU] 
        = ((0xffU & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
                     >> 0x17U)) | ((0x100U & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[0U] 
                                              >> 0x17U)) 
                                   | (i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
                                      << 9U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1eU] 
        = ((0xffU & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
                     >> 0x17U)) | ((0x100U & (i_demux_simple__DOT____Vlvbound_h496bca7c__0[1U] 
                                              >> 0x17U)) 
                                   | (i_demux_simple__DOT____Vlvbound_h496bca7c__0[2U] 
                                      << 9U)));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_valid) 
         & (3U == (IData)(vlSelf->__PVT__slv_aw_select)))) {
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
            = (0x100U | vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1cU]);
    }
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[3U] << 0xbU) 
           | (vlSelf->__PVT__slv_req_cut[2U] >> 0x15U));
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[4U] << 0xbU) 
           | (vlSelf->__PVT__slv_req_cut[3U] >> 0x15U));
    i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[2U] 
        = (vlSelf->__PVT__slv_req_cut[4U] >> 0x15U);
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
        = ((0xfffffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x19U]) 
           | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
              << 0x1dU));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1aU] 
        = ((0xfffffffU & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
                          >> 3U)) | ((0x10000000U & 
                                      (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[0U] 
                                       >> 3U)) | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                                                  << 0x1dU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1bU] 
        = ((0xfffffffU & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                          >> 3U)) | ((0x10000000U & 
                                      (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[1U] 
                                       >> 3U)) | (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[2U] 
                                                  << 0x1dU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
        = ((0xffffff00U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1cU]) 
           | (0xfffffffU & (i_demux_simple__DOT____Vlvbound_h4b4c4e41__0[2U] 
                            >> 3U)));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (3U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->i_demux_simple__DOT____Vlvbound_hcdc9c603__1 
            = (1U & (vlSelf->__PVT__slv_req_cut[2U] 
                     >> 0x14U));
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
            = ((0xefffffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x19U]) 
               | ((IData)(vlSelf->i_demux_simple__DOT____Vlvbound_hcdc9c603__1) 
                  << 0x1cU));
    }
    i_demux_simple__DOT____Vlvbound_hc7a17057__0 = 
        (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies) 
               >> 3U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
        = ((0xf7ffffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x19U]) 
           | ((IData)(i_demux_simple__DOT____Vlvbound_hc7a17057__0) 
              << 0x1bU));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[1U] << 0x1eU) 
           | (vlSelf->__PVT__slv_req_cut[0U] >> 2U));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[2U] << 0x1eU) 
           | (vlSelf->__PVT__slv_req_cut[1U] >> 2U));
    i_demux_simple__DOT____Vlvbound_h4328facc__0[2U] 
        = (0x1ffffU & (vlSelf->__PVT__slv_req_cut[2U] 
                       >> 2U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
        = ((0x1ffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U]) 
           | (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
              << 0xaU));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x18U] 
        = ((0x1ffU & (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
                      >> 0x16U)) | ((0x200U & (i_demux_simple__DOT____Vlvbound_h4328facc__0[0U] 
                                               >> 0x16U)) 
                                    | (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                                       << 0xaU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
        = ((0xf8000000U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x19U]) 
           | ((0x1ffU & (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                         >> 0x16U)) | ((0x200U & (i_demux_simple__DOT____Vlvbound_h4328facc__0[1U] 
                                                  >> 0x16U)) 
                                       | (i_demux_simple__DOT____Vlvbound_h4328facc__0[2U] 
                                          << 0xaU))));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_valid) 
         & (3U == (IData)(vlSelf->__PVT__slv_ar_select)))) {
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
            = (0x200U | vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U]);
    }
    i_demux_simple__DOT____Vlvbound_h5411f145__0 = 
        (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies) 
               >> 3U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
        = ((0xfffffeffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U]) 
           | ((IData)(i_demux_simple__DOT____Vlvbound_h5411f145__0) 
              << 8U));
}
