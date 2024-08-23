// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_snitch_amo_shim__A9_D40_C1.h"

VL_ATTR_COLD void Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__0__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__core_ready = 1U;
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                } else {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            } else {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_ATTR_COLD void Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__1__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__core_ready = 1U;
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                } else {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            } else {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_ATTR_COLD void Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__2__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__core_ready = 1U;
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                } else {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            } else {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_ATTR_COLD void Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__3__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__core_ready = 1U;
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                } else {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            } else {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_ATTR_COLD void Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__4__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__core_ready = 1U;
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                } else {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            } else {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_ATTR_COLD void Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__5__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__core_ready = 1U;
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                } else {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            } else {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_ATTR_COLD void Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__6__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__core_ready = 1U;
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                } else {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            } else {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_ATTR_COLD void Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__7__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__core_ready = 1U;
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                } else {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            } else {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_ATTR_COLD void Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__8__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__core_ready = 1U;
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                } else {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            } else {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_ATTR_COLD void Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__9__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__core_ready = 1U;
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                } else {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            } else {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_ATTR_COLD void Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__10__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__core_ready = 1U;
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                } else {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            } else {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_ATTR_COLD void Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__11__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__core_ready = 1U;
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                } else {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            } else {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_ATTR_COLD void Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__12__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__core_ready = 1U;
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                } else {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            } else {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_ATTR_COLD void Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__13__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__core_ready = 1U;
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                } else {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            } else {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_ATTR_COLD void Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__14__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__core_ready = 1U;
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                } else {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            } else {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_ATTR_COLD void Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__15__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__core_ready = 1U;
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                } else {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            } else {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_ATTR_COLD void Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__16__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__core_ready = 1U;
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                } else {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            } else {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_ATTR_COLD void Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__17__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__core_ready = 1U;
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                } else {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            } else {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_ATTR_COLD void Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__18__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__core_ready = 1U;
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                } else {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            } else {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_ATTR_COLD void Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__19__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__core_ready = 1U;
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                } else {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            } else {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_ATTR_COLD void Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__20__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__core_ready = 1U;
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                } else {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            } else {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_ATTR_COLD void Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__21__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__core_ready = 1U;
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                } else {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            } else {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_ATTR_COLD void Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__22__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__core_ready = 1U;
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                } else {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            } else {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_ATTR_COLD void Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__23__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__core_ready = 1U;
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                } else {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            } else {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_ATTR_COLD void Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__24__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__core_ready = 1U;
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                } else {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            } else {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_ATTR_COLD void Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__25__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__core_ready = 1U;
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                } else {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            } else {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_ATTR_COLD void Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__26__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__core_ready = 1U;
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                } else {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            } else {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_ATTR_COLD void Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__27__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__core_ready = 1U;
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                } else {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            } else {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_ATTR_COLD void Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__28__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__core_ready = 1U;
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                } else {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            } else {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_ATTR_COLD void Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__29__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__core_ready = 1U;
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                } else {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            } else {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_ATTR_COLD void Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__30__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__core_ready = 1U;
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                } else {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            } else {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}

VL_ATTR_COLD void Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim__0(Vtestharness_snitch_amo_shim__A9_D40_C1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestharness_snitch_amo_shim__A9_D40_C1___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim__0\n"); );
    // Body
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q));
    vlSelf->__PVT__operand_a = (IData)((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__31__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q 
                                        >> (0x3fU & 
                                            VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__PVT__idx_q), 5U))));
    vlSelf->__PVT__core_ready = 1U;
    if ((0U != (IData)(vlSelf->__PVT__state_q))) {
        if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__core_ready = 0U;
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_a));
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                        = (QData)((IData)(vlSelf->__PVT__operand_a));
                } else {
                    vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__amo_op_q))) {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- (QData)((IData)(vlSelf->__PVT__operand_b_q))));
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                    = (QData)((IData)(vlSelf->__PVT__operand_a));
            } else {
                vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b 
                    = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__operand_b_q)));
            }
        }
    }
    vlSelf->__PVT__i_amo_alu__DOT__adder_sum = (0x3ffffffffULL 
                                                & (vlSelf->__PVT__i_amo_alu__DOT__adder_operand_a 
                                                   + vlSelf->__PVT__i_amo_alu__DOT__adder_operand_b));
    vlSelf->__PVT__amo_result = vlSelf->__PVT__operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((4U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? 0U : ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__amo_op_q))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                               >> 0x20U)))
                                                    ? vlSelf->__PVT__operand_a
                                                    : vlSelf->__PVT__operand_b_q))));
    } else if ((4U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((2U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a)
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__i_amo_alu__DOT__adder_sum 
                                                            >> 0x20U)))
                                              ? vlSelf->__PVT__operand_b_q
                                              : vlSelf->__PVT__operand_a))
                                      : ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                          ? (vlSelf->__PVT__operand_a 
                                             ^ vlSelf->__PVT__operand_b_q)
                                          : (vlSelf->__PVT__operand_a 
                                             | vlSelf->__PVT__operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__amo_op_q))) {
        vlSelf->__PVT__amo_result = ((1U & (IData)(vlSelf->__PVT__amo_op_q))
                                      ? (vlSelf->__PVT__operand_a 
                                         & vlSelf->__PVT__operand_b_q)
                                      : (IData)(vlSelf->__PVT__i_amo_alu__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__amo_op_q)))) {
        vlSelf->__PVT__amo_result = 0U;
    }
}
