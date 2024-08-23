// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness_snitch_amo_shim__A9_D40_C1.h"

VL_ATTR_COLD void Vtestharness_snitch_amo_shim__A9_D40_C1___ctor_var_reset(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->valid_i = VL_RAND_RESET_I(1);
    vlSelf->ready_o = VL_RAND_RESET_I(1);
    vlSelf->dma_access_i = VL_RAND_RESET_I(1);
    vlSelf->addr_i = VL_RAND_RESET_I(9);
    vlSelf->amo_i = VL_RAND_RESET_I(4);
    vlSelf->write_i = VL_RAND_RESET_I(1);
    vlSelf->wdata_i = VL_RAND_RESET_Q(64);
    vlSelf->wstrb_i = VL_RAND_RESET_I(8);
    vlSelf->rdata_o = VL_RAND_RESET_Q(64);
    vlSelf->core_id_i = VL_RAND_RESET_I(1);
    vlSelf->is_core_i = VL_RAND_RESET_I(1);
    vlSelf->mem_req_o = VL_RAND_RESET_I(1);
    vlSelf->mem_add_o = VL_RAND_RESET_I(9);
    vlSelf->mem_wen_o = VL_RAND_RESET_I(1);
    vlSelf->mem_wdata_o = VL_RAND_RESET_Q(64);
    vlSelf->mem_be_o = VL_RAND_RESET_I(8);
    vlSelf->mem_rdata_i = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__amo_conflict_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idx_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__operand_a = VL_RAND_RESET_I(32);
    vlSelf->__PVT__operand_b_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__amo_result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__amo_result_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__addr_q = VL_RAND_RESET_I(9);
    vlSelf->__PVT__amo_op_q = VL_RAND_RESET_I(4);
    vlSelf->__PVT__load_amo = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sc_successful = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sc_successful_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sc_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__state_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__state_d = VL_RAND_RESET_I(2);
    vlSelf->__PVT__reservation_d = VL_RAND_RESET_I(11);
    vlSelf->__PVT__reservation_q = VL_RAND_RESET_I(11);
    vlSelf->__PVT__core_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__core_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__core_add = VL_RAND_RESET_I(9);
    vlSelf->__PVT__core_wen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__core_wdata = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__core_be = VL_RAND_RESET_I(8);
    vlSelf->__PVT__core_arb_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b = VL_RAND_RESET_Q(33);
}
