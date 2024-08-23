// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_axi_err_slv__pi67.h"

VL_INLINE_OPT void Vtestharness_axi_err_slv__pi67___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__0(Vtestharness_axi_err_slv__pi67* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_err_slv__pi67___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__0\n"); );
    // Body
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid = 0U;
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__id_d 
        = vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q;
    if ((1U & (~ ((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q)))) {
                if (((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
                      >> 8U) & (0U != (3U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
                                             >> 0xfU))))) {
                    if ((0x10000U & vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU])) {
                        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid = 1U;
                    }
                    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__id_d 
                        = (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1eU] 
                           >> 0x1eU);
                }
            }
        }
    }
    vlSelf->__PVT__err_req[5U] = ((1U & vlSelf->__PVT__err_req[5U]) 
                                  | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1dU] 
                                      << 0x18U) | (0xfffffeU 
                                                   & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
                                                      >> 8U))));
    vlSelf->__PVT__err_req[6U] = ((1U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1dU] 
                                         >> 8U)) | 
                                  ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1eU] 
                                    << 0x18U) | (0xfffffeU 
                                                 & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1dU] 
                                                    >> 8U))));
    vlSelf->__PVT__err_req[7U] = (0xffffffU & ((1U 
                                                & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1eU] 
                                                   >> 8U)) 
                                               | (0xfffffeU 
                                                  & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1eU] 
                                                     >> 8U))));
    vlSelf->__PVT__err_req[5U] = (0xfffffe07U & vlSelf->__PVT__err_req[5U]);
    vlSelf->__PVT__err_req[0U] = ((1U & vlSelf->__PVT__err_req[0U]) 
                                  | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x18U] 
                                      << 0x18U) | (0xfffffeU 
                                                   & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
                                                      >> 8U))));
    vlSelf->__PVT__err_req[1U] = ((1U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x18U] 
                                         >> 8U)) | 
                                  ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
                                    << 0x18U) | (0xfffffeU 
                                                 & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x18U] 
                                                    >> 8U))));
    vlSelf->__PVT__err_req[2U] = ((0xfff80000U & vlSelf->__PVT__err_req[2U]) 
                                  | ((1U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
                                            >> 8U)) 
                                     | (0x7fffeU & 
                                        (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
                                         >> 8U))));
    vlSelf->__PVT__err_req[2U] = ((0x1fffffU & vlSelf->__PVT__err_req[2U]) 
                                  | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1aU] 
                                      << 0x18U) | (0xe00000U 
                                                   & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
                                                      >> 8U))));
    vlSelf->__PVT__err_req[3U] = ((0x1fffffU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1aU] 
                                                >> 8U)) 
                                  | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1bU] 
                                      << 0x18U) | (0xe00000U 
                                                   & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1aU] 
                                                      >> 8U))));
    vlSelf->__PVT__err_req[4U] = ((0x1fffffU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1bU] 
                                                >> 8U)) 
                                  | (0xffe00000U & 
                                     ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
                                       << 0x18U) | 
                                      (0xe00000U & 
                                       (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1bU] 
                                        >> 8U)))));
    vlSelf->__PVT__err_req[0U] = ((0xfffffffeU & vlSelf->__PVT__err_req[0U]) 
                                  | (1U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
                                           >> 8U)));
    if ((0U != (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
            vlSelf->__PVT__err_req[0U] = (0xfffffffeU 
                                          & vlSelf->__PVT__err_req[0U]);
        }
    }
    vlSelf->__PVT__err_req[5U] = (0xfffffffeU & vlSelf->__PVT__err_req[5U]);
    vlSelf->__PVT__err_req[2U] = ((0xffe7ffffU & vlSelf->__PVT__err_req[2U]) 
                                  | (0x80000U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
                                                 >> 8U)));
    vlSelf->__PVT__r_busy_d = vlSelf->__PVT__r_busy_q;
    vlSelf->__PVT__r_busy_load = 0U;
    vlSelf->__PVT__r_cnt_en = 0U;
    vlSelf->__PVT__r_cnt_clear = 0U;
    vlSelf->__PVT__b_fifo_pop = 0U;
    if ((4U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q)))) {
                vlSelf->__PVT__err_req[2U] = (0xfff7ffffU 
                                              & vlSelf->__PVT__err_req[2U]);
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                         >> 1U)))) {
        if ((1U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
            if (vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) {
                vlSelf->__PVT__err_req[2U] = ((0xffefffffU 
                                               & vlSelf->__PVT__err_req[2U]) 
                                              | (0x100000U 
                                                 & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
                                                    >> 8U)));
            }
        } else {
            if (((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream) 
                 | (4U > (7U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))))) {
                vlSelf->__PVT__err_req[5U] = ((0xfffffffeU 
                                               & vlSelf->__PVT__err_req[5U]) 
                                              | (1U 
                                                 & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
                                                    >> 8U)));
            }
            if (((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) 
                 | ((IData)((0x100U == (0x18100U & 
                                        vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU]))) 
                    & (~ (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream))))) {
                vlSelf->__PVT__err_req[2U] = ((0xffefffffU 
                                               & vlSelf->__PVT__err_req[2U]) 
                                              | (0x100000U 
                                                 & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
                                                    >> 8U)));
            }
            if (((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
                  >> 8U) & (0U != (3U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
                                         >> 0xfU))))) {
                vlSelf->__PVT__err_req[5U] = (0xfffffffeU 
                                              & vlSelf->__PVT__err_req[5U]);
                if ((1U & (~ (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream)))) {
                    vlSelf->__PVT__err_req[2U] = (0xffefffffU 
                                                  & vlSelf->__PVT__err_req[2U]);
                }
            }
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q))) {
        vlSelf->__PVT__b_fifo_pop = (1U & (vlSelf->__PVT__err_req[2U] 
                                           >> 0x13U));
    }
    vlSelf->__PVT__r_fifo_pop = 0U;
    if (vlSelf->__PVT__r_busy_q) {
        if ((1U & vlSelf->__PVT__err_req[0U])) {
            if ((0U == (0xffU & (IData)(vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSelf->__PVT__r_busy_d = 0U;
                vlSelf->__PVT__r_busy_load = 1U;
                vlSelf->__PVT__r_cnt_clear = 1U;
                vlSelf->__PVT__r_fifo_pop = 1U;
            }
            vlSelf->__PVT__r_cnt_en = 1U;
        }
    } else if ((0U != (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q))) {
        vlSelf->__PVT__r_busy_d = 1U;
        vlSelf->__PVT__r_busy_load = 1U;
    }
    vlSelf->__PVT__r_fifo_push = ((4U != (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q)) 
                                  & (vlSelf->__PVT__err_req[0U] 
                                     >> 1U));
    vlSelf->__PVT__w_fifo_push = ((4U != (IData)(vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q)) 
                                  & vlSelf->__PVT__err_req[5U]);
    vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q;
    if (vlSelf->__PVT__r_cnt_clear) {
        vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d = 0U;
    } else if (vlSelf->__PVT__r_cnt_load) {
        vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d 
            = (0xffU & (IData)(vlSelf->__PVT__r_fifo_data));
    } else if (vlSelf->__PVT__r_cnt_en) {
        vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__i_b_fifo__DOT__read_pointer_n = vlSelf->__PVT__i_b_fifo__DOT__read_pointer_q;
    vlSelf->__PVT__i_r_fifo__DOT__read_pointer_n = vlSelf->__PVT__i_r_fifo__DOT__read_pointer_q;
    vlSelf->__PVT__i_r_fifo__DOT__gate_clock = 1U;
    vlSelf->__PVT__i_r_fifo__DOT__write_pointer_n = vlSelf->__PVT__i_r_fifo__DOT__write_pointer_q;
    vlSelf->__PVT__i_r_fifo__DOT__status_cnt_n = vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->__PVT__r_fifo_pop) & (0U != (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_r_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__i_r_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(vlSelf->__PVT__r_fifo_push) & (4U 
                                                != (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_r_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__i_r_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__i_r_fifo__DOT__write_pointer_q)));
        vlSelf->__PVT__i_r_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->__PVT__r_fifo_pop) & (0U != (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_r_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__r_fifo_push) & (IData)(vlSelf->__PVT__r_fifo_pop)) 
          & (4U != (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_r_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q;
    }
    vlSelf->__PVT__i_r_fifo__DOT__mem_n = vlSelf->__PVT__i_r_fifo__DOT__mem_q;
    if (((IData)(vlSelf->__PVT__r_fifo_push) & (4U 
                                                != (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->i_r_fifo__DOT____Vlvbound_h3ef5e7b3__0 
            = ((0x300U & (vlSelf->__PVT__err_req[2U] 
                          >> 9U)) | (0xffU & ((vlSelf->__PVT__err_req[1U] 
                                               << 7U) 
                                              | (vlSelf->__PVT__err_req[0U] 
                                                 >> 0x19U))));
        if ((0x27U >= (0x3fU & ((IData)(0xaU) * (IData)(vlSelf->__PVT__i_r_fifo__DOT__write_pointer_q))))) {
            vlSelf->__PVT__i_r_fifo__DOT__mem_n = (
                                                   ((~ 
                                                     (0x3ffULL 
                                                      << 
                                                      (0x3fU 
                                                       & ((IData)(0xaU) 
                                                          * (IData)(vlSelf->__PVT__i_r_fifo__DOT__write_pointer_q))))) 
                                                    & vlSelf->__PVT__i_r_fifo__DOT__mem_n) 
                                                   | (0xffffffffffULL 
                                                      & ((QData)((IData)(vlSelf->i_r_fifo__DOT____Vlvbound_h3ef5e7b3__0)) 
                                                         << 
                                                         (0x3fU 
                                                          & ((IData)(0xaU) 
                                                             * (IData)(vlSelf->__PVT__i_r_fifo__DOT__write_pointer_q))))));
        }
    }
    vlSelf->__PVT__i_w_fifo__DOT__gate_clock = 1U;
    vlSelf->__PVT__i_w_fifo__DOT__mem_n = vlSelf->__PVT__i_w_fifo__DOT__mem_q;
    vlSelf->__PVT__w_fifo_data = (3U & ((IData)(vlSelf->__PVT__i_w_fifo__DOT__mem_q) 
                                        >> (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelf->__PVT__i_w_fifo__DOT__read_pointer_q), 1U))));
    vlSelf->__PVT__w_fifo_empty = ((~ (IData)(vlSelf->__PVT__w_fifo_push)) 
                                   & (0U == (IData)(vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q)));
    vlSelf->__PVT__w_fifo_pop = 0U;
    vlSelf->__PVT__b_fifo_push = 0U;
    vlSelf->__PVT__err_resp[2U] = (0x37fffU & vlSelf->__PVT__err_resp[2U]);
    if (((~ (IData)(vlSelf->__PVT__w_fifo_empty)) & 
         (2U != (IData)(vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        if ((IData)((0x900000U == (0x900000U & vlSelf->__PVT__err_req[2U])))) {
            vlSelf->__PVT__w_fifo_pop = 1U;
            vlSelf->__PVT__b_fifo_push = 1U;
        }
        vlSelf->__PVT__err_resp[2U] = (0x8000U | vlSelf->__PVT__err_resp[2U]);
    }
    vlSelf->__PVT__i_w_fifo__DOT__write_pointer_n = vlSelf->__PVT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(vlSelf->__PVT__w_fifo_push) & (4U 
                                                != (IData)(vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__i_w_fifo__DOT__mem_n = (((~ 
                                                 ((IData)(3U) 
                                                  << 
                                                  (7U 
                                                   & VL_SHIFTL_III(3,32,32, (IData)(vlSelf->__PVT__i_w_fifo__DOT__write_pointer_q), 1U)))) 
                                                & (IData)(vlSelf->__PVT__i_w_fifo__DOT__mem_n)) 
                                               | (0xffU 
                                                  & ((3U 
                                                      & (vlSelf->__PVT__err_req[7U] 
                                                         >> 0x16U)) 
                                                     << 
                                                     (7U 
                                                      & VL_SHIFTL_III(3,32,32, (IData)(vlSelf->__PVT__i_w_fifo__DOT__write_pointer_q), 1U)))));
        vlSelf->__PVT__i_w_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__i_w_fifo__DOT__write_pointer_q)));
        vlSelf->__PVT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q;
        vlSelf->__PVT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q)));
    } else {
        vlSelf->__PVT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q;
    }
    if (((IData)(vlSelf->__PVT__w_fifo_pop) & (~ (IData)(vlSelf->__PVT__w_fifo_empty)))) {
        vlSelf->__PVT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__w_fifo_push) & (IData)(vlSelf->__PVT__w_fifo_pop)) 
          & (4U != (IData)(vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q))) 
         & (~ (IData)(vlSelf->__PVT__w_fifo_empty)))) {
        vlSelf->__PVT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q;
    }
    vlSelf->__PVT__i_w_fifo__DOT__read_pointer_n = vlSelf->__PVT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->__PVT__w_fifo_pop) & (~ (IData)(vlSelf->__PVT__w_fifo_empty)))) {
        vlSelf->__PVT__i_w_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__i_w_fifo__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelf->__PVT__w_fifo_push))) {
        vlSelf->__PVT__w_fifo_data = (3U & (vlSelf->__PVT__err_req[7U] 
                                            >> 0x16U));
        if (vlSelf->__PVT__w_fifo_pop) {
            vlSelf->__PVT__i_w_fifo__DOT__write_pointer_n 
                = vlSelf->__PVT__i_w_fifo__DOT__write_pointer_q;
            vlSelf->__PVT__i_w_fifo__DOT__status_cnt_n 
                = vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q;
            vlSelf->__PVT__i_w_fifo__DOT__read_pointer_n 
                = vlSelf->__PVT__i_w_fifo__DOT__read_pointer_q;
        }
    }
    vlSelf->__PVT__i_b_fifo__DOT__gate_clock = 1U;
    vlSelf->__PVT__i_b_fifo__DOT__write_pointer_n = vlSelf->__PVT__i_b_fifo__DOT__write_pointer_q;
    vlSelf->__PVT__i_b_fifo__DOT__status_cnt_n = vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->__PVT__b_fifo_pop) & (0U != (IData)(vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_b_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__i_b_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(vlSelf->__PVT__b_fifo_push) & (2U 
                                                != (IData)(vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_b_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__i_b_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__i_b_fifo__DOT__write_pointer_q)));
        vlSelf->__PVT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->__PVT__b_fifo_pop) & (0U != (IData)(vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__b_fifo_push) & (IData)(vlSelf->__PVT__b_fifo_pop)) 
          & (2U != (IData)(vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_b_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q;
    }
    vlSelf->__PVT__i_b_fifo__DOT__mem_n = vlSelf->__PVT__i_b_fifo__DOT__mem_q;
    if (((IData)(vlSelf->__PVT__b_fifo_push) & (2U 
                                                != (IData)(vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_b_fifo__DOT__mem_n = (((~ 
                                                 ((IData)(3U) 
                                                  << 
                                                  (3U 
                                                   & VL_SHIFTL_III(2,32,32, (IData)(vlSelf->__PVT__i_b_fifo__DOT__write_pointer_q), 1U)))) 
                                                & (IData)(vlSelf->__PVT__i_b_fifo__DOT__mem_n)) 
                                               | (0xfU 
                                                  & ((IData)(vlSelf->__PVT__w_fifo_data) 
                                                     << 
                                                     (3U 
                                                      & VL_SHIFTL_III(2,32,32, (IData)(vlSelf->__PVT__i_b_fifo__DOT__write_pointer_q), 1U)))));
    }
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
        = vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q;
    if ((vlSelf->__PVT__err_req[5U] & (vlSelf->__PVT__err_resp[2U] 
                                       >> 0x11U))) {
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = ((8U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d)) 
               | (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d))));
    }
    if ((1U & (IData)(((0x900000U == (0x900000U & vlSelf->__PVT__err_req[2U])) 
                       & (vlSelf->__PVT__err_resp[2U] 
                          >> 0xfU))))) {
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = ((8U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d)) 
               | (7U & ((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d) 
                        - (IData)(1U))));
    }
    if ((((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q) 
          >> 3U) & (0U == (7U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d))))) {
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = (7U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d));
    } else if (((0U == (7U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))) 
                & (7U == (7U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d))))) {
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = (8U | (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d));
    }
    vlSelf->slv_resp_o[2U] = ((0x2ffffU & vlSelf->slv_resp_o[2U]) 
                              | (0x10000U & vlSelf->__PVT__err_resp[2U]));
    vlSelf->slv_resp_o[0U] = vlSelf->__PVT__err_resp[0U];
    vlSelf->slv_resp_o[1U] = vlSelf->__PVT__err_resp[1U];
    vlSelf->slv_resp_o[2U] = ((0x3ff00U & vlSelf->slv_resp_o[2U]) 
                              | (0xffU & vlSelf->__PVT__err_resp[2U]));
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready = 0U;
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d 
        = vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_q;
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d 
        = vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q;
    if ((0U == (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
        if ((1U & ((vlSelf->__PVT__err_resp[2U] >> 7U) 
                   & (~ (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
                         >> 8U))))) {
            vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 2U;
        } else if (vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_valid) {
            vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d 
                = vlSelf->genblk1__DOT__i_atop_filter__DOT____Vcellout__r_resp_cmd__data_o;
            vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 1U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
        vlSelf->slv_resp_o[0U] = 0U;
        vlSelf->slv_resp_o[1U] = 0U;
        vlSelf->slv_resp_o[2U] = (0x3ff80U & vlSelf->slv_resp_o[2U]);
        vlSelf->slv_resp_o[2U] = ((0x3ff9fU & vlSelf->slv_resp_o[2U]) 
                                  | (0x3ffffU & ((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q) 
                                                 << 5U)));
        vlSelf->slv_resp_o[0U] = ((0xffffffe3U & vlSelf->slv_resp_o[0U]) 
                                  | (0xfffffffcU & 
                                     (0x10U | ((0U 
                                                == (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_q)) 
                                               << 2U))));
        vlSelf->slv_resp_o[2U] = (0x80U | vlSelf->slv_resp_o[2U]);
        if ((0x100U & vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x17U])) {
            if ((4U & vlSelf->slv_resp_o[0U])) {
                vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready = 1U;
                vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 0U;
            } else {
                vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d 
                    = (0xffU & ((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d) 
                                - (IData)(1U)));
            }
        }
    } else if ((2U == (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
        if ((1U & ((vlSelf->__PVT__err_resp[2U] >> 7U) 
                   & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
                      >> 8U)))) {
            vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 0U;
        }
    } else {
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 0U;
    }
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_valid)) 
                 | (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready)));
    vlSelf->slv_resp_o[2U] = (0x1ffffU & vlSelf->slv_resp_o[2U]);
    vlSelf->slv_resp_o[2U] = ((0x300ffU & vlSelf->slv_resp_o[2U]) 
                              | (0x7f00U & vlSelf->__PVT__err_resp[2U]));
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
        = vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q;
    if ((4U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if ((2U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
            vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 0U;
        } else if ((1U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_valid)))) {
                vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 0U;
            }
        } else {
            vlSelf->slv_resp_o[2U] = (0x3c0ffU & vlSelf->slv_resp_o[2U]);
            if ((0x8000000U & vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U])) {
                vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                    = (((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_valid) 
                        & (~ (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready)))
                        ? 5U : 0U);
            }
            vlSelf->slv_resp_o[2U] = ((0x383ffU & vlSelf->slv_resp_o[2U]) 
                                      | (0x3fc00U & 
                                         (0x4800U | 
                                          ((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q) 
                                           << 0xcU))));
        }
    } else if ((2U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if ((1U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
            if ((1U & ((vlSelf->slv_resp_o[2U] >> 0xeU) 
                       & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
                          >> 0x1bU)))) {
                vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 4U;
            }
        } else {
            vlSelf->slv_resp_o[2U] = (0x8000U | vlSelf->slv_resp_o[2U]);
            if ((IData)((0x90000000U == (0x90000000U 
                                         & vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U])))) {
                vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                    = ((1U & ((vlSelf->slv_resp_o[2U] 
                               >> 0xeU) & (~ (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
                                              >> 0x1bU))))
                        ? 3U : 4U);
            }
        }
    } else if ((1U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if (vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) {
            vlSelf->slv_resp_o[2U] = ((0x37fffU & vlSelf->slv_resp_o[2U]) 
                                      | (0x8000U & 
                                         vlSelf->__PVT__err_resp[2U]));
        } else {
            vlSelf->slv_resp_o[2U] = (0x8000U | vlSelf->slv_resp_o[2U]);
            vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                = ((IData)((0x90000000U == (0x90000000U 
                                            & vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U])))
                    ? ((1U & ((vlSelf->slv_resp_o[2U] 
                               >> 0xeU) & (~ (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
                                              >> 0x1bU))))
                        ? 3U : 4U) : 2U);
        }
    } else {
        if (((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream) 
             | (4U > (7U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))))) {
            vlSelf->slv_resp_o[2U] = ((0x1ffffU & vlSelf->slv_resp_o[2U]) 
                                      | (0x20000U & 
                                         vlSelf->__PVT__err_resp[2U]));
        }
        if (((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) 
             | ((IData)((0x100U == (0x18100U & vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU]))) 
                & (~ (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream))))) {
            vlSelf->slv_resp_o[2U] = ((0x37fffU & vlSelf->slv_resp_o[2U]) 
                                      | (0x8000U & 
                                         vlSelf->__PVT__err_resp[2U]));
        }
        if (((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
              >> 8U) & (0U != (3U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
                                     >> 0xfU))))) {
            vlSelf->slv_resp_o[2U] = (0x20000U | vlSelf->slv_resp_o[2U]);
            if (vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) {
                vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 1U;
            } else {
                vlSelf->slv_resp_o[2U] = (0x8000U | 
                                          vlSelf->slv_resp_o[2U]);
                vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                    = ((IData)((0x90000000U == (0x90000000U 
                                                & vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U])))
                        ? ((1U & ((vlSelf->slv_resp_o[2U] 
                                   >> 0xeU) & (~ (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
                                                  >> 0x1bU))))
                            ? 3U : 4U) : 2U);
            }
        }
    }
}

VL_INLINE_OPT void Vtestharness_axi_err_slv__pi67___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__0(Vtestharness_axi_err_slv__pi67* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_err_slv__pi67___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__0\n"); );
    // Body
    vlSelf->__PVT__i_b_fifo__DOT__write_pointer_q = 
        ((IData)(vlSymsp->TOP.rst_ni) && (IData)(vlSelf->__PVT__i_b_fifo__DOT__write_pointer_n));
    if (vlSymsp->TOP.rst_ni) {
        vlSelf->__PVT__i_w_fifo__DOT__write_pointer_q 
            = vlSelf->__PVT__i_w_fifo__DOT__write_pointer_n;
        vlSelf->__PVT__i_r_fifo__DOT__write_pointer_q 
            = vlSelf->__PVT__i_r_fifo__DOT__write_pointer_n;
        vlSelf->__PVT__i_w_fifo__DOT__read_pointer_q 
            = vlSelf->__PVT__i_w_fifo__DOT__read_pointer_n;
        if ((1U & (~ (IData)(vlSelf->__PVT__i_w_fifo__DOT__gate_clock)))) {
            vlSelf->__PVT__i_w_fifo__DOT__mem_q = vlSelf->__PVT__i_w_fifo__DOT__mem_n;
        }
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_q 
            = vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d;
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q 
            = vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__id_d;
        if (vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_ready) {
            vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_valid 
                = vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__i_b_fifo__DOT__gate_clock)))) {
            vlSelf->__PVT__i_b_fifo__DOT__mem_q = vlSelf->__PVT__i_b_fifo__DOT__mem_n;
        }
        vlSelf->__PVT__i_r_fifo__DOT__read_pointer_q 
            = vlSelf->__PVT__i_r_fifo__DOT__read_pointer_n;
        if ((1U & (~ (IData)(vlSelf->__PVT__i_r_fifo__DOT__gate_clock)))) {
            vlSelf->__PVT__i_r_fifo__DOT__mem_q = vlSelf->__PVT__i_r_fifo__DOT__mem_n;
        }
        vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q 
            = vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d;
        if (vlSelf->__PVT__r_busy_load) {
            vlSelf->__PVT__r_busy_q = vlSelf->__PVT__r_busy_d;
        }
        vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q 
            = vlSelf->__PVT__i_r_fifo__DOT__status_cnt_n;
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q 
            = vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d;
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q 
            = vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d;
        vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q 
            = vlSelf->__PVT__i_b_fifo__DOT__status_cnt_n;
        vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q 
            = vlSelf->__PVT__i_w_fifo__DOT__status_cnt_n;
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q 
            = vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d;
        if (((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid) 
             & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_ready))) {
            vlSelf->genblk1__DOT__i_atop_filter__DOT____Vcellout__r_resp_cmd__data_o 
                = (0xffU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1dU] 
                            >> 6U));
        }
    } else {
        vlSelf->__PVT__i_w_fifo__DOT__write_pointer_q = 0U;
        vlSelf->__PVT__i_r_fifo__DOT__write_pointer_q = 0U;
        vlSelf->__PVT__i_w_fifo__DOT__read_pointer_q = 0U;
        vlSelf->__PVT__i_w_fifo__DOT__mem_q = 0U;
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_q = 0U;
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q = 0U;
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_valid = 0U;
        vlSelf->__PVT__i_b_fifo__DOT__mem_q = 0U;
        vlSelf->__PVT__i_r_fifo__DOT__read_pointer_q = 0U;
        vlSelf->__PVT__i_r_fifo__DOT__mem_q = 0ULL;
        vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q = 0U;
        vlSelf->__PVT__r_busy_q = 0U;
        vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q = 0U;
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q = 0U;
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q = 0U;
        vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q = 0U;
        vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q = 0U;
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q = 0U;
        vlSelf->genblk1__DOT__i_atop_filter__DOT____Vcellout__r_resp_cmd__data_o = 0U;
    }
    vlSelf->__PVT__i_b_fifo__DOT__read_pointer_q = 
        ((IData)(vlSymsp->TOP.rst_ni) && (IData)(vlSelf->__PVT__i_b_fifo__DOT__read_pointer_n));
    vlSelf->__PVT__r_fifo_data = ((0x27U >= (0x3fU 
                                             & ((IData)(0xaU) 
                                                * (IData)(vlSelf->__PVT__i_r_fifo__DOT__read_pointer_q))))
                                   ? (0x3ffU & (IData)(
                                                       (vlSelf->__PVT__i_r_fifo__DOT__mem_q 
                                                        >> 
                                                        (0x3fU 
                                                         & ((IData)(0xaU) 
                                                            * (IData)(vlSelf->__PVT__i_r_fifo__DOT__read_pointer_q))))))
                                   : 0U);
    vlSelf->__PVT__r_cnt_load = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__r_busy_q)))) {
        if ((0U != (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q))) {
            vlSelf->__PVT__r_cnt_load = 1U;
        }
    }
    vlSelf->__PVT__err_resp[2U] = (0x3c0ffU & vlSelf->__PVT__err_resp[2U]);
    vlSelf->__PVT__err_resp[2U] = ((0x383ffU & vlSelf->__PVT__err_resp[2U]) 
                                   | (0x3fc00U & (0xc00U 
                                                  | (0x3000U 
                                                     & (((IData)(vlSelf->__PVT__i_b_fifo__DOT__mem_q) 
                                                         >> 
                                                         (3U 
                                                          & VL_SHIFTL_III(2,32,32, (IData)(vlSelf->__PVT__i_b_fifo__DOT__read_pointer_q), 1U))) 
                                                        << 0xcU)))));
    if ((0U != (IData)(vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q))) {
        vlSelf->__PVT__err_resp[2U] = (0x4000U | vlSelf->__PVT__err_resp[2U]);
    }
    vlSelf->__PVT__err_resp[2U] = ((0xffffU & vlSelf->__PVT__err_resp[2U]) 
                                   | (0x30000U & ((
                                                   (4U 
                                                    != (IData)(vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q)) 
                                                   << 0x11U) 
                                                  | ((4U 
                                                      != (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q)) 
                                                     << 0x10U))));
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream 
        = (IData)((0xfU == (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q)));
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream 
        = ((~ ((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q) 
               >> 3U)) & (0U < (7U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))));
    vlSelf->__PVT__err_resp[0U] = 0U;
    vlSelf->__PVT__err_resp[1U] = 0U;
    vlSelf->__PVT__err_resp[2U] = (0x3ff80U & vlSelf->__PVT__err_resp[2U]);
    vlSelf->__PVT__err_resp[0U] = (0x5b9563d8U | (7U 
                                                  & vlSelf->__PVT__err_resp[0U]));
    vlSelf->__PVT__err_resp[1U] = 0x423563d7U;
    vlSelf->__PVT__err_resp[2U] = ((0x3ff00U & vlSelf->__PVT__err_resp[2U]) 
                                   | (0x3ffffU & (0x19U 
                                                  | (0x60U 
                                                     & ((IData)(vlSelf->__PVT__r_fifo_data) 
                                                        >> 3U)))));
    if (vlSelf->__PVT__r_busy_q) {
        vlSelf->__PVT__err_resp[2U] = (0x80U | vlSelf->__PVT__err_resp[2U]);
        vlSelf->__PVT__err_resp[0U] = ((0xfffffffbU 
                                        & vlSelf->__PVT__err_resp[0U]) 
                                       | ((0U == (0xffU 
                                                  & (IData)(vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q))) 
                                          << 2U));
    }
}

VL_INLINE_OPT void Vtestharness_axi_err_slv__pi67___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__0(Vtestharness_axi_err_slv__pi67* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_err_slv__pi67___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__0\n"); );
    // Body
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid = 0U;
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__id_d 
        = vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q;
    if ((1U & (~ ((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q)))) {
                if (((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
                      >> 8U) & (0U != (3U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
                                             >> 0xfU))))) {
                    if ((0x10000U & vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU])) {
                        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid = 1U;
                    }
                    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__id_d 
                        = (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1eU] 
                           >> 0x1eU);
                }
            }
        }
    }
    vlSelf->__PVT__err_req[5U] = ((1U & vlSelf->__PVT__err_req[5U]) 
                                  | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1dU] 
                                      << 0x18U) | (0xfffffeU 
                                                   & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
                                                      >> 8U))));
    vlSelf->__PVT__err_req[6U] = ((1U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1dU] 
                                         >> 8U)) | 
                                  ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1eU] 
                                    << 0x18U) | (0xfffffeU 
                                                 & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1dU] 
                                                    >> 8U))));
    vlSelf->__PVT__err_req[7U] = (0xffffffU & ((1U 
                                                & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1eU] 
                                                   >> 8U)) 
                                               | (0xfffffeU 
                                                  & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1eU] 
                                                     >> 8U))));
    vlSelf->__PVT__err_req[5U] = (0xfffffe07U & vlSelf->__PVT__err_req[5U]);
    vlSelf->__PVT__err_req[0U] = ((1U & vlSelf->__PVT__err_req[0U]) 
                                  | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x18U] 
                                      << 0x18U) | (0xfffffeU 
                                                   & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
                                                      >> 8U))));
    vlSelf->__PVT__err_req[1U] = ((1U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x18U] 
                                         >> 8U)) | 
                                  ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
                                    << 0x18U) | (0xfffffeU 
                                                 & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x18U] 
                                                    >> 8U))));
    vlSelf->__PVT__err_req[2U] = ((0xfff80000U & vlSelf->__PVT__err_req[2U]) 
                                  | ((1U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
                                            >> 8U)) 
                                     | (0x7fffeU & 
                                        (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
                                         >> 8U))));
    vlSelf->__PVT__err_req[2U] = ((0x1fffffU & vlSelf->__PVT__err_req[2U]) 
                                  | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1aU] 
                                      << 0x18U) | (0xe00000U 
                                                   & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
                                                      >> 8U))));
    vlSelf->__PVT__err_req[3U] = ((0x1fffffU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1aU] 
                                                >> 8U)) 
                                  | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1bU] 
                                      << 0x18U) | (0xe00000U 
                                                   & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1aU] 
                                                      >> 8U))));
    vlSelf->__PVT__err_req[4U] = ((0x1fffffU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1bU] 
                                                >> 8U)) 
                                  | (0xffe00000U & 
                                     ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
                                       << 0x18U) | 
                                      (0xe00000U & 
                                       (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1bU] 
                                        >> 8U)))));
    vlSelf->__PVT__err_req[0U] = ((0xfffffffeU & vlSelf->__PVT__err_req[0U]) 
                                  | (1U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
                                           >> 8U)));
    if ((0U != (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
            vlSelf->__PVT__err_req[0U] = (0xfffffffeU 
                                          & vlSelf->__PVT__err_req[0U]);
        }
    }
    vlSelf->__PVT__err_req[5U] = (0xfffffffeU & vlSelf->__PVT__err_req[5U]);
    vlSelf->__PVT__err_req[2U] = ((0xffe7ffffU & vlSelf->__PVT__err_req[2U]) 
                                  | (0x80000U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
                                                 >> 8U)));
    vlSelf->__PVT__r_busy_d = vlSelf->__PVT__r_busy_q;
    vlSelf->__PVT__r_busy_load = 0U;
    vlSelf->__PVT__r_cnt_en = 0U;
    vlSelf->__PVT__r_cnt_clear = 0U;
    vlSelf->__PVT__b_fifo_pop = 0U;
    if ((4U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q)))) {
                vlSelf->__PVT__err_req[2U] = (0xfff7ffffU 
                                              & vlSelf->__PVT__err_req[2U]);
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                         >> 1U)))) {
        if ((1U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
            if (vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) {
                vlSelf->__PVT__err_req[2U] = ((0xffefffffU 
                                               & vlSelf->__PVT__err_req[2U]) 
                                              | (0x100000U 
                                                 & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
                                                    >> 8U)));
            }
        } else {
            if (((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream) 
                 | (4U > (7U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))))) {
                vlSelf->__PVT__err_req[5U] = ((0xfffffffeU 
                                               & vlSelf->__PVT__err_req[5U]) 
                                              | (1U 
                                                 & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
                                                    >> 8U)));
            }
            if (((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) 
                 | ((IData)((0x100U == (0x18100U & 
                                        vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU]))) 
                    & (~ (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream))))) {
                vlSelf->__PVT__err_req[2U] = ((0xffefffffU 
                                               & vlSelf->__PVT__err_req[2U]) 
                                              | (0x100000U 
                                                 & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
                                                    >> 8U)));
            }
            if (((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
                  >> 8U) & (0U != (3U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
                                         >> 0xfU))))) {
                vlSelf->__PVT__err_req[5U] = (0xfffffffeU 
                                              & vlSelf->__PVT__err_req[5U]);
                if ((1U & (~ (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream)))) {
                    vlSelf->__PVT__err_req[2U] = (0xffefffffU 
                                                  & vlSelf->__PVT__err_req[2U]);
                }
            }
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q))) {
        vlSelf->__PVT__b_fifo_pop = (1U & (vlSelf->__PVT__err_req[2U] 
                                           >> 0x13U));
    }
    vlSelf->__PVT__r_fifo_pop = 0U;
    if (vlSelf->__PVT__r_busy_q) {
        if ((1U & vlSelf->__PVT__err_req[0U])) {
            if ((0U == (0xffU & (IData)(vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSelf->__PVT__r_busy_d = 0U;
                vlSelf->__PVT__r_busy_load = 1U;
                vlSelf->__PVT__r_cnt_clear = 1U;
                vlSelf->__PVT__r_fifo_pop = 1U;
            }
            vlSelf->__PVT__r_cnt_en = 1U;
        }
    } else if ((0U != (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q))) {
        vlSelf->__PVT__r_busy_d = 1U;
        vlSelf->__PVT__r_busy_load = 1U;
    }
    vlSelf->__PVT__r_fifo_push = ((4U != (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q)) 
                                  & (vlSelf->__PVT__err_req[0U] 
                                     >> 1U));
    vlSelf->__PVT__w_fifo_push = ((4U != (IData)(vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q)) 
                                  & vlSelf->__PVT__err_req[5U]);
    vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q;
    if (vlSelf->__PVT__r_cnt_clear) {
        vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d = 0U;
    } else if (vlSelf->__PVT__r_cnt_load) {
        vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d 
            = (0xffU & (IData)(vlSelf->__PVT__r_fifo_data));
    } else if (vlSelf->__PVT__r_cnt_en) {
        vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__i_b_fifo__DOT__read_pointer_n = vlSelf->__PVT__i_b_fifo__DOT__read_pointer_q;
    vlSelf->__PVT__i_r_fifo__DOT__read_pointer_n = vlSelf->__PVT__i_r_fifo__DOT__read_pointer_q;
    vlSelf->__PVT__i_r_fifo__DOT__gate_clock = 1U;
    vlSelf->__PVT__i_r_fifo__DOT__write_pointer_n = vlSelf->__PVT__i_r_fifo__DOT__write_pointer_q;
    vlSelf->__PVT__i_r_fifo__DOT__status_cnt_n = vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->__PVT__r_fifo_pop) & (0U != (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_r_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__i_r_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(vlSelf->__PVT__r_fifo_push) & (4U 
                                                != (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_r_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__i_r_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__i_r_fifo__DOT__write_pointer_q)));
        vlSelf->__PVT__i_r_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->__PVT__r_fifo_pop) & (0U != (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_r_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__r_fifo_push) & (IData)(vlSelf->__PVT__r_fifo_pop)) 
          & (4U != (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_r_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q;
    }
    vlSelf->__PVT__i_r_fifo__DOT__mem_n = vlSelf->__PVT__i_r_fifo__DOT__mem_q;
    if (((IData)(vlSelf->__PVT__r_fifo_push) & (4U 
                                                != (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->i_r_fifo__DOT____Vlvbound_h3ef5e7b3__0 
            = ((0x300U & (vlSelf->__PVT__err_req[2U] 
                          >> 9U)) | (0xffU & ((vlSelf->__PVT__err_req[1U] 
                                               << 7U) 
                                              | (vlSelf->__PVT__err_req[0U] 
                                                 >> 0x19U))));
        if ((0x27U >= (0x3fU & ((IData)(0xaU) * (IData)(vlSelf->__PVT__i_r_fifo__DOT__write_pointer_q))))) {
            vlSelf->__PVT__i_r_fifo__DOT__mem_n = (
                                                   ((~ 
                                                     (0x3ffULL 
                                                      << 
                                                      (0x3fU 
                                                       & ((IData)(0xaU) 
                                                          * (IData)(vlSelf->__PVT__i_r_fifo__DOT__write_pointer_q))))) 
                                                    & vlSelf->__PVT__i_r_fifo__DOT__mem_n) 
                                                   | (0xffffffffffULL 
                                                      & ((QData)((IData)(vlSelf->i_r_fifo__DOT____Vlvbound_h3ef5e7b3__0)) 
                                                         << 
                                                         (0x3fU 
                                                          & ((IData)(0xaU) 
                                                             * (IData)(vlSelf->__PVT__i_r_fifo__DOT__write_pointer_q))))));
        }
    }
    vlSelf->__PVT__i_w_fifo__DOT__gate_clock = 1U;
    vlSelf->__PVT__i_w_fifo__DOT__mem_n = vlSelf->__PVT__i_w_fifo__DOT__mem_q;
    vlSelf->__PVT__w_fifo_data = (3U & ((IData)(vlSelf->__PVT__i_w_fifo__DOT__mem_q) 
                                        >> (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelf->__PVT__i_w_fifo__DOT__read_pointer_q), 1U))));
    vlSelf->__PVT__w_fifo_empty = ((~ (IData)(vlSelf->__PVT__w_fifo_push)) 
                                   & (0U == (IData)(vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q)));
    vlSelf->__PVT__w_fifo_pop = 0U;
    vlSelf->__PVT__b_fifo_push = 0U;
    vlSelf->__PVT__err_resp[2U] = (0x37fffU & vlSelf->__PVT__err_resp[2U]);
    if (((~ (IData)(vlSelf->__PVT__w_fifo_empty)) & 
         (2U != (IData)(vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        if ((IData)((0x900000U == (0x900000U & vlSelf->__PVT__err_req[2U])))) {
            vlSelf->__PVT__w_fifo_pop = 1U;
            vlSelf->__PVT__b_fifo_push = 1U;
        }
        vlSelf->__PVT__err_resp[2U] = (0x8000U | vlSelf->__PVT__err_resp[2U]);
    }
    vlSelf->__PVT__i_w_fifo__DOT__write_pointer_n = vlSelf->__PVT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(vlSelf->__PVT__w_fifo_push) & (4U 
                                                != (IData)(vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__i_w_fifo__DOT__mem_n = (((~ 
                                                 ((IData)(3U) 
                                                  << 
                                                  (7U 
                                                   & VL_SHIFTL_III(3,32,32, (IData)(vlSelf->__PVT__i_w_fifo__DOT__write_pointer_q), 1U)))) 
                                                & (IData)(vlSelf->__PVT__i_w_fifo__DOT__mem_n)) 
                                               | (0xffU 
                                                  & ((3U 
                                                      & (vlSelf->__PVT__err_req[7U] 
                                                         >> 0x16U)) 
                                                     << 
                                                     (7U 
                                                      & VL_SHIFTL_III(3,32,32, (IData)(vlSelf->__PVT__i_w_fifo__DOT__write_pointer_q), 1U)))));
        vlSelf->__PVT__i_w_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__i_w_fifo__DOT__write_pointer_q)));
        vlSelf->__PVT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q;
        vlSelf->__PVT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q)));
    } else {
        vlSelf->__PVT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q;
    }
    if (((IData)(vlSelf->__PVT__w_fifo_pop) & (~ (IData)(vlSelf->__PVT__w_fifo_empty)))) {
        vlSelf->__PVT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__w_fifo_push) & (IData)(vlSelf->__PVT__w_fifo_pop)) 
          & (4U != (IData)(vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q))) 
         & (~ (IData)(vlSelf->__PVT__w_fifo_empty)))) {
        vlSelf->__PVT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q;
    }
    vlSelf->__PVT__i_w_fifo__DOT__read_pointer_n = vlSelf->__PVT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->__PVT__w_fifo_pop) & (~ (IData)(vlSelf->__PVT__w_fifo_empty)))) {
        vlSelf->__PVT__i_w_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__i_w_fifo__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelf->__PVT__w_fifo_push))) {
        vlSelf->__PVT__w_fifo_data = (3U & (vlSelf->__PVT__err_req[7U] 
                                            >> 0x16U));
        if (vlSelf->__PVT__w_fifo_pop) {
            vlSelf->__PVT__i_w_fifo__DOT__write_pointer_n 
                = vlSelf->__PVT__i_w_fifo__DOT__write_pointer_q;
            vlSelf->__PVT__i_w_fifo__DOT__status_cnt_n 
                = vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q;
            vlSelf->__PVT__i_w_fifo__DOT__read_pointer_n 
                = vlSelf->__PVT__i_w_fifo__DOT__read_pointer_q;
        }
    }
    vlSelf->__PVT__i_b_fifo__DOT__gate_clock = 1U;
    vlSelf->__PVT__i_b_fifo__DOT__write_pointer_n = vlSelf->__PVT__i_b_fifo__DOT__write_pointer_q;
    vlSelf->__PVT__i_b_fifo__DOT__status_cnt_n = vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->__PVT__b_fifo_pop) & (0U != (IData)(vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_b_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__i_b_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(vlSelf->__PVT__b_fifo_push) & (2U 
                                                != (IData)(vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_b_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__i_b_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__i_b_fifo__DOT__write_pointer_q)));
        vlSelf->__PVT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->__PVT__b_fifo_pop) & (0U != (IData)(vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__b_fifo_push) & (IData)(vlSelf->__PVT__b_fifo_pop)) 
          & (2U != (IData)(vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_b_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q;
    }
    vlSelf->__PVT__i_b_fifo__DOT__mem_n = vlSelf->__PVT__i_b_fifo__DOT__mem_q;
    if (((IData)(vlSelf->__PVT__b_fifo_push) & (2U 
                                                != (IData)(vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_b_fifo__DOT__mem_n = (((~ 
                                                 ((IData)(3U) 
                                                  << 
                                                  (3U 
                                                   & VL_SHIFTL_III(2,32,32, (IData)(vlSelf->__PVT__i_b_fifo__DOT__write_pointer_q), 1U)))) 
                                                & (IData)(vlSelf->__PVT__i_b_fifo__DOT__mem_n)) 
                                               | (0xfU 
                                                  & ((IData)(vlSelf->__PVT__w_fifo_data) 
                                                     << 
                                                     (3U 
                                                      & VL_SHIFTL_III(2,32,32, (IData)(vlSelf->__PVT__i_b_fifo__DOT__write_pointer_q), 1U)))));
    }
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
        = vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q;
    if ((vlSelf->__PVT__err_req[5U] & (vlSelf->__PVT__err_resp[2U] 
                                       >> 0x11U))) {
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = ((8U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d)) 
               | (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d))));
    }
    if ((1U & (IData)(((0x900000U == (0x900000U & vlSelf->__PVT__err_req[2U])) 
                       & (vlSelf->__PVT__err_resp[2U] 
                          >> 0xfU))))) {
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = ((8U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d)) 
               | (7U & ((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d) 
                        - (IData)(1U))));
    }
    if ((((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q) 
          >> 3U) & (0U == (7U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d))))) {
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = (7U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d));
    } else if (((0U == (7U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))) 
                & (7U == (7U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d))))) {
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = (8U | (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d));
    }
    vlSelf->slv_resp_o[2U] = ((0x2ffffU & vlSelf->slv_resp_o[2U]) 
                              | (0x10000U & vlSelf->__PVT__err_resp[2U]));
    vlSelf->slv_resp_o[0U] = vlSelf->__PVT__err_resp[0U];
    vlSelf->slv_resp_o[1U] = vlSelf->__PVT__err_resp[1U];
    vlSelf->slv_resp_o[2U] = ((0x3ff00U & vlSelf->slv_resp_o[2U]) 
                              | (0xffU & vlSelf->__PVT__err_resp[2U]));
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready = 0U;
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d 
        = vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_q;
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d 
        = vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q;
    if ((0U == (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
        if ((1U & ((vlSelf->__PVT__err_resp[2U] >> 7U) 
                   & (~ (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
                         >> 8U))))) {
            vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 2U;
        } else if (vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_valid) {
            vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d 
                = vlSelf->genblk1__DOT__i_atop_filter__DOT____Vcellout__r_resp_cmd__data_o;
            vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 1U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
        vlSelf->slv_resp_o[0U] = 0U;
        vlSelf->slv_resp_o[1U] = 0U;
        vlSelf->slv_resp_o[2U] = (0x3ff80U & vlSelf->slv_resp_o[2U]);
        vlSelf->slv_resp_o[2U] = ((0x3ff9fU & vlSelf->slv_resp_o[2U]) 
                                  | (0x3ffffU & ((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q) 
                                                 << 5U)));
        vlSelf->slv_resp_o[0U] = ((0xffffffe3U & vlSelf->slv_resp_o[0U]) 
                                  | (0xfffffffcU & 
                                     (0x10U | ((0U 
                                                == (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_q)) 
                                               << 2U))));
        vlSelf->slv_resp_o[2U] = (0x80U | vlSelf->slv_resp_o[2U]);
        if ((0x100U & vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x17U])) {
            if ((4U & vlSelf->slv_resp_o[0U])) {
                vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready = 1U;
                vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 0U;
            } else {
                vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d 
                    = (0xffU & ((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d) 
                                - (IData)(1U)));
            }
        }
    } else if ((2U == (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
        if ((1U & ((vlSelf->__PVT__err_resp[2U] >> 7U) 
                   & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
                      >> 8U)))) {
            vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 0U;
        }
    } else {
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 0U;
    }
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_valid)) 
                 | (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready)));
    vlSelf->slv_resp_o[2U] = (0x1ffffU & vlSelf->slv_resp_o[2U]);
    vlSelf->slv_resp_o[2U] = ((0x300ffU & vlSelf->slv_resp_o[2U]) 
                              | (0x7f00U & vlSelf->__PVT__err_resp[2U]));
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
        = vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q;
    if ((4U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if ((2U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
            vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 0U;
        } else if ((1U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_valid)))) {
                vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 0U;
            }
        } else {
            vlSelf->slv_resp_o[2U] = (0x3c0ffU & vlSelf->slv_resp_o[2U]);
            if ((0x8000000U & vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U])) {
                vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                    = (((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_valid) 
                        & (~ (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready)))
                        ? 5U : 0U);
            }
            vlSelf->slv_resp_o[2U] = ((0x383ffU & vlSelf->slv_resp_o[2U]) 
                                      | (0x3fc00U & 
                                         (0x4800U | 
                                          ((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q) 
                                           << 0xcU))));
        }
    } else if ((2U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if ((1U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
            if ((1U & ((vlSelf->slv_resp_o[2U] >> 0xeU) 
                       & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
                          >> 0x1bU)))) {
                vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 4U;
            }
        } else {
            vlSelf->slv_resp_o[2U] = (0x8000U | vlSelf->slv_resp_o[2U]);
            if ((IData)((0x90000000U == (0x90000000U 
                                         & vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U])))) {
                vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                    = ((1U & ((vlSelf->slv_resp_o[2U] 
                               >> 0xeU) & (~ (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
                                              >> 0x1bU))))
                        ? 3U : 4U);
            }
        }
    } else if ((1U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if (vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) {
            vlSelf->slv_resp_o[2U] = ((0x37fffU & vlSelf->slv_resp_o[2U]) 
                                      | (0x8000U & 
                                         vlSelf->__PVT__err_resp[2U]));
        } else {
            vlSelf->slv_resp_o[2U] = (0x8000U | vlSelf->slv_resp_o[2U]);
            vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                = ((IData)((0x90000000U == (0x90000000U 
                                            & vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U])))
                    ? ((1U & ((vlSelf->slv_resp_o[2U] 
                               >> 0xeU) & (~ (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
                                              >> 0x1bU))))
                        ? 3U : 4U) : 2U);
        }
    } else {
        if (((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream) 
             | (4U > (7U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))))) {
            vlSelf->slv_resp_o[2U] = ((0x1ffffU & vlSelf->slv_resp_o[2U]) 
                                      | (0x20000U & 
                                         vlSelf->__PVT__err_resp[2U]));
        }
        if (((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) 
             | ((IData)((0x100U == (0x18100U & vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU]))) 
                & (~ (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream))))) {
            vlSelf->slv_resp_o[2U] = ((0x37fffU & vlSelf->slv_resp_o[2U]) 
                                      | (0x8000U & 
                                         vlSelf->__PVT__err_resp[2U]));
        }
        if (((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
              >> 8U) & (0U != (3U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
                                     >> 0xfU))))) {
            vlSelf->slv_resp_o[2U] = (0x20000U | vlSelf->slv_resp_o[2U]);
            if (vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) {
                vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 1U;
            } else {
                vlSelf->slv_resp_o[2U] = (0x8000U | 
                                          vlSelf->slv_resp_o[2U]);
                vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                    = ((IData)((0x90000000U == (0x90000000U 
                                                & vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U])))
                        ? ((1U & ((vlSelf->slv_resp_o[2U] 
                                   >> 0xeU) & (~ (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
                                                  >> 0x1bU))))
                            ? 3U : 4U) : 2U);
            }
        }
    }
}

VL_INLINE_OPT void Vtestharness_axi_err_slv__pi67___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__0(Vtestharness_axi_err_slv__pi67* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_err_slv__pi67___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__0\n"); );
    // Body
    vlSelf->__PVT__i_b_fifo__DOT__write_pointer_q = 
        ((IData)(vlSymsp->TOP.rst_ni) && (IData)(vlSelf->__PVT__i_b_fifo__DOT__write_pointer_n));
    if (vlSymsp->TOP.rst_ni) {
        vlSelf->__PVT__i_w_fifo__DOT__write_pointer_q 
            = vlSelf->__PVT__i_w_fifo__DOT__write_pointer_n;
        vlSelf->__PVT__i_r_fifo__DOT__write_pointer_q 
            = vlSelf->__PVT__i_r_fifo__DOT__write_pointer_n;
        vlSelf->__PVT__i_w_fifo__DOT__read_pointer_q 
            = vlSelf->__PVT__i_w_fifo__DOT__read_pointer_n;
        if ((1U & (~ (IData)(vlSelf->__PVT__i_w_fifo__DOT__gate_clock)))) {
            vlSelf->__PVT__i_w_fifo__DOT__mem_q = vlSelf->__PVT__i_w_fifo__DOT__mem_n;
        }
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_q 
            = vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d;
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q 
            = vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__id_d;
        if (vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_ready) {
            vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_valid 
                = vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__i_b_fifo__DOT__gate_clock)))) {
            vlSelf->__PVT__i_b_fifo__DOT__mem_q = vlSelf->__PVT__i_b_fifo__DOT__mem_n;
        }
        vlSelf->__PVT__i_r_fifo__DOT__read_pointer_q 
            = vlSelf->__PVT__i_r_fifo__DOT__read_pointer_n;
        if ((1U & (~ (IData)(vlSelf->__PVT__i_r_fifo__DOT__gate_clock)))) {
            vlSelf->__PVT__i_r_fifo__DOT__mem_q = vlSelf->__PVT__i_r_fifo__DOT__mem_n;
        }
        vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q 
            = vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d;
        if (vlSelf->__PVT__r_busy_load) {
            vlSelf->__PVT__r_busy_q = vlSelf->__PVT__r_busy_d;
        }
        vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q 
            = vlSelf->__PVT__i_r_fifo__DOT__status_cnt_n;
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q 
            = vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d;
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q 
            = vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d;
        vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q 
            = vlSelf->__PVT__i_b_fifo__DOT__status_cnt_n;
        vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q 
            = vlSelf->__PVT__i_w_fifo__DOT__status_cnt_n;
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q 
            = vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d;
        if (((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid) 
             & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_ready))) {
            vlSelf->genblk1__DOT__i_atop_filter__DOT____Vcellout__r_resp_cmd__data_o 
                = (0xffU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1dU] 
                            >> 6U));
        }
    } else {
        vlSelf->__PVT__i_w_fifo__DOT__write_pointer_q = 0U;
        vlSelf->__PVT__i_r_fifo__DOT__write_pointer_q = 0U;
        vlSelf->__PVT__i_w_fifo__DOT__read_pointer_q = 0U;
        vlSelf->__PVT__i_w_fifo__DOT__mem_q = 0U;
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_q = 0U;
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q = 0U;
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_valid = 0U;
        vlSelf->__PVT__i_b_fifo__DOT__mem_q = 0U;
        vlSelf->__PVT__i_r_fifo__DOT__read_pointer_q = 0U;
        vlSelf->__PVT__i_r_fifo__DOT__mem_q = 0ULL;
        vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q = 0U;
        vlSelf->__PVT__r_busy_q = 0U;
        vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q = 0U;
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q = 0U;
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q = 0U;
        vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q = 0U;
        vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q = 0U;
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q = 0U;
        vlSelf->genblk1__DOT__i_atop_filter__DOT____Vcellout__r_resp_cmd__data_o = 0U;
    }
    vlSelf->__PVT__i_b_fifo__DOT__read_pointer_q = 
        ((IData)(vlSymsp->TOP.rst_ni) && (IData)(vlSelf->__PVT__i_b_fifo__DOT__read_pointer_n));
    vlSelf->__PVT__r_fifo_data = ((0x27U >= (0x3fU 
                                             & ((IData)(0xaU) 
                                                * (IData)(vlSelf->__PVT__i_r_fifo__DOT__read_pointer_q))))
                                   ? (0x3ffU & (IData)(
                                                       (vlSelf->__PVT__i_r_fifo__DOT__mem_q 
                                                        >> 
                                                        (0x3fU 
                                                         & ((IData)(0xaU) 
                                                            * (IData)(vlSelf->__PVT__i_r_fifo__DOT__read_pointer_q))))))
                                   : 0U);
    vlSelf->__PVT__r_cnt_load = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__r_busy_q)))) {
        if ((0U != (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q))) {
            vlSelf->__PVT__r_cnt_load = 1U;
        }
    }
    vlSelf->__PVT__err_resp[2U] = (0x3c0ffU & vlSelf->__PVT__err_resp[2U]);
    vlSelf->__PVT__err_resp[2U] = ((0x383ffU & vlSelf->__PVT__err_resp[2U]) 
                                   | (0x3fc00U & (0xc00U 
                                                  | (0x3000U 
                                                     & (((IData)(vlSelf->__PVT__i_b_fifo__DOT__mem_q) 
                                                         >> 
                                                         (3U 
                                                          & VL_SHIFTL_III(2,32,32, (IData)(vlSelf->__PVT__i_b_fifo__DOT__read_pointer_q), 1U))) 
                                                        << 0xcU)))));
    if ((0U != (IData)(vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q))) {
        vlSelf->__PVT__err_resp[2U] = (0x4000U | vlSelf->__PVT__err_resp[2U]);
    }
    vlSelf->__PVT__err_resp[2U] = ((0xffffU & vlSelf->__PVT__err_resp[2U]) 
                                   | (0x30000U & ((
                                                   (4U 
                                                    != (IData)(vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q)) 
                                                   << 0x11U) 
                                                  | ((4U 
                                                      != (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q)) 
                                                     << 0x10U))));
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream 
        = (IData)((0xfU == (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q)));
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream 
        = ((~ ((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q) 
               >> 3U)) & (0U < (7U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))));
    vlSelf->__PVT__err_resp[0U] = 0U;
    vlSelf->__PVT__err_resp[1U] = 0U;
    vlSelf->__PVT__err_resp[2U] = (0x3ff80U & vlSelf->__PVT__err_resp[2U]);
    vlSelf->__PVT__err_resp[0U] = (0x5b9563d8U | (7U 
                                                  & vlSelf->__PVT__err_resp[0U]));
    vlSelf->__PVT__err_resp[1U] = 0x423563d7U;
    vlSelf->__PVT__err_resp[2U] = ((0x3ff00U & vlSelf->__PVT__err_resp[2U]) 
                                   | (0x3ffffU & (0x19U 
                                                  | (0x60U 
                                                     & ((IData)(vlSelf->__PVT__r_fifo_data) 
                                                        >> 3U)))));
    if (vlSelf->__PVT__r_busy_q) {
        vlSelf->__PVT__err_resp[2U] = (0x80U | vlSelf->__PVT__err_resp[2U]);
        vlSelf->__PVT__err_resp[0U] = ((0xfffffffbU 
                                        & vlSelf->__PVT__err_resp[0U]) 
                                       | ((0U == (0xffU 
                                                  & (IData)(vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q))) 
                                          << 2U));
    }
}

VL_INLINE_OPT void Vtestharness_axi_err_slv__pi67___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__0(Vtestharness_axi_err_slv__pi67* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_err_slv__pi67___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__0\n"); );
    // Body
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid = 0U;
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__id_d 
        = vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q;
    if ((1U & (~ ((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q)))) {
                if (((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
                      >> 8U) & (0U != (3U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
                                             >> 0xfU))))) {
                    if ((0x10000U & vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU])) {
                        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid = 1U;
                    }
                    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__id_d 
                        = (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1eU] 
                           >> 0x1eU);
                }
            }
        }
    }
    vlSelf->__PVT__err_req[5U] = ((1U & vlSelf->__PVT__err_req[5U]) 
                                  | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1dU] 
                                      << 0x18U) | (0xfffffeU 
                                                   & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
                                                      >> 8U))));
    vlSelf->__PVT__err_req[6U] = ((1U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1dU] 
                                         >> 8U)) | 
                                  ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1eU] 
                                    << 0x18U) | (0xfffffeU 
                                                 & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1dU] 
                                                    >> 8U))));
    vlSelf->__PVT__err_req[7U] = (0xffffffU & ((1U 
                                                & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1eU] 
                                                   >> 8U)) 
                                               | (0xfffffeU 
                                                  & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1eU] 
                                                     >> 8U))));
    vlSelf->__PVT__err_req[5U] = (0xfffffe07U & vlSelf->__PVT__err_req[5U]);
    vlSelf->__PVT__err_req[0U] = ((1U & vlSelf->__PVT__err_req[0U]) 
                                  | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x18U] 
                                      << 0x18U) | (0xfffffeU 
                                                   & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
                                                      >> 8U))));
    vlSelf->__PVT__err_req[1U] = ((1U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x18U] 
                                         >> 8U)) | 
                                  ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
                                    << 0x18U) | (0xfffffeU 
                                                 & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x18U] 
                                                    >> 8U))));
    vlSelf->__PVT__err_req[2U] = ((0xfff80000U & vlSelf->__PVT__err_req[2U]) 
                                  | ((1U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
                                            >> 8U)) 
                                     | (0x7fffeU & 
                                        (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
                                         >> 8U))));
    vlSelf->__PVT__err_req[2U] = ((0x1fffffU & vlSelf->__PVT__err_req[2U]) 
                                  | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1aU] 
                                      << 0x18U) | (0xe00000U 
                                                   & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
                                                      >> 8U))));
    vlSelf->__PVT__err_req[3U] = ((0x1fffffU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1aU] 
                                                >> 8U)) 
                                  | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1bU] 
                                      << 0x18U) | (0xe00000U 
                                                   & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1aU] 
                                                      >> 8U))));
    vlSelf->__PVT__err_req[4U] = ((0x1fffffU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1bU] 
                                                >> 8U)) 
                                  | (0xffe00000U & 
                                     ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
                                       << 0x18U) | 
                                      (0xe00000U & 
                                       (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1bU] 
                                        >> 8U)))));
    vlSelf->__PVT__err_req[0U] = ((0xfffffffeU & vlSelf->__PVT__err_req[0U]) 
                                  | (1U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
                                           >> 8U)));
    if ((0U != (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
            vlSelf->__PVT__err_req[0U] = (0xfffffffeU 
                                          & vlSelf->__PVT__err_req[0U]);
        }
    }
    vlSelf->__PVT__err_req[5U] = (0xfffffffeU & vlSelf->__PVT__err_req[5U]);
    vlSelf->__PVT__err_req[2U] = ((0xffe7ffffU & vlSelf->__PVT__err_req[2U]) 
                                  | (0x80000U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
                                                 >> 8U)));
    vlSelf->__PVT__r_busy_d = vlSelf->__PVT__r_busy_q;
    vlSelf->__PVT__r_busy_load = 0U;
    vlSelf->__PVT__r_cnt_en = 0U;
    vlSelf->__PVT__r_cnt_clear = 0U;
    vlSelf->__PVT__b_fifo_pop = 0U;
    if ((4U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q)))) {
                vlSelf->__PVT__err_req[2U] = (0xfff7ffffU 
                                              & vlSelf->__PVT__err_req[2U]);
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                         >> 1U)))) {
        if ((1U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
            if (vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) {
                vlSelf->__PVT__err_req[2U] = ((0xffefffffU 
                                               & vlSelf->__PVT__err_req[2U]) 
                                              | (0x100000U 
                                                 & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
                                                    >> 8U)));
            }
        } else {
            if (((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream) 
                 | (4U > (7U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))))) {
                vlSelf->__PVT__err_req[5U] = ((0xfffffffeU 
                                               & vlSelf->__PVT__err_req[5U]) 
                                              | (1U 
                                                 & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
                                                    >> 8U)));
            }
            if (((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) 
                 | ((IData)((0x100U == (0x18100U & 
                                        vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU]))) 
                    & (~ (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream))))) {
                vlSelf->__PVT__err_req[2U] = ((0xffefffffU 
                                               & vlSelf->__PVT__err_req[2U]) 
                                              | (0x100000U 
                                                 & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
                                                    >> 8U)));
            }
            if (((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
                  >> 8U) & (0U != (3U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
                                         >> 0xfU))))) {
                vlSelf->__PVT__err_req[5U] = (0xfffffffeU 
                                              & vlSelf->__PVT__err_req[5U]);
                if ((1U & (~ (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream)))) {
                    vlSelf->__PVT__err_req[2U] = (0xffefffffU 
                                                  & vlSelf->__PVT__err_req[2U]);
                }
            }
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q))) {
        vlSelf->__PVT__b_fifo_pop = (1U & (vlSelf->__PVT__err_req[2U] 
                                           >> 0x13U));
    }
    vlSelf->__PVT__r_fifo_pop = 0U;
    if (vlSelf->__PVT__r_busy_q) {
        if ((1U & vlSelf->__PVT__err_req[0U])) {
            if ((0U == (0xffU & (IData)(vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSelf->__PVT__r_busy_d = 0U;
                vlSelf->__PVT__r_busy_load = 1U;
                vlSelf->__PVT__r_cnt_clear = 1U;
                vlSelf->__PVT__r_fifo_pop = 1U;
            }
            vlSelf->__PVT__r_cnt_en = 1U;
        }
    } else if ((0U != (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q))) {
        vlSelf->__PVT__r_busy_d = 1U;
        vlSelf->__PVT__r_busy_load = 1U;
    }
    vlSelf->__PVT__r_fifo_push = ((4U != (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q)) 
                                  & (vlSelf->__PVT__err_req[0U] 
                                     >> 1U));
    vlSelf->__PVT__w_fifo_push = ((4U != (IData)(vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q)) 
                                  & vlSelf->__PVT__err_req[5U]);
    vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q;
    if (vlSelf->__PVT__r_cnt_clear) {
        vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d = 0U;
    } else if (vlSelf->__PVT__r_cnt_load) {
        vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d 
            = (0xffU & (IData)(vlSelf->__PVT__r_fifo_data));
    } else if (vlSelf->__PVT__r_cnt_en) {
        vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__i_b_fifo__DOT__read_pointer_n = vlSelf->__PVT__i_b_fifo__DOT__read_pointer_q;
    vlSelf->__PVT__i_r_fifo__DOT__read_pointer_n = vlSelf->__PVT__i_r_fifo__DOT__read_pointer_q;
    vlSelf->__PVT__i_r_fifo__DOT__gate_clock = 1U;
    vlSelf->__PVT__i_r_fifo__DOT__write_pointer_n = vlSelf->__PVT__i_r_fifo__DOT__write_pointer_q;
    vlSelf->__PVT__i_r_fifo__DOT__status_cnt_n = vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->__PVT__r_fifo_pop) & (0U != (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_r_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__i_r_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(vlSelf->__PVT__r_fifo_push) & (4U 
                                                != (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_r_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__i_r_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__i_r_fifo__DOT__write_pointer_q)));
        vlSelf->__PVT__i_r_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->__PVT__r_fifo_pop) & (0U != (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_r_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__r_fifo_push) & (IData)(vlSelf->__PVT__r_fifo_pop)) 
          & (4U != (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_r_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q;
    }
    vlSelf->__PVT__i_r_fifo__DOT__mem_n = vlSelf->__PVT__i_r_fifo__DOT__mem_q;
    if (((IData)(vlSelf->__PVT__r_fifo_push) & (4U 
                                                != (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->i_r_fifo__DOT____Vlvbound_h3ef5e7b3__0 
            = ((0x300U & (vlSelf->__PVT__err_req[2U] 
                          >> 9U)) | (0xffU & ((vlSelf->__PVT__err_req[1U] 
                                               << 7U) 
                                              | (vlSelf->__PVT__err_req[0U] 
                                                 >> 0x19U))));
        if ((0x27U >= (0x3fU & ((IData)(0xaU) * (IData)(vlSelf->__PVT__i_r_fifo__DOT__write_pointer_q))))) {
            vlSelf->__PVT__i_r_fifo__DOT__mem_n = (
                                                   ((~ 
                                                     (0x3ffULL 
                                                      << 
                                                      (0x3fU 
                                                       & ((IData)(0xaU) 
                                                          * (IData)(vlSelf->__PVT__i_r_fifo__DOT__write_pointer_q))))) 
                                                    & vlSelf->__PVT__i_r_fifo__DOT__mem_n) 
                                                   | (0xffffffffffULL 
                                                      & ((QData)((IData)(vlSelf->i_r_fifo__DOT____Vlvbound_h3ef5e7b3__0)) 
                                                         << 
                                                         (0x3fU 
                                                          & ((IData)(0xaU) 
                                                             * (IData)(vlSelf->__PVT__i_r_fifo__DOT__write_pointer_q))))));
        }
    }
    vlSelf->__PVT__i_w_fifo__DOT__gate_clock = 1U;
    vlSelf->__PVT__i_w_fifo__DOT__mem_n = vlSelf->__PVT__i_w_fifo__DOT__mem_q;
    vlSelf->__PVT__w_fifo_data = (3U & ((IData)(vlSelf->__PVT__i_w_fifo__DOT__mem_q) 
                                        >> (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelf->__PVT__i_w_fifo__DOT__read_pointer_q), 1U))));
    vlSelf->__PVT__w_fifo_empty = ((~ (IData)(vlSelf->__PVT__w_fifo_push)) 
                                   & (0U == (IData)(vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q)));
    vlSelf->__PVT__w_fifo_pop = 0U;
    vlSelf->__PVT__b_fifo_push = 0U;
    vlSelf->__PVT__err_resp[2U] = (0x37fffU & vlSelf->__PVT__err_resp[2U]);
    if (((~ (IData)(vlSelf->__PVT__w_fifo_empty)) & 
         (2U != (IData)(vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        if ((IData)((0x900000U == (0x900000U & vlSelf->__PVT__err_req[2U])))) {
            vlSelf->__PVT__w_fifo_pop = 1U;
            vlSelf->__PVT__b_fifo_push = 1U;
        }
        vlSelf->__PVT__err_resp[2U] = (0x8000U | vlSelf->__PVT__err_resp[2U]);
    }
    vlSelf->__PVT__i_w_fifo__DOT__write_pointer_n = vlSelf->__PVT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(vlSelf->__PVT__w_fifo_push) & (4U 
                                                != (IData)(vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__i_w_fifo__DOT__mem_n = (((~ 
                                                 ((IData)(3U) 
                                                  << 
                                                  (7U 
                                                   & VL_SHIFTL_III(3,32,32, (IData)(vlSelf->__PVT__i_w_fifo__DOT__write_pointer_q), 1U)))) 
                                                & (IData)(vlSelf->__PVT__i_w_fifo__DOT__mem_n)) 
                                               | (0xffU 
                                                  & ((3U 
                                                      & (vlSelf->__PVT__err_req[7U] 
                                                         >> 0x16U)) 
                                                     << 
                                                     (7U 
                                                      & VL_SHIFTL_III(3,32,32, (IData)(vlSelf->__PVT__i_w_fifo__DOT__write_pointer_q), 1U)))));
        vlSelf->__PVT__i_w_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__i_w_fifo__DOT__write_pointer_q)));
        vlSelf->__PVT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q;
        vlSelf->__PVT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q)));
    } else {
        vlSelf->__PVT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q;
    }
    if (((IData)(vlSelf->__PVT__w_fifo_pop) & (~ (IData)(vlSelf->__PVT__w_fifo_empty)))) {
        vlSelf->__PVT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__w_fifo_push) & (IData)(vlSelf->__PVT__w_fifo_pop)) 
          & (4U != (IData)(vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q))) 
         & (~ (IData)(vlSelf->__PVT__w_fifo_empty)))) {
        vlSelf->__PVT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q;
    }
    vlSelf->__PVT__i_w_fifo__DOT__read_pointer_n = vlSelf->__PVT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->__PVT__w_fifo_pop) & (~ (IData)(vlSelf->__PVT__w_fifo_empty)))) {
        vlSelf->__PVT__i_w_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__i_w_fifo__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelf->__PVT__w_fifo_push))) {
        vlSelf->__PVT__w_fifo_data = (3U & (vlSelf->__PVT__err_req[7U] 
                                            >> 0x16U));
        if (vlSelf->__PVT__w_fifo_pop) {
            vlSelf->__PVT__i_w_fifo__DOT__write_pointer_n 
                = vlSelf->__PVT__i_w_fifo__DOT__write_pointer_q;
            vlSelf->__PVT__i_w_fifo__DOT__status_cnt_n 
                = vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q;
            vlSelf->__PVT__i_w_fifo__DOT__read_pointer_n 
                = vlSelf->__PVT__i_w_fifo__DOT__read_pointer_q;
        }
    }
    vlSelf->__PVT__i_b_fifo__DOT__gate_clock = 1U;
    vlSelf->__PVT__i_b_fifo__DOT__write_pointer_n = vlSelf->__PVT__i_b_fifo__DOT__write_pointer_q;
    vlSelf->__PVT__i_b_fifo__DOT__status_cnt_n = vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->__PVT__b_fifo_pop) & (0U != (IData)(vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_b_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__i_b_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(vlSelf->__PVT__b_fifo_push) & (2U 
                                                != (IData)(vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_b_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__i_b_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__i_b_fifo__DOT__write_pointer_q)));
        vlSelf->__PVT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->__PVT__b_fifo_pop) & (0U != (IData)(vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__b_fifo_push) & (IData)(vlSelf->__PVT__b_fifo_pop)) 
          & (2U != (IData)(vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_b_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q;
    }
    vlSelf->__PVT__i_b_fifo__DOT__mem_n = vlSelf->__PVT__i_b_fifo__DOT__mem_q;
    if (((IData)(vlSelf->__PVT__b_fifo_push) & (2U 
                                                != (IData)(vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_b_fifo__DOT__mem_n = (((~ 
                                                 ((IData)(3U) 
                                                  << 
                                                  (3U 
                                                   & VL_SHIFTL_III(2,32,32, (IData)(vlSelf->__PVT__i_b_fifo__DOT__write_pointer_q), 1U)))) 
                                                & (IData)(vlSelf->__PVT__i_b_fifo__DOT__mem_n)) 
                                               | (0xfU 
                                                  & ((IData)(vlSelf->__PVT__w_fifo_data) 
                                                     << 
                                                     (3U 
                                                      & VL_SHIFTL_III(2,32,32, (IData)(vlSelf->__PVT__i_b_fifo__DOT__write_pointer_q), 1U)))));
    }
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
        = vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q;
    if ((vlSelf->__PVT__err_req[5U] & (vlSelf->__PVT__err_resp[2U] 
                                       >> 0x11U))) {
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = ((8U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d)) 
               | (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d))));
    }
    if ((1U & (IData)(((0x900000U == (0x900000U & vlSelf->__PVT__err_req[2U])) 
                       & (vlSelf->__PVT__err_resp[2U] 
                          >> 0xfU))))) {
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = ((8U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d)) 
               | (7U & ((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d) 
                        - (IData)(1U))));
    }
    if ((((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q) 
          >> 3U) & (0U == (7U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d))))) {
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = (7U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d));
    } else if (((0U == (7U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))) 
                & (7U == (7U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d))))) {
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = (8U | (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d));
    }
    vlSelf->slv_resp_o[2U] = ((0x2ffffU & vlSelf->slv_resp_o[2U]) 
                              | (0x10000U & vlSelf->__PVT__err_resp[2U]));
    vlSelf->slv_resp_o[0U] = vlSelf->__PVT__err_resp[0U];
    vlSelf->slv_resp_o[1U] = vlSelf->__PVT__err_resp[1U];
    vlSelf->slv_resp_o[2U] = ((0x3ff00U & vlSelf->slv_resp_o[2U]) 
                              | (0xffU & vlSelf->__PVT__err_resp[2U]));
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready = 0U;
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d 
        = vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_q;
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d 
        = vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q;
    if ((0U == (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
        if ((1U & ((vlSelf->__PVT__err_resp[2U] >> 7U) 
                   & (~ (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
                         >> 8U))))) {
            vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 2U;
        } else if (vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_valid) {
            vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d 
                = vlSelf->genblk1__DOT__i_atop_filter__DOT____Vcellout__r_resp_cmd__data_o;
            vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 1U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
        vlSelf->slv_resp_o[0U] = 0U;
        vlSelf->slv_resp_o[1U] = 0U;
        vlSelf->slv_resp_o[2U] = (0x3ff80U & vlSelf->slv_resp_o[2U]);
        vlSelf->slv_resp_o[2U] = ((0x3ff9fU & vlSelf->slv_resp_o[2U]) 
                                  | (0x3ffffU & ((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q) 
                                                 << 5U)));
        vlSelf->slv_resp_o[0U] = ((0xffffffe3U & vlSelf->slv_resp_o[0U]) 
                                  | (0xfffffffcU & 
                                     (0x10U | ((0U 
                                                == (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_q)) 
                                               << 2U))));
        vlSelf->slv_resp_o[2U] = (0x80U | vlSelf->slv_resp_o[2U]);
        if ((0x100U & vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x17U])) {
            if ((4U & vlSelf->slv_resp_o[0U])) {
                vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready = 1U;
                vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 0U;
            } else {
                vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d 
                    = (0xffU & ((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d) 
                                - (IData)(1U)));
            }
        }
    } else if ((2U == (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
        if ((1U & ((vlSelf->__PVT__err_resp[2U] >> 7U) 
                   & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
                      >> 8U)))) {
            vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 0U;
        }
    } else {
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 0U;
    }
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_valid)) 
                 | (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready)));
    vlSelf->slv_resp_o[2U] = (0x1ffffU & vlSelf->slv_resp_o[2U]);
    vlSelf->slv_resp_o[2U] = ((0x300ffU & vlSelf->slv_resp_o[2U]) 
                              | (0x7f00U & vlSelf->__PVT__err_resp[2U]));
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
        = vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q;
    if ((4U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if ((2U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
            vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 0U;
        } else if ((1U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_valid)))) {
                vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 0U;
            }
        } else {
            vlSelf->slv_resp_o[2U] = (0x3c0ffU & vlSelf->slv_resp_o[2U]);
            if ((0x8000000U & vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U])) {
                vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                    = (((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_valid) 
                        & (~ (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready)))
                        ? 5U : 0U);
            }
            vlSelf->slv_resp_o[2U] = ((0x383ffU & vlSelf->slv_resp_o[2U]) 
                                      | (0x3fc00U & 
                                         (0x4800U | 
                                          ((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q) 
                                           << 0xcU))));
        }
    } else if ((2U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if ((1U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
            if ((1U & ((vlSelf->slv_resp_o[2U] >> 0xeU) 
                       & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
                          >> 0x1bU)))) {
                vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 4U;
            }
        } else {
            vlSelf->slv_resp_o[2U] = (0x8000U | vlSelf->slv_resp_o[2U]);
            if ((IData)((0x90000000U == (0x90000000U 
                                         & vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U])))) {
                vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                    = ((1U & ((vlSelf->slv_resp_o[2U] 
                               >> 0xeU) & (~ (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
                                              >> 0x1bU))))
                        ? 3U : 4U);
            }
        }
    } else if ((1U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if (vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) {
            vlSelf->slv_resp_o[2U] = ((0x37fffU & vlSelf->slv_resp_o[2U]) 
                                      | (0x8000U & 
                                         vlSelf->__PVT__err_resp[2U]));
        } else {
            vlSelf->slv_resp_o[2U] = (0x8000U | vlSelf->slv_resp_o[2U]);
            vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                = ((IData)((0x90000000U == (0x90000000U 
                                            & vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U])))
                    ? ((1U & ((vlSelf->slv_resp_o[2U] 
                               >> 0xeU) & (~ (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
                                              >> 0x1bU))))
                        ? 3U : 4U) : 2U);
        }
    } else {
        if (((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream) 
             | (4U > (7U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))))) {
            vlSelf->slv_resp_o[2U] = ((0x1ffffU & vlSelf->slv_resp_o[2U]) 
                                      | (0x20000U & 
                                         vlSelf->__PVT__err_resp[2U]));
        }
        if (((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) 
             | ((IData)((0x100U == (0x18100U & vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU]))) 
                & (~ (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream))))) {
            vlSelf->slv_resp_o[2U] = ((0x37fffU & vlSelf->slv_resp_o[2U]) 
                                      | (0x8000U & 
                                         vlSelf->__PVT__err_resp[2U]));
        }
        if (((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
              >> 8U) & (0U != (3U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
                                     >> 0xfU))))) {
            vlSelf->slv_resp_o[2U] = (0x20000U | vlSelf->slv_resp_o[2U]);
            if (vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) {
                vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 1U;
            } else {
                vlSelf->slv_resp_o[2U] = (0x8000U | 
                                          vlSelf->slv_resp_o[2U]);
                vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                    = ((IData)((0x90000000U == (0x90000000U 
                                                & vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U])))
                        ? ((1U & ((vlSelf->slv_resp_o[2U] 
                                   >> 0xeU) & (~ (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
                                                  >> 0x1bU))))
                            ? 3U : 4U) : 2U);
            }
        }
    }
}

VL_INLINE_OPT void Vtestharness_axi_err_slv__pi67___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__0(Vtestharness_axi_err_slv__pi67* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_err_slv__pi67___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__0\n"); );
    // Body
    vlSelf->__PVT__i_b_fifo__DOT__write_pointer_q = 
        ((IData)(vlSymsp->TOP.rst_ni) && (IData)(vlSelf->__PVT__i_b_fifo__DOT__write_pointer_n));
    if (vlSymsp->TOP.rst_ni) {
        vlSelf->__PVT__i_w_fifo__DOT__write_pointer_q 
            = vlSelf->__PVT__i_w_fifo__DOT__write_pointer_n;
        vlSelf->__PVT__i_r_fifo__DOT__write_pointer_q 
            = vlSelf->__PVT__i_r_fifo__DOT__write_pointer_n;
        vlSelf->__PVT__i_w_fifo__DOT__read_pointer_q 
            = vlSelf->__PVT__i_w_fifo__DOT__read_pointer_n;
        if ((1U & (~ (IData)(vlSelf->__PVT__i_w_fifo__DOT__gate_clock)))) {
            vlSelf->__PVT__i_w_fifo__DOT__mem_q = vlSelf->__PVT__i_w_fifo__DOT__mem_n;
        }
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_q 
            = vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d;
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q 
            = vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__id_d;
        if (vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_ready) {
            vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_valid 
                = vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__i_b_fifo__DOT__gate_clock)))) {
            vlSelf->__PVT__i_b_fifo__DOT__mem_q = vlSelf->__PVT__i_b_fifo__DOT__mem_n;
        }
        vlSelf->__PVT__i_r_fifo__DOT__read_pointer_q 
            = vlSelf->__PVT__i_r_fifo__DOT__read_pointer_n;
        if ((1U & (~ (IData)(vlSelf->__PVT__i_r_fifo__DOT__gate_clock)))) {
            vlSelf->__PVT__i_r_fifo__DOT__mem_q = vlSelf->__PVT__i_r_fifo__DOT__mem_n;
        }
        vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q 
            = vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d;
        if (vlSelf->__PVT__r_busy_load) {
            vlSelf->__PVT__r_busy_q = vlSelf->__PVT__r_busy_d;
        }
        vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q 
            = vlSelf->__PVT__i_r_fifo__DOT__status_cnt_n;
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q 
            = vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d;
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q 
            = vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d;
        vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q 
            = vlSelf->__PVT__i_b_fifo__DOT__status_cnt_n;
        vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q 
            = vlSelf->__PVT__i_w_fifo__DOT__status_cnt_n;
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q 
            = vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d;
        if (((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid) 
             & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_ready))) {
            vlSelf->genblk1__DOT__i_atop_filter__DOT____Vcellout__r_resp_cmd__data_o 
                = (0xffU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__i_demux_simple__mst_reqs_o[0x1dU] 
                            >> 6U));
        }
    } else {
        vlSelf->__PVT__i_w_fifo__DOT__write_pointer_q = 0U;
        vlSelf->__PVT__i_r_fifo__DOT__write_pointer_q = 0U;
        vlSelf->__PVT__i_w_fifo__DOT__read_pointer_q = 0U;
        vlSelf->__PVT__i_w_fifo__DOT__mem_q = 0U;
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_q = 0U;
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q = 0U;
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_valid = 0U;
        vlSelf->__PVT__i_b_fifo__DOT__mem_q = 0U;
        vlSelf->__PVT__i_r_fifo__DOT__read_pointer_q = 0U;
        vlSelf->__PVT__i_r_fifo__DOT__mem_q = 0ULL;
        vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q = 0U;
        vlSelf->__PVT__r_busy_q = 0U;
        vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q = 0U;
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q = 0U;
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q = 0U;
        vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q = 0U;
        vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q = 0U;
        vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q = 0U;
        vlSelf->genblk1__DOT__i_atop_filter__DOT____Vcellout__r_resp_cmd__data_o = 0U;
    }
    vlSelf->__PVT__i_b_fifo__DOT__read_pointer_q = 
        ((IData)(vlSymsp->TOP.rst_ni) && (IData)(vlSelf->__PVT__i_b_fifo__DOT__read_pointer_n));
    vlSelf->__PVT__r_fifo_data = ((0x27U >= (0x3fU 
                                             & ((IData)(0xaU) 
                                                * (IData)(vlSelf->__PVT__i_r_fifo__DOT__read_pointer_q))))
                                   ? (0x3ffU & (IData)(
                                                       (vlSelf->__PVT__i_r_fifo__DOT__mem_q 
                                                        >> 
                                                        (0x3fU 
                                                         & ((IData)(0xaU) 
                                                            * (IData)(vlSelf->__PVT__i_r_fifo__DOT__read_pointer_q))))))
                                   : 0U);
    vlSelf->__PVT__r_cnt_load = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__r_busy_q)))) {
        if ((0U != (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q))) {
            vlSelf->__PVT__r_cnt_load = 1U;
        }
    }
    vlSelf->__PVT__err_resp[2U] = (0x3c0ffU & vlSelf->__PVT__err_resp[2U]);
    vlSelf->__PVT__err_resp[2U] = ((0x383ffU & vlSelf->__PVT__err_resp[2U]) 
                                   | (0x3fc00U & (0xc00U 
                                                  | (0x3000U 
                                                     & (((IData)(vlSelf->__PVT__i_b_fifo__DOT__mem_q) 
                                                         >> 
                                                         (3U 
                                                          & VL_SHIFTL_III(2,32,32, (IData)(vlSelf->__PVT__i_b_fifo__DOT__read_pointer_q), 1U))) 
                                                        << 0xcU)))));
    if ((0U != (IData)(vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q))) {
        vlSelf->__PVT__err_resp[2U] = (0x4000U | vlSelf->__PVT__err_resp[2U]);
    }
    vlSelf->__PVT__err_resp[2U] = ((0xffffU & vlSelf->__PVT__err_resp[2U]) 
                                   | (0x30000U & ((
                                                   (4U 
                                                    != (IData)(vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q)) 
                                                   << 0x11U) 
                                                  | ((4U 
                                                      != (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q)) 
                                                     << 0x10U))));
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream 
        = (IData)((0xfU == (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q)));
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream 
        = ((~ ((IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q) 
               >> 3U)) & (0U < (7U & (IData)(vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))));
    vlSelf->__PVT__err_resp[0U] = 0U;
    vlSelf->__PVT__err_resp[1U] = 0U;
    vlSelf->__PVT__err_resp[2U] = (0x3ff80U & vlSelf->__PVT__err_resp[2U]);
    vlSelf->__PVT__err_resp[0U] = (0x5b9563d8U | (7U 
                                                  & vlSelf->__PVT__err_resp[0U]));
    vlSelf->__PVT__err_resp[1U] = 0x423563d7U;
    vlSelf->__PVT__err_resp[2U] = ((0x3ff00U & vlSelf->__PVT__err_resp[2U]) 
                                   | (0x3ffffU & (0x19U 
                                                  | (0x60U 
                                                     & ((IData)(vlSelf->__PVT__r_fifo_data) 
                                                        >> 3U)))));
    if (vlSelf->__PVT__r_busy_q) {
        vlSelf->__PVT__err_resp[2U] = (0x80U | vlSelf->__PVT__err_resp[2U]);
        vlSelf->__PVT__err_resp[0U] = ((0xfffffffbU 
                                        & vlSelf->__PVT__err_resp[0U]) 
                                       | ((0U == (0xffU 
                                                  & (IData)(vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q))) 
                                          << 2U));
    }
}
