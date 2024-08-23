// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness_axi_err_slv__pi67.h"

VL_ATTR_COLD void Vtestharness_axi_err_slv__pi67___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__0(Vtestharness_axi_err_slv__pi67* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_err_slv__pi67___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__0\n"); );
    // Body
    vlSelf->__PVT__r_cnt_load = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__r_busy_q)))) {
        if ((0U != (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q))) {
            vlSelf->__PVT__r_cnt_load = 1U;
        }
    }
    vlSelf->__PVT__err_resp[2U] = ((0xffffU & vlSelf->__PVT__err_resp[2U]) 
                                   | (0x30000U & ((
                                                   (4U 
                                                    != (IData)(vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q)) 
                                                   << 0x11U) 
                                                  | ((4U 
                                                      != (IData)(vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q)) 
                                                     << 0x10U))));
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

VL_ATTR_COLD void Vtestharness_axi_err_slv__pi67___ctor_var_reset(Vtestharness_axi_err_slv__pi67* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_err_slv__pi67___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->test_i = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(248, vlSelf->slv_req_i);
    VL_RAND_RESET_W(82, vlSelf->slv_resp_o);
    VL_RAND_RESET_W(248, vlSelf->__PVT__err_req);
    VL_RAND_RESET_W(82, vlSelf->__PVT__err_resp);
    vlSelf->__PVT__w_fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__w_fifo_push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__w_fifo_pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__w_fifo_data = VL_RAND_RESET_I(2);
    vlSelf->__PVT__b_fifo_push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__b_fifo_pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_fifo_push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_fifo_pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_fifo_data = VL_RAND_RESET_I(10);
    vlSelf->__PVT__r_cnt_clear = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_cnt_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_cnt_load = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_busy_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_busy_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_busy_load = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_w_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_w_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_w_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_w_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_w_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_w_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(3);
    vlSelf->__PVT__i_w_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__i_w_fifo__DOT__mem_n = VL_RAND_RESET_I(8);
    vlSelf->__PVT__i_w_fifo__DOT__mem_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__i_b_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_b_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_b_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_b_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_b_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_b_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_b_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_b_fifo__DOT__mem_n = VL_RAND_RESET_I(4);
    vlSelf->__PVT__i_b_fifo__DOT__mem_q = VL_RAND_RESET_I(4);
    vlSelf->__PVT__i_r_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_r_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_r_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_r_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_r_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_r_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(3);
    vlSelf->__PVT__i_r_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__i_r_fifo__DOT__mem_n = VL_RAND_RESET_Q(40);
    vlSelf->__PVT__i_r_fifo__DOT__mem_q = VL_RAND_RESET_Q(40);
    vlSelf->i_r_fifo__DOT____Vlvbound_h3ef5e7b3__0 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q = VL_RAND_RESET_I(9);
    vlSelf->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d = VL_RAND_RESET_I(9);
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d = VL_RAND_RESET_I(4);
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q = VL_RAND_RESET_I(4);
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = VL_RAND_RESET_I(3);
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = VL_RAND_RESET_I(2);
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__id_d = VL_RAND_RESET_I(2);
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d = VL_RAND_RESET_I(8);
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready = VL_RAND_RESET_I(1);
    vlSelf->genblk1__DOT__i_atop_filter__DOT____Vcellout__r_resp_cmd__data_o = VL_RAND_RESET_I(8);
}
