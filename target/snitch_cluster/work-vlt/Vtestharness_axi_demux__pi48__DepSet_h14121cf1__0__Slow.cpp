// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness_axi_demux__pi48.h"

VL_ATTR_COLD void Vtestharness_axi_demux__pi48___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__0(Vtestharness_axi_demux__pi48* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi48___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__0\n"); );
    // Body
    vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__slv_aw_ready_chan = (1U & ((~ (IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                                              | (~ (IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__slv_aw_ready_sel = (1U & ((~ (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                                             | (~ (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__slv_ar_ready_chan = (1U & ((~ (IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                                              | (~ (IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__slv_ar_ready_sel = (1U & ((~ (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                                             | (~ (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__Vcellout__i_w_spill_reg__ready_o = (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                                                     | (~ (IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__cnt_full 
        = (((IData)((((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                      >> 2U) | (3U == (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
            << 1U) | (IData)((((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                               >> 2U) | (3U == (3U 
                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))));
    vlSelf->__PVT__slv_ar_select = ((IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                     ? (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q)
                                     : (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__cnt_full 
        = (((IData)((((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                      >> 2U) | (3U == (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
            << 1U) | (IData)((((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                               >> 2U) | (3U == (3U 
                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))));
    vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_b_mux__gnt_i 
        = (1U & ((~ (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_r_mux__gnt_i 
        = (1U & ((~ (IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
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
    if (vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) {
        vlSelf->slv_resp_o[0U] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U];
        vlSelf->slv_resp_o[1U] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U];
        vlSelf->slv_resp_o[2U] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U];
        vlSelf->slv_resp_o[3U] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[3U];
        vlSelf->slv_resp_o[4U] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[4U];
        vlSelf->slv_resp_o[5U] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[5U];
        vlSelf->slv_resp_o[6U] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[6U];
        vlSelf->slv_resp_o[7U] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[7U];
        vlSelf->slv_resp_o[8U] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[8U];
        vlSelf->slv_resp_o[9U] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[9U];
        vlSelf->slv_resp_o[0xaU] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0xaU];
        vlSelf->slv_resp_o[0xbU] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0xbU];
        vlSelf->slv_resp_o[0xcU] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0xcU];
        vlSelf->slv_resp_o[0xdU] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0xdU];
        vlSelf->slv_resp_o[0xeU] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0xeU];
        vlSelf->slv_resp_o[0xfU] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0xfU];
    } else {
        vlSelf->slv_resp_o[0U] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U];
        vlSelf->slv_resp_o[1U] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U];
        vlSelf->slv_resp_o[2U] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U];
        vlSelf->slv_resp_o[3U] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U];
        vlSelf->slv_resp_o[4U] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[4U];
        vlSelf->slv_resp_o[5U] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[5U];
        vlSelf->slv_resp_o[6U] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[6U];
        vlSelf->slv_resp_o[7U] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[7U];
        vlSelf->slv_resp_o[8U] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[8U];
        vlSelf->slv_resp_o[9U] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[9U];
        vlSelf->slv_resp_o[0xaU] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0xaU];
        vlSelf->slv_resp_o[0xbU] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0xbU];
        vlSelf->slv_resp_o[0xcU] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0xcU];
        vlSelf->slv_resp_o[0xdU] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0xdU];
        vlSelf->slv_resp_o[0xeU] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0xeU];
        vlSelf->slv_resp_o[0xfU] = vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0xfU];
    }
    vlSelf->slv_resp_o[0x10U] = ((((IData)(vlSelf->__PVT__slv_aw_ready_chan) 
                                   & (IData)(vlSelf->__PVT__slv_aw_ready_sel)) 
                                  << 0xfU) | ((((IData)(vlSelf->__PVT__slv_ar_ready_chan) 
                                                & (IData)(vlSelf->__PVT__slv_ar_ready_sel)) 
                                               << 0xeU) 
                                              | (((IData)(vlSelf->__Vcellout__i_w_spill_reg__ready_o) 
                                                  << 0xdU) 
                                                 | ((((IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                      | (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                     << 0xcU) 
                                                    | ((((IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                          ? (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q)
                                                          : (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q)) 
                                                        << 7U) 
                                                       | ((((IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                            | (IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                           << 6U) 
                                                          | ((IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                              ? 
                                                             vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0x10U]
                                                              : 
                                                             vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0x10U])))))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select 
        = ((0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q)))
            ? (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_q)
            : (IData)(vlSelf->__PVT__slv_aw_select));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lookup_ar_select 
        = (3U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q) 
                 >> (3U & VL_SHIFTL_III(2,2,32, (1U 
                                                 & (vlSelf->__Vcellout__i_ar_spill_reg__data_o[2U] 
                                                    >> 0xfU)), 1U))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_select_occupied 
        = (1U & ((((IData)((0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                   << 1U) | (0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                 >> (1U & (vlSelf->__Vcellout__i_ar_spill_reg__data_o[2U] 
                           >> 0xfU))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lookup_aw_select 
        = (3U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q) 
                 >> (3U & VL_SHIFTL_III(2,2,32, (1U 
                                                 & (vlSelf->__Vcellout__i_aw_spill_reg__data_o[2U] 
                                                    >> 0x15U)), 1U))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_select_occupied 
        = (1U & ((((IData)((0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                   << 1U) | (0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                 >> (1U & (vlSelf->__Vcellout__i_aw_spill_reg__data_o[2U] 
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
                                       << 0x14U) | 
                                      ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                         | (IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                        << 0x13U) | 
                                       (((IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_b_mux__gnt_i) 
                                         << 0x12U) 
                                        | ((vlSelf->__Vcellout__i_ar_spill_reg__data_o[1U] 
                                            >> 0x1eU) 
                                           | (vlSelf->__Vcellout__i_ar_spill_reg__data_o[2U] 
                                              << 2U)))));
    vlSelf->__PVT__slv_req_cut[3U] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                         ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                         : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                       >> 0xcU) | (
                                                   ((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                     ? 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                     : 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                                   << 0x14U));
    vlSelf->__PVT__slv_req_cut[4U] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                         ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                         : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                       >> 0xcU) | (
                                                   ((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                     ? 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                                     : 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                                   << 0x14U));
    vlSelf->__PVT__slv_req_cut[5U] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                         ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                         : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                       >> 0xcU) | (
                                                   ((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                     ? 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[3U]
                                                     : 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U]) 
                                                   << 0x14U));
    vlSelf->__PVT__slv_req_cut[6U] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                         ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[3U]
                                         : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U]) 
                                       >> 0xcU) | (
                                                   ((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                     ? 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[4U]
                                                     : 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[4U]) 
                                                   << 0x14U));
    vlSelf->__PVT__slv_req_cut[7U] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                         ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[4U]
                                         : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[4U]) 
                                       >> 0xcU) | (
                                                   ((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                     ? 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[5U]
                                                     : 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[5U]) 
                                                   << 0x14U));
    vlSelf->__PVT__slv_req_cut[8U] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                         ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[5U]
                                         : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[5U]) 
                                       >> 0xcU) | (
                                                   ((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                     ? 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[6U]
                                                     : 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[6U]) 
                                                   << 0x14U));
    vlSelf->__PVT__slv_req_cut[9U] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                         ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[6U]
                                         : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[6U]) 
                                       >> 0xcU) | (
                                                   ((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                     ? 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[7U]
                                                     : 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[7U]) 
                                                   << 0x14U));
    vlSelf->__PVT__slv_req_cut[0xaU] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                           ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[7U]
                                           : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[7U]) 
                                         >> 0xcU) | 
                                        (((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                           ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[8U]
                                           : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[8U]) 
                                         << 0x14U));
    vlSelf->__PVT__slv_req_cut[0xbU] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                           ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[8U]
                                           : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[8U]) 
                                         >> 0xcU) | 
                                        (((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                           ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[9U]
                                           : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[9U]) 
                                         << 0x14U));
    vlSelf->__PVT__slv_req_cut[0xcU] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                           ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[9U]
                                           : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[9U]) 
                                         >> 0xcU) | 
                                        (((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                           ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0xaU]
                                           : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0xaU]) 
                                         << 0x14U));
    vlSelf->__PVT__slv_req_cut[0xdU] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                           ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0xaU]
                                           : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0xaU]) 
                                         >> 0xcU) | 
                                        (((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                           ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0xbU]
                                           : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0xbU]) 
                                         << 0x14U));
    vlSelf->__PVT__slv_req_cut[0xeU] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                           ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0xbU]
                                           : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0xbU]) 
                                         >> 0xcU) | 
                                        (((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                           ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0xcU]
                                           : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0xcU]) 
                                         << 0x14U));
    vlSelf->__PVT__slv_req_cut[0xfU] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                           ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0xcU]
                                           : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0xcU]) 
                                         >> 0xcU) | 
                                        (((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                           ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0xdU]
                                           : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0xdU]) 
                                         << 0x14U));
    vlSelf->__PVT__slv_req_cut[0x10U] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                            ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0xdU]
                                            : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0xdU]) 
                                          >> 0xcU) 
                                         | (((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                              ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0xeU]
                                              : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0xeU]) 
                                            << 0x14U));
    vlSelf->__PVT__slv_req_cut[0x11U] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                            ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0xeU]
                                            : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0xeU]) 
                                          >> 0xcU) 
                                         | (((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                              ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0xfU]
                                              : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0xfU]) 
                                            << 0x14U));
    vlSelf->__PVT__slv_req_cut[0x12U] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                            ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0xfU]
                                            : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0xfU]) 
                                          >> 0xcU) 
                                         | (((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                              ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0x10U]
                                              : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0x10U]) 
                                            << 0x14U));
    vlSelf->__PVT__slv_req_cut[0x13U] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                            ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0x10U]
                                            : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0x10U]) 
                                          >> 0xcU) 
                                         | (((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                              ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0x11U]
                                              : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0x11U]) 
                                            << 0x14U));
    vlSelf->__PVT__slv_req_cut[0x14U] = ((vlSelf->__Vcellout__i_aw_spill_reg__data_o[0U] 
                                          << 0x18U) 
                                         | (((((IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                               | (IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                              & ((IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                 | (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))) 
                                             << 0x17U) 
                                            | ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                  ? 
                                                 vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0x11U]
                                                  : 
                                                 vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0x11U]) 
                                                >> 0xcU) 
                                               | (((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                    ? 
                                                   vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0x12U]
                                                    : 
                                                   vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0x12U]) 
                                                  << 0x14U))));
    vlSelf->__PVT__slv_req_cut[0x15U] = ((vlSelf->__Vcellout__i_aw_spill_reg__data_o[0U] 
                                          >> 8U) | 
                                         (vlSelf->__Vcellout__i_aw_spill_reg__data_o[1U] 
                                          << 0x18U));
    vlSelf->__PVT__slv_req_cut[0x16U] = ((vlSelf->__Vcellout__i_aw_spill_reg__data_o[1U] 
                                          >> 8U) | 
                                         (vlSelf->__Vcellout__i_aw_spill_reg__data_o[2U] 
                                          << 0x18U));
    vlSelf->__PVT__slv_req_cut[0x17U] = (vlSelf->__Vcellout__i_aw_spill_reg__data_o[2U] 
                                         >> 8U);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q)))) {
        if (((~ (IData)((0U != (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__cnt_full)))) 
             & (3U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))))) {
            if ((((vlSelf->__PVT__slv_req_cut[0x14U] 
                   >> 0x17U) & ((0U == (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))) 
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
    } else if (((~ (IData)((0U != (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__cnt_full)))) 
                & (3U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))))) {
        if ((((vlSelf->__PVT__slv_req_cut[0x14U] >> 0x17U) 
              & ((0U == (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))) 
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
            ? (3U & ((IData)(1U) << (1U & (vlSelf->__Vcellout__i_aw_spill_reg__data_o[2U] 
                                           >> 0x15U))))
            : 0U);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid 
        = ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up) 
           | (0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))));
}

VL_ATTR_COLD void Vtestharness_axi_demux__pi48___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1(Vtestharness_axi_demux__pi48* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi48___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1\n"); );
    // Body
    vlSelf->__PVT__slv_resp_cut[0x10U] = ((0xffbfU 
                                           & vlSelf->__PVT__slv_resp_cut[0x10U]) 
                                          | (0x40U 
                                             & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                                << 6U)));
}

VL_ATTR_COLD void Vtestharness_axi_demux__pi48___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__2(Vtestharness_axi_demux__pi48* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi48___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__2\n"); );
    // Body
    vlSelf->__PVT__slv_resp_cut[0x10U] = ((0xefffU 
                                           & vlSelf->__PVT__slv_resp_cut[0x10U]) 
                                          | (0x1000U 
                                             & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                                << 0xcU)));
}

VL_ATTR_COLD void Vtestharness_axi_demux__pi48___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__0(Vtestharness_axi_demux__pi48* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi48___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__0\n"); );
    // Body
    vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain 
        = ((~ (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
           & (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__cnt_full 
        = (((IData)((((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                      >> 2U) | (3U == (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
            << 1U) | (IData)((((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                               >> 2U) | (3U == (3U 
                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))));
    vlSelf->__PVT__slv_ar_select = ((IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                     ? (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q)
                                     : (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__cnt_full 
        = (((IData)((((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                      >> 2U) | (3U == (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
            << 1U) | (IData)((((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                               >> 2U) | (3U == (3U 
                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))));
    vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_b_mux__gnt_i 
        = (1U & ((~ (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_r_mux__gnt_i 
        = (1U & ((~ (IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))));
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
                 >> (3U & VL_SHIFTL_III(2,2,32, (1U 
                                                 & (vlSelf->__Vcellout__i_ar_spill_reg__data_o[2U] 
                                                    >> 0xfU)), 1U))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_select_occupied 
        = (1U & ((((IData)((0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                   << 1U) | (0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                 >> (1U & (vlSelf->__Vcellout__i_ar_spill_reg__data_o[2U] 
                           >> 0xfU))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lookup_aw_select 
        = (3U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q) 
                 >> (3U & VL_SHIFTL_III(2,2,32, (1U 
                                                 & (vlSelf->__Vcellout__i_aw_spill_reg__data_o[2U] 
                                                    >> 0x15U)), 1U))));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_select_occupied 
        = (1U & ((((IData)((0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                   << 1U) | (0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                 >> (1U & (vlSelf->__Vcellout__i_aw_spill_reg__data_o[2U] 
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
                                       << 0x14U) | 
                                      ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                         | (IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                        << 0x13U) | 
                                       (((IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_b_mux__gnt_i) 
                                         << 0x12U) 
                                        | ((vlSelf->__Vcellout__i_ar_spill_reg__data_o[1U] 
                                            >> 0x1eU) 
                                           | (vlSelf->__Vcellout__i_ar_spill_reg__data_o[2U] 
                                              << 2U)))));
    vlSelf->__PVT__slv_req_cut[3U] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                         ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                         : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                       >> 0xcU) | (
                                                   ((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                     ? 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                     : 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                                   << 0x14U));
    vlSelf->__PVT__slv_req_cut[4U] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                         ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                         : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                       >> 0xcU) | (
                                                   ((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                     ? 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                                     : 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                                   << 0x14U));
    vlSelf->__PVT__slv_req_cut[5U] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                         ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                         : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                       >> 0xcU) | (
                                                   ((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                     ? 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[3U]
                                                     : 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U]) 
                                                   << 0x14U));
    vlSelf->__PVT__slv_req_cut[6U] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                         ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[3U]
                                         : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[3U]) 
                                       >> 0xcU) | (
                                                   ((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                     ? 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[4U]
                                                     : 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[4U]) 
                                                   << 0x14U));
    vlSelf->__PVT__slv_req_cut[7U] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                         ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[4U]
                                         : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[4U]) 
                                       >> 0xcU) | (
                                                   ((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                     ? 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[5U]
                                                     : 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[5U]) 
                                                   << 0x14U));
    vlSelf->__PVT__slv_req_cut[8U] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                         ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[5U]
                                         : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[5U]) 
                                       >> 0xcU) | (
                                                   ((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                     ? 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[6U]
                                                     : 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[6U]) 
                                                   << 0x14U));
    vlSelf->__PVT__slv_req_cut[9U] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                         ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[6U]
                                         : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[6U]) 
                                       >> 0xcU) | (
                                                   ((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                     ? 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[7U]
                                                     : 
                                                    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[7U]) 
                                                   << 0x14U));
    vlSelf->__PVT__slv_req_cut[0xaU] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                           ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[7U]
                                           : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[7U]) 
                                         >> 0xcU) | 
                                        (((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                           ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[8U]
                                           : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[8U]) 
                                         << 0x14U));
    vlSelf->__PVT__slv_req_cut[0xbU] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                           ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[8U]
                                           : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[8U]) 
                                         >> 0xcU) | 
                                        (((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                           ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[9U]
                                           : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[9U]) 
                                         << 0x14U));
    vlSelf->__PVT__slv_req_cut[0xcU] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                           ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[9U]
                                           : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[9U]) 
                                         >> 0xcU) | 
                                        (((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                           ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0xaU]
                                           : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0xaU]) 
                                         << 0x14U));
    vlSelf->__PVT__slv_req_cut[0xdU] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                           ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0xaU]
                                           : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0xaU]) 
                                         >> 0xcU) | 
                                        (((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                           ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0xbU]
                                           : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0xbU]) 
                                         << 0x14U));
    vlSelf->__PVT__slv_req_cut[0xeU] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                           ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0xbU]
                                           : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0xbU]) 
                                         >> 0xcU) | 
                                        (((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                           ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0xcU]
                                           : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0xcU]) 
                                         << 0x14U));
    vlSelf->__PVT__slv_req_cut[0xfU] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                           ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0xcU]
                                           : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0xcU]) 
                                         >> 0xcU) | 
                                        (((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                           ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0xdU]
                                           : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0xdU]) 
                                         << 0x14U));
    vlSelf->__PVT__slv_req_cut[0x10U] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                            ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0xdU]
                                            : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0xdU]) 
                                          >> 0xcU) 
                                         | (((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                              ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0xeU]
                                              : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0xeU]) 
                                            << 0x14U));
    vlSelf->__PVT__slv_req_cut[0x11U] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                            ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0xeU]
                                            : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0xeU]) 
                                          >> 0xcU) 
                                         | (((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                              ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0xfU]
                                              : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0xfU]) 
                                            << 0x14U));
    vlSelf->__PVT__slv_req_cut[0x12U] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                            ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0xfU]
                                            : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0xfU]) 
                                          >> 0xcU) 
                                         | (((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                              ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0x10U]
                                              : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0x10U]) 
                                            << 0x14U));
    vlSelf->__PVT__slv_req_cut[0x13U] = ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                            ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0x10U]
                                            : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0x10U]) 
                                          >> 0xcU) 
                                         | (((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                              ? vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0x11U]
                                              : vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0x11U]) 
                                            << 0x14U));
    vlSelf->__PVT__slv_req_cut[0x14U] = ((vlSelf->__Vcellout__i_aw_spill_reg__data_o[0U] 
                                          << 0x18U) 
                                         | (((((IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                               | (IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                              & ((IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                                 | (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))) 
                                             << 0x17U) 
                                            | ((((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                  ? 
                                                 vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0x11U]
                                                  : 
                                                 vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0x11U]) 
                                                >> 0xcU) 
                                               | (((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)
                                                    ? 
                                                   vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q[0x12U]
                                                    : 
                                                   vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q[0x12U]) 
                                                  << 0x14U))));
    vlSelf->__PVT__slv_req_cut[0x15U] = ((vlSelf->__Vcellout__i_aw_spill_reg__data_o[0U] 
                                          >> 8U) | 
                                         (vlSelf->__Vcellout__i_aw_spill_reg__data_o[1U] 
                                          << 0x18U));
    vlSelf->__PVT__slv_req_cut[0x16U] = ((vlSelf->__Vcellout__i_aw_spill_reg__data_o[1U] 
                                          >> 8U) | 
                                         (vlSelf->__Vcellout__i_aw_spill_reg__data_o[2U] 
                                          << 0x18U));
    vlSelf->__PVT__slv_req_cut[0x17U] = (vlSelf->__Vcellout__i_aw_spill_reg__data_o[2U] 
                                         >> 8U);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q)))) {
        if (((~ (IData)((0U != (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__cnt_full)))) 
             & (3U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))))) {
            if ((((vlSelf->__PVT__slv_req_cut[0x14U] 
                   >> 0x17U) & ((0U == (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))) 
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
    } else if (((~ (IData)((0U != (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__cnt_full)))) 
                & (3U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))))) {
        if ((((vlSelf->__PVT__slv_req_cut[0x14U] >> 0x17U) 
              & ((0U == (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))) 
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
            ? (3U & ((IData)(1U) << (1U & (vlSelf->__Vcellout__i_aw_spill_reg__data_o[2U] 
                                           >> 0x15U))))
            : 0U);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid 
        = ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up) 
           | (0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))));
}

VL_ATTR_COLD void Vtestharness_axi_demux__pi48___ctor_var_reset(Vtestharness_axi_demux__pi48* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi48___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->test_i = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(750, vlSelf->slv_req_i);
    vlSelf->slv_aw_select_i = VL_RAND_RESET_I(2);
    vlSelf->slv_ar_select_i = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(528, vlSelf->slv_resp_o);
    VL_RAND_RESET_W(3000, vlSelf->mst_reqs_o);
    VL_RAND_RESET_W(2112, vlSelf->mst_resps_i);
    VL_RAND_RESET_W(750, vlSelf->__PVT__slv_req_cut);
    VL_RAND_RESET_W(528, vlSelf->__PVT__slv_resp_cut);
    vlSelf->__PVT__slv_aw_ready_chan = VL_RAND_RESET_I(1);
    vlSelf->__PVT__slv_aw_ready_sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__slv_ar_ready_chan = VL_RAND_RESET_I(1);
    vlSelf->__PVT__slv_ar_ready_sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__slv_aw_select = VL_RAND_RESET_I(2);
    vlSelf->__PVT__slv_ar_select = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(86, vlSelf->__Vcellout__i_aw_spill_reg__data_o);
    vlSelf->__Vcellout__i_w_spill_reg__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80, vlSelf->__Vcellout__i_ar_spill_reg__data_o);
    VL_RAND_RESET_W(3000, vlSelf->__Vcellout__i_demux_simple__mst_reqs_o);
    VL_RAND_RESET_W(86, vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q);
    vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(86, vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q);
    vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(579, vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q);
    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(579, vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q);
    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80, vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q);
    vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80, vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q);
    vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q = VL_RAND_RESET_I(5);
    vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q = VL_RAND_RESET_I(5);
    vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(518, vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_data_q);
    vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(518, vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_data_q);
    vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__load_aw_lock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lookup_aw_select = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_select_occupied = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__atop_inject = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_cnt_down = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies = VL_RAND_RESET_I(4);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lookup_ar_select = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_select_occupied = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__load_ar_lock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies = VL_RAND_RESET_I(4);
    vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_b_mux__gnt_i = VL_RAND_RESET_I(1);
    vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_r_mux__gnt_i = VL_RAND_RESET_I(1);
    vlSelf->i_demux_simple__DOT____Vlvbound_h0da0c871__1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q = VL_RAND_RESET_I(4);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__pop_en = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__cnt_full = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_delta = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(3);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(3);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_d = VL_RAND_RESET_I(3);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes = VL_RAND_RESET_I(6);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes = VL_RAND_RESET_I(3);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes = VL_RAND_RESET_I(3);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes = VL_RAND_RESET_I(3);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d = VL_RAND_RESET_I(4);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = VL_RAND_RESET_I(4);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(4);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes = VL_RAND_RESET_I(8);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(4);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes = VL_RAND_RESET_I(8);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q = VL_RAND_RESET_I(4);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__cnt_full = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_delta = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(3);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(3);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes = VL_RAND_RESET_I(6);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes = VL_RAND_RESET_I(3);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes = VL_RAND_RESET_I(3);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes = VL_RAND_RESET_I(3);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d = VL_RAND_RESET_I(4);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = VL_RAND_RESET_I(4);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(4);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes = VL_RAND_RESET_I(8);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(4);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes = VL_RAND_RESET_I(8);
}
