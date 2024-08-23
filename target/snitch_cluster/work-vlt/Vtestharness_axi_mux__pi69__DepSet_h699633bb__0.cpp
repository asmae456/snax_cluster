// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness_axi_mux__pi69.h"

VL_INLINE_OPT void Vtestharness_axi_mux__pi69___act_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__0(Vtestharness_axi_mux__pi69* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_axi_mux__pi69___act_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__0\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
}

extern const VlUnpacked<CData/*0:0*/, 16> Vtestharness__ConstPool__TABLE_h8b569a39_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestharness__ConstPool__TABLE_h78bf7733_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestharness__ConstPool__TABLE_h07fcdbe2_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestharness__ConstPool__TABLE_ha83c690e_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestharness__ConstPool__TABLE_h43b993a3_0;

VL_INLINE_OPT void Vtestharness_axi_mux__pi69___act_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__1(Vtestharness_axi_mux__pi69* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_axi_mux__pi69___act_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__1\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    __Vtableidx1 = ((8U & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                           << 3U)) | (((4U == (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)) 
                                       << 2U) | (((IData)(vlSelf->__PVT__gen_mux__DOT__mst_aw_ready) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_q))));
    vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_d = 
        Vtestharness__ConstPool__TABLE_h8b569a39_0[__Vtableidx1];
    vlSelf->__PVT__gen_mux__DOT__load_aw_lock = Vtestharness__ConstPool__TABLE_h78bf7733_0
        [__Vtableidx1];
    vlSelf->__PVT__gen_mux__DOT__w_fifo_push = Vtestharness__ConstPool__TABLE_h07fcdbe2_0
        [__Vtableidx1];
    vlSelf->__PVT__gen_mux__DOT__mst_aw_valid = Vtestharness__ConstPool__TABLE_ha83c690e_0
        [__Vtableidx1];
    vlSelf->__PVT__gen_mux__DOT__aw_ready = Vtestharness__ConstPool__TABLE_h43b993a3_0
        [__Vtableidx1];
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__mst_aw_valid) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__mst_aw_ready));
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock = 1U;
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n 
        = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_push) 
         & (4U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q)));
    }
}

VL_INLINE_OPT void Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__0(Vtestharness_axi_mux__pi69* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__0\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
             & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
            << 2U) | ((2U & (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                              & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                             << 1U)) | (IData)(vlSelf->__PVT__gen_mux__DOT__ar_ready)));
}

VL_INLINE_OPT void Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__1(Vtestharness_axi_mux__pi69* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__1\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
             & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
            << 2U) | ((2U & (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                              & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                             << 1U)) | (IData)(vlSelf->__PVT__gen_mux__DOT__aw_ready)));
}

VL_INLINE_OPT void Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__3(Vtestharness_axi_mux__pi69* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__3\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((4U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d)) 
           | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d)))) 
               << 1U) | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes))))));
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__ar_ready));
}

VL_INLINE_OPT void Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__4(Vtestharness_axi_mux__pi69* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__4\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((4U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)) 
           | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)))) 
               << 1U) | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))))));
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
        = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_push) 
         & (4U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_push) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_pop)) 
          & (4U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q;
    }
}

VL_INLINE_OPT void Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__5(Vtestharness_axi_mux__pi69* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__5\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes 
        = (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
            << 2U) | ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                       ? (2U | (1U & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes) 
                                      >> 4U))) : (1U 
                                                  & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes) 
                                                     >> 2U))));
}

VL_INLINE_OPT void Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__6(Vtestharness_axi_mux__pi69* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__6\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[1U] = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                      ? ((vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                          << 0x1aU) | (vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                       >> 6U)) : ((
                                                   vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                   << 0xdU) 
                                                  | (vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                                     >> 0x13U)));
    __Vtemp_1[2U] = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                        ? ((vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[3U] 
                            << 0xdU) | (vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[2U] 
                                        >> 0x13U)) : 
                       vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[0U]) 
                      << 0x13U) | (0x7ffffU & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                ? (
                                                   vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                                   >> 6U)
                                                : (
                                                   (vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                                    << 0xdU) 
                                                   | (vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                      >> 0x13U)))));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                << 0x1aU) | (vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                             >> 6U)) : ((vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                         << 0xdU) | 
                                        (vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                         >> 0x13U)));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_1[1U];
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_1[2U];
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[3U] 
                  << 0xdU) | (vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[2U] 
                              >> 0x13U)) : vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[0U]) 
            >> 0xdU) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                          ? ((vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[4U] 
                              << 0xdU) | (vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[3U] 
                                          >> 0x13U))
                          : vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[1U]) 
                        << 0x13U));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[4U] 
                  << 0xdU) | (vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[3U] 
                              >> 0x13U)) : vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[1U]) 
            >> 0xdU) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                          ? ((vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[5U] 
                              << 0xdU) | (vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[4U] 
                                          >> 0x13U))
                          : vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[2U]) 
                        << 0x13U));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = ((0xffffffc0U & vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[5U]) 
           | (0x3fU & (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                         ? ((vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[5U] 
                             << 0xdU) | (vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[4U] 
                                         >> 0x13U))
                         : vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[2U]) 
                       >> 0xdU)));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = ((0x3fU & vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[6U]) 
           | (0xffffffc0U & vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[6U]));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
        = ((0x3fU & vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[7U]) 
           | (0x1ffffc0U & vlSelf->__Vcellinp__gen_mux__DOT__i_ar_arbiter__data_i[7U]));
}

VL_INLINE_OPT void Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__7(Vtestharness_axi_mux__pi69* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__7\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes 
        = (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
            << 2U) | ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                       ? (2U | (1U & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes) 
                                      >> 4U))) : (1U 
                                                  & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes) 
                                                     >> 2U))));
}

VL_INLINE_OPT void Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__8(Vtestharness_axi_mux__pi69* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__8\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[1U] = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                      ? ((vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                          << 0xeU) | (vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                      >> 0x12U)) : 
                     ((vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                       << 7U) | (vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                 >> 0x19U)));
    __Vtemp_1[2U] = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                        ? ((vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[3U] 
                            << 7U) | (vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[2U] 
                                      >> 0x19U)) : 
                       vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[0U]) 
                      << 0x19U) | (0x1ffffffU & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                  ? 
                                                 ((vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                   << 0xeU) 
                                                  | (vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                                     >> 0x12U))
                                                  : 
                                                 ((vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                                   << 7U) 
                                                  | (vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                     >> 0x19U)))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                << 0xeU) | (vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                            >> 0x12U)) : ((vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                           << 7U) | 
                                          (vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 0x19U)));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_1[1U];
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_1[2U];
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[3U] 
                  << 7U) | (vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[2U] 
                            >> 0x19U)) : vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[0U]) 
            >> 7U) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                        ? ((vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[4U] 
                            << 7U) | (vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[3U] 
                                      >> 0x19U)) : 
                       vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[1U]) 
                      << 0x19U));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[4U] 
                  << 7U) | (vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[3U] 
                            >> 0x19U)) : vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[1U]) 
            >> 7U) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                        ? ((vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[5U] 
                            << 7U) | (vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[4U] 
                                      >> 0x19U)) : 
                       vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[2U]) 
                      << 0x19U));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = ((0xfffc0000U & vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[5U]) 
           | (0x3ffffU & (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                            ? ((vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[5U] 
                                << 7U) | (vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[4U] 
                                          >> 0x19U))
                            : vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[2U]) 
                          >> 7U)));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = ((0x3ffffU & vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[6U]) 
           | (0xfffc0000U & vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[6U]));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
        = ((0x3ffffU & vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[7U]) 
           | (0xfffc0000U & vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[7U]));
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
        = (0x7ffU & vlSelf->__Vcellinp__gen_mux__DOT__i_aw_arbiter__data_i[8U]);
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_n 
        = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q;
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_push) 
         & (4U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_n 
            = (((~ ((IData)(3U) << (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q), 1U)))) 
                & (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_n)) 
               | (0xffU & ((3U & (vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                  >> 0x17U)) << (7U 
                                                 & VL_SHIFTL_III(3,32,32, (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q), 1U)))));
    }
}

VL_INLINE_OPT void Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__9(Vtestharness_axi_mux__pi69* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__9\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_15;
    // Body
    __Vtemp_15[2U] = ((0x20000U & (((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                    << 0x11U) & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                 << 0x10U))) 
                      | ((0x10000U & (((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                       << 0x10U) & 
                                      ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                       << 0xfU))) | 
                         ((0x8000U & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_w_readies) 
                                      << 0xfU)) | (
                                                   (((IData)(vlSelf->__PVT__gen_mux__DOT__mst_b_valid) 
                                                     & ((IData)(1U) 
                                                        << 
                                                        (3U 
                                                         & ((IData)(vlSelf->__PVT__gen_mux__DOT__mst_b_chan) 
                                                            >> 6U)))) 
                                                    << 0xeU) 
                                                   | ((0x3f00U 
                                                       & ((IData)(vlSelf->__PVT__gen_mux__DOT__mst_b_chan) 
                                                          << 8U)) 
                                                      | ((((IData)(vlSelf->__PVT__gen_mux__DOT__mst_r_valid) 
                                                           & ((IData)(1U) 
                                                              << 
                                                              (3U 
                                                               & (vlSelf->__PVT__gen_mux__DOT__mst_r_chan[2U] 
                                                                  >> 7U)))) 
                                                          << 7U) 
                                                         | (0x7fU 
                                                            & vlSelf->__PVT__gen_mux__DOT__mst_r_chan[2U])))))));
    vlSelf->slv_resps_o[0U] = vlSelf->__PVT__gen_mux__DOT__mst_r_chan[0U];
    vlSelf->slv_resps_o[1U] = vlSelf->__PVT__gen_mux__DOT__mst_r_chan[1U];
    vlSelf->slv_resps_o[2U] = ((vlSelf->__PVT__gen_mux__DOT__mst_r_chan[0U] 
                                << 0x12U) | __Vtemp_15[2U]);
    vlSelf->slv_resps_o[3U] = ((vlSelf->__PVT__gen_mux__DOT__mst_r_chan[0U] 
                                >> 0xeU) | (vlSelf->__PVT__gen_mux__DOT__mst_r_chan[1U] 
                                            << 0x12U));
    vlSelf->slv_resps_o[4U] = (((IData)(vlSelf->__PVT__gen_mux__DOT__mst_b_chan) 
                                << 0x1aU) | ((0xfe000000U 
                                              & (((IData)(vlSelf->__PVT__gen_mux__DOT__mst_r_valid) 
                                                  << 0x19U) 
                                                 & (((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & (vlSelf->__PVT__gen_mux__DOT__mst_r_chan[2U] 
                                                         >> 7U))) 
                                                    << 0x18U))) 
                                             | ((vlSelf->__PVT__gen_mux__DOT__mst_r_chan[1U] 
                                                 >> 0xeU) 
                                                | (0x1fc0000U 
                                                   & (vlSelf->__PVT__gen_mux__DOT__mst_r_chan[2U] 
                                                      << 0x12U)))));
    vlSelf->slv_resps_o[5U] = ((vlSelf->__PVT__gen_mux__DOT__mst_r_chan[0U] 
                                << 4U) | ((0xfffffff8U 
                                           & (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                               << 2U) 
                                              & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                 << 3U))) 
                                          | ((0xfffffffcU 
                                              & (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                  << 1U) 
                                                 & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                    << 2U))) 
                                             | ((2U 
                                                 & (IData)(vlSelf->__PVT__gen_mux__DOT__slv_w_readies)) 
                                                | ((IData)(vlSelf->__PVT__gen_mux__DOT__mst_b_valid) 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & ((IData)(vlSelf->__PVT__gen_mux__DOT__mst_b_chan) 
                                                           >> 6U))) 
                                                      >> 1U))))));
    vlSelf->slv_resps_o[6U] = ((vlSelf->__PVT__gen_mux__DOT__mst_r_chan[0U] 
                                >> 0x1cU) | (vlSelf->__PVT__gen_mux__DOT__mst_r_chan[1U] 
                                             << 4U));
    vlSelf->slv_resps_o[7U] = ((0x200000U & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                             << 0x13U)) 
                               | ((0x100000U & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                << 0x12U)) 
                                  | ((0x80000U & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_w_readies) 
                                                  << 0x11U)) 
                                     | ((0xfffc0000U 
                                         & (((IData)(vlSelf->__PVT__gen_mux__DOT__mst_b_valid) 
                                             << 0x12U) 
                                            & (((IData)(1U) 
                                                << 
                                                (3U 
                                                 & ((IData)(vlSelf->__PVT__gen_mux__DOT__mst_b_chan) 
                                                    >> 6U))) 
                                               << 0x10U))) 
                                        | ((0x3f000U 
                                            & ((IData)(vlSelf->__PVT__gen_mux__DOT__mst_b_chan) 
                                               << 0xcU)) 
                                           | ((0xfffff800U 
                                               & (((IData)(vlSelf->__PVT__gen_mux__DOT__mst_r_valid) 
                                                   << 0xbU) 
                                                  & (((IData)(1U) 
                                                      << 
                                                      (3U 
                                                       & (vlSelf->__PVT__gen_mux__DOT__mst_r_chan[2U] 
                                                          >> 7U))) 
                                                     << 9U))) 
                                              | ((vlSelf->__PVT__gen_mux__DOT__mst_r_chan[1U] 
                                                  >> 0x1cU) 
                                                 | (0x7f0U 
                                                    & (vlSelf->__PVT__gen_mux__DOT__mst_r_chan[2U] 
                                                       << 4U)))))))));
}

VL_INLINE_OPT void Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__10(Vtestharness_axi_mux__pi69* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__10\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((4U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
              | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
                  << 1U) | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__11(Vtestharness_axi_mux__pi69* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__11\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x20U | ((((1U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                          ? 0U : 1U) << 2U) | (3U & 
                                               ((2U 
                                                 & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 2U)
                                                 : 
                                                ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__12(Vtestharness_axi_mux__pi69* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__12\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x20U | ((((1U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))
                          ? 0U : 1U) << 2U) | (3U & 
                                               ((2U 
                                                 & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 2U)
                                                 : 
                                                ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__13(Vtestharness_axi_mux__pi69* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__13\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((4U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
              | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)))) 
                  << 1U) | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__14(Vtestharness_axi_mux__pi69* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__14\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((4U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
              | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
                  << 1U) | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__15(Vtestharness_axi_mux__pi69* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__15\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x20U | ((((1U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                          ? 0U : 1U) << 2U) | (3U & 
                                               ((2U 
                                                 & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 2U)
                                                 : 
                                                ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__16(Vtestharness_axi_mux__pi69* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__16\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x20U | ((((1U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))
                          ? 0U : 1U) << 2U) | (3U & 
                                               ((2U 
                                                 & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 2U)
                                                 : 
                                                ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__17(Vtestharness_axi_mux__pi69* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__17\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((4U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
              | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)))) 
                  << 1U) | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__18(Vtestharness_axi_mux__pi69* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__18\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (3U & (((IData)(vlSelf->__PVT__gen_mux__DOT__ar_ready) 
                  & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__19(Vtestharness_axi_mux__pi69* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_axi_mux__pi69___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__19\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (3U & (((IData)(vlSelf->__PVT__gen_mux__DOT__aw_ready) 
                  & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vtestharness_axi_mux__pi69___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__0(Vtestharness_axi_mux__pi69* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_axi_mux__pi69___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__0\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((4U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d)) 
           | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d)))) 
               << 1U) | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes))))));
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__ar_ready));
}

VL_INLINE_OPT void Vtestharness_axi_mux__pi69___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__1(Vtestharness_axi_mux__pi69* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_axi_mux__pi69___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__1\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    __Vtableidx1 = ((8U & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                           << 3U)) | (((4U == (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)) 
                                       << 2U) | (((IData)(vlSelf->__PVT__gen_mux__DOT__mst_aw_ready) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_q))));
    vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_d = 
        Vtestharness__ConstPool__TABLE_h8b569a39_0[__Vtableidx1];
    vlSelf->__PVT__gen_mux__DOT__load_aw_lock = Vtestharness__ConstPool__TABLE_h78bf7733_0
        [__Vtableidx1];
    vlSelf->__PVT__gen_mux__DOT__w_fifo_push = Vtestharness__ConstPool__TABLE_h07fcdbe2_0
        [__Vtableidx1];
    vlSelf->__PVT__gen_mux__DOT__mst_aw_valid = Vtestharness__ConstPool__TABLE_ha83c690e_0
        [__Vtableidx1];
    vlSelf->__PVT__gen_mux__DOT__aw_ready = Vtestharness__ConstPool__TABLE_h43b993a3_0
        [__Vtableidx1];
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((4U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)) 
           | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)))) 
               << 1U) | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__mst_aw_valid) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__mst_aw_ready));
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock = 1U;
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n 
        = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q;
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
        = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_push) 
         & (4U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q)));
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_push) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_pop)) 
          & (4U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q;
    }
}

VL_INLINE_OPT void Vtestharness_axi_mux__pi69___act_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__1(Vtestharness_axi_mux__pi69* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_axi_mux__pi69___act_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__1\n"); );
    // Init
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    __Vtableidx2 = ((8U & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                           << 3U)) | (((4U == (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)) 
                                       << 2U) | (((IData)(vlSelf->__PVT__gen_mux__DOT__mst_aw_ready) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_q))));
    vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_d = 
        Vtestharness__ConstPool__TABLE_h8b569a39_0[__Vtableidx2];
    vlSelf->__PVT__gen_mux__DOT__load_aw_lock = Vtestharness__ConstPool__TABLE_h78bf7733_0
        [__Vtableidx2];
    vlSelf->__PVT__gen_mux__DOT__w_fifo_push = Vtestharness__ConstPool__TABLE_h07fcdbe2_0
        [__Vtableidx2];
    vlSelf->__PVT__gen_mux__DOT__mst_aw_valid = Vtestharness__ConstPool__TABLE_ha83c690e_0
        [__Vtableidx2];
    vlSelf->__PVT__gen_mux__DOT__aw_ready = Vtestharness__ConstPool__TABLE_h43b993a3_0
        [__Vtableidx2];
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__mst_aw_valid) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__mst_aw_ready));
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock = 1U;
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n 
        = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_push) 
         & (4U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q)));
    }
}

VL_INLINE_OPT void Vtestharness_axi_mux__pi69___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__1(Vtestharness_axi_mux__pi69* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_axi_mux__pi69___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__1\n"); );
    // Init
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    __Vtableidx2 = ((8U & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                           << 3U)) | (((4U == (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)) 
                                       << 2U) | (((IData)(vlSelf->__PVT__gen_mux__DOT__mst_aw_ready) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_q))));
    vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_d = 
        Vtestharness__ConstPool__TABLE_h8b569a39_0[__Vtableidx2];
    vlSelf->__PVT__gen_mux__DOT__load_aw_lock = Vtestharness__ConstPool__TABLE_h78bf7733_0
        [__Vtableidx2];
    vlSelf->__PVT__gen_mux__DOT__w_fifo_push = Vtestharness__ConstPool__TABLE_h07fcdbe2_0
        [__Vtableidx2];
    vlSelf->__PVT__gen_mux__DOT__mst_aw_valid = Vtestharness__ConstPool__TABLE_ha83c690e_0
        [__Vtableidx2];
    vlSelf->__PVT__gen_mux__DOT__aw_ready = Vtestharness__ConstPool__TABLE_h43b993a3_0
        [__Vtableidx2];
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((4U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)) 
           | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)))) 
               << 1U) | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__mst_aw_valid) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__mst_aw_ready));
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock = 1U;
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n 
        = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q;
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
        = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_push) 
         & (4U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q)));
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_push) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_pop)) 
          & (4U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q;
    }
}

VL_INLINE_OPT void Vtestharness_axi_mux__pi69___act_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux__1(Vtestharness_axi_mux__pi69* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_axi_mux__pi69___act_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux__1\n"); );
    // Init
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    __Vtableidx3 = ((8U & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                           << 3U)) | (((4U == (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)) 
                                       << 2U) | (((IData)(vlSelf->__PVT__gen_mux__DOT__mst_aw_ready) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_q))));
    vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_d = 
        Vtestharness__ConstPool__TABLE_h8b569a39_0[__Vtableidx3];
    vlSelf->__PVT__gen_mux__DOT__load_aw_lock = Vtestharness__ConstPool__TABLE_h78bf7733_0
        [__Vtableidx3];
    vlSelf->__PVT__gen_mux__DOT__w_fifo_push = Vtestharness__ConstPool__TABLE_h07fcdbe2_0
        [__Vtableidx3];
    vlSelf->__PVT__gen_mux__DOT__mst_aw_valid = Vtestharness__ConstPool__TABLE_ha83c690e_0
        [__Vtableidx3];
    vlSelf->__PVT__gen_mux__DOT__aw_ready = Vtestharness__ConstPool__TABLE_h43b993a3_0
        [__Vtableidx3];
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__mst_aw_valid) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__mst_aw_ready));
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock = 1U;
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n 
        = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_push) 
         & (4U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q)));
    }
}

VL_INLINE_OPT void Vtestharness_axi_mux__pi69___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux__1(Vtestharness_axi_mux__pi69* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_axi_mux__pi69___nba_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_cluster_xbar__DOT__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux__1\n"); );
    // Init
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    __Vtableidx3 = ((8U & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                           << 3U)) | (((4U == (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)) 
                                       << 2U) | (((IData)(vlSelf->__PVT__gen_mux__DOT__mst_aw_ready) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_q))));
    vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_d = 
        Vtestharness__ConstPool__TABLE_h8b569a39_0[__Vtableidx3];
    vlSelf->__PVT__gen_mux__DOT__load_aw_lock = Vtestharness__ConstPool__TABLE_h78bf7733_0
        [__Vtableidx3];
    vlSelf->__PVT__gen_mux__DOT__w_fifo_push = Vtestharness__ConstPool__TABLE_h07fcdbe2_0
        [__Vtableidx3];
    vlSelf->__PVT__gen_mux__DOT__mst_aw_valid = Vtestharness__ConstPool__TABLE_ha83c690e_0
        [__Vtableidx3];
    vlSelf->__PVT__gen_mux__DOT__aw_ready = Vtestharness__ConstPool__TABLE_h43b993a3_0
        [__Vtableidx3];
    vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((4U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)) 
           | (((IData)((0U != (3U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)))) 
               << 1U) | (IData)((0U != (6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__mst_aw_valid) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__mst_aw_ready));
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock = 1U;
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n 
        = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q;
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
        = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_push) 
         & (4U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q)));
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_push) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_pop)) 
          & (4U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q;
    }
}
