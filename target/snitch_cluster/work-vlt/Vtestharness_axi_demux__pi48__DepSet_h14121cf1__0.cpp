// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness_axi_demux__pi48.h"

VL_INLINE_OPT void Vtestharness_axi_demux__pi48___act_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__0(Vtestharness_axi_demux__pi48* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi48___act_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__0\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    vlSelf->__PVT__slv_resp_cut[0x10U] = ((0xffbfU 
                                           & vlSelf->__PVT__slv_resp_cut[0x10U]) 
                                          | (0x40U 
                                             & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                                << 6U)));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi48___act_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1(Vtestharness_axi_demux__pi48* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi48___act_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    vlSelf->__PVT__slv_resp_cut[0x10U] = ((0xefffU 
                                           & vlSelf->__PVT__slv_resp_cut[0x10U]) 
                                          | (0x1000U 
                                             & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                                << 0xcU)));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi48___act_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__2(Vtestharness_axi_demux__pi48* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi48___act_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__2\n"); );
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

VL_INLINE_OPT void Vtestharness_axi_demux__pi48___act_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__3(Vtestharness_axi_demux__pi48* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi48___act_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__3\n"); );
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

VL_INLINE_OPT void Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__0(Vtestharness_axi_demux__pi48* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__0\n"); );
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

VL_INLINE_OPT void Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1(Vtestharness_axi_demux__pi48* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes 
        = (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                  ? ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes) 
                     >> 2U) : ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes) 
                               >> 1U)));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__2(Vtestharness_axi_demux__pi48* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__2\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
             & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
            << 2U) | ((2U & (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                              & (~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                             << 1U)) | (IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_r_mux__gnt_i)));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__3(Vtestharness_axi_demux__pi48* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__3\n"); );
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

VL_INLINE_OPT void Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__4(Vtestharness_axi_demux__pi48* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__4\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
        = (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                  ? ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes) 
                     >> 2U) : ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes) 
                               >> 1U)));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__5(Vtestharness_axi_demux__pi48* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__5\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
             & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
            << 2U) | ((2U & (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                              & (~ (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                             << 1U)) | (IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_b_mux__gnt_i)));
}

extern const VlWide<94>/*3007:0*/ Vtestharness__ConstPool__CONST_h4d5111d2_0;
extern const VlWide<19>/*607:0*/ Vtestharness__ConstPool__CONST_h7b110ce3_0;

VL_INLINE_OPT void Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__6(Vtestharness_axi_demux__pi48* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__6\n"); );
    // Init
    VlWide<3>/*85:0*/ i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0;
    VL_ZERO_W(86, i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0);
    VlWide<19>/*578:0*/ i_demux_simple__DOT____Vlvbound_ha02ae600__0;
    VL_ZERO_W(579, i_demux_simple__DOT____Vlvbound_ha02ae600__0);
    CData/*0:0*/ i_demux_simple__DOT____Vlvbound_h0d8cd29b__0;
    i_demux_simple__DOT____Vlvbound_h0d8cd29b__0 = 0;
    VlWide<3>/*79:0*/ i_demux_simple__DOT____Vlvbound_he570aa26__0;
    VL_ZERO_W(80, i_demux_simple__DOT____Vlvbound_he570aa26__0);
    CData/*0:0*/ i_demux_simple__DOT____Vlvbound_h35b341c2__0;
    i_demux_simple__DOT____Vlvbound_h35b341c2__0 = 0;
    // Body
    VL_ASSIGN_W(3000,vlSelf->__Vcellout__i_demux_simple__mst_reqs_o, Vtestharness__ConstPool__CONST_h4d5111d2_0);
    i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[0x15U] << 8U) 
           | (vlSelf->__PVT__slv_req_cut[0x14U] >> 0x18U));
    i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[0x16U] << 8U) 
           | (vlSelf->__PVT__slv_req_cut[0x15U] >> 0x18U));
    i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[2U] 
        = (0x3fffffU & ((vlSelf->__PVT__slv_req_cut[0x17U] 
                         << 8U) | (vlSelf->__PVT__slv_req_cut[0x16U] 
                                   >> 0x18U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x14U] 
        = ((0x7fffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x14U]) 
           | (i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[0U] 
              << 0x18U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
        = ((0x7fffffU & (i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[0U] 
                         >> 8U)) | ((0x800000U & (i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[0U] 
                                                  >> 8U)) 
                                    | (i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[1U] 
                                       << 0x18U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x16U] 
        = ((0x7fffffU & (i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[1U] 
                         >> 8U)) | ((0x800000U & (i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[1U] 
                                                  >> 8U)) 
                                    | (i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[2U] 
                                       << 0x18U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
        = ((0xffffc000U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U]) 
           | (0x7fffffU & (i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[2U] 
                           >> 8U)));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_valid) 
         & (0U == (IData)(vlSelf->__PVT__slv_aw_select)))) {
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x14U] 
            = (0x800000U | vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x14U]);
    }
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0U] 
           & ((vlSelf->__PVT__slv_req_cut[3U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[2U] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[1U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[1U] 
           & ((vlSelf->__PVT__slv_req_cut[4U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[3U] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[2U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[2U] 
           & ((vlSelf->__PVT__slv_req_cut[5U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[4U] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[3U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[3U] 
           & ((vlSelf->__PVT__slv_req_cut[6U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[5U] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[4U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[4U] 
           & ((vlSelf->__PVT__slv_req_cut[7U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[6U] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[5U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[5U] 
           & ((vlSelf->__PVT__slv_req_cut[8U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[7U] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[6U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[6U] 
           & ((vlSelf->__PVT__slv_req_cut[9U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[8U] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[7U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[7U] 
           & ((vlSelf->__PVT__slv_req_cut[0xaU] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[9U] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[8U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[8U] 
           & ((vlSelf->__PVT__slv_req_cut[0xbU] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0xaU] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[9U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[9U] 
           & ((vlSelf->__PVT__slv_req_cut[0xcU] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0xbU] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xaU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xaU] 
           & ((vlSelf->__PVT__slv_req_cut[0xdU] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0xcU] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xbU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xbU] 
           & ((vlSelf->__PVT__slv_req_cut[0xeU] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0xdU] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xcU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xcU] 
           & ((vlSelf->__PVT__slv_req_cut[0xfU] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0xeU] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xdU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xdU] 
           & ((vlSelf->__PVT__slv_req_cut[0x10U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0xfU] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xeU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xeU] 
           & ((vlSelf->__PVT__slv_req_cut[0x11U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0x10U] 
                 >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xfU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xfU] 
           & ((vlSelf->__PVT__slv_req_cut[0x12U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0x11U] 
                 >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x10U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0x10U] 
           & ((vlSelf->__PVT__slv_req_cut[0x13U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0x12U] 
                 >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x11U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0x11U] 
           & ((vlSelf->__PVT__slv_req_cut[0x14U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0x13U] 
                 >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x12U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0x12U] 
           & ((vlSelf->__PVT__slv_req_cut[0x15U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0x14U] 
                 >> 0x14U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U] 
        = ((0x7ffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U]) 
           | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0U] 
              << 0x14U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[3U] 
        = ((0x7ffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0U] 
                        >> 0xcU)) | ((0x80000U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0U] 
                                                  >> 0xcU)) 
                                     | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[1U] 
                                        << 0x14U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[4U] 
        = ((0x7ffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[1U] 
                        >> 0xcU)) | ((0x80000U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[1U] 
                                                  >> 0xcU)) 
                                     | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[2U] 
                                        << 0x14U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[5U] 
        = ((0x7ffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[2U] 
                        >> 0xcU)) | ((0x80000U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[2U] 
                                                  >> 0xcU)) 
                                     | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[3U] 
                                        << 0x14U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[6U] 
        = ((0x7ffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[3U] 
                        >> 0xcU)) | ((0x80000U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[3U] 
                                                  >> 0xcU)) 
                                     | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[4U] 
                                        << 0x14U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[7U] 
        = ((0x7ffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[4U] 
                        >> 0xcU)) | ((0x80000U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[4U] 
                                                  >> 0xcU)) 
                                     | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[5U] 
                                        << 0x14U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[8U] 
        = ((0x7ffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[5U] 
                        >> 0xcU)) | ((0x80000U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[5U] 
                                                  >> 0xcU)) 
                                     | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[6U] 
                                        << 0x14U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[9U] 
        = ((0x7ffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[6U] 
                        >> 0xcU)) | ((0x80000U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[6U] 
                                                  >> 0xcU)) 
                                     | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[7U] 
                                        << 0x14U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
        = ((0x7ffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[7U] 
                        >> 0xcU)) | ((0x80000U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[7U] 
                                                  >> 0xcU)) 
                                     | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[8U] 
                                        << 0x14U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xbU] 
        = ((0x7ffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[8U] 
                        >> 0xcU)) | ((0x80000U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[8U] 
                                                  >> 0xcU)) 
                                     | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[9U] 
                                        << 0x14U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
        = ((0x7ffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[9U] 
                        >> 0xcU)) | ((0x80000U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[9U] 
                                                  >> 0xcU)) 
                                     | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xaU] 
                                        << 0x14U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xdU] 
        = ((0x7ffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xaU] 
                        >> 0xcU)) | ((0x80000U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xaU] 
                                                  >> 0xcU)) 
                                     | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xbU] 
                                        << 0x14U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xeU] 
        = ((0x7ffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xbU] 
                        >> 0xcU)) | ((0x80000U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xbU] 
                                                  >> 0xcU)) 
                                     | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xcU] 
                                        << 0x14U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
        = ((0x7ffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xcU] 
                        >> 0xcU)) | ((0x80000U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xcU] 
                                                  >> 0xcU)) 
                                     | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xdU] 
                                        << 0x14U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x10U] 
        = ((0x7ffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xdU] 
                        >> 0xcU)) | ((0x80000U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xdU] 
                                                  >> 0xcU)) 
                                     | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xeU] 
                                        << 0x14U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x11U] 
        = ((0x7ffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xeU] 
                        >> 0xcU)) | ((0x80000U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xeU] 
                                                  >> 0xcU)) 
                                     | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xfU] 
                                        << 0x14U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x12U] 
        = ((0x7ffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xfU] 
                        >> 0xcU)) | ((0x80000U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xfU] 
                                                  >> 0xcU)) 
                                     | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x10U] 
                                        << 0x14U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x13U] 
        = ((0x7ffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x10U] 
                        >> 0xcU)) | ((0x80000U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x10U] 
                                                  >> 0xcU)) 
                                     | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x11U] 
                                        << 0x14U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x14U] 
        = ((0xff800000U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x14U]) 
           | ((0x7ffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x11U] 
                           >> 0xcU)) | ((0x80000U & 
                                         (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x11U] 
                                          >> 0xcU)) 
                                        | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x12U] 
                                           << 0x14U))));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (0U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->i_demux_simple__DOT____Vlvbound_h0da0c871__1 
            = (1U & (vlSelf->__PVT__slv_req_cut[2U] 
                     >> 0x13U));
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U] 
            = ((0xfff7ffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U]) 
               | ((IData)(vlSelf->i_demux_simple__DOT____Vlvbound_h0da0c871__1) 
                  << 0x13U));
    }
    i_demux_simple__DOT____Vlvbound_h0d8cd29b__0 = 
        (1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U] 
        = ((0xfffbffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U]) 
           | ((IData)(i_demux_simple__DOT____Vlvbound_h0d8cd29b__0) 
              << 0x12U));
    i_demux_simple__DOT____Vlvbound_he570aa26__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[1U] << 0x1eU) 
           | (vlSelf->__PVT__slv_req_cut[0U] >> 2U));
    i_demux_simple__DOT____Vlvbound_he570aa26__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[2U] << 0x1eU) 
           | (vlSelf->__PVT__slv_req_cut[1U] >> 2U));
    i_demux_simple__DOT____Vlvbound_he570aa26__0[2U] 
        = (0xffffU & (vlSelf->__PVT__slv_req_cut[2U] 
                      >> 2U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0U] 
        = ((1U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0U]) 
           | (i_demux_simple__DOT____Vlvbound_he570aa26__0[0U] 
              << 2U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[1U] 
        = ((1U & (i_demux_simple__DOT____Vlvbound_he570aa26__0[0U] 
                  >> 0x1eU)) | ((2U & (i_demux_simple__DOT____Vlvbound_he570aa26__0[0U] 
                                       >> 0x1eU)) | 
                                (i_demux_simple__DOT____Vlvbound_he570aa26__0[1U] 
                                 << 2U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U] 
        = ((0xfffc0000U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[2U]) 
           | ((1U & (i_demux_simple__DOT____Vlvbound_he570aa26__0[1U] 
                     >> 0x1eU)) | ((2U & (i_demux_simple__DOT____Vlvbound_he570aa26__0[1U] 
                                          >> 0x1eU)) 
                                   | (i_demux_simple__DOT____Vlvbound_he570aa26__0[2U] 
                                      << 2U))));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_valid) 
         & (0U == (IData)(vlSelf->__PVT__slv_ar_select)))) {
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0U] 
            = (2U | vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0U]);
    }
    i_demux_simple__DOT____Vlvbound_h35b341c2__0 = 
        (1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0U] 
        = ((0xfffffffeU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0U]) 
           | (IData)(i_demux_simple__DOT____Vlvbound_h35b341c2__0));
    i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[0x15U] << 8U) 
           | (vlSelf->__PVT__slv_req_cut[0x14U] >> 0x18U));
    i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[0x16U] << 8U) 
           | (vlSelf->__PVT__slv_req_cut[0x15U] >> 0x18U));
    i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[2U] 
        = (0x3fffffU & ((vlSelf->__PVT__slv_req_cut[0x17U] 
                         << 8U) | (vlSelf->__PVT__slv_req_cut[0x16U] 
                                   >> 0x18U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x2cU] 
        = ((0x1fU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x2cU]) 
           | (i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[0U] 
              << 6U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x2dU] 
        = ((0x1fU & (i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[0U] 
                     >> 0x1aU)) | ((0x20U & (i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[0U] 
                                             >> 0x1aU)) 
                                   | (i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[1U] 
                                      << 6U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x2eU] 
        = ((0xf0000000U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x2eU]) 
           | ((0x1fU & (i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[1U] 
                        >> 0x1aU)) | ((0x20U & (i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[1U] 
                                                >> 0x1aU)) 
                                      | (i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[2U] 
                                         << 6U))));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_valid) 
         & (1U == (IData)(vlSelf->__PVT__slv_aw_select)))) {
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x2cU] 
            = (0x20U | vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x2cU]);
    }
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0U] 
           & ((vlSelf->__PVT__slv_req_cut[3U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[2U] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[1U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[1U] 
           & ((vlSelf->__PVT__slv_req_cut[4U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[3U] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[2U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[2U] 
           & ((vlSelf->__PVT__slv_req_cut[5U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[4U] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[3U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[3U] 
           & ((vlSelf->__PVT__slv_req_cut[6U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[5U] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[4U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[4U] 
           & ((vlSelf->__PVT__slv_req_cut[7U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[6U] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[5U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[5U] 
           & ((vlSelf->__PVT__slv_req_cut[8U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[7U] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[6U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[6U] 
           & ((vlSelf->__PVT__slv_req_cut[9U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[8U] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[7U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[7U] 
           & ((vlSelf->__PVT__slv_req_cut[0xaU] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[9U] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[8U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[8U] 
           & ((vlSelf->__PVT__slv_req_cut[0xbU] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0xaU] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[9U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[9U] 
           & ((vlSelf->__PVT__slv_req_cut[0xcU] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0xbU] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xaU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xaU] 
           & ((vlSelf->__PVT__slv_req_cut[0xdU] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0xcU] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xbU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xbU] 
           & ((vlSelf->__PVT__slv_req_cut[0xeU] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0xdU] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xcU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xcU] 
           & ((vlSelf->__PVT__slv_req_cut[0xfU] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0xeU] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xdU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xdU] 
           & ((vlSelf->__PVT__slv_req_cut[0x10U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0xfU] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xeU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xeU] 
           & ((vlSelf->__PVT__slv_req_cut[0x11U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0x10U] 
                 >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xfU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xfU] 
           & ((vlSelf->__PVT__slv_req_cut[0x12U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0x11U] 
                 >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x10U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0x10U] 
           & ((vlSelf->__PVT__slv_req_cut[0x13U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0x12U] 
                 >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x11U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0x11U] 
           & ((vlSelf->__PVT__slv_req_cut[0x14U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0x13U] 
                 >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x12U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0x12U] 
           & ((vlSelf->__PVT__slv_req_cut[0x15U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0x14U] 
                 >> 0x14U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1aU] 
        = ((1U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1aU]) 
           | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0U] 
              << 2U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1bU] 
        = ((1U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0U] 
                  >> 0x1eU)) | ((2U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0U] 
                                       >> 0x1eU)) | 
                                (i_demux_simple__DOT____Vlvbound_ha02ae600__0[1U] 
                                 << 2U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
        = ((1U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[1U] 
                  >> 0x1eU)) | ((2U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[1U] 
                                       >> 0x1eU)) | 
                                (i_demux_simple__DOT____Vlvbound_ha02ae600__0[2U] 
                                 << 2U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1dU] 
        = ((1U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[2U] 
                  >> 0x1eU)) | ((2U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[2U] 
                                       >> 0x1eU)) | 
                                (i_demux_simple__DOT____Vlvbound_ha02ae600__0[3U] 
                                 << 2U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1eU] 
        = ((1U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[3U] 
                  >> 0x1eU)) | ((2U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[3U] 
                                       >> 0x1eU)) | 
                                (i_demux_simple__DOT____Vlvbound_ha02ae600__0[4U] 
                                 << 2U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1fU] 
        = ((1U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[4U] 
                  >> 0x1eU)) | ((2U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[4U] 
                                       >> 0x1eU)) | 
                                (i_demux_simple__DOT____Vlvbound_ha02ae600__0[5U] 
                                 << 2U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x20U] 
        = ((1U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[5U] 
                  >> 0x1eU)) | ((2U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[5U] 
                                       >> 0x1eU)) | 
                                (i_demux_simple__DOT____Vlvbound_ha02ae600__0[6U] 
                                 << 2U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x21U] 
        = ((1U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[6U] 
                  >> 0x1eU)) | ((2U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[6U] 
                                       >> 0x1eU)) | 
                                (i_demux_simple__DOT____Vlvbound_ha02ae600__0[7U] 
                                 << 2U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x22U] 
        = ((1U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[7U] 
                  >> 0x1eU)) | ((2U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[7U] 
                                       >> 0x1eU)) | 
                                (i_demux_simple__DOT____Vlvbound_ha02ae600__0[8U] 
                                 << 2U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x23U] 
        = ((1U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[8U] 
                  >> 0x1eU)) | ((2U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[8U] 
                                       >> 0x1eU)) | 
                                (i_demux_simple__DOT____Vlvbound_ha02ae600__0[9U] 
                                 << 2U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x24U] 
        = ((1U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[9U] 
                  >> 0x1eU)) | ((2U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[9U] 
                                       >> 0x1eU)) | 
                                (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xaU] 
                                 << 2U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x25U] 
        = ((1U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xaU] 
                  >> 0x1eU)) | ((2U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xaU] 
                                       >> 0x1eU)) | 
                                (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xbU] 
                                 << 2U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x26U] 
        = ((1U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xbU] 
                  >> 0x1eU)) | ((2U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xbU] 
                                       >> 0x1eU)) | 
                                (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xcU] 
                                 << 2U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x27U] 
        = ((1U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xcU] 
                  >> 0x1eU)) | ((2U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xcU] 
                                       >> 0x1eU)) | 
                                (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xdU] 
                                 << 2U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x28U] 
        = ((1U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xdU] 
                  >> 0x1eU)) | ((2U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xdU] 
                                       >> 0x1eU)) | 
                                (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xeU] 
                                 << 2U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x29U] 
        = ((1U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xeU] 
                  >> 0x1eU)) | ((2U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xeU] 
                                       >> 0x1eU)) | 
                                (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xfU] 
                                 << 2U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x2aU] 
        = ((1U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xfU] 
                  >> 0x1eU)) | ((2U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xfU] 
                                       >> 0x1eU)) | 
                                (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x10U] 
                                 << 2U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x2bU] 
        = ((1U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x10U] 
                  >> 0x1eU)) | ((2U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x10U] 
                                       >> 0x1eU)) | 
                                (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x11U] 
                                 << 2U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x2cU] 
        = ((0xffffffe0U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x2cU]) 
           | ((1U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x11U] 
                     >> 0x1eU)) | ((2U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x11U] 
                                          >> 0x1eU)) 
                                   | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x12U] 
                                      << 2U))));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (1U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->i_demux_simple__DOT____Vlvbound_h0da0c871__1 
            = (1U & (vlSelf->__PVT__slv_req_cut[2U] 
                     >> 0x13U));
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1aU] 
            = ((0xfffffffdU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1aU]) 
               | ((IData)(vlSelf->i_demux_simple__DOT____Vlvbound_h0da0c871__1) 
                  << 1U));
    }
    i_demux_simple__DOT____Vlvbound_h0d8cd29b__0 = 
        (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies) 
               >> 1U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1aU] 
        = ((0xfffffffeU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x1aU]) 
           | (IData)(i_demux_simple__DOT____Vlvbound_h0d8cd29b__0));
    i_demux_simple__DOT____Vlvbound_he570aa26__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[1U] << 0x1eU) 
           | (vlSelf->__PVT__slv_req_cut[0U] >> 2U));
    i_demux_simple__DOT____Vlvbound_he570aa26__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[2U] << 0x1eU) 
           | (vlSelf->__PVT__slv_req_cut[1U] >> 2U));
    i_demux_simple__DOT____Vlvbound_he570aa26__0[2U] 
        = (0xffffU & (vlSelf->__PVT__slv_req_cut[2U] 
                      >> 2U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
        = ((0x7fffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U]) 
           | (i_demux_simple__DOT____Vlvbound_he570aa26__0[0U] 
              << 0x10U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x18U] 
        = ((0x7fffU & (i_demux_simple__DOT____Vlvbound_he570aa26__0[0U] 
                       >> 0x10U)) | ((0x8000U & (i_demux_simple__DOT____Vlvbound_he570aa26__0[0U] 
                                                 >> 0x10U)) 
                                     | (i_demux_simple__DOT____Vlvbound_he570aa26__0[1U] 
                                        << 0x10U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
        = ((0x7fffU & (i_demux_simple__DOT____Vlvbound_he570aa26__0[1U] 
                       >> 0x10U)) | ((0x8000U & (i_demux_simple__DOT____Vlvbound_he570aa26__0[1U] 
                                                 >> 0x10U)) 
                                     | (i_demux_simple__DOT____Vlvbound_he570aa26__0[2U] 
                                        << 0x10U)));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_valid) 
         & (1U == (IData)(vlSelf->__PVT__slv_ar_select)))) {
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
            = (0x8000U | vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U]);
    }
    i_demux_simple__DOT____Vlvbound_h35b341c2__0 = 
        (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies) 
               >> 1U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
        = ((0xffffbfffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x17U]) 
           | ((IData)(i_demux_simple__DOT____Vlvbound_h35b341c2__0) 
              << 0xeU));
    i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[0x15U] << 8U) 
           | (vlSelf->__PVT__slv_req_cut[0x14U] >> 0x18U));
    i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[0x16U] << 8U) 
           | (vlSelf->__PVT__slv_req_cut[0x15U] >> 0x18U));
    i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[2U] 
        = (0x3fffffU & ((vlSelf->__PVT__slv_req_cut[0x17U] 
                         << 8U) | (vlSelf->__PVT__slv_req_cut[0x16U] 
                                   >> 0x18U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x43U] 
        = ((0x7ffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x43U]) 
           | (i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[0U] 
              << 0x14U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x44U] 
        = ((0x7ffffU & (i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[0U] 
                        >> 0xcU)) | ((0x80000U & (i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[0U] 
                                                  >> 0xcU)) 
                                     | (i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[1U] 
                                        << 0x14U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x45U] 
        = ((0x7ffffU & (i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[1U] 
                        >> 0xcU)) | ((0x80000U & (i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[1U] 
                                                  >> 0xcU)) 
                                     | (i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[2U] 
                                        << 0x14U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x46U] 
        = ((0xfffffc00U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x46U]) 
           | (0x7ffffU & (i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[2U] 
                          >> 0xcU)));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_valid) 
         & (2U == (IData)(vlSelf->__PVT__slv_aw_select)))) {
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x43U] 
            = (0x80000U | vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x43U]);
    }
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0U] 
           & ((vlSelf->__PVT__slv_req_cut[3U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[2U] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[1U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[1U] 
           & ((vlSelf->__PVT__slv_req_cut[4U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[3U] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[2U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[2U] 
           & ((vlSelf->__PVT__slv_req_cut[5U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[4U] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[3U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[3U] 
           & ((vlSelf->__PVT__slv_req_cut[6U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[5U] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[4U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[4U] 
           & ((vlSelf->__PVT__slv_req_cut[7U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[6U] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[5U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[5U] 
           & ((vlSelf->__PVT__slv_req_cut[8U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[7U] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[6U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[6U] 
           & ((vlSelf->__PVT__slv_req_cut[9U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[8U] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[7U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[7U] 
           & ((vlSelf->__PVT__slv_req_cut[0xaU] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[9U] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[8U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[8U] 
           & ((vlSelf->__PVT__slv_req_cut[0xbU] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0xaU] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[9U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[9U] 
           & ((vlSelf->__PVT__slv_req_cut[0xcU] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0xbU] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xaU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xaU] 
           & ((vlSelf->__PVT__slv_req_cut[0xdU] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0xcU] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xbU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xbU] 
           & ((vlSelf->__PVT__slv_req_cut[0xeU] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0xdU] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xcU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xcU] 
           & ((vlSelf->__PVT__slv_req_cut[0xfU] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0xeU] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xdU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xdU] 
           & ((vlSelf->__PVT__slv_req_cut[0x10U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0xfU] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xeU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xeU] 
           & ((vlSelf->__PVT__slv_req_cut[0x11U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0x10U] 
                 >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xfU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xfU] 
           & ((vlSelf->__PVT__slv_req_cut[0x12U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0x11U] 
                 >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x10U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0x10U] 
           & ((vlSelf->__PVT__slv_req_cut[0x13U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0x12U] 
                 >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x11U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0x11U] 
           & ((vlSelf->__PVT__slv_req_cut[0x14U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0x13U] 
                 >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x12U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0x12U] 
           & ((vlSelf->__PVT__slv_req_cut[0x15U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0x14U] 
                 >> 0x14U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x31U] 
        = ((0x7fffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x31U]) 
           | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0U] 
              << 0x10U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x32U] 
        = ((0x7fffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0U] 
                       >> 0x10U)) | ((0x8000U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0U] 
                                                 >> 0x10U)) 
                                     | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[1U] 
                                        << 0x10U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x33U] 
        = ((0x7fffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[1U] 
                       >> 0x10U)) | ((0x8000U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[1U] 
                                                 >> 0x10U)) 
                                     | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[2U] 
                                        << 0x10U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x34U] 
        = ((0x7fffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[2U] 
                       >> 0x10U)) | ((0x8000U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[2U] 
                                                 >> 0x10U)) 
                                     | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[3U] 
                                        << 0x10U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x35U] 
        = ((0x7fffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[3U] 
                       >> 0x10U)) | ((0x8000U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[3U] 
                                                 >> 0x10U)) 
                                     | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[4U] 
                                        << 0x10U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x36U] 
        = ((0x7fffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[4U] 
                       >> 0x10U)) | ((0x8000U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[4U] 
                                                 >> 0x10U)) 
                                     | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[5U] 
                                        << 0x10U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x37U] 
        = ((0x7fffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[5U] 
                       >> 0x10U)) | ((0x8000U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[5U] 
                                                 >> 0x10U)) 
                                     | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[6U] 
                                        << 0x10U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x38U] 
        = ((0x7fffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[6U] 
                       >> 0x10U)) | ((0x8000U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[6U] 
                                                 >> 0x10U)) 
                                     | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[7U] 
                                        << 0x10U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x39U] 
        = ((0x7fffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[7U] 
                       >> 0x10U)) | ((0x8000U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[7U] 
                                                 >> 0x10U)) 
                                     | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[8U] 
                                        << 0x10U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x3aU] 
        = ((0x7fffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[8U] 
                       >> 0x10U)) | ((0x8000U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[8U] 
                                                 >> 0x10U)) 
                                     | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[9U] 
                                        << 0x10U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x3bU] 
        = ((0x7fffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[9U] 
                       >> 0x10U)) | ((0x8000U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[9U] 
                                                 >> 0x10U)) 
                                     | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xaU] 
                                        << 0x10U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x3cU] 
        = ((0x7fffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xaU] 
                       >> 0x10U)) | ((0x8000U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xaU] 
                                                 >> 0x10U)) 
                                     | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xbU] 
                                        << 0x10U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x3dU] 
        = ((0x7fffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xbU] 
                       >> 0x10U)) | ((0x8000U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xbU] 
                                                 >> 0x10U)) 
                                     | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xcU] 
                                        << 0x10U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x3eU] 
        = ((0x7fffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xcU] 
                       >> 0x10U)) | ((0x8000U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xcU] 
                                                 >> 0x10U)) 
                                     | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xdU] 
                                        << 0x10U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x3fU] 
        = ((0x7fffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xdU] 
                       >> 0x10U)) | ((0x8000U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xdU] 
                                                 >> 0x10U)) 
                                     | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xeU] 
                                        << 0x10U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x40U] 
        = ((0x7fffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xeU] 
                       >> 0x10U)) | ((0x8000U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xeU] 
                                                 >> 0x10U)) 
                                     | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xfU] 
                                        << 0x10U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x41U] 
        = ((0x7fffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xfU] 
                       >> 0x10U)) | ((0x8000U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xfU] 
                                                 >> 0x10U)) 
                                     | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x10U] 
                                        << 0x10U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x42U] 
        = ((0x7fffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x10U] 
                       >> 0x10U)) | ((0x8000U & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x10U] 
                                                 >> 0x10U)) 
                                     | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x11U] 
                                        << 0x10U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x43U] 
        = ((0xfff80000U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x43U]) 
           | ((0x7fffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x11U] 
                          >> 0x10U)) | ((0x8000U & 
                                         (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x11U] 
                                          >> 0x10U)) 
                                        | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x12U] 
                                           << 0x10U))));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (2U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->i_demux_simple__DOT____Vlvbound_h0da0c871__1 
            = (1U & (vlSelf->__PVT__slv_req_cut[2U] 
                     >> 0x13U));
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x31U] 
            = ((0xffff7fffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x31U]) 
               | ((IData)(vlSelf->i_demux_simple__DOT____Vlvbound_h0da0c871__1) 
                  << 0xfU));
    }
    i_demux_simple__DOT____Vlvbound_h0d8cd29b__0 = 
        (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies) 
               >> 2U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x31U] 
        = ((0xffffbfffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x31U]) 
           | ((IData)(i_demux_simple__DOT____Vlvbound_h0d8cd29b__0) 
              << 0xeU));
    i_demux_simple__DOT____Vlvbound_he570aa26__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[1U] << 0x1eU) 
           | (vlSelf->__PVT__slv_req_cut[0U] >> 2U));
    i_demux_simple__DOT____Vlvbound_he570aa26__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[2U] << 0x1eU) 
           | (vlSelf->__PVT__slv_req_cut[1U] >> 2U));
    i_demux_simple__DOT____Vlvbound_he570aa26__0[2U] 
        = (0xffffU & (vlSelf->__PVT__slv_req_cut[2U] 
                      >> 2U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x2eU] 
        = ((0x1fffffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x2eU]) 
           | (i_demux_simple__DOT____Vlvbound_he570aa26__0[0U] 
              << 0x1eU));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x2fU] 
        = ((0x1fffffffU & (i_demux_simple__DOT____Vlvbound_he570aa26__0[0U] 
                           >> 2U)) | ((0x20000000U 
                                       & (i_demux_simple__DOT____Vlvbound_he570aa26__0[0U] 
                                          >> 2U)) | 
                                      (i_demux_simple__DOT____Vlvbound_he570aa26__0[1U] 
                                       << 0x1eU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x30U] 
        = ((0x1fffffffU & (i_demux_simple__DOT____Vlvbound_he570aa26__0[1U] 
                           >> 2U)) | ((0x20000000U 
                                       & (i_demux_simple__DOT____Vlvbound_he570aa26__0[1U] 
                                          >> 2U)) | 
                                      (i_demux_simple__DOT____Vlvbound_he570aa26__0[2U] 
                                       << 0x1eU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x31U] 
        = ((0xffffc000U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x31U]) 
           | (0x1fffffffU & (i_demux_simple__DOT____Vlvbound_he570aa26__0[2U] 
                             >> 2U)));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_valid) 
         & (2U == (IData)(vlSelf->__PVT__slv_ar_select)))) {
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x2eU] 
            = (0x20000000U | vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x2eU]);
    }
    i_demux_simple__DOT____Vlvbound_h35b341c2__0 = 
        (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies) 
               >> 2U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x2eU] 
        = ((0xefffffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x2eU]) 
           | ((IData)(i_demux_simple__DOT____Vlvbound_h35b341c2__0) 
              << 0x1cU));
    i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[0x15U] << 8U) 
           | (vlSelf->__PVT__slv_req_cut[0x14U] >> 0x18U));
    i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[0x16U] << 8U) 
           | (vlSelf->__PVT__slv_req_cut[0x15U] >> 0x18U));
    i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[2U] 
        = (0x3fffffU & ((vlSelf->__PVT__slv_req_cut[0x17U] 
                         << 8U) | (vlSelf->__PVT__slv_req_cut[0x16U] 
                                   >> 0x18U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x5bU] 
        = ((1U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x5bU]) 
           | (i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[0U] 
              << 2U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x5cU] 
        = ((1U & (i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[0U] 
                  >> 0x1eU)) | ((2U & (i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[0U] 
                                       >> 0x1eU)) | 
                                (i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[1U] 
                                 << 2U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x5dU] 
        = (0xffffffU & ((1U & (i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[1U] 
                               >> 0x1eU)) | ((2U & 
                                              (i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[1U] 
                                               >> 0x1eU)) 
                                             | (i_demux_simple__DOT____Vlvbound_h0ee5ed2f__0[2U] 
                                                << 2U))));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__aw_valid) 
         & (3U == (IData)(vlSelf->__PVT__slv_aw_select)))) {
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x5bU] 
            = (2U | vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x5bU]);
    }
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0U] 
           & ((vlSelf->__PVT__slv_req_cut[3U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[2U] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[1U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[1U] 
           & ((vlSelf->__PVT__slv_req_cut[4U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[3U] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[2U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[2U] 
           & ((vlSelf->__PVT__slv_req_cut[5U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[4U] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[3U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[3U] 
           & ((vlSelf->__PVT__slv_req_cut[6U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[5U] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[4U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[4U] 
           & ((vlSelf->__PVT__slv_req_cut[7U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[6U] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[5U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[5U] 
           & ((vlSelf->__PVT__slv_req_cut[8U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[7U] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[6U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[6U] 
           & ((vlSelf->__PVT__slv_req_cut[9U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[8U] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[7U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[7U] 
           & ((vlSelf->__PVT__slv_req_cut[0xaU] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[9U] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[8U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[8U] 
           & ((vlSelf->__PVT__slv_req_cut[0xbU] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0xaU] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[9U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[9U] 
           & ((vlSelf->__PVT__slv_req_cut[0xcU] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0xbU] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xaU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xaU] 
           & ((vlSelf->__PVT__slv_req_cut[0xdU] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0xcU] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xbU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xbU] 
           & ((vlSelf->__PVT__slv_req_cut[0xeU] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0xdU] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xcU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xcU] 
           & ((vlSelf->__PVT__slv_req_cut[0xfU] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0xeU] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xdU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xdU] 
           & ((vlSelf->__PVT__slv_req_cut[0x10U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0xfU] >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xeU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xeU] 
           & ((vlSelf->__PVT__slv_req_cut[0x11U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0x10U] 
                 >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xfU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xfU] 
           & ((vlSelf->__PVT__slv_req_cut[0x12U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0x11U] 
                 >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x10U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0x10U] 
           & ((vlSelf->__PVT__slv_req_cut[0x13U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0x12U] 
                 >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x11U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0x11U] 
           & ((vlSelf->__PVT__slv_req_cut[0x14U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0x13U] 
                 >> 0x14U)));
    i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x12U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0x12U] 
           & ((vlSelf->__PVT__slv_req_cut[0x15U] << 0xcU) 
              | (vlSelf->__PVT__slv_req_cut[0x14U] 
                 >> 0x14U)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x48U] 
        = ((0x1fffffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x48U]) 
           | (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0U] 
              << 0x1eU));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x49U] 
        = ((0x1fffffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0U] 
                           >> 2U)) | ((0x20000000U 
                                       & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0U] 
                                          >> 2U)) | 
                                      (i_demux_simple__DOT____Vlvbound_ha02ae600__0[1U] 
                                       << 0x1eU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x4aU] 
        = ((0x1fffffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[1U] 
                           >> 2U)) | ((0x20000000U 
                                       & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[1U] 
                                          >> 2U)) | 
                                      (i_demux_simple__DOT____Vlvbound_ha02ae600__0[2U] 
                                       << 0x1eU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x4bU] 
        = ((0x1fffffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[2U] 
                           >> 2U)) | ((0x20000000U 
                                       & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[2U] 
                                          >> 2U)) | 
                                      (i_demux_simple__DOT____Vlvbound_ha02ae600__0[3U] 
                                       << 0x1eU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x4cU] 
        = ((0x1fffffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[3U] 
                           >> 2U)) | ((0x20000000U 
                                       & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[3U] 
                                          >> 2U)) | 
                                      (i_demux_simple__DOT____Vlvbound_ha02ae600__0[4U] 
                                       << 0x1eU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x4dU] 
        = ((0x1fffffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[4U] 
                           >> 2U)) | ((0x20000000U 
                                       & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[4U] 
                                          >> 2U)) | 
                                      (i_demux_simple__DOT____Vlvbound_ha02ae600__0[5U] 
                                       << 0x1eU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x4eU] 
        = ((0x1fffffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[5U] 
                           >> 2U)) | ((0x20000000U 
                                       & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[5U] 
                                          >> 2U)) | 
                                      (i_demux_simple__DOT____Vlvbound_ha02ae600__0[6U] 
                                       << 0x1eU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x4fU] 
        = ((0x1fffffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[6U] 
                           >> 2U)) | ((0x20000000U 
                                       & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[6U] 
                                          >> 2U)) | 
                                      (i_demux_simple__DOT____Vlvbound_ha02ae600__0[7U] 
                                       << 0x1eU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x50U] 
        = ((0x1fffffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[7U] 
                           >> 2U)) | ((0x20000000U 
                                       & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[7U] 
                                          >> 2U)) | 
                                      (i_demux_simple__DOT____Vlvbound_ha02ae600__0[8U] 
                                       << 0x1eU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x51U] 
        = ((0x1fffffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[8U] 
                           >> 2U)) | ((0x20000000U 
                                       & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[8U] 
                                          >> 2U)) | 
                                      (i_demux_simple__DOT____Vlvbound_ha02ae600__0[9U] 
                                       << 0x1eU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x52U] 
        = ((0x1fffffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[9U] 
                           >> 2U)) | ((0x20000000U 
                                       & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[9U] 
                                          >> 2U)) | 
                                      (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xaU] 
                                       << 0x1eU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x53U] 
        = ((0x1fffffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xaU] 
                           >> 2U)) | ((0x20000000U 
                                       & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xaU] 
                                          >> 2U)) | 
                                      (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xbU] 
                                       << 0x1eU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x54U] 
        = ((0x1fffffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xbU] 
                           >> 2U)) | ((0x20000000U 
                                       & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xbU] 
                                          >> 2U)) | 
                                      (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xcU] 
                                       << 0x1eU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x55U] 
        = ((0x1fffffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xcU] 
                           >> 2U)) | ((0x20000000U 
                                       & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xcU] 
                                          >> 2U)) | 
                                      (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xdU] 
                                       << 0x1eU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x56U] 
        = ((0x1fffffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xdU] 
                           >> 2U)) | ((0x20000000U 
                                       & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xdU] 
                                          >> 2U)) | 
                                      (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xeU] 
                                       << 0x1eU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x57U] 
        = ((0x1fffffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xeU] 
                           >> 2U)) | ((0x20000000U 
                                       & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xeU] 
                                          >> 2U)) | 
                                      (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xfU] 
                                       << 0x1eU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x58U] 
        = ((0x1fffffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xfU] 
                           >> 2U)) | ((0x20000000U 
                                       & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0xfU] 
                                          >> 2U)) | 
                                      (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x10U] 
                                       << 0x1eU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x59U] 
        = ((0x1fffffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x10U] 
                           >> 2U)) | ((0x20000000U 
                                       & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x10U] 
                                          >> 2U)) | 
                                      (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x11U] 
                                       << 0x1eU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x5aU] 
        = ((0x1fffffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x11U] 
                           >> 2U)) | ((0x20000000U 
                                       & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x11U] 
                                          >> 2U)) | 
                                      (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x12U] 
                                       << 0x1eU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x5bU] 
        = ((0xfffffffeU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x5bU]) 
           | (0x1fffffffU & (i_demux_simple__DOT____Vlvbound_ha02ae600__0[0x12U] 
                             >> 2U)));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (3U == (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->i_demux_simple__DOT____Vlvbound_h0da0c871__1 
            = (1U & (vlSelf->__PVT__slv_req_cut[2U] 
                     >> 0x13U));
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x48U] 
            = ((0xdfffffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x48U]) 
               | ((IData)(vlSelf->i_demux_simple__DOT____Vlvbound_h0da0c871__1) 
                  << 0x1dU));
    }
    i_demux_simple__DOT____Vlvbound_h0d8cd29b__0 = 
        (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies) 
               >> 3U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x48U] 
        = ((0xefffffffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x48U]) 
           | ((IData)(i_demux_simple__DOT____Vlvbound_h0d8cd29b__0) 
              << 0x1cU));
    i_demux_simple__DOT____Vlvbound_he570aa26__0[0U] 
        = ((vlSelf->__PVT__slv_req_cut[1U] << 0x1eU) 
           | (vlSelf->__PVT__slv_req_cut[0U] >> 2U));
    i_demux_simple__DOT____Vlvbound_he570aa26__0[1U] 
        = ((vlSelf->__PVT__slv_req_cut[2U] << 0x1eU) 
           | (vlSelf->__PVT__slv_req_cut[1U] >> 2U));
    i_demux_simple__DOT____Vlvbound_he570aa26__0[2U] 
        = (0xffffU & (vlSelf->__PVT__slv_req_cut[2U] 
                      >> 2U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x46U] 
        = ((0x7ffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x46U]) 
           | (i_demux_simple__DOT____Vlvbound_he570aa26__0[0U] 
              << 0xcU));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x47U] 
        = ((0x7ffU & (i_demux_simple__DOT____Vlvbound_he570aa26__0[0U] 
                      >> 0x14U)) | ((0x800U & (i_demux_simple__DOT____Vlvbound_he570aa26__0[0U] 
                                               >> 0x14U)) 
                                    | (i_demux_simple__DOT____Vlvbound_he570aa26__0[1U] 
                                       << 0xcU)));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x48U] 
        = ((0xf0000000U & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x48U]) 
           | ((0x7ffU & (i_demux_simple__DOT____Vlvbound_he570aa26__0[1U] 
                         >> 0x14U)) | ((0x800U & (i_demux_simple__DOT____Vlvbound_he570aa26__0[1U] 
                                                  >> 0x14U)) 
                                       | (i_demux_simple__DOT____Vlvbound_he570aa26__0[2U] 
                                          << 0xcU))));
    if (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__ar_valid) 
         & (3U == (IData)(vlSelf->__PVT__slv_ar_select)))) {
        vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x46U] 
            = (0x800U | vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x46U]);
    }
    i_demux_simple__DOT____Vlvbound_h35b341c2__0 = 
        (1U & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies) 
               >> 3U));
    vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x46U] 
        = ((0xfffffbffU & vlSelf->__Vcellout__i_demux_simple__mst_reqs_o[0x46U]) 
           | ((IData)(i_demux_simple__DOT____Vlvbound_h35b341c2__0) 
              << 0xaU));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__10(Vtestharness_axi_demux__pi48* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__10\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes 
        = (((IData)((0U != (0xcU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)))) 
            << 2U) | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)))) 
                       << 1U) | (IData)((0U != (6U 
                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes))))));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__11(Vtestharness_axi_demux__pi48* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__11\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes 
        = (((IData)((0U != (0xcU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)))) 
            << 2U) | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)))) 
                       << 1U) | (IData)((0U != (6U 
                                                & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes))))));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__12(Vtestharness_axi_demux__pi48* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__12\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (((IData)((0U != (0xcU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)))) 
               << 2U) | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)))) 
                          << 1U) | (IData)((0U != (6U 
                                                   & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__13(Vtestharness_axi_demux__pi48* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__13\n"); );
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

VL_INLINE_OPT void Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__14(Vtestharness_axi_demux__pi48* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__14\n"); );
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

VL_INLINE_OPT void Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__15(Vtestharness_axi_demux__pi48* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__15\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (((IData)((0U != (0xcU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)))) 
               << 2U) | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)))) 
                          << 1U) | (IData)((0U != (6U 
                                                   & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__16(Vtestharness_axi_demux__pi48* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__16\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (((IData)((0U != (0xcU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)))) 
               << 2U) | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)))) 
                          << 1U) | (IData)((0U != (6U 
                                                   & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__17(Vtestharness_axi_demux__pi48* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__17\n"); );
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

VL_INLINE_OPT void Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__18(Vtestharness_axi_demux__pi48* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__18\n"); );
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

VL_INLINE_OPT void Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__19(Vtestharness_axi_demux__pi48* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__19\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (((IData)((0U != (0xcU & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)))) 
               << 2U) | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)))) 
                          << 1U) | (IData)((0U != (6U 
                                                   & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))))));
}

extern const VlUnpacked<CData/*0:0*/, 64> Vtestharness__ConstPool__TABLE_hb9c13292_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtestharness__ConstPool__TABLE_h4eeaa975_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vtestharness__ConstPool__TABLE_h1cae7daa_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtestharness__ConstPool__TABLE_h5704dd5d_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtestharness__ConstPool__TABLE_h2ba42a98_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vtestharness__ConstPool__TABLE_h62f2e4a5_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestharness__ConstPool__TABLE_hf4216957_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestharness__ConstPool__TABLE_hf532381b_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtestharness__ConstPool__TABLE_h06d381e4_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestharness__ConstPool__TABLE_h6c7afa99_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestharness__ConstPool__TABLE_h1a154d44_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtestharness__ConstPool__TABLE_hd024d815_0;

VL_INLINE_OPT void Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__20(Vtestharness_axi_demux__pi48* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__20\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*5:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->__PVT__slv_resp_cut[0x10U] >> 0xfU)) 
           & (IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->__PVT__slv_resp_cut[0x10U] >> 0xfU));
    vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->__PVT__slv_resp_cut[0x10U] >> 0xfU)) 
           & (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->__PVT__slv_resp_cut[0x10U] >> 0xfU));
    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->__PVT__slv_resp_cut[0x10U] >> 0xdU)) 
           & (IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->__PVT__slv_resp_cut[0x10U] >> 0xdU));
    vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->__PVT__slv_resp_cut[0x10U] >> 0xeU)) 
           & (IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->__PVT__slv_resp_cut[0x10U] >> 0xeU));
    vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->__PVT__slv_resp_cut[0x10U] >> 0xeU)) 
           & (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->__PVT__slv_resp_cut[0x10U] >> 0xeU));
    vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->__PVT__slv_resp_cut[0x10U] >> 6U) 
           & (IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_r_mux__gnt_i));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en 
        = (((vlSelf->__PVT__slv_resp_cut[0x10U] >> 6U) 
            & ((IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_r_mux__gnt_i) 
               & (vlSelf->__PVT__slv_resp_cut[0U] >> 2U)))
            ? (3U & ((IData)(1U) << (1U & (vlSelf->__PVT__slv_resp_cut[0x10U] 
                                           >> 5U))))
            : 0U);
    vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->__PVT__slv_resp_cut[0x10U] >> 0xcU) 
           & (IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_b_mux__gnt_i));
    __Vtableidx3 = (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                     << 4U) | (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en) 
                                << 2U) | (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en)));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_en 
        = Vtestharness__ConstPool__TABLE_hb9c13292_0
        [__Vtableidx3];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_down 
        = Vtestharness__ConstPool__TABLE_h4eeaa975_0
        [__Vtableidx3];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta 
        = Vtestharness__ConstPool__TABLE_h1cae7daa_0
        [__Vtableidx3];
    __Vtableidx4 = (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                     << 4U) | (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en) 
                                << 2U) | (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en)));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_en 
        = Vtestharness__ConstPool__TABLE_h5704dd5d_0
        [__Vtableidx4];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_down 
        = Vtestharness__ConstPool__TABLE_h2ba42a98_0
        [__Vtableidx4];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_delta 
        = Vtestharness__ConstPool__TABLE_h62f2e4a5_0
        [__Vtableidx4];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__pop_en 
        = ((IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill)
            ? (3U & ((IData)(1U) << (1U & (vlSelf->__PVT__slv_resp_cut[0x10U] 
                                           >> 0xbU))))
            : 0U);
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
    __Vtableidx1 = (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__pop_en) 
                     << 2U) | (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_en 
        = Vtestharness__ConstPool__TABLE_hf4216957_0
        [__Vtableidx1];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_down 
        = Vtestharness__ConstPool__TABLE_hf532381b_0
        [__Vtableidx1];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta 
        = Vtestharness__ConstPool__TABLE_h06d381e4_0
        [__Vtableidx1];
    __Vtableidx2 = (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__pop_en) 
                     << 2U) | (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_en 
        = Vtestharness__ConstPool__TABLE_h6c7afa99_0
        [__Vtableidx2];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_down 
        = Vtestharness__ConstPool__TABLE_h1a154d44_0
        [__Vtableidx2];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_delta 
        = Vtestharness__ConstPool__TABLE_hd024d815_0
        [__Vtableidx2];
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
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__21(Vtestharness_axi_demux__pi48* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__21\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (3U & (((IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_b_mux__gnt_i) 
                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__22(Vtestharness_axi_demux__pi48* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__22\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (3U & (((IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_r_mux__gnt_i) 
                  & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi48___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1(Vtestharness_axi_demux__pi48* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi48___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi48___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__2(Vtestharness_axi_demux__pi48* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi48___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__2\n"); );
    // Body
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__20(Vtestharness_axi_demux__pi48* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__20\n"); );
    // Init
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*3:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*5:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*5:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->__PVT__slv_resp_cut[0x10U] >> 0xfU)) 
           & (IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->__PVT__slv_resp_cut[0x10U] >> 0xfU));
    vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->__PVT__slv_resp_cut[0x10U] >> 0xfU)) 
           & (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->__PVT__slv_resp_cut[0x10U] >> 0xfU));
    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->__PVT__slv_resp_cut[0x10U] >> 0xdU)) 
           & (IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->__PVT__slv_resp_cut[0x10U] >> 0xdU));
    vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->__PVT__slv_resp_cut[0x10U] >> 0xeU)) 
           & (IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->__PVT__slv_resp_cut[0x10U] >> 0xeU));
    vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->__PVT__slv_resp_cut[0x10U] >> 0xeU)) 
           & (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->__PVT__slv_resp_cut[0x10U] >> 0xeU));
    vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->__PVT__slv_resp_cut[0x10U] >> 6U) 
           & (IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_r_mux__gnt_i));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en 
        = (((vlSelf->__PVT__slv_resp_cut[0x10U] >> 6U) 
            & ((IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_r_mux__gnt_i) 
               & (vlSelf->__PVT__slv_resp_cut[0U] >> 2U)))
            ? (3U & ((IData)(1U) << (1U & (vlSelf->__PVT__slv_resp_cut[0x10U] 
                                           >> 5U))))
            : 0U);
    vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->__PVT__slv_resp_cut[0x10U] >> 0xcU) 
           & (IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_b_mux__gnt_i));
    __Vtableidx7 = (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                     << 4U) | (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en) 
                                << 2U) | (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en)));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_en 
        = Vtestharness__ConstPool__TABLE_hb9c13292_0
        [__Vtableidx7];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_down 
        = Vtestharness__ConstPool__TABLE_h4eeaa975_0
        [__Vtableidx7];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta 
        = Vtestharness__ConstPool__TABLE_h1cae7daa_0
        [__Vtableidx7];
    __Vtableidx8 = (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                     << 4U) | (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en) 
                                << 2U) | (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en)));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_en 
        = Vtestharness__ConstPool__TABLE_h5704dd5d_0
        [__Vtableidx8];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_down 
        = Vtestharness__ConstPool__TABLE_h2ba42a98_0
        [__Vtableidx8];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_delta 
        = Vtestharness__ConstPool__TABLE_h62f2e4a5_0
        [__Vtableidx8];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__pop_en 
        = ((IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill)
            ? (3U & ((IData)(1U) << (1U & (vlSelf->__PVT__slv_resp_cut[0x10U] 
                                           >> 0xbU))))
            : 0U);
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
    __Vtableidx5 = (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__pop_en) 
                     << 2U) | (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_en 
        = Vtestharness__ConstPool__TABLE_hf4216957_0
        [__Vtableidx5];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_down 
        = Vtestharness__ConstPool__TABLE_hf532381b_0
        [__Vtableidx5];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta 
        = Vtestharness__ConstPool__TABLE_h06d381e4_0
        [__Vtableidx5];
    __Vtableidx6 = (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__pop_en) 
                     << 2U) | (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_en 
        = Vtestharness__ConstPool__TABLE_h6c7afa99_0
        [__Vtableidx6];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_down 
        = Vtestharness__ConstPool__TABLE_h1a154d44_0
        [__Vtableidx6];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_delta 
        = Vtestharness__ConstPool__TABLE_hd024d815_0
        [__Vtableidx6];
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
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__21(Vtestharness_axi_demux__pi48* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi48___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__21\n"); );
    // Init
    CData/*3:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    CData/*3:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    CData/*5:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    CData/*5:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    // Body
    vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->__PVT__slv_resp_cut[0x10U] >> 0xfU)) 
           & (IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->__PVT__slv_resp_cut[0x10U] >> 0xfU));
    vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->__PVT__slv_resp_cut[0x10U] >> 0xfU)) 
           & (IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->__PVT__slv_resp_cut[0x10U] >> 0xfU));
    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->__PVT__slv_resp_cut[0x10U] >> 0xdU)) 
           & (IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__i_w_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->__PVT__slv_resp_cut[0x10U] >> 0xdU));
    vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->__PVT__slv_resp_cut[0x10U] >> 0xeU)) 
           & (IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->__PVT__slv_resp_cut[0x10U] >> 0xeU));
    vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->__PVT__slv_resp_cut[0x10U] >> 0xeU)) 
           & (IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->__PVT__slv_resp_cut[0x10U] >> 0xeU));
    vlSelf->__PVT__i_r_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->__PVT__slv_resp_cut[0x10U] >> 6U) 
           & (IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_r_mux__gnt_i));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en 
        = (((vlSelf->__PVT__slv_resp_cut[0x10U] >> 6U) 
            & ((IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_r_mux__gnt_i) 
               & (vlSelf->__PVT__slv_resp_cut[0U] >> 2U)))
            ? (3U & ((IData)(1U) << (1U & (vlSelf->__PVT__slv_resp_cut[0x10U] 
                                           >> 5U))))
            : 0U);
    vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->__PVT__slv_resp_cut[0x10U] >> 0xcU) 
           & (IData)(vlSelf->i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_b_mux__gnt_i));
    __Vtableidx11 = (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                      << 4U) | (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en) 
                                 << 2U) | (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en)));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_en 
        = Vtestharness__ConstPool__TABLE_hb9c13292_0
        [__Vtableidx11];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_down 
        = Vtestharness__ConstPool__TABLE_h4eeaa975_0
        [__Vtableidx11];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta 
        = Vtestharness__ConstPool__TABLE_h1cae7daa_0
        [__Vtableidx11];
    __Vtableidx12 = (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__pop_en) 
                      << 4U) | (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en) 
                                 << 2U) | (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en)));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_en 
        = Vtestharness__ConstPool__TABLE_h5704dd5d_0
        [__Vtableidx12];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_down 
        = Vtestharness__ConstPool__TABLE_h2ba42a98_0
        [__Vtableidx12];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_delta 
        = Vtestharness__ConstPool__TABLE_h62f2e4a5_0
        [__Vtableidx12];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__pop_en 
        = ((IData)(vlSelf->__PVT__i_b_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill)
            ? (3U & ((IData)(1U) << (1U & (vlSelf->__PVT__slv_resp_cut[0x10U] 
                                           >> 0xbU))))
            : 0U);
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
    __Vtableidx9 = (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__pop_en) 
                     << 2U) | (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_en 
        = Vtestharness__ConstPool__TABLE_hf4216957_0
        [__Vtableidx9];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_down 
        = Vtestharness__ConstPool__TABLE_hf532381b_0
        [__Vtableidx9];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__0__KET____DOT__cnt_delta 
        = Vtestharness__ConstPool__TABLE_h06d381e4_0
        [__Vtableidx9];
    __Vtableidx10 = (((IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__pop_en) 
                      << 2U) | (IData)(vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en));
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_en 
        = Vtestharness__ConstPool__TABLE_h6c7afa99_0
        [__Vtableidx10];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_down 
        = Vtestharness__ConstPool__TABLE_h1a154d44_0
        [__Vtableidx10];
    vlSelf->__PVT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__gen_counters__BRA__1__KET____DOT__cnt_delta 
        = Vtestharness__ConstPool__TABLE_hd024d815_0
        [__Vtableidx10];
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
}

VL_INLINE_OPT void Vtestharness_axi_demux__pi48___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__1(Vtestharness_axi_demux__pi48* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestharness_axi_demux__pi48___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_dma_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__1\n"); );
    // Body
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
}
