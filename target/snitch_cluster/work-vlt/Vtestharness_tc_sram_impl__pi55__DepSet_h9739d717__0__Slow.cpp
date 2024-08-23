// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness_tc_sram_impl__pi55.h"

VL_ATTR_COLD void Vtestharness_tc_sram_impl__pi55___eval_initial__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__0__KET____DOT__i_data_mem(Vtestharness_tc_sram_impl__pi55* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestharness_tc_sram_impl__pi55___eval_initial__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__0__KET____DOT__i_data_mem\n"); );
    // Init
    VlUnpacked<QData/*63:0*/, 512> __PVT__i_tc_sram__DOT__init_val;
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        __PVT__i_tc_sram__DOT__init_val[__Vi0] = 0;
    }
    // Body
    vlSelf->__PVT__i_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x200U > vlSelf->__PVT__i_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i)) {
        __PVT__i_tc_sram__DOT__init_val[(0x1ffU & vlSelf->__PVT__i_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i)] = 0ULL;
        vlSelf->__PVT__i_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->__PVT__i_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i);
    }
}

VL_ATTR_COLD void Vtestharness_tc_sram_impl__pi55___ctor_var_reset(Vtestharness_tc_sram_impl__pi55* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestharness_tc_sram_impl__pi55___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->impl_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__impl_o = VL_RAND_RESET_I(1);
    vlSelf->req_i = VL_RAND_RESET_I(1);
    vlSelf->we_i = VL_RAND_RESET_I(1);
    vlSelf->addr_i = VL_RAND_RESET_I(9);
    vlSelf->wdata_i = VL_RAND_RESET_Q(64);
    vlSelf->be_i = VL_RAND_RESET_I(8);
    vlSelf->rdata_o = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__i_tc_sram__DOT__sram[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__PVT__i_tc_sram__DOT__r_addr_q = VL_RAND_RESET_I(9);
    vlSelf->__PVT__i_tc_sram__DOT__rdata_q = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__i_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__PVT__i_tc_sram__DOT__genblk2__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->__PVT__i_tc_sram__DOT__genblk2__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0;
    vlSelf->__PVT__i_tc_sram__DOT__genblk2__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->__PVT__i_tc_sram__DOT__genblk2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0;
    vlSelf->__PVT__i_tc_sram__DOT__genblk2__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->i_tc_sram__DOT____Vlvbound_h5cf49065__0 = VL_RAND_RESET_I(9);
}
