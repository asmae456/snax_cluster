// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness_axi_demux__pi66.h"

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__0(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__0\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    vlSelf->__PVT__slv_resp_cut[2U] = ((0x3ff7fU & 
                                        vlSelf->__PVT__slv_resp_cut[2U]) 
                                       | (0x80U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                                   << 7U)));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    vlSelf->__PVT__slv_resp_cut[2U] = ((0x3bfffU & 
                                        vlSelf->__PVT__slv_resp_cut[2U]) 
                                       | (0x4000U & 
                                          ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                           << 0xeU)));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__2(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__2\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies 
        = ((0xfffffff8U & (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                            << 1U) & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                      << 3U))) | ((
                                                   ((~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                    & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                       >> 2U)) 
                                                   << 2U) 
                                                  | ((0xfffffffeU 
                                                      & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                         & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                            << 1U))) 
                                                     | (1U 
                                                        & ((~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                           & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                              >> 1U))))));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__3(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__3\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies 
        = ((0xfffffff8U & (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                            << 1U) & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                      << 3U))) | ((
                                                   ((~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                    & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                       >> 2U)) 
                                                   << 2U) 
                                                  | ((0xfffffffeU 
                                                      & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                         & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                            << 1U))) 
                                                     | (1U 
                                                        & ((~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                           & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                              >> 1U))))));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__0(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__0\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes 
        = (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
            << 4U) | (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                       << 2U) | ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                  ? (2U | (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes) 
                                                 >> 4U)))
                                  : (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes) 
                                           >> 2U)))));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes 
        = (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                  ? ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes) 
                     >> 2U) : ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes) 
                               >> 1U)));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__2(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__2\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
             & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
            << 2U) | ((2U & (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                              & (~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                             << 1U)) | (IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_r_mux__gnt_i)));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__3(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__3\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes 
        = (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
            << 4U) | (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                       << 2U) | ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                  ? (2U | (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes) 
                                                 >> 4U)))
                                  : (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes) 
                                           >> 2U)))));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__4(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__4\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
        = (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                  ? ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes) 
                     >> 2U) : ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes) 
                               >> 1U)));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__5(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__5\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
             & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
            << 2U) | ((2U & (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                              & (~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                             << 1U)) | (IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_b_mux__gnt_i)));
}

extern const VlWide<31>/*991:0*/ Vtestharness__ConstPool__CONST_h5607ec9a_0;

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__6(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__6\n"); );
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

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__10(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__10\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes 
        = (((IData)((0U != (0xcU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)))) 
            << 2U) | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)))) 
                       << 1U) | (IData)((0U != (6U 
                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes))))));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__11(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__11\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes 
        = (((IData)((0U != (0xcU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)))) 
            << 2U) | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)))) 
                       << 1U) | (IData)((0U != (6U 
                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes))))));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__12(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__12\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (((IData)((0U != (0xcU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)))) 
               << 2U) | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)))) 
                          << 1U) | (IData)((0U != (6U 
                                                   & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__13(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__13\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | ((((4U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))
                 ? 2U : 3U) << 4U) | ((((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))
                                         ? 0U : 1U) 
                                       << 2U) | (3U 
                                                 & ((2U 
                                                     & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                     >> 2U)
                                                     : 
                                                    ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                     >> 4U))))));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__14(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__14\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | ((((4U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))
                 ? 2U : 3U) << 4U) | ((((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))
                                         ? 0U : 1U) 
                                       << 2U) | (3U 
                                                 & ((2U 
                                                     & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                     >> 2U)
                                                     : 
                                                    ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                     >> 4U))))));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__15(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__15\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (((IData)((0U != (0xcU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)))) 
               << 2U) | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)))) 
                          << 1U) | (IData)((0U != (6U 
                                                   & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__16(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__16\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (((IData)((0U != (0xcU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)))) 
               << 2U) | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)))) 
                          << 1U) | (IData)((0U != (6U 
                                                   & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__17(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__17\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | ((((4U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))
                 ? 2U : 3U) << 4U) | ((((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))
                                         ? 0U : 1U) 
                                       << 2U) | (3U 
                                                 & ((2U 
                                                     & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                     >> 2U)
                                                     : 
                                                    ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                     >> 4U))))));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__18(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__18\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | ((((4U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))
                 ? 2U : 3U) << 4U) | ((((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))
                                         ? 0U : 1U) 
                                       << 2U) | (3U 
                                                 & ((2U 
                                                     & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                     >> 2U)
                                                     : 
                                                    ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                     >> 4U))))));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__19(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__19\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (((IData)((0U != (0xcU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)))) 
               << 2U) | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)))) 
                          << 1U) | (IData)((0U != (6U 
                                                   & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))))));
}

extern const VlUnpacked<CData/*0:0*/, 256> Vtestharness__ConstPool__TABLE_h0d4b0eda_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtestharness__ConstPool__TABLE_h4081a0b3_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtestharness__ConstPool__TABLE_h48c89ed7_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtestharness__ConstPool__TABLE_h7ec68883_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtestharness__ConstPool__TABLE_he0b2cd81_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtestharness__ConstPool__TABLE_hdfd3b49e_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtestharness__ConstPool__TABLE_haa283d32_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtestharness__ConstPool__TABLE_hcd46fa90_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtestharness__ConstPool__TABLE_h9ace894a_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtestharness__ConstPool__TABLE_h29d9cd8f_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtestharness__ConstPool__TABLE_hfd5bd409_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtestharness__ConstPool__TABLE_h7af8e3a1_0;

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__20(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__20\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*7:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->__PVT__slv_resp_cut[2U] >> 0x11U)) 
           & (IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->__PVT__slv_resp_cut[2U] >> 0x11U));
    vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->__PVT__slv_resp_cut[2U] >> 0x11U)) 
           & (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->__PVT__slv_resp_cut[2U] >> 0x11U));
    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->__PVT__slv_resp_cut[2U] >> 0xfU)) 
           & (IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->__PVT__slv_resp_cut[2U] >> 0xfU));
    vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->__PVT__slv_resp_cut[2U] >> 0x10U)) 
           & (IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->__PVT__slv_resp_cut[2U] >> 0x10U));
    vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->__PVT__slv_resp_cut[2U] >> 0x10U)) 
           & (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->__PVT__slv_resp_cut[2U] >> 0x10U));
    vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->__PVT__slv_resp_cut[2U] >> 7U) 
           & (IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_r_mux__gnt_i));
    vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->__PVT__slv_resp_cut[2U] >> 0xeU) 
           & (IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_b_mux__gnt_i));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en 
        = (((vlSelf->__PVT__slv_resp_cut[2U] >> 7U) 
            & ((IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_r_mux__gnt_i) 
               & (vlSelf->__PVT__slv_resp_cut[0U] >> 2U)))
            ? (0xfU & ((IData)(1U) << (3U & (vlSelf->__PVT__slv_resp_cut[2U] 
                                             >> 5U))))
            : 0U);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__pop_en 
        = ((IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill)
            ? (0xfU & ((IData)(1U) << (3U & (vlSelf->__PVT__slv_resp_cut[2U] 
                                             >> 0xcU))))
            : 0U);
    if ((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_en 
            = (1U & ((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en)) 
                     || (1U & (~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en)))));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta 
            = ((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en))
                ? ((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                    ? 1U : 2U) : ((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                                   ? 0U : 1U));
    } else if ((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_en 
            = (1U & (~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en)));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta 
            = ((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                ? 0U : 1U);
    } else if ((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_en = 1U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta = 1U;
    } else {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_en = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta = 0U;
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_down 
        = ((1U & (~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en))) 
           && ((1U & (~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en))) 
               && (1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))));
    if ((2U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en) 
                            >> 1U)) || (1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                                                 >> 1U)))));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_delta 
            = ((2U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en))
                ? ((2U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                    ? 1U : 2U) : ((2U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                                   ? 0U : 1U));
    } else if ((2U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                        >> 1U)));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_delta 
            = ((2U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                     >> 1U));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_delta 
            = ((2U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                ? 1U : 0U);
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en) 
                     >> 1U))) && ((1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en) 
                                            >> 1U))) 
                                  && (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                                            >> 1U))));
    if ((4U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en) 
                            >> 2U)) || (1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                                                 >> 2U)))));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_delta 
            = ((4U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en))
                ? ((4U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                    ? 1U : 2U) : ((4U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                                   ? 0U : 1U));
    } else if ((4U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                        >> 2U)));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_delta 
            = ((4U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                     >> 2U));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_delta 
            = ((4U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                ? 1U : 0U);
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en) 
                     >> 2U))) && ((1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en) 
                                            >> 2U))) 
                                  && (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                                            >> 2U))));
    if ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en) 
                            >> 3U)) || (1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                                                 >> 3U)))));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_delta 
            = ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en))
                ? ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                    ? 1U : 2U) : ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                                   ? 0U : 1U));
    } else if ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                        >> 3U)));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_delta 
            = ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                     >> 3U));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_delta 
            = ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                ? 1U : 0U);
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en) 
                     >> 3U))) && ((1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en) 
                                            >> 3U))) 
                                  && (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                                            >> 3U))));
    __Vtableidx1 = (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__pop_en) 
                     << 4U) | (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_en 
        = Vtestharness__ConstPool__TABLE_h0d4b0eda_0
        [__Vtableidx1];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_down 
        = Vtestharness__ConstPool__TABLE_h4081a0b3_0
        [__Vtableidx1];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta 
        = Vtestharness__ConstPool__TABLE_h48c89ed7_0
        [__Vtableidx1];
    __Vtableidx2 = (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__pop_en) 
                     << 4U) | (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_en 
        = Vtestharness__ConstPool__TABLE_h7ec68883_0
        [__Vtableidx2];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_down 
        = Vtestharness__ConstPool__TABLE_he0b2cd81_0
        [__Vtableidx2];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_delta 
        = Vtestharness__ConstPool__TABLE_hdfd3b49e_0
        [__Vtableidx2];
    __Vtableidx3 = (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__pop_en) 
                     << 4U) | (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_en 
        = Vtestharness__ConstPool__TABLE_haa283d32_0
        [__Vtableidx3];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_down 
        = Vtestharness__ConstPool__TABLE_hcd46fa90_0
        [__Vtableidx3];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_delta 
        = Vtestharness__ConstPool__TABLE_h9ace894a_0
        [__Vtableidx3];
    __Vtableidx4 = (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__pop_en) 
                     << 4U) | (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_en 
        = Vtestharness__ConstPool__TABLE_h29d9cd8f_0
        [__Vtableidx4];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_down 
        = Vtestharness__ConstPool__TABLE_hfd5bd409_0
        [__Vtableidx4];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_delta 
        = Vtestharness__ConstPool__TABLE_h7af8e3a1_0
        [__Vtableidx4];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_en) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (7U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_down)
                      ? ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         - (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta))
                      : ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         + (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_en) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (7U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_down)
                      ? ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         - (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_delta))
                      : ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         + (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_en) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (7U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_down)
                      ? ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         - (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_delta))
                      : ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         + (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_en) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (7U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_down)
                      ? ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         - (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_delta))
                      : ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         + (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_en) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (7U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_down)
                      ? ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         - (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta))
                      : ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         + (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_en) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (7U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_down)
                      ? ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         - (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_delta))
                      : ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         + (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_en) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (7U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_down)
                      ? ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         - (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_delta))
                      : ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         + (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_en) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (7U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_down)
                      ? ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         - (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_delta))
                      : ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         + (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_delta))));
    }
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__21(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__21\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (3U & (((IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_b_mux__gnt_i) 
                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__22(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__22\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (3U & (((IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_r_mux__gnt_i) 
                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__0(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__0\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__20(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__20\n"); );
    // Init
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*7:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*7:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*7:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->__PVT__slv_resp_cut[2U] >> 0x11U)) 
           & (IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->__PVT__slv_resp_cut[2U] >> 0x11U));
    vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->__PVT__slv_resp_cut[2U] >> 0x11U)) 
           & (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->__PVT__slv_resp_cut[2U] >> 0x11U));
    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->__PVT__slv_resp_cut[2U] >> 0xfU)) 
           & (IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->__PVT__slv_resp_cut[2U] >> 0xfU));
    vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->__PVT__slv_resp_cut[2U] >> 0x10U)) 
           & (IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->__PVT__slv_resp_cut[2U] >> 0x10U));
    vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->__PVT__slv_resp_cut[2U] >> 0x10U)) 
           & (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->__PVT__slv_resp_cut[2U] >> 0x10U));
    vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->__PVT__slv_resp_cut[2U] >> 7U) 
           & (IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_r_mux__gnt_i));
    vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->__PVT__slv_resp_cut[2U] >> 0xeU) 
           & (IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_b_mux__gnt_i));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en 
        = (((vlSelf->__PVT__slv_resp_cut[2U] >> 7U) 
            & ((IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_r_mux__gnt_i) 
               & (vlSelf->__PVT__slv_resp_cut[0U] >> 2U)))
            ? (0xfU & ((IData)(1U) << (3U & (vlSelf->__PVT__slv_resp_cut[2U] 
                                             >> 5U))))
            : 0U);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__pop_en 
        = ((IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill)
            ? (0xfU & ((IData)(1U) << (3U & (vlSelf->__PVT__slv_resp_cut[2U] 
                                             >> 0xcU))))
            : 0U);
    if ((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_en 
            = (1U & ((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en)) 
                     || (1U & (~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en)))));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta 
            = ((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en))
                ? ((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                    ? 1U : 2U) : ((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                                   ? 0U : 1U));
    } else if ((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_en 
            = (1U & (~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en)));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta 
            = ((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                ? 0U : 1U);
    } else if ((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_en = 1U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta = 1U;
    } else {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_en = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta = 0U;
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_down 
        = ((1U & (~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en))) 
           && ((1U & (~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en))) 
               && (1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))));
    if ((2U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en) 
                            >> 1U)) || (1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                                                 >> 1U)))));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_delta 
            = ((2U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en))
                ? ((2U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                    ? 1U : 2U) : ((2U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                                   ? 0U : 1U));
    } else if ((2U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                        >> 1U)));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_delta 
            = ((2U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                     >> 1U));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_delta 
            = ((2U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                ? 1U : 0U);
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en) 
                     >> 1U))) && ((1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en) 
                                            >> 1U))) 
                                  && (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                                            >> 1U))));
    if ((4U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en) 
                            >> 2U)) || (1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                                                 >> 2U)))));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_delta 
            = ((4U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en))
                ? ((4U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                    ? 1U : 2U) : ((4U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                                   ? 0U : 1U));
    } else if ((4U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                        >> 2U)));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_delta 
            = ((4U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                     >> 2U));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_delta 
            = ((4U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                ? 1U : 0U);
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en) 
                     >> 2U))) && ((1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en) 
                                            >> 2U))) 
                                  && (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                                            >> 2U))));
    if ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en) 
                            >> 3U)) || (1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                                                 >> 3U)))));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_delta 
            = ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en))
                ? ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                    ? 1U : 2U) : ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                                   ? 0U : 1U));
    } else if ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                        >> 3U)));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_delta 
            = ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                     >> 3U));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_delta 
            = ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                ? 1U : 0U);
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en) 
                     >> 3U))) && ((1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en) 
                                            >> 3U))) 
                                  && (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                                            >> 3U))));
    __Vtableidx5 = (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__pop_en) 
                     << 4U) | (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_en 
        = Vtestharness__ConstPool__TABLE_h0d4b0eda_0
        [__Vtableidx5];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_down 
        = Vtestharness__ConstPool__TABLE_h4081a0b3_0
        [__Vtableidx5];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta 
        = Vtestharness__ConstPool__TABLE_h48c89ed7_0
        [__Vtableidx5];
    __Vtableidx6 = (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__pop_en) 
                     << 4U) | (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_en 
        = Vtestharness__ConstPool__TABLE_h7ec68883_0
        [__Vtableidx6];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_down 
        = Vtestharness__ConstPool__TABLE_he0b2cd81_0
        [__Vtableidx6];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_delta 
        = Vtestharness__ConstPool__TABLE_hdfd3b49e_0
        [__Vtableidx6];
    __Vtableidx7 = (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__pop_en) 
                     << 4U) | (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_en 
        = Vtestharness__ConstPool__TABLE_haa283d32_0
        [__Vtableidx7];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_down 
        = Vtestharness__ConstPool__TABLE_hcd46fa90_0
        [__Vtableidx7];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_delta 
        = Vtestharness__ConstPool__TABLE_h9ace894a_0
        [__Vtableidx7];
    __Vtableidx8 = (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__pop_en) 
                     << 4U) | (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_en 
        = Vtestharness__ConstPool__TABLE_h29d9cd8f_0
        [__Vtableidx8];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_down 
        = Vtestharness__ConstPool__TABLE_hfd5bd409_0
        [__Vtableidx8];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_delta 
        = Vtestharness__ConstPool__TABLE_h7af8e3a1_0
        [__Vtableidx8];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_en) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (7U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_down)
                      ? ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         - (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta))
                      : ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         + (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_en) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (7U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_down)
                      ? ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         - (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_delta))
                      : ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         + (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_en) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (7U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_down)
                      ? ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         - (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_delta))
                      : ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         + (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_en) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (7U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_down)
                      ? ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         - (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_delta))
                      : ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         + (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_en) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (7U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_down)
                      ? ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         - (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta))
                      : ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         + (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_en) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (7U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_down)
                      ? ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         - (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_delta))
                      : ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         + (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_en) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (7U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_down)
                      ? ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         - (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_delta))
                      : ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         + (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_en) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (7U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_down)
                      ? ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         - (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_delta))
                      : ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         + (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_delta))));
    }
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__20(Vtestharness_axi_demux__pi66* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi66___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__20\n"); );
    // Init
    CData/*7:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    CData/*7:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    CData/*7:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    CData/*7:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    // Body
    vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->__PVT__slv_resp_cut[2U] >> 0x11U)) 
           & (IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->__PVT__slv_resp_cut[2U] >> 0x11U));
    vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->__PVT__slv_resp_cut[2U] >> 0x11U)) 
           & (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->__PVT__slv_resp_cut[2U] >> 0x11U));
    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->__PVT__slv_resp_cut[2U] >> 0xfU)) 
           & (IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->__PVT__slv_resp_cut[2U] >> 0xfU));
    vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->__PVT__slv_resp_cut[2U] >> 0x10U)) 
           & (IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->__PVT__slv_resp_cut[2U] >> 0x10U));
    vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->__PVT__slv_resp_cut[2U] >> 0x10U)) 
           & (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->__PVT__slv_resp_cut[2U] >> 0x10U));
    vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->__PVT__slv_resp_cut[2U] >> 7U) 
           & (IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_r_mux__gnt_i));
    vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->__PVT__slv_resp_cut[2U] >> 0xeU) 
           & (IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_b_mux__gnt_i));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en 
        = (((vlSelf->__PVT__slv_resp_cut[2U] >> 7U) 
            & ((IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_r_mux__gnt_i) 
               & (vlSelf->__PVT__slv_resp_cut[0U] >> 2U)))
            ? (0xfU & ((IData)(1U) << (3U & (vlSelf->__PVT__slv_resp_cut[2U] 
                                             >> 5U))))
            : 0U);
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__pop_en 
        = ((IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill)
            ? (0xfU & ((IData)(1U) << (3U & (vlSelf->__PVT__slv_resp_cut[2U] 
                                             >> 0xcU))))
            : 0U);
    if ((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_en 
            = (1U & ((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en)) 
                     || (1U & (~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en)))));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta 
            = ((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en))
                ? ((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                    ? 1U : 2U) : ((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                                   ? 0U : 1U));
    } else if ((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_en 
            = (1U & (~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en)));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta 
            = ((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                ? 0U : 1U);
    } else if ((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_en = 1U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta = 1U;
    } else {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_en = 0U;
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta = 0U;
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_down 
        = ((1U & (~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en))) 
           && ((1U & (~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en))) 
               && (1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))));
    if ((2U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en) 
                            >> 1U)) || (1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                                                 >> 1U)))));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_delta 
            = ((2U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en))
                ? ((2U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                    ? 1U : 2U) : ((2U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                                   ? 0U : 1U));
    } else if ((2U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                        >> 1U)));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_delta 
            = ((2U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                     >> 1U));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_delta 
            = ((2U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                ? 1U : 0U);
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en) 
                     >> 1U))) && ((1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en) 
                                            >> 1U))) 
                                  && (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                                            >> 1U))));
    if ((4U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en) 
                            >> 2U)) || (1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                                                 >> 2U)))));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_delta 
            = ((4U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en))
                ? ((4U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                    ? 1U : 2U) : ((4U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                                   ? 0U : 1U));
    } else if ((4U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                        >> 2U)));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_delta 
            = ((4U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                     >> 2U));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_delta 
            = ((4U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                ? 1U : 0U);
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en) 
                     >> 2U))) && ((1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en) 
                                            >> 2U))) 
                                  && (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                                            >> 2U))));
    if ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en) 
                            >> 3U)) || (1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                                                 >> 3U)))));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_delta 
            = ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en))
                ? ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                    ? 1U : 2U) : ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                                   ? 0U : 1U));
    } else if ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en))) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                        >> 3U)));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_delta 
            = ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                     >> 3U));
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_delta 
            = ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en))
                ? 1U : 0U);
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en) 
                     >> 3U))) && ((1U & (~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en) 
                                            >> 3U))) 
                                  && (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                                            >> 3U))));
    __Vtableidx9 = (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__pop_en) 
                     << 4U) | (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_en 
        = Vtestharness__ConstPool__TABLE_h0d4b0eda_0
        [__Vtableidx9];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_down 
        = Vtestharness__ConstPool__TABLE_h4081a0b3_0
        [__Vtableidx9];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta 
        = Vtestharness__ConstPool__TABLE_h48c89ed7_0
        [__Vtableidx9];
    __Vtableidx10 = (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__pop_en) 
                      << 4U) | (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_en 
        = Vtestharness__ConstPool__TABLE_h7ec68883_0
        [__Vtableidx10];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_down 
        = Vtestharness__ConstPool__TABLE_he0b2cd81_0
        [__Vtableidx10];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_delta 
        = Vtestharness__ConstPool__TABLE_hdfd3b49e_0
        [__Vtableidx10];
    __Vtableidx11 = (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__pop_en) 
                      << 4U) | (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_en 
        = Vtestharness__ConstPool__TABLE_haa283d32_0
        [__Vtableidx11];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_down 
        = Vtestharness__ConstPool__TABLE_hcd46fa90_0
        [__Vtableidx11];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_delta 
        = Vtestharness__ConstPool__TABLE_h9ace894a_0
        [__Vtableidx11];
    __Vtableidx12 = (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__pop_en) 
                      << 4U) | (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_en 
        = Vtestharness__ConstPool__TABLE_h29d9cd8f_0
        [__Vtableidx12];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_down 
        = Vtestharness__ConstPool__TABLE_hfd5bd409_0
        [__Vtableidx12];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_delta 
        = Vtestharness__ConstPool__TABLE_h7af8e3a1_0
        [__Vtableidx12];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_en) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (7U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_down)
                      ? ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         - (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta))
                      : ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         + (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_en) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (7U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_down)
                      ? ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         - (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_delta))
                      : ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         + (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_en) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (7U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_down)
                      ? ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         - (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_delta))
                      : ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         + (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_en) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (7U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_down)
                      ? ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         - (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_delta))
                      : ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         + (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_en) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (7U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_down)
                      ? ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         - (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta))
                      : ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         + (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_en) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (7U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_down)
                      ? ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         - (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_delta))
                      : ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         + (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_en) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (7U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_down)
                      ? ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         - (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_delta))
                      : ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         + (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__2__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_en) {
        vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (7U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_down)
                      ? ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         - (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_delta))
                      : ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                         + (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__3__KET____DOT__cnt_delta))));
    }
}
