// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness___024root.h"

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__90(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__90\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b76__05d__02ecolumn0__DOT__S 
        = ((8U & ((~ ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b76__05d__02ecolumn0__DOT__n_21) 
                          & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b76__05d__02ecolumn0__DOT__Cout) 
                             >> 2U))) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b76__05d__02ecolumn0__DOT__n_21) 
                                         | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b76__05d__02ecolumn0__DOT__Cout) 
                                            >> 2U)))) 
                  << 3U)) | ((4U & ((~ (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x16U] 
                                          >> 0xcU) 
                                         | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x12U] 
                                               >> 0xcU))) 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x12U] 
                                            >> 0xcU) 
                                           | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x16U] 
                                                 >> 0xcU))))) 
                                    << 2U)) | ((2U 
                                                & ((~ 
                                                    (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b76__05d__02ecolumn0__DOT__wc299) 
                                                      | (~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1aU] 
                                                          >> 0xcU))) 
                                                     & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b76__05d__02ecolumn0__DOT__wc299)) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1aU] 
                                                           >> 0xcU)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b76__05d__02ecolumn0__DOT__wc297) 
                                                       | (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[6U] 
                                                           >> 0xcU))) 
                                                      & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b76__05d__02ecolumn0__DOT__wc297)) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[6U] 
                                                            >> 0xcU))))))));
    __Vtemp_1 = ((0x20U & (((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b76__05d__02ecolumn0__DOT__S) 
                                >> 3U)) << 5U) | (0xffffffe0U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b76__05d__02ecolumn0__DOT__Cout) 
                                                     << 1U)))) 
                 | ((0x10U & ((~ (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b76__05d__02ecolumn0__DOT__S) 
                                   | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b76__05d__02ecolumn0__DOT__S) 
                                      >> 2U)) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b76__05d__02ecolumn0__DOT__S) 
                                                 >> 1U))) 
                              << 4U)) | ((8U & ((~ 
                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b76__05d__02ecolumn0__DOT__n_74) 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b76__05d__02ecolumn0__DOT__n_75))) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_col__05b76__05d__02ecolumn0__a))))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ 
                                                    ((~ 
                                                      (((~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1aU] 
                                                          >> 0xcU)) 
                                                        | (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1eU] 
                                                            >> 0xcU))) 
                                                       & (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[2U] 
                                                           >> 0xcU)))) 
                                                     & (~ 
                                                        ((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1aU] 
                                                           >> 0xcU)) 
                                                         & (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1eU] 
                                                             >> 0xcU)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     ((~ 
                                                       (((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[6U] 
                                                           >> 0xcU)) 
                                                         | (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xaU] 
                                                             >> 0xcU))) 
                                                        & (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xeU] 
                                                            >> 0xcU)))) 
                                                      & (~ 
                                                         ((~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[6U] 
                                                            >> 0xcU)) 
                                                          & (~ 
                                                             (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xaU] 
                                                              >> 0xcU))))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b76__05d__02ecolumn0__DOT__Cout 
        = __Vtemp_1;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b76__05d__02ecolumn0__DOT__wc293 
        = (1U & ((IData)((1U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b76__05d__02ecolumn0__DOT__S)))) 
                 & (IData)((2U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b76__05d__02ecolumn0__DOT__S))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_39 = (7U & 
                                               (~ (
                                                   (4U 
                                                    & (((~ (IData)(
                                                                   (0x28U 
                                                                    == 
                                                                    (0x28U 
                                                                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b76__05d__02ecolumn0__DOT__Cout))))) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x28U 
                                                                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b76__05d__02ecolumn0__DOT__Cout))))) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((~ 
                                                            (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b76__05d__02ecolumn0__DOT__S) 
                                                              >> 3U) 
                                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b76__05d__02ecolumn0__DOT__Cout) 
                                                                >> 4U))) 
                                                           << 1U) 
                                                          & ((0x3ffffffeU 
                                                              & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b76__05d__02ecolumn0__DOT__S) 
                                                                 >> 2U)) 
                                                             | (0x1ffffffeU 
                                                                & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b76__05d__02ecolumn0__DOT__Cout) 
                                                                   >> 3U))))) 
                                                      | (1U 
                                                         & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b76__05d__02ecolumn0__DOT__wc293) 
                                                             | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b76__05d__02ecolumn0__DOT__S) 
                                                                >> 2U)) 
                                                            & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b76__05d__02ecolumn0__DOT__wc293)) 
                                                               | (~ 
                                                                  ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b76__05d__02ecolumn0__DOT__S) 
                                                                   >> 2U)))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b19__05d__02erow_1__DOT__wc3126 
        = (1U & (((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_39)) 
                  | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b19__05d__02erow_1__DOT__n_523)) 
                 & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b19__05d__02erow_1__DOT__n_523)) 
                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_39))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b19__05d__02erow_1__DOT__wc3047 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_39) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b19__05d__02erow_1__DOT__n_523));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_word__05b19__05d__02eword__x 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_38) 
            << 2U) | (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_39) 
                            >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Out_reg__DOT__wc6301 
        = (1U & ((~ ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b19__05d__02erow_1__DOT__wc3126)) 
                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525))) 
                 & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525) 
                    | (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b19__05d__02episo_1.b)))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__91(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__91\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b80__05d__02ecolumn0__DOT__S 
        = ((8U & ((~ ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b80__05d__02ecolumn0__DOT__n_21) 
                          & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b80__05d__02ecolumn0__DOT__Cout) 
                             >> 2U))) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b80__05d__02ecolumn0__DOT__n_21) 
                                         | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b80__05d__02ecolumn0__DOT__Cout) 
                                            >> 2U)))) 
                  << 3U)) | ((4U & ((~ (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x16U] 
                                          >> 0x10U) 
                                         | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x12U] 
                                               >> 0x10U))) 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x12U] 
                                            >> 0x10U) 
                                           | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x16U] 
                                                 >> 0x10U))))) 
                                    << 2U)) | ((2U 
                                                & ((~ 
                                                    (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b80__05d__02ecolumn0__DOT__wc299) 
                                                      | (~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1aU] 
                                                          >> 0x10U))) 
                                                     & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b80__05d__02ecolumn0__DOT__wc299)) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1aU] 
                                                           >> 0x10U)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b80__05d__02ecolumn0__DOT__wc297) 
                                                       | (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[6U] 
                                                           >> 0x10U))) 
                                                      & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b80__05d__02ecolumn0__DOT__wc297)) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[6U] 
                                                            >> 0x10U))))))));
    __Vtemp_1 = ((0x20U & (((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b80__05d__02ecolumn0__DOT__S) 
                                >> 3U)) << 5U) | (0xffffffe0U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b80__05d__02ecolumn0__DOT__Cout) 
                                                     << 1U)))) 
                 | ((0x10U & ((~ (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b80__05d__02ecolumn0__DOT__S) 
                                   | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b80__05d__02ecolumn0__DOT__S) 
                                      >> 2U)) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b80__05d__02ecolumn0__DOT__S) 
                                                 >> 1U))) 
                              << 4U)) | ((8U & ((~ 
                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b80__05d__02ecolumn0__DOT__n_74) 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b80__05d__02ecolumn0__DOT__n_75))) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_col__05b80__05d__02ecolumn0__a))))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ 
                                                    ((~ 
                                                      (((~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1aU] 
                                                          >> 0x10U)) 
                                                        | (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1eU] 
                                                            >> 0x10U))) 
                                                       & (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[2U] 
                                                           >> 0x10U)))) 
                                                     & (~ 
                                                        ((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1aU] 
                                                           >> 0x10U)) 
                                                         & (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1eU] 
                                                             >> 0x10U)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     ((~ 
                                                       (((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[6U] 
                                                           >> 0x10U)) 
                                                         | (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xaU] 
                                                             >> 0x10U))) 
                                                        & (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xeU] 
                                                            >> 0x10U)))) 
                                                      & (~ 
                                                         ((~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[6U] 
                                                            >> 0x10U)) 
                                                          & (~ 
                                                             (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xaU] 
                                                              >> 0x10U))))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b80__05d__02ecolumn0__DOT__Cout 
        = __Vtemp_1;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b80__05d__02ecolumn0__DOT__wc293 
        = (1U & ((IData)((1U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b80__05d__02ecolumn0__DOT__S)))) 
                 & (IData)((2U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b80__05d__02ecolumn0__DOT__S))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_41 = (7U & 
                                               (~ (
                                                   (4U 
                                                    & (((~ (IData)(
                                                                   (0x28U 
                                                                    == 
                                                                    (0x28U 
                                                                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b80__05d__02ecolumn0__DOT__Cout))))) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x28U 
                                                                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b80__05d__02ecolumn0__DOT__Cout))))) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((~ 
                                                            (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b80__05d__02ecolumn0__DOT__S) 
                                                              >> 3U) 
                                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b80__05d__02ecolumn0__DOT__Cout) 
                                                                >> 4U))) 
                                                           << 1U) 
                                                          & ((0x3ffffffeU 
                                                              & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b80__05d__02ecolumn0__DOT__S) 
                                                                 >> 2U)) 
                                                             | (0x1ffffffeU 
                                                                & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b80__05d__02ecolumn0__DOT__Cout) 
                                                                   >> 3U))))) 
                                                      | (1U 
                                                         & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b80__05d__02ecolumn0__DOT__wc293) 
                                                             | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b80__05d__02ecolumn0__DOT__S) 
                                                                >> 2U)) 
                                                            & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b80__05d__02ecolumn0__DOT__wc293)) 
                                                               | (~ 
                                                                  ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b80__05d__02ecolumn0__DOT__S) 
                                                                   >> 2U)))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b20__05d__02erow_1__DOT__wc3267 
        = (1U & (((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_41)) 
                  | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b20__05d__02erow_1__DOT__n_523)) 
                 & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b20__05d__02erow_1__DOT__n_523)) 
                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_41))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b20__05d__02erow_1__DOT__wc3188 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_41) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b20__05d__02erow_1__DOT__n_523));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_word__05b20__05d__02eword__x 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_40) 
            << 2U) | (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_41) 
                            >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Out_reg__DOT__wc6343 
        = (1U & ((~ ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b20__05d__02erow_1__DOT__wc3267)) 
                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525))) 
                 & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525) 
                    | (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b20__05d__02episo_1.b)))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__92(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__92\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b84__05d__02ecolumn0__DOT__S 
        = ((8U & ((~ ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b84__05d__02ecolumn0__DOT__n_21) 
                          & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b84__05d__02ecolumn0__DOT__Cout) 
                             >> 2U))) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b84__05d__02ecolumn0__DOT__n_21) 
                                         | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b84__05d__02ecolumn0__DOT__Cout) 
                                            >> 2U)))) 
                  << 3U)) | ((4U & ((~ (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x16U] 
                                          >> 0x14U) 
                                         | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x12U] 
                                               >> 0x14U))) 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x12U] 
                                            >> 0x14U) 
                                           | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x16U] 
                                                 >> 0x14U))))) 
                                    << 2U)) | ((2U 
                                                & ((~ 
                                                    (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b84__05d__02ecolumn0__DOT__wc299) 
                                                      | (~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1aU] 
                                                          >> 0x14U))) 
                                                     & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b84__05d__02ecolumn0__DOT__wc299)) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1aU] 
                                                           >> 0x14U)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b84__05d__02ecolumn0__DOT__wc297) 
                                                       | (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[6U] 
                                                           >> 0x14U))) 
                                                      & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b84__05d__02ecolumn0__DOT__wc297)) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[6U] 
                                                            >> 0x14U))))))));
    __Vtemp_1 = ((0x20U & (((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b84__05d__02ecolumn0__DOT__S) 
                                >> 3U)) << 5U) | (0xffffffe0U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b84__05d__02ecolumn0__DOT__Cout) 
                                                     << 1U)))) 
                 | ((0x10U & ((~ (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b84__05d__02ecolumn0__DOT__S) 
                                   | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b84__05d__02ecolumn0__DOT__S) 
                                      >> 2U)) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b84__05d__02ecolumn0__DOT__S) 
                                                 >> 1U))) 
                              << 4U)) | ((8U & ((~ 
                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b84__05d__02ecolumn0__DOT__n_74) 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b84__05d__02ecolumn0__DOT__n_75))) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_col__05b84__05d__02ecolumn0__a))))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ 
                                                    ((~ 
                                                      (((~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1aU] 
                                                          >> 0x14U)) 
                                                        | (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1eU] 
                                                            >> 0x14U))) 
                                                       & (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[2U] 
                                                           >> 0x14U)))) 
                                                     & (~ 
                                                        ((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1aU] 
                                                           >> 0x14U)) 
                                                         & (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1eU] 
                                                             >> 0x14U)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     ((~ 
                                                       (((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[6U] 
                                                           >> 0x14U)) 
                                                         | (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xaU] 
                                                             >> 0x14U))) 
                                                        & (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xeU] 
                                                            >> 0x14U)))) 
                                                      & (~ 
                                                         ((~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[6U] 
                                                            >> 0x14U)) 
                                                          & (~ 
                                                             (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xaU] 
                                                              >> 0x14U))))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b84__05d__02ecolumn0__DOT__Cout 
        = __Vtemp_1;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b84__05d__02ecolumn0__DOT__wc293 
        = (1U & ((IData)((1U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b84__05d__02ecolumn0__DOT__S)))) 
                 & (IData)((2U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b84__05d__02ecolumn0__DOT__S))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_43 = (7U & 
                                               (~ (
                                                   (4U 
                                                    & (((~ (IData)(
                                                                   (0x28U 
                                                                    == 
                                                                    (0x28U 
                                                                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b84__05d__02ecolumn0__DOT__Cout))))) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x28U 
                                                                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b84__05d__02ecolumn0__DOT__Cout))))) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((~ 
                                                            (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b84__05d__02ecolumn0__DOT__S) 
                                                              >> 3U) 
                                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b84__05d__02ecolumn0__DOT__Cout) 
                                                                >> 4U))) 
                                                           << 1U) 
                                                          & ((0x3ffffffeU 
                                                              & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b84__05d__02ecolumn0__DOT__S) 
                                                                 >> 2U)) 
                                                             | (0x1ffffffeU 
                                                                & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b84__05d__02ecolumn0__DOT__Cout) 
                                                                   >> 3U))))) 
                                                      | (1U 
                                                         & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b84__05d__02ecolumn0__DOT__wc293) 
                                                             | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b84__05d__02ecolumn0__DOT__S) 
                                                                >> 2U)) 
                                                            & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b84__05d__02ecolumn0__DOT__wc293)) 
                                                               | (~ 
                                                                  ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b84__05d__02ecolumn0__DOT__S) 
                                                                   >> 2U)))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b21__05d__02erow_1__DOT__wc3408 
        = (1U & (((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_43)) 
                  | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b21__05d__02erow_1__DOT__n_523)) 
                 & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b21__05d__02erow_1__DOT__n_523)) 
                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_43))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b21__05d__02erow_1__DOT__wc3329 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_43) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b21__05d__02erow_1__DOT__n_523));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_word__05b21__05d__02eword__x 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_42) 
            << 2U) | (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_43) 
                            >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Out_reg__DOT__wc6394 
        = (1U & ((~ ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b21__05d__02erow_1__DOT__wc3408)) 
                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525))) 
                 & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525) 
                    | (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b21__05d__02episo_1.b)))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__93(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__93\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b88__05d__02ecolumn0__DOT__S 
        = ((8U & ((~ ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b88__05d__02ecolumn0__DOT__n_21) 
                          & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b88__05d__02ecolumn0__DOT__Cout) 
                             >> 2U))) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b88__05d__02ecolumn0__DOT__n_21) 
                                         | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b88__05d__02ecolumn0__DOT__Cout) 
                                            >> 2U)))) 
                  << 3U)) | ((4U & ((~ (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x16U] 
                                          >> 0x18U) 
                                         | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x12U] 
                                               >> 0x18U))) 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x12U] 
                                            >> 0x18U) 
                                           | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x16U] 
                                                 >> 0x18U))))) 
                                    << 2U)) | ((2U 
                                                & ((~ 
                                                    (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b88__05d__02ecolumn0__DOT__wc299) 
                                                      | (~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1aU] 
                                                          >> 0x18U))) 
                                                     & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b88__05d__02ecolumn0__DOT__wc299)) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1aU] 
                                                           >> 0x18U)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b88__05d__02ecolumn0__DOT__wc297) 
                                                       | (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[6U] 
                                                           >> 0x18U))) 
                                                      & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b88__05d__02ecolumn0__DOT__wc297)) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[6U] 
                                                            >> 0x18U))))))));
    __Vtemp_1 = ((0x20U & (((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b88__05d__02ecolumn0__DOT__S) 
                                >> 3U)) << 5U) | (0xffffffe0U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b88__05d__02ecolumn0__DOT__Cout) 
                                                     << 1U)))) 
                 | ((0x10U & ((~ (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b88__05d__02ecolumn0__DOT__S) 
                                   | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b88__05d__02ecolumn0__DOT__S) 
                                      >> 2U)) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b88__05d__02ecolumn0__DOT__S) 
                                                 >> 1U))) 
                              << 4U)) | ((8U & ((~ 
                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b88__05d__02ecolumn0__DOT__n_74) 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b88__05d__02ecolumn0__DOT__n_75))) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_col__05b88__05d__02ecolumn0__a))))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ 
                                                    ((~ 
                                                      (((~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1aU] 
                                                          >> 0x18U)) 
                                                        | (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1eU] 
                                                            >> 0x18U))) 
                                                       & (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[2U] 
                                                           >> 0x18U)))) 
                                                     & (~ 
                                                        ((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1aU] 
                                                           >> 0x18U)) 
                                                         & (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1eU] 
                                                             >> 0x18U)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     ((~ 
                                                       (((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[6U] 
                                                           >> 0x18U)) 
                                                         | (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xaU] 
                                                             >> 0x18U))) 
                                                        & (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xeU] 
                                                            >> 0x18U)))) 
                                                      & (~ 
                                                         ((~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[6U] 
                                                            >> 0x18U)) 
                                                          & (~ 
                                                             (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xaU] 
                                                              >> 0x18U))))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b88__05d__02ecolumn0__DOT__Cout 
        = __Vtemp_1;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b88__05d__02ecolumn0__DOT__wc293 
        = (1U & ((IData)((1U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b88__05d__02ecolumn0__DOT__S)))) 
                 & (IData)((2U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b88__05d__02ecolumn0__DOT__S))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_45 = (7U & 
                                               (~ (
                                                   (4U 
                                                    & (((~ (IData)(
                                                                   (0x28U 
                                                                    == 
                                                                    (0x28U 
                                                                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b88__05d__02ecolumn0__DOT__Cout))))) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x28U 
                                                                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b88__05d__02ecolumn0__DOT__Cout))))) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((~ 
                                                            (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b88__05d__02ecolumn0__DOT__S) 
                                                              >> 3U) 
                                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b88__05d__02ecolumn0__DOT__Cout) 
                                                                >> 4U))) 
                                                           << 1U) 
                                                          & ((0x3ffffffeU 
                                                              & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b88__05d__02ecolumn0__DOT__S) 
                                                                 >> 2U)) 
                                                             | (0x1ffffffeU 
                                                                & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b88__05d__02ecolumn0__DOT__Cout) 
                                                                   >> 3U))))) 
                                                      | (1U 
                                                         & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b88__05d__02ecolumn0__DOT__wc293) 
                                                             | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b88__05d__02ecolumn0__DOT__S) 
                                                                >> 2U)) 
                                                            & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b88__05d__02ecolumn0__DOT__wc293)) 
                                                               | (~ 
                                                                  ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b88__05d__02ecolumn0__DOT__S) 
                                                                   >> 2U)))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b22__05d__02erow_1__DOT__wc3549 
        = (1U & (((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_45)) 
                  | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b22__05d__02erow_1__DOT__n_523)) 
                 & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b22__05d__02erow_1__DOT__n_523)) 
                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_45))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b22__05d__02erow_1__DOT__wc3470 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_45) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b22__05d__02erow_1__DOT__n_523));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_word__05b22__05d__02eword__x 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_44) 
            << 2U) | (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_45) 
                            >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Out_reg__DOT__wc6451 
        = (1U & ((~ ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b22__05d__02erow_1__DOT__wc3549)) 
                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525))) 
                 & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525) 
                    | (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b22__05d__02episo_1.b)))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__94(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__94\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b92__05d__02ecolumn0__DOT__S 
        = ((8U & ((~ ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b92__05d__02ecolumn0__DOT__n_21) 
                          & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b92__05d__02ecolumn0__DOT__Cout) 
                             >> 2U))) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b92__05d__02ecolumn0__DOT__n_21) 
                                         | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b92__05d__02ecolumn0__DOT__Cout) 
                                            >> 2U)))) 
                  << 3U)) | ((4U & ((~ (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x16U] 
                                          >> 0x1cU) 
                                         | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x12U] 
                                               >> 0x1cU))) 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x12U] 
                                            >> 0x1cU) 
                                           | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x16U] 
                                                 >> 0x1cU))))) 
                                    << 2U)) | ((2U 
                                                & ((~ 
                                                    (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b92__05d__02ecolumn0__DOT__wc299) 
                                                      | (~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1aU] 
                                                          >> 0x1cU))) 
                                                     & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b92__05d__02ecolumn0__DOT__wc299)) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1aU] 
                                                           >> 0x1cU)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b92__05d__02ecolumn0__DOT__wc297) 
                                                       | (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[6U] 
                                                           >> 0x1cU))) 
                                                      & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b92__05d__02ecolumn0__DOT__wc297)) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[6U] 
                                                            >> 0x1cU))))))));
    __Vtemp_1 = ((0x20U & (((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b92__05d__02ecolumn0__DOT__S) 
                                >> 3U)) << 5U) | (0xffffffe0U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b92__05d__02ecolumn0__DOT__Cout) 
                                                     << 1U)))) 
                 | ((0x10U & ((~ (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b92__05d__02ecolumn0__DOT__S) 
                                   | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b92__05d__02ecolumn0__DOT__S) 
                                      >> 2U)) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b92__05d__02ecolumn0__DOT__S) 
                                                 >> 1U))) 
                              << 4U)) | ((8U & ((~ 
                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b92__05d__02ecolumn0__DOT__n_74) 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b92__05d__02ecolumn0__DOT__n_75))) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_col__05b92__05d__02ecolumn0__a))))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ 
                                                    ((~ 
                                                      (((~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1aU] 
                                                          >> 0x1cU)) 
                                                        | (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1eU] 
                                                            >> 0x1cU))) 
                                                       & (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[2U] 
                                                           >> 0x1cU)))) 
                                                     & (~ 
                                                        ((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1aU] 
                                                           >> 0x1cU)) 
                                                         & (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1eU] 
                                                             >> 0x1cU)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     ((~ 
                                                       (((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[6U] 
                                                           >> 0x1cU)) 
                                                         | (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xaU] 
                                                             >> 0x1cU))) 
                                                        & (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xeU] 
                                                            >> 0x1cU)))) 
                                                      & (~ 
                                                         ((~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[6U] 
                                                            >> 0x1cU)) 
                                                          & (~ 
                                                             (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xaU] 
                                                              >> 0x1cU))))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b92__05d__02ecolumn0__DOT__Cout 
        = __Vtemp_1;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b92__05d__02ecolumn0__DOT__wc293 
        = (1U & ((IData)((1U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b92__05d__02ecolumn0__DOT__S)))) 
                 & (IData)((2U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b92__05d__02ecolumn0__DOT__S))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_47 = (7U & 
                                               (~ (
                                                   (4U 
                                                    & (((~ (IData)(
                                                                   (0x28U 
                                                                    == 
                                                                    (0x28U 
                                                                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b92__05d__02ecolumn0__DOT__Cout))))) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x28U 
                                                                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b92__05d__02ecolumn0__DOT__Cout))))) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((~ 
                                                            (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b92__05d__02ecolumn0__DOT__S) 
                                                              >> 3U) 
                                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b92__05d__02ecolumn0__DOT__Cout) 
                                                                >> 4U))) 
                                                           << 1U) 
                                                          & ((0x3ffffffeU 
                                                              & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b92__05d__02ecolumn0__DOT__S) 
                                                                 >> 2U)) 
                                                             | (0x1ffffffeU 
                                                                & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b92__05d__02ecolumn0__DOT__Cout) 
                                                                   >> 3U))))) 
                                                      | (1U 
                                                         & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b92__05d__02ecolumn0__DOT__wc293) 
                                                             | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b92__05d__02ecolumn0__DOT__S) 
                                                                >> 2U)) 
                                                            & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b92__05d__02ecolumn0__DOT__wc293)) 
                                                               | (~ 
                                                                  ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b92__05d__02ecolumn0__DOT__S) 
                                                                   >> 2U)))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b23__05d__02erow_1__DOT__wc3690 
        = (1U & (((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_47)) 
                  | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b23__05d__02erow_1__DOT__n_523)) 
                 & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b23__05d__02erow_1__DOT__n_523)) 
                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_47))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b23__05d__02erow_1__DOT__wc3611 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_47) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b23__05d__02erow_1__DOT__n_523));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_word__05b23__05d__02eword__x 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_46) 
            << 2U) | (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_47) 
                            >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Out_reg__DOT__wc6507 
        = (1U & ((~ ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b23__05d__02erow_1__DOT__wc3690)) 
                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525))) 
                 & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525) 
                    | (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b23__05d__02episo_1.b)))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__95(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__95\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b96__05d__02ecolumn0__DOT__S 
        = ((8U & ((~ ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b96__05d__02ecolumn0__DOT__n_21) 
                          & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b96__05d__02ecolumn0__DOT__Cout) 
                             >> 2U))) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b96__05d__02ecolumn0__DOT__n_21) 
                                         | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b96__05d__02ecolumn0__DOT__Cout) 
                                            >> 2U)))) 
                  << 3U)) | ((4U & ((~ ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x17U] 
                                         | (~ vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x13U])) 
                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x13U] 
                                           | (~ vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x17U])))) 
                                    << 2U)) | ((2U 
                                                & ((~ 
                                                    (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b96__05d__02ecolumn0__DOT__wc299) 
                                                      | (~ 
                                                         vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1bU])) 
                                                     & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b96__05d__02ecolumn0__DOT__wc299)) 
                                                        | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1bU]))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b96__05d__02ecolumn0__DOT__wc297) 
                                                       | (~ 
                                                          vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[7U])) 
                                                      & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b96__05d__02ecolumn0__DOT__wc297)) 
                                                         | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[7U])))))));
    __Vtemp_1 = ((0x20U & (((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b96__05d__02ecolumn0__DOT__S) 
                                >> 3U)) << 5U) | (0xffffffe0U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b96__05d__02ecolumn0__DOT__Cout) 
                                                     << 1U)))) 
                 | ((0x10U & ((~ (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b96__05d__02ecolumn0__DOT__S) 
                                   | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b96__05d__02ecolumn0__DOT__S) 
                                      >> 2U)) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b96__05d__02ecolumn0__DOT__S) 
                                                 >> 1U))) 
                              << 4U)) | ((8U & ((~ 
                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b96__05d__02ecolumn0__DOT__n_74) 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b96__05d__02ecolumn0__DOT__n_75))) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_col__05b96__05d__02ecolumn0__a))))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ 
                                                    ((~ 
                                                      (((~ 
                                                         vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1bU]) 
                                                        | (~ 
                                                           vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1fU])) 
                                                       & (~ 
                                                          vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[3U]))) 
                                                     & (~ 
                                                        ((~ 
                                                          vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1bU]) 
                                                         & (~ 
                                                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1fU]))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     ((~ 
                                                       (((~ 
                                                          vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[7U]) 
                                                         | (~ 
                                                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xbU])) 
                                                        & (~ 
                                                           vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xfU]))) 
                                                      & (~ 
                                                         ((~ 
                                                           vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[7U]) 
                                                          & (~ 
                                                             vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xbU])))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b96__05d__02ecolumn0__DOT__Cout 
        = __Vtemp_1;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b96__05d__02ecolumn0__DOT__wc293 
        = (1U & ((IData)((1U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b96__05d__02ecolumn0__DOT__S)))) 
                 & (IData)((2U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b96__05d__02ecolumn0__DOT__S))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_49 = (7U & 
                                               (~ (
                                                   (4U 
                                                    & (((~ (IData)(
                                                                   (0x28U 
                                                                    == 
                                                                    (0x28U 
                                                                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b96__05d__02ecolumn0__DOT__Cout))))) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x28U 
                                                                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b96__05d__02ecolumn0__DOT__Cout))))) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((~ 
                                                            (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b96__05d__02ecolumn0__DOT__S) 
                                                              >> 3U) 
                                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b96__05d__02ecolumn0__DOT__Cout) 
                                                                >> 4U))) 
                                                           << 1U) 
                                                          & ((0x3ffffffeU 
                                                              & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b96__05d__02ecolumn0__DOT__S) 
                                                                 >> 2U)) 
                                                             | (0x1ffffffeU 
                                                                & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b96__05d__02ecolumn0__DOT__Cout) 
                                                                   >> 3U))))) 
                                                      | (1U 
                                                         & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b96__05d__02ecolumn0__DOT__wc293) 
                                                             | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b96__05d__02ecolumn0__DOT__S) 
                                                                >> 2U)) 
                                                            & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b96__05d__02ecolumn0__DOT__wc293)) 
                                                               | (~ 
                                                                  ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b96__05d__02ecolumn0__DOT__S) 
                                                                   >> 2U)))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b24__05d__02erow_1__DOT__wc3831 
        = (1U & (((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_49)) 
                  | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b24__05d__02erow_1__DOT__n_523)) 
                 & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b24__05d__02erow_1__DOT__n_523)) 
                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_49))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b24__05d__02erow_1__DOT__wc3752 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_49) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b24__05d__02erow_1__DOT__n_523));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_word__05b24__05d__02eword__x 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_48) 
            << 2U) | (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_49) 
                            >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Out_reg__DOT__wc6565 
        = (1U & ((~ ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b24__05d__02erow_1__DOT__wc3831)) 
                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525))) 
                 & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525) 
                    | (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b24__05d__02episo_1.b)))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__96(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__96\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b100__05d__02ecolumn0__DOT__S 
        = ((8U & ((~ ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b100__05d__02ecolumn0__DOT__n_21) 
                          & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b100__05d__02ecolumn0__DOT__Cout) 
                             >> 2U))) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b100__05d__02ecolumn0__DOT__n_21) 
                                         | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b100__05d__02ecolumn0__DOT__Cout) 
                                            >> 2U)))) 
                  << 3U)) | ((4U & ((~ (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x17U] 
                                          >> 4U) | 
                                         (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x13U] 
                                             >> 4U))) 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x13U] 
                                            >> 4U) 
                                           | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x17U] 
                                                 >> 4U))))) 
                                    << 2U)) | ((2U 
                                                & ((~ 
                                                    (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b100__05d__02ecolumn0__DOT__wc299) 
                                                      | (~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1bU] 
                                                          >> 4U))) 
                                                     & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b100__05d__02ecolumn0__DOT__wc299)) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1bU] 
                                                           >> 4U)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b100__05d__02ecolumn0__DOT__wc297) 
                                                       | (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[7U] 
                                                           >> 4U))) 
                                                      & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b100__05d__02ecolumn0__DOT__wc297)) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[7U] 
                                                            >> 4U))))))));
    __Vtemp_1 = ((0x20U & (((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b100__05d__02ecolumn0__DOT__S) 
                                >> 3U)) << 5U) | (0xffffffe0U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b100__05d__02ecolumn0__DOT__Cout) 
                                                     << 1U)))) 
                 | ((0x10U & ((~ (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b100__05d__02ecolumn0__DOT__S) 
                                   | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b100__05d__02ecolumn0__DOT__S) 
                                      >> 2U)) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b100__05d__02ecolumn0__DOT__S) 
                                                 >> 1U))) 
                              << 4U)) | ((8U & ((~ 
                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b100__05d__02ecolumn0__DOT__n_74) 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b100__05d__02ecolumn0__DOT__n_75))) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_col__05b100__05d__02ecolumn0__a))))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ 
                                                    ((~ 
                                                      (((~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1bU] 
                                                          >> 4U)) 
                                                        | (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1fU] 
                                                            >> 4U))) 
                                                       & (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[3U] 
                                                           >> 4U)))) 
                                                     & (~ 
                                                        ((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1bU] 
                                                           >> 4U)) 
                                                         & (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1fU] 
                                                             >> 4U)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     ((~ 
                                                       (((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[7U] 
                                                           >> 4U)) 
                                                         | (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xbU] 
                                                             >> 4U))) 
                                                        & (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xfU] 
                                                            >> 4U)))) 
                                                      & (~ 
                                                         ((~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[7U] 
                                                            >> 4U)) 
                                                          & (~ 
                                                             (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xbU] 
                                                              >> 4U))))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b100__05d__02ecolumn0__DOT__Cout 
        = __Vtemp_1;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b100__05d__02ecolumn0__DOT__wc293 
        = (1U & ((IData)((1U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b100__05d__02ecolumn0__DOT__S)))) 
                 & (IData)((2U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b100__05d__02ecolumn0__DOT__S))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_51 = (7U & 
                                               (~ (
                                                   (4U 
                                                    & (((~ (IData)(
                                                                   (0x28U 
                                                                    == 
                                                                    (0x28U 
                                                                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b100__05d__02ecolumn0__DOT__Cout))))) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x28U 
                                                                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b100__05d__02ecolumn0__DOT__Cout))))) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((~ 
                                                            (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b100__05d__02ecolumn0__DOT__S) 
                                                              >> 3U) 
                                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b100__05d__02ecolumn0__DOT__Cout) 
                                                                >> 4U))) 
                                                           << 1U) 
                                                          & ((0x3ffffffeU 
                                                              & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b100__05d__02ecolumn0__DOT__S) 
                                                                 >> 2U)) 
                                                             | (0x1ffffffeU 
                                                                & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b100__05d__02ecolumn0__DOT__Cout) 
                                                                   >> 3U))))) 
                                                      | (1U 
                                                         & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b100__05d__02ecolumn0__DOT__wc293) 
                                                             | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b100__05d__02ecolumn0__DOT__S) 
                                                                >> 2U)) 
                                                            & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b100__05d__02ecolumn0__DOT__wc293)) 
                                                               | (~ 
                                                                  ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b100__05d__02ecolumn0__DOT__S) 
                                                                   >> 2U)))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b25__05d__02erow_1__DOT__wc3972 
        = (1U & (((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_51)) 
                  | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b25__05d__02erow_1__DOT__n_523)) 
                 & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b25__05d__02erow_1__DOT__n_523)) 
                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_51))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b25__05d__02erow_1__DOT__wc3893 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_51) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b25__05d__02erow_1__DOT__n_523));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_word__05b25__05d__02eword__x 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_50) 
            << 2U) | (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_51) 
                            >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Out_reg__DOT__wc6621 
        = (1U & ((~ ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b25__05d__02erow_1__DOT__wc3972)) 
                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525))) 
                 & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525) 
                    | (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b25__05d__02episo_1.b)))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__97(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__97\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b104__05d__02ecolumn0__DOT__S 
        = ((8U & ((~ ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b104__05d__02ecolumn0__DOT__n_21) 
                          & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b104__05d__02ecolumn0__DOT__Cout) 
                             >> 2U))) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b104__05d__02ecolumn0__DOT__n_21) 
                                         | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b104__05d__02ecolumn0__DOT__Cout) 
                                            >> 2U)))) 
                  << 3U)) | ((4U & ((~ (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x17U] 
                                          >> 8U) | 
                                         (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x13U] 
                                             >> 8U))) 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x13U] 
                                            >> 8U) 
                                           | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x17U] 
                                                 >> 8U))))) 
                                    << 2U)) | ((2U 
                                                & ((~ 
                                                    (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b104__05d__02ecolumn0__DOT__wc299) 
                                                      | (~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1bU] 
                                                          >> 8U))) 
                                                     & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b104__05d__02ecolumn0__DOT__wc299)) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1bU] 
                                                           >> 8U)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b104__05d__02ecolumn0__DOT__wc297) 
                                                       | (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[7U] 
                                                           >> 8U))) 
                                                      & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b104__05d__02ecolumn0__DOT__wc297)) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[7U] 
                                                            >> 8U))))))));
    __Vtemp_1 = ((0x20U & (((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b104__05d__02ecolumn0__DOT__S) 
                                >> 3U)) << 5U) | (0xffffffe0U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b104__05d__02ecolumn0__DOT__Cout) 
                                                     << 1U)))) 
                 | ((0x10U & ((~ (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b104__05d__02ecolumn0__DOT__S) 
                                   | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b104__05d__02ecolumn0__DOT__S) 
                                      >> 2U)) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b104__05d__02ecolumn0__DOT__S) 
                                                 >> 1U))) 
                              << 4U)) | ((8U & ((~ 
                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b104__05d__02ecolumn0__DOT__n_74) 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b104__05d__02ecolumn0__DOT__n_75))) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_col__05b104__05d__02ecolumn0__a))))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ 
                                                    ((~ 
                                                      (((~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1bU] 
                                                          >> 8U)) 
                                                        | (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1fU] 
                                                            >> 8U))) 
                                                       & (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[3U] 
                                                           >> 8U)))) 
                                                     & (~ 
                                                        ((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1bU] 
                                                           >> 8U)) 
                                                         & (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1fU] 
                                                             >> 8U)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     ((~ 
                                                       (((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[7U] 
                                                           >> 8U)) 
                                                         | (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xbU] 
                                                             >> 8U))) 
                                                        & (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xfU] 
                                                            >> 8U)))) 
                                                      & (~ 
                                                         ((~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[7U] 
                                                            >> 8U)) 
                                                          & (~ 
                                                             (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xbU] 
                                                              >> 8U))))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b104__05d__02ecolumn0__DOT__Cout 
        = __Vtemp_1;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b104__05d__02ecolumn0__DOT__wc293 
        = (1U & ((IData)((1U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b104__05d__02ecolumn0__DOT__S)))) 
                 & (IData)((2U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b104__05d__02ecolumn0__DOT__S))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_53 = (7U & 
                                               (~ (
                                                   (4U 
                                                    & (((~ (IData)(
                                                                   (0x28U 
                                                                    == 
                                                                    (0x28U 
                                                                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b104__05d__02ecolumn0__DOT__Cout))))) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x28U 
                                                                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b104__05d__02ecolumn0__DOT__Cout))))) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((~ 
                                                            (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b104__05d__02ecolumn0__DOT__S) 
                                                              >> 3U) 
                                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b104__05d__02ecolumn0__DOT__Cout) 
                                                                >> 4U))) 
                                                           << 1U) 
                                                          & ((0x3ffffffeU 
                                                              & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b104__05d__02ecolumn0__DOT__S) 
                                                                 >> 2U)) 
                                                             | (0x1ffffffeU 
                                                                & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b104__05d__02ecolumn0__DOT__Cout) 
                                                                   >> 3U))))) 
                                                      | (1U 
                                                         & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b104__05d__02ecolumn0__DOT__wc293) 
                                                             | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b104__05d__02ecolumn0__DOT__S) 
                                                                >> 2U)) 
                                                            & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b104__05d__02ecolumn0__DOT__wc293)) 
                                                               | (~ 
                                                                  ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b104__05d__02ecolumn0__DOT__S) 
                                                                   >> 2U)))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b26__05d__02erow_1__DOT__wc4113 
        = (1U & (((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_53)) 
                  | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b26__05d__02erow_1__DOT__n_523)) 
                 & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b26__05d__02erow_1__DOT__n_523)) 
                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_53))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b26__05d__02erow_1__DOT__wc4034 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_53) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b26__05d__02erow_1__DOT__n_523));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_word__05b26__05d__02eword__x 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_52) 
            << 2U) | (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_53) 
                            >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Out_reg__DOT__wc6679 
        = (1U & ((~ ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b26__05d__02erow_1__DOT__wc4113)) 
                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525))) 
                 & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525) 
                    | (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b26__05d__02episo_1.b)))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__98(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__98\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b108__05d__02ecolumn0__DOT__S 
        = ((8U & ((~ ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b108__05d__02ecolumn0__DOT__n_21) 
                          & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b108__05d__02ecolumn0__DOT__Cout) 
                             >> 2U))) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b108__05d__02ecolumn0__DOT__n_21) 
                                         | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b108__05d__02ecolumn0__DOT__Cout) 
                                            >> 2U)))) 
                  << 3U)) | ((4U & ((~ (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x17U] 
                                          >> 0xcU) 
                                         | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x13U] 
                                               >> 0xcU))) 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x13U] 
                                            >> 0xcU) 
                                           | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x17U] 
                                                 >> 0xcU))))) 
                                    << 2U)) | ((2U 
                                                & ((~ 
                                                    (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b108__05d__02ecolumn0__DOT__wc299) 
                                                      | (~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1bU] 
                                                          >> 0xcU))) 
                                                     & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b108__05d__02ecolumn0__DOT__wc299)) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1bU] 
                                                           >> 0xcU)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b108__05d__02ecolumn0__DOT__wc297) 
                                                       | (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[7U] 
                                                           >> 0xcU))) 
                                                      & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b108__05d__02ecolumn0__DOT__wc297)) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[7U] 
                                                            >> 0xcU))))))));
    __Vtemp_1 = ((0x20U & (((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b108__05d__02ecolumn0__DOT__S) 
                                >> 3U)) << 5U) | (0xffffffe0U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b108__05d__02ecolumn0__DOT__Cout) 
                                                     << 1U)))) 
                 | ((0x10U & ((~ (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b108__05d__02ecolumn0__DOT__S) 
                                   | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b108__05d__02ecolumn0__DOT__S) 
                                      >> 2U)) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b108__05d__02ecolumn0__DOT__S) 
                                                 >> 1U))) 
                              << 4U)) | ((8U & ((~ 
                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b108__05d__02ecolumn0__DOT__n_74) 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b108__05d__02ecolumn0__DOT__n_75))) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_col__05b108__05d__02ecolumn0__a))))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ 
                                                    ((~ 
                                                      (((~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1bU] 
                                                          >> 0xcU)) 
                                                        | (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1fU] 
                                                            >> 0xcU))) 
                                                       & (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[3U] 
                                                           >> 0xcU)))) 
                                                     & (~ 
                                                        ((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1bU] 
                                                           >> 0xcU)) 
                                                         & (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1fU] 
                                                             >> 0xcU)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     ((~ 
                                                       (((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[7U] 
                                                           >> 0xcU)) 
                                                         | (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xbU] 
                                                             >> 0xcU))) 
                                                        & (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xfU] 
                                                            >> 0xcU)))) 
                                                      & (~ 
                                                         ((~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[7U] 
                                                            >> 0xcU)) 
                                                          & (~ 
                                                             (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xbU] 
                                                              >> 0xcU))))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b108__05d__02ecolumn0__DOT__Cout 
        = __Vtemp_1;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b108__05d__02ecolumn0__DOT__wc293 
        = (1U & ((IData)((1U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b108__05d__02ecolumn0__DOT__S)))) 
                 & (IData)((2U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b108__05d__02ecolumn0__DOT__S))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_55 = (7U & 
                                               (~ (
                                                   (4U 
                                                    & (((~ (IData)(
                                                                   (0x28U 
                                                                    == 
                                                                    (0x28U 
                                                                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b108__05d__02ecolumn0__DOT__Cout))))) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x28U 
                                                                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b108__05d__02ecolumn0__DOT__Cout))))) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((~ 
                                                            (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b108__05d__02ecolumn0__DOT__S) 
                                                              >> 3U) 
                                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b108__05d__02ecolumn0__DOT__Cout) 
                                                                >> 4U))) 
                                                           << 1U) 
                                                          & ((0x3ffffffeU 
                                                              & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b108__05d__02ecolumn0__DOT__S) 
                                                                 >> 2U)) 
                                                             | (0x1ffffffeU 
                                                                & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b108__05d__02ecolumn0__DOT__Cout) 
                                                                   >> 3U))))) 
                                                      | (1U 
                                                         & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b108__05d__02ecolumn0__DOT__wc293) 
                                                             | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b108__05d__02ecolumn0__DOT__S) 
                                                                >> 2U)) 
                                                            & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b108__05d__02ecolumn0__DOT__wc293)) 
                                                               | (~ 
                                                                  ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b108__05d__02ecolumn0__DOT__S) 
                                                                   >> 2U)))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b27__05d__02erow_1__DOT__wc4254 
        = (1U & (((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_55)) 
                  | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b27__05d__02erow_1__DOT__n_523)) 
                 & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b27__05d__02erow_1__DOT__n_523)) 
                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_55))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b27__05d__02erow_1__DOT__wc4175 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_55) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b27__05d__02erow_1__DOT__n_523));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_word__05b27__05d__02eword__x 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_54) 
            << 2U) | (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_55) 
                            >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Out_reg__DOT__wc6734 
        = (1U & ((~ ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b27__05d__02erow_1__DOT__wc4254)) 
                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525))) 
                 & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525) 
                    | (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b27__05d__02episo_1.b)))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__99(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__99\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b112__05d__02ecolumn0__DOT__S 
        = ((8U & ((~ ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b112__05d__02ecolumn0__DOT__n_21) 
                          & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b112__05d__02ecolumn0__DOT__Cout) 
                             >> 2U))) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b112__05d__02ecolumn0__DOT__n_21) 
                                         | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b112__05d__02ecolumn0__DOT__Cout) 
                                            >> 2U)))) 
                  << 3U)) | ((4U & ((~ (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x17U] 
                                          >> 0x10U) 
                                         | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x13U] 
                                               >> 0x10U))) 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x13U] 
                                            >> 0x10U) 
                                           | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x17U] 
                                                 >> 0x10U))))) 
                                    << 2U)) | ((2U 
                                                & ((~ 
                                                    (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b112__05d__02ecolumn0__DOT__wc299) 
                                                      | (~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1bU] 
                                                          >> 0x10U))) 
                                                     & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b112__05d__02ecolumn0__DOT__wc299)) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1bU] 
                                                           >> 0x10U)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b112__05d__02ecolumn0__DOT__wc297) 
                                                       | (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[7U] 
                                                           >> 0x10U))) 
                                                      & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b112__05d__02ecolumn0__DOT__wc297)) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[7U] 
                                                            >> 0x10U))))))));
    __Vtemp_1 = ((0x20U & (((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b112__05d__02ecolumn0__DOT__S) 
                                >> 3U)) << 5U) | (0xffffffe0U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b112__05d__02ecolumn0__DOT__Cout) 
                                                     << 1U)))) 
                 | ((0x10U & ((~ (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b112__05d__02ecolumn0__DOT__S) 
                                   | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b112__05d__02ecolumn0__DOT__S) 
                                      >> 2U)) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b112__05d__02ecolumn0__DOT__S) 
                                                 >> 1U))) 
                              << 4U)) | ((8U & ((~ 
                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b112__05d__02ecolumn0__DOT__n_74) 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b112__05d__02ecolumn0__DOT__n_75))) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_col__05b112__05d__02ecolumn0__a))))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ 
                                                    ((~ 
                                                      (((~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1bU] 
                                                          >> 0x10U)) 
                                                        | (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1fU] 
                                                            >> 0x10U))) 
                                                       & (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[3U] 
                                                           >> 0x10U)))) 
                                                     & (~ 
                                                        ((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1bU] 
                                                           >> 0x10U)) 
                                                         & (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1fU] 
                                                             >> 0x10U)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     ((~ 
                                                       (((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[7U] 
                                                           >> 0x10U)) 
                                                         | (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xbU] 
                                                             >> 0x10U))) 
                                                        & (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xfU] 
                                                            >> 0x10U)))) 
                                                      & (~ 
                                                         ((~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[7U] 
                                                            >> 0x10U)) 
                                                          & (~ 
                                                             (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xbU] 
                                                              >> 0x10U))))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b112__05d__02ecolumn0__DOT__Cout 
        = __Vtemp_1;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b112__05d__02ecolumn0__DOT__wc293 
        = (1U & ((IData)((1U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b112__05d__02ecolumn0__DOT__S)))) 
                 & (IData)((2U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b112__05d__02ecolumn0__DOT__S))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_57 = (7U & 
                                               (~ (
                                                   (4U 
                                                    & (((~ (IData)(
                                                                   (0x28U 
                                                                    == 
                                                                    (0x28U 
                                                                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b112__05d__02ecolumn0__DOT__Cout))))) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x28U 
                                                                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b112__05d__02ecolumn0__DOT__Cout))))) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((~ 
                                                            (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b112__05d__02ecolumn0__DOT__S) 
                                                              >> 3U) 
                                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b112__05d__02ecolumn0__DOT__Cout) 
                                                                >> 4U))) 
                                                           << 1U) 
                                                          & ((0x3ffffffeU 
                                                              & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b112__05d__02ecolumn0__DOT__S) 
                                                                 >> 2U)) 
                                                             | (0x1ffffffeU 
                                                                & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b112__05d__02ecolumn0__DOT__Cout) 
                                                                   >> 3U))))) 
                                                      | (1U 
                                                         & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b112__05d__02ecolumn0__DOT__wc293) 
                                                             | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b112__05d__02ecolumn0__DOT__S) 
                                                                >> 2U)) 
                                                            & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b112__05d__02ecolumn0__DOT__wc293)) 
                                                               | (~ 
                                                                  ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b112__05d__02ecolumn0__DOT__S) 
                                                                   >> 2U)))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b28__05d__02erow_1__DOT__wc4395 
        = (1U & (((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_57)) 
                  | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b28__05d__02erow_1__DOT__n_523)) 
                 & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b28__05d__02erow_1__DOT__n_523)) 
                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_57))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b28__05d__02erow_1__DOT__wc4316 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_57) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b28__05d__02erow_1__DOT__n_523));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_word__05b28__05d__02eword__x 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_56) 
            << 2U) | (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_57) 
                            >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Out_reg__DOT__wc6794 
        = (1U & ((~ ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b28__05d__02erow_1__DOT__wc4395)) 
                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525))) 
                 & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525) 
                    | (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b28__05d__02episo_1.b)))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__100(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__100\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b116__05d__02ecolumn0__DOT__S 
        = ((8U & ((~ ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b116__05d__02ecolumn0__DOT__n_21) 
                          & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b116__05d__02ecolumn0__DOT__Cout) 
                             >> 2U))) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b116__05d__02ecolumn0__DOT__n_21) 
                                         | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b116__05d__02ecolumn0__DOT__Cout) 
                                            >> 2U)))) 
                  << 3U)) | ((4U & ((~ (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x17U] 
                                          >> 0x14U) 
                                         | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x13U] 
                                               >> 0x14U))) 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x13U] 
                                            >> 0x14U) 
                                           | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x17U] 
                                                 >> 0x14U))))) 
                                    << 2U)) | ((2U 
                                                & ((~ 
                                                    (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b116__05d__02ecolumn0__DOT__wc299) 
                                                      | (~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1bU] 
                                                          >> 0x14U))) 
                                                     & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b116__05d__02ecolumn0__DOT__wc299)) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1bU] 
                                                           >> 0x14U)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b116__05d__02ecolumn0__DOT__wc297) 
                                                       | (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[7U] 
                                                           >> 0x14U))) 
                                                      & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b116__05d__02ecolumn0__DOT__wc297)) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[7U] 
                                                            >> 0x14U))))))));
    __Vtemp_1 = ((0x20U & (((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b116__05d__02ecolumn0__DOT__S) 
                                >> 3U)) << 5U) | (0xffffffe0U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b116__05d__02ecolumn0__DOT__Cout) 
                                                     << 1U)))) 
                 | ((0x10U & ((~ (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b116__05d__02ecolumn0__DOT__S) 
                                   | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b116__05d__02ecolumn0__DOT__S) 
                                      >> 2U)) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b116__05d__02ecolumn0__DOT__S) 
                                                 >> 1U))) 
                              << 4U)) | ((8U & ((~ 
                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b116__05d__02ecolumn0__DOT__n_74) 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b116__05d__02ecolumn0__DOT__n_75))) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_col__05b116__05d__02ecolumn0__a))))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ 
                                                    ((~ 
                                                      (((~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1bU] 
                                                          >> 0x14U)) 
                                                        | (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1fU] 
                                                            >> 0x14U))) 
                                                       & (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[3U] 
                                                           >> 0x14U)))) 
                                                     & (~ 
                                                        ((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1bU] 
                                                           >> 0x14U)) 
                                                         & (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1fU] 
                                                             >> 0x14U)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     ((~ 
                                                       (((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[7U] 
                                                           >> 0x14U)) 
                                                         | (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xbU] 
                                                             >> 0x14U))) 
                                                        & (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xfU] 
                                                            >> 0x14U)))) 
                                                      & (~ 
                                                         ((~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[7U] 
                                                            >> 0x14U)) 
                                                          & (~ 
                                                             (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xbU] 
                                                              >> 0x14U))))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b116__05d__02ecolumn0__DOT__Cout 
        = __Vtemp_1;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b116__05d__02ecolumn0__DOT__wc293 
        = (1U & ((IData)((1U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b116__05d__02ecolumn0__DOT__S)))) 
                 & (IData)((2U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b116__05d__02ecolumn0__DOT__S))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_59 = (7U & 
                                               (~ (
                                                   (4U 
                                                    & (((~ (IData)(
                                                                   (0x28U 
                                                                    == 
                                                                    (0x28U 
                                                                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b116__05d__02ecolumn0__DOT__Cout))))) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x28U 
                                                                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b116__05d__02ecolumn0__DOT__Cout))))) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((~ 
                                                            (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b116__05d__02ecolumn0__DOT__S) 
                                                              >> 3U) 
                                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b116__05d__02ecolumn0__DOT__Cout) 
                                                                >> 4U))) 
                                                           << 1U) 
                                                          & ((0x3ffffffeU 
                                                              & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b116__05d__02ecolumn0__DOT__S) 
                                                                 >> 2U)) 
                                                             | (0x1ffffffeU 
                                                                & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b116__05d__02ecolumn0__DOT__Cout) 
                                                                   >> 3U))))) 
                                                      | (1U 
                                                         & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b116__05d__02ecolumn0__DOT__wc293) 
                                                             | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b116__05d__02ecolumn0__DOT__S) 
                                                                >> 2U)) 
                                                            & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b116__05d__02ecolumn0__DOT__wc293)) 
                                                               | (~ 
                                                                  ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b116__05d__02ecolumn0__DOT__S) 
                                                                   >> 2U)))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b29__05d__02erow_1__DOT__wc4536 
        = (1U & (((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_59)) 
                  | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b29__05d__02erow_1__DOT__n_523)) 
                 & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b29__05d__02erow_1__DOT__n_523)) 
                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_59))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b29__05d__02erow_1__DOT__wc4457 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_59) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b29__05d__02erow_1__DOT__n_523));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_word__05b29__05d__02eword__x 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_58) 
            << 2U) | (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_59) 
                            >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Out_reg__DOT__wc6850 
        = (1U & ((~ ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b29__05d__02erow_1__DOT__wc4536)) 
                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525))) 
                 & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525) 
                    | (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b29__05d__02episo_1.b)))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__101(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__101\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b120__05d__02ecolumn0__DOT__S 
        = ((8U & ((~ ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b120__05d__02ecolumn0__DOT__n_21) 
                          & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b120__05d__02ecolumn0__DOT__Cout) 
                             >> 2U))) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b120__05d__02ecolumn0__DOT__n_21) 
                                         | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b120__05d__02ecolumn0__DOT__Cout) 
                                            >> 2U)))) 
                  << 3U)) | ((4U & ((~ (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x17U] 
                                          >> 0x18U) 
                                         | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x13U] 
                                               >> 0x18U))) 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x13U] 
                                            >> 0x18U) 
                                           | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x17U] 
                                                 >> 0x18U))))) 
                                    << 2U)) | ((2U 
                                                & ((~ 
                                                    (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b120__05d__02ecolumn0__DOT__wc299) 
                                                      | (~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1bU] 
                                                          >> 0x18U))) 
                                                     & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b120__05d__02ecolumn0__DOT__wc299)) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1bU] 
                                                           >> 0x18U)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b120__05d__02ecolumn0__DOT__wc297) 
                                                       | (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[7U] 
                                                           >> 0x18U))) 
                                                      & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b120__05d__02ecolumn0__DOT__wc297)) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[7U] 
                                                            >> 0x18U))))))));
    __Vtemp_1 = ((0x20U & (((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b120__05d__02ecolumn0__DOT__S) 
                                >> 3U)) << 5U) | (0xffffffe0U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b120__05d__02ecolumn0__DOT__Cout) 
                                                     << 1U)))) 
                 | ((0x10U & ((~ (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b120__05d__02ecolumn0__DOT__S) 
                                   | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b120__05d__02ecolumn0__DOT__S) 
                                      >> 2U)) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b120__05d__02ecolumn0__DOT__S) 
                                                 >> 1U))) 
                              << 4U)) | ((8U & ((~ 
                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b120__05d__02ecolumn0__DOT__n_74) 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b120__05d__02ecolumn0__DOT__n_75))) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_col__05b120__05d__02ecolumn0__a))))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ 
                                                    ((~ 
                                                      (((~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1bU] 
                                                          >> 0x18U)) 
                                                        | (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1fU] 
                                                            >> 0x18U))) 
                                                       & (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[3U] 
                                                           >> 0x18U)))) 
                                                     & (~ 
                                                        ((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1bU] 
                                                           >> 0x18U)) 
                                                         & (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1fU] 
                                                             >> 0x18U)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     ((~ 
                                                       (((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[7U] 
                                                           >> 0x18U)) 
                                                         | (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xbU] 
                                                             >> 0x18U))) 
                                                        & (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xfU] 
                                                            >> 0x18U)))) 
                                                      & (~ 
                                                         ((~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[7U] 
                                                            >> 0x18U)) 
                                                          & (~ 
                                                             (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xbU] 
                                                              >> 0x18U))))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b120__05d__02ecolumn0__DOT__Cout 
        = __Vtemp_1;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b120__05d__02ecolumn0__DOT__wc293 
        = (1U & ((IData)((1U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b120__05d__02ecolumn0__DOT__S)))) 
                 & (IData)((2U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b120__05d__02ecolumn0__DOT__S))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_61 = (7U & 
                                               (~ (
                                                   (4U 
                                                    & (((~ (IData)(
                                                                   (0x28U 
                                                                    == 
                                                                    (0x28U 
                                                                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b120__05d__02ecolumn0__DOT__Cout))))) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x28U 
                                                                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b120__05d__02ecolumn0__DOT__Cout))))) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((~ 
                                                            (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b120__05d__02ecolumn0__DOT__S) 
                                                              >> 3U) 
                                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b120__05d__02ecolumn0__DOT__Cout) 
                                                                >> 4U))) 
                                                           << 1U) 
                                                          & ((0x3ffffffeU 
                                                              & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b120__05d__02ecolumn0__DOT__S) 
                                                                 >> 2U)) 
                                                             | (0x1ffffffeU 
                                                                & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b120__05d__02ecolumn0__DOT__Cout) 
                                                                   >> 3U))))) 
                                                      | (1U 
                                                         & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b120__05d__02ecolumn0__DOT__wc293) 
                                                             | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b120__05d__02ecolumn0__DOT__S) 
                                                                >> 2U)) 
                                                            & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b120__05d__02ecolumn0__DOT__wc293)) 
                                                               | (~ 
                                                                  ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b120__05d__02ecolumn0__DOT__S) 
                                                                   >> 2U)))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b30__05d__02erow_1__DOT__wc4677 
        = (1U & (((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_61)) 
                  | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b30__05d__02erow_1__DOT__n_523)) 
                 & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b30__05d__02erow_1__DOT__n_523)) 
                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_61))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b30__05d__02erow_1__DOT__wc4598 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_61) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b30__05d__02erow_1__DOT__n_523));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_word__05b30__05d__02eword__x 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_60) 
            << 2U) | (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_61) 
                            >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Out_reg__DOT__wc4972 
        = (1U & ((~ ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b30__05d__02erow_1__DOT__wc4677)) 
                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525))) 
                 & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525) 
                    | (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b30__05d__02episo_1.b)))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__102(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__102\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b124__05d__02ecolumn0__DOT__S 
        = ((8U & ((~ ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b124__05d__02ecolumn0__DOT__n_21) 
                          & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b124__05d__02ecolumn0__DOT__Cout) 
                             >> 2U))) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b124__05d__02ecolumn0__DOT__n_21) 
                                         | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b124__05d__02ecolumn0__DOT__Cout) 
                                            >> 2U)))) 
                  << 3U)) | ((4U & ((~ (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x17U] 
                                          >> 0x1cU) 
                                         | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x13U] 
                                               >> 0x1cU))) 
                                        & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x13U] 
                                            >> 0x1cU) 
                                           | (~ (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x17U] 
                                                 >> 0x1cU))))) 
                                    << 2U)) | ((2U 
                                                & ((~ 
                                                    (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b124__05d__02ecolumn0__DOT__wc299) 
                                                      | (~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1bU] 
                                                          >> 0x1cU))) 
                                                     & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b124__05d__02ecolumn0__DOT__wc299)) 
                                                        | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1bU] 
                                                           >> 0x1cU)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b124__05d__02ecolumn0__DOT__wc297) 
                                                       | (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[7U] 
                                                           >> 0x1cU))) 
                                                      & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b124__05d__02ecolumn0__DOT__wc297)) 
                                                         | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[7U] 
                                                            >> 0x1cU))))))));
    __Vtemp_1 = ((0x20U & (((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b124__05d__02ecolumn0__DOT__S) 
                                >> 3U)) << 5U) | (0xffffffe0U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b124__05d__02ecolumn0__DOT__Cout) 
                                                     << 1U)))) 
                 | ((0x10U & ((~ (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b124__05d__02ecolumn0__DOT__S) 
                                   | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b124__05d__02ecolumn0__DOT__S) 
                                      >> 2U)) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b124__05d__02ecolumn0__DOT__S) 
                                                 >> 1U))) 
                              << 4U)) | ((8U & ((~ 
                                                 ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b124__05d__02ecolumn0__DOT__n_74) 
                                                  & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b124__05d__02ecolumn0__DOT__n_75))) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_col__05b124__05d__02ecolumn0__a))))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ 
                                                    ((~ 
                                                      (((~ 
                                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1bU] 
                                                          >> 0x1cU)) 
                                                        | (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1fU] 
                                                            >> 0x1cU))) 
                                                       & (~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[3U] 
                                                           >> 0x1cU)))) 
                                                     & (~ 
                                                        ((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1bU] 
                                                           >> 0x1cU)) 
                                                         & (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0x1fU] 
                                                             >> 0x1cU)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     ((~ 
                                                       (((~ 
                                                          (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[7U] 
                                                           >> 0x1cU)) 
                                                         | (~ 
                                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xbU] 
                                                             >> 0x1cU))) 
                                                        & (~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xfU] 
                                                            >> 0x1cU)))) 
                                                      & (~ 
                                                         ((~ 
                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[7U] 
                                                            >> 0x1cU)) 
                                                          & (~ 
                                                             (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__RBL[0xbU] 
                                                              >> 0x1cU))))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b124__05d__02ecolumn0__DOT__Cout 
        = __Vtemp_1;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b124__05d__02ecolumn0__DOT__wc293 
        = (1U & ((IData)((1U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b124__05d__02ecolumn0__DOT__S)))) 
                 & (IData)((2U != (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b124__05d__02ecolumn0__DOT__S))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_63 = (7U & 
                                               (~ (
                                                   (4U 
                                                    & (((~ (IData)(
                                                                   (0x28U 
                                                                    == 
                                                                    (0x28U 
                                                                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b124__05d__02ecolumn0__DOT__Cout))))) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x28U 
                                                                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b124__05d__02ecolumn0__DOT__Cout))))) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((~ 
                                                            (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b124__05d__02ecolumn0__DOT__S) 
                                                              >> 3U) 
                                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b124__05d__02ecolumn0__DOT__Cout) 
                                                                >> 4U))) 
                                                           << 1U) 
                                                          & ((0x3ffffffeU 
                                                              & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b124__05d__02ecolumn0__DOT__S) 
                                                                 >> 2U)) 
                                                             | (0x1ffffffeU 
                                                                & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b124__05d__02ecolumn0__DOT__Cout) 
                                                                   >> 3U))))) 
                                                      | (1U 
                                                         & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b124__05d__02ecolumn0__DOT__wc293) 
                                                             | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b124__05d__02ecolumn0__DOT__S) 
                                                                >> 2U)) 
                                                            & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b124__05d__02ecolumn0__DOT__wc293)) 
                                                               | (~ 
                                                                  ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_col__05b124__05d__02ecolumn0__DOT__S) 
                                                                   >> 2U)))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b31__05d__02erow_1__DOT__wc4818 
        = (1U & (((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_63)) 
                  | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b31__05d__02erow_1__DOT__n_523)) 
                 & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b31__05d__02erow_1__DOT__n_523)) 
                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_63))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b31__05d__02erow_1__DOT__wc4739 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_63) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b31__05d__02erow_1__DOT__n_523));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT____Vcellinp__gen_word__05b31__05d__02eword__x 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_62) 
            << 2U) | (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_63) 
                            >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Out_reg__DOT__wc4957 
        = (1U & ((~ ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b31__05d__02erow_1__DOT__wc4818)) 
                     & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525))) 
                 & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b0__05d__02erow_1__DOT__n_525) 
                    | (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_snax_core_0_acc_0_snax_dream__DOT__i_snax_dream_shell_wrapper__DOT__i_snax_dream_pe__DOT__Top1__DOT__Accumlation__DOT__gen_piso__05b31__05d__02episo_1.b)))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__167(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__167\n"); );
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = (((1U > (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
            & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_reqs__BRA__0__KET____DOT__i_ft_reg__DOT__empty))) 
           << 1U);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__171(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__171\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    QData/*63:0*/ __Vtemp_2;
    CData/*31:0*/ __Vtemp_7;
    QData/*63:0*/ __Vtemp_8;
    // Body
    if (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__state_q) {
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__state_d = 1U;
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[0U] 
            = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_q[0U];
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U] 
            = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_q[1U];
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[2U] 
            = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_q[2U];
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[0U] = 0U;
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[1U] = 0U;
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[2U] = 0U;
        if (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__state_q) {
            if (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_aw_chan__ax_ready_i) {
                if ((0U == (0xffU & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_q[1U] 
                                      << 3U) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_q[0U] 
                                                >> 0x1dU))))) {
                    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__state_d = 0U;
                }
                if ((0U != (0xffU & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_q[1U] 
                                      << 3U) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_q[0U] 
                                                >> 0x1dU))))) {
                    __Vtemp_1 = (0xffU & (((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U] 
                                            << 3U) 
                                           | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[0U] 
                                              >> 0x1dU)) 
                                          - (IData)(1U)));
                    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[0U] 
                        = ((0x1fffffffU & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[0U]) 
                           | ((((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U] 
                                 << 3U) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[0U] 
                                           >> 0x1dU)) 
                               - (IData)(1U)) << 0x1dU));
                    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U] 
                        = ((0xffffffe0U & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U]) 
                           | (__Vtemp_1 >> 3U));
                    if ((1U == (3U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_q[0U] 
                                      >> 0x18U)))) {
                        __Vtemp_2 = (0xffffffffffffULL 
                                     & ((((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[2U])) 
                                          << 0x3bU) 
                                         | (((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[2U])) 
                                             << 0x1bU) 
                                            | ((QData)((IData)(
                                                               vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U])) 
                                               >> 5U))) 
                                        + (1ULL << 
                                           (7U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_q[0U] 
                                                  >> 0x1aU)))));
                        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U] 
                            = ((0x1fU & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U]) 
                               | ((IData)((0xffffffffffffULL 
                                           & ((((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[2U])) 
                                                << 0x3bU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[2U])) 
                                                   << 0x1bU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U])) 
                                                     >> 5U))) 
                                              + (1ULL 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_q[0U] 
                                                     >> 0x1aU)))))) 
                                  << 5U));
                        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[2U] 
                            = ((0xe00000U & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[2U]) 
                               | (0xffffffU & (((IData)(__Vtemp_2) 
                                                >> 0x1bU) 
                                               | ((IData)(
                                                          (__Vtemp_2 
                                                           >> 0x20U)) 
                                                  << 5U))));
                    }
                }
            }
            vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[0U] 
                = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_q[0U];
            vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[1U] 
                = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_q[1U];
            vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[2U] 
                = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_q[2U];
            vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[0U] 
                = (0x1fffffffU & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[0U]);
            vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[1U] 
                = (0xffffffe0U & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[1U]);
        }
    } else {
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__state_d = 0U;
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[0U] 
            = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_q[0U];
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U] 
            = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_q[1U];
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[2U] 
            = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_q[2U];
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[0U] = 0U;
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[1U] = 0U;
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[2U] = 0U;
        if (((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x14U] 
              >> 0x19U) & (IData)(vlSymsp->TOP__testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters.alloc_gnt_o))) {
            if ((0U != (0xffU & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                 >> 0x17U)))) {
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__state_d = 1U;
            }
            if ((0U == (0xffU & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                 >> 0x17U)))) {
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[0U] 
                    = ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                        << 6U) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x14U] 
                                  >> 0x1aU));
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[1U] 
                    = ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x16U] 
                        << 6U) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                  >> 0x1aU));
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[2U] 
                    = (0xffffffU & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
                                     << 6U) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x16U] 
                                               >> 0x1aU)));
            } else {
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[0U] 
                    = ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                        << 6U) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x14U] 
                                  >> 0x1aU));
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U] 
                    = ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x16U] 
                        << 6U) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                  >> 0x1aU));
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[2U] 
                    = (0xffffffU & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
                                     << 6U) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x16U] 
                                               >> 0x1aU)));
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[0U] 
                    = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[0U];
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[1U] 
                    = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U];
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[2U] 
                    = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[2U];
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[0U] 
                    = (0x1fffffffU & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[0U]);
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[1U] 
                    = (0xffffffe0U & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[1U]);
                if (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_aw_chan__ax_ready_i) {
                    __Vtemp_7 = (0xffU & (((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U] 
                                            << 3U) 
                                           | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[0U] 
                                              >> 0x1dU)) 
                                          - (IData)(1U)));
                    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[0U] 
                        = ((0x1fffffffU & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[0U]) 
                           | ((((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U] 
                                 << 3U) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[0U] 
                                           >> 0x1dU)) 
                               - (IData)(1U)) << 0x1dU));
                    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U] 
                        = ((0xffffffe0U & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U]) 
                           | (__Vtemp_7 >> 3U));
                    if ((1U == (3U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[0U] 
                                      >> 0x18U)))) {
                        __Vtemp_8 = (0xffffffffffffULL 
                                     & ((((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[2U])) 
                                          << 0x3bU) 
                                         | (((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[2U])) 
                                             << 0x1bU) 
                                            | ((QData)((IData)(
                                                               vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U])) 
                                               >> 5U))) 
                                        + (1ULL << 
                                           (7U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[0U] 
                                                  >> 0x1aU)))));
                        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U] 
                            = ((0x1fU & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U]) 
                               | ((IData)((0xffffffffffffULL 
                                           & ((((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[2U])) 
                                                << 0x3bU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[2U])) 
                                                   << 0x1bU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U])) 
                                                     >> 5U))) 
                                              + (1ULL 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[0U] 
                                                     >> 0x1aU)))))) 
                                  << 5U));
                        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[2U] 
                            = ((0xe00000U & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[2U]) 
                               | (0xffffffU & (((IData)(__Vtemp_8) 
                                                >> 0x1bU) 
                                               | ((IData)(
                                                          (__Vtemp_8 
                                                           >> 0x20U)) 
                                                  << 5U))));
                    }
                }
            }
        }
    }
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__cnt_alloc_req = 0U;
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_ready_o = 0U;
    if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__state_q)))) {
        if (((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x14U] 
              >> 0x19U) & (IData)(vlSymsp->TOP__testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters.alloc_gnt_o))) {
            if ((0U == (0xffU & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                 >> 0x17U)))) {
                if (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_aw_chan__ax_ready_i) {
                    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__cnt_alloc_req = 1U;
                    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_ready_o = 1U;
                }
            } else {
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__cnt_alloc_req = 1U;
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_ready_o = 1U;
            }
        }
    }
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__172(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__172\n"); );
    // Init
    QData/*63:0*/ __Vtemp_2;
    QData/*63:0*/ __Vtemp_8;
    // Body
    if (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__state_q) {
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__state_d = 1U;
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
            = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[0U];
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[1U] 
            = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[1U];
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U] 
            = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[2U];
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[0U] = 0U;
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[1U] = 0U;
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[2U] = 0U;
        if (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__state_q) {
            if (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_ar_chan__ax_ready_i) {
                if ((0U == (0xffU & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[0U] 
                                     >> 0x17U)))) {
                    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__state_d = 0U;
                }
                if ((0U != (0xffU & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[0U] 
                                     >> 0x17U)))) {
                    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                        = ((0x807fffffU & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U]) 
                           | (0x7f800000U & ((((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                                                << 9U) 
                                               | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                                                  >> 0x17U)) 
                                              - (IData)(1U)) 
                                             << 0x17U)));
                    if ((1U == (3U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[0U] 
                                      >> 0x12U)))) {
                        __Vtemp_2 = (0xffffffffffffULL 
                                     & ((((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U])) 
                                          << 0x21U) 
                                         | (((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[1U])) 
                                             << 1U) 
                                            | ((QData)((IData)(
                                                               vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U])) 
                                               >> 0x1fU))) 
                                        + (1ULL << 
                                           (7U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[0U] 
                                                  >> 0x14U)))));
                        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                            = ((0x7fffffffU & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U]) 
                               | ((IData)((0xffffffffffffULL 
                                           & ((((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U])) 
                                                << 0x21U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[1U])) 
                                                   << 1U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U])) 
                                                     >> 0x1fU))) 
                                              + (1ULL 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[0U] 
                                                     >> 0x14U)))))) 
                                  << 0x1fU));
                        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[1U] 
                            = (((IData)(__Vtemp_2) 
                                >> 1U) | ((IData)((__Vtemp_2 
                                                   >> 0x20U)) 
                                          << 0x1fU));
                        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U] 
                            = ((0x38000U & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U]) 
                               | (0x3ffffU & ((IData)(
                                                      (__Vtemp_2 
                                                       >> 0x20U)) 
                                              >> 1U)));
                    }
                }
            }
            vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[0U] 
                = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[0U];
            vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[1U] 
                = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[1U];
            vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[2U] 
                = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[2U];
            vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[0U] 
                = (0x807fffffU & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[0U]);
        }
    } else {
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__state_d = 0U;
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
            = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[0U];
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[1U] 
            = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[1U];
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U] 
            = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[2U];
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[0U] = 0U;
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[1U] = 0U;
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[2U] = 0U;
        if (((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
              >> 1U) & (IData)(vlSymsp->TOP__testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters.alloc_gnt_o))) {
            if ((0U != (0xffU & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                  << 7U) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                            >> 0x19U))))) {
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__state_d = 1U;
            }
            if ((0U == (0xffU & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                  << 7U) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                            >> 0x19U))))) {
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[0U] 
                    = ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                        << 0x1eU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                     >> 2U));
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[1U] 
                    = ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
                        << 0x1eU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                     >> 2U));
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[2U] 
                    = (0x3ffffU & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
                                   >> 2U));
            } else {
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                    = ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                        << 0x1eU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                     >> 2U));
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[1U] 
                    = ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
                        << 0x1eU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                     >> 2U));
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U] 
                    = (0x3ffffU & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
                                   >> 2U));
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[0U] 
                    = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U];
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[1U] 
                    = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[1U];
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[2U] 
                    = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U];
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[0U] 
                    = (0x807fffffU & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[0U]);
                if (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_ar_chan__ax_ready_i) {
                    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                        = ((0x807fffffU & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U]) 
                           | (0x7f800000U & ((((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                                                << 9U) 
                                               | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                                                  >> 0x17U)) 
                                              - (IData)(1U)) 
                                             << 0x17U)));
                    if ((1U == (3U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                                      >> 0x12U)))) {
                        __Vtemp_8 = (0xffffffffffffULL 
                                     & ((((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U])) 
                                          << 0x21U) 
                                         | (((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[1U])) 
                                             << 1U) 
                                            | ((QData)((IData)(
                                                               vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U])) 
                                               >> 0x1fU))) 
                                        + (1ULL << 
                                           (7U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                                                  >> 0x14U)))));
                        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                            = ((0x7fffffffU & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U]) 
                               | ((IData)((0xffffffffffffULL 
                                           & ((((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U])) 
                                                << 0x21U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[1U])) 
                                                   << 1U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U])) 
                                                     >> 0x1fU))) 
                                              + (1ULL 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                                                     >> 0x14U)))))) 
                                  << 0x1fU));
                        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[1U] 
                            = (((IData)(__Vtemp_8) 
                                >> 1U) | ((IData)((__Vtemp_8 
                                                   >> 0x20U)) 
                                          << 0x1fU));
                        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U] 
                            = ((0x38000U & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U]) 
                               | (0x3ffffU & ((IData)(
                                                      (__Vtemp_8 
                                                       >> 0x20U)) 
                                              >> 1U)));
                    }
                }
            }
        }
    }
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__cnt_alloc_req = 0U;
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_ready_o = 0U;
    if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__state_q)))) {
        if (((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
              >> 1U) & (IData)(vlSymsp->TOP__testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters.alloc_gnt_o))) {
            if ((0U == (0xffU & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                  << 7U) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                            >> 0x19U))))) {
                if (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_ar_chan__ax_ready_i) {
                    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__cnt_alloc_req = 1U;
                    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_ready_o = 1U;
                }
            } else {
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__cnt_alloc_req = 1U;
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_ready_o = 1U;
            }
        }
    }
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__173(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__173\n"); );
    // Body
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_valid_o = 0U;
    if (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__state_q) {
        if (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__state_q) {
            vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_valid_o = 1U;
        }
    } else if (((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x14U] 
                 >> 0x19U) & (IData)(vlSymsp->TOP__testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters.alloc_gnt_o))) {
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_valid_o = 1U;
    }
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__174(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__174\n"); );
    // Body
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_valid_o = 0U;
    if (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__state_q) {
        if (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__state_q) {
            vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_valid_o = 1U;
        }
    } else if (((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                 >> 1U) & (IData)(vlSymsp->TOP__testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters.alloc_gnt_o))) {
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_valid_o = 1U;
    }
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__175(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__175\n"); );
    // Body
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__r_state_d 
        = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__r_state_q;
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__b_state_d 
        = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__b_state_q;
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[0U] 
        = (0xfffffffeU & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[0U]);
    if (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__r_state_q) {
        if (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__r_state_q) {
            if ((1U & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_resp[0x10U] 
                        >> 8U) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U]))) {
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__r_state_d = 0U;
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[0U] 
                    = (1U | vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[0U]);
            }
        }
    } else if ((0x100U & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_resp[0x10U])) {
        if (vlSymsp->TOP__testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters.cnt_gnt_o) {
            if ((1U & (~ vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U]))) {
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__r_state_d = 1U;
            }
            if ((1U & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U])) {
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[0U] 
                    = (1U | vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[0U]);
            }
        }
    }
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U] 
        = (0xffefffffU & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U]);
    if (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__b_state_q) {
        if (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__b_state_q) {
            if ((1U & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_resp[0x10U] 
                        >> 0x10U) & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
                                     >> 0x14U)))) {
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__b_state_d = 0U;
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U] 
                    = (0x100000U | vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U]);
            }
        }
    } else if ((0x10000U & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_resp[0x10U])) {
        if (vlSymsp->TOP__testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters.cnt_gnt_o) {
            if ((0U == (0xffU & (IData)(vlSymsp->TOP__testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters.__PVT__read_len)))) {
                if ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
                              >> 0x14U)))) {
                    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__b_state_d = 1U;
                }
                if ((0x100000U & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U])) {
                    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U] 
                        = (0x100000U | vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U]);
                }
            } else {
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U] 
                    = (0x100000U | vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U]);
            }
        }
    }
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__b_err_d 
        = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__b_err_q;
    if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__b_state_q)))) {
        if ((0x10000U & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_resp[0x10U])) {
            if (vlSymsp->TOP__testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters.cnt_gnt_o) {
                if ((0U == (0xffU & (IData)(vlSymsp->TOP__testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters.__PVT__read_len)))) {
                    if ((1U & (~ (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
                                  >> 0x14U)))) {
                        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__b_err_d 
                            = vlSymsp->TOP__testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters.cnt_err_o;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__176(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__176\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    QData/*63:0*/ __Vtemp_2;
    CData/*31:0*/ __Vtemp_7;
    QData/*63:0*/ __Vtemp_8;
    // Body
    if (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__state_q) {
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__state_d = 1U;
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[0U] 
            = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_q[0U];
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U] 
            = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_q[1U];
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[2U] 
            = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_q[2U];
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[0U] = 0U;
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[1U] = 0U;
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[2U] = 0U;
        if (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__state_q) {
            if (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_aw_chan__ax_ready_i) {
                if ((0U == (0xffU & ((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_q[1U] 
                                      << 3U) | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_q[0U] 
                                                >> 0x1dU))))) {
                    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__state_d = 0U;
                }
                if ((0U != (0xffU & ((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_q[1U] 
                                      << 3U) | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_q[0U] 
                                                >> 0x1dU))))) {
                    __Vtemp_1 = (0xffU & (((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U] 
                                            << 3U) 
                                           | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[0U] 
                                              >> 0x1dU)) 
                                          - (IData)(1U)));
                    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[0U] 
                        = ((0x1fffffffU & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[0U]) 
                           | ((((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U] 
                                 << 3U) | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[0U] 
                                           >> 0x1dU)) 
                               - (IData)(1U)) << 0x1dU));
                    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U] 
                        = ((0xffffffe0U & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U]) 
                           | (__Vtemp_1 >> 3U));
                    if ((1U == (3U & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_q[0U] 
                                      >> 0x18U)))) {
                        __Vtemp_2 = (0xffffffffffffULL 
                                     & ((((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[2U])) 
                                          << 0x3bU) 
                                         | (((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[2U])) 
                                             << 0x1bU) 
                                            | ((QData)((IData)(
                                                               vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U])) 
                                               >> 5U))) 
                                        + (1ULL << 
                                           (7U & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_q[0U] 
                                                  >> 0x1aU)))));
                        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U] 
                            = ((0x1fU & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U]) 
                               | ((IData)((0xffffffffffffULL 
                                           & ((((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[2U])) 
                                                << 0x3bU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[2U])) 
                                                   << 0x1bU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U])) 
                                                     >> 5U))) 
                                              + (1ULL 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_q[0U] 
                                                     >> 0x1aU)))))) 
                                  << 5U));
                        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[2U] 
                            = ((0x1e00000U & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[2U]) 
                               | (0x1ffffffU & (((IData)(__Vtemp_2) 
                                                 >> 0x1bU) 
                                                | ((IData)(
                                                           (__Vtemp_2 
                                                            >> 0x20U)) 
                                                   << 5U))));
                    }
                }
            }
            vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[0U] 
                = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_q[0U];
            vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[1U] 
                = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_q[1U];
            vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[2U] 
                = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_q[2U];
            vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[0U] 
                = (0x1fffffffU & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[0U]);
            vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[1U] 
                = (0xffffffe0U & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[1U]);
        }
    } else {
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__state_d = 0U;
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[0U] 
            = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_q[0U];
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U] 
            = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_q[1U];
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[2U] 
            = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_q[2U];
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[0U] = 0U;
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[1U] = 0U;
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[2U] = 0U;
        if (((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U] 
              >> 2U) & (IData)(vlSymsp->TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters.alloc_gnt_o))) {
            if ((0U != (0xffU & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[6U]))) {
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__state_d = 1U;
            }
            if ((0U == (0xffU & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[6U]))) {
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[0U] 
                    = ((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[6U] 
                        << 0x1dU) | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U] 
                                     >> 3U));
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[1U] 
                    = ((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U] 
                        << 0x1dU) | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[6U] 
                                     >> 3U));
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[2U] 
                    = (0x1ffffffU & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U] 
                                     >> 3U));
            } else {
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[0U] 
                    = ((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[6U] 
                        << 0x1dU) | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U] 
                                     >> 3U));
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U] 
                    = ((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U] 
                        << 0x1dU) | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[6U] 
                                     >> 3U));
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[2U] 
                    = (0x1ffffffU & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U] 
                                     >> 3U));
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[0U] 
                    = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[0U];
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[1U] 
                    = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U];
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[2U] 
                    = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[2U];
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[0U] 
                    = (0x1fffffffU & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[0U]);
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[1U] 
                    = (0xffffffe0U & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_o[1U]);
                if (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_aw_chan__ax_ready_i) {
                    __Vtemp_7 = (0xffU & (((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U] 
                                            << 3U) 
                                           | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[0U] 
                                              >> 0x1dU)) 
                                          - (IData)(1U)));
                    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[0U] 
                        = ((0x1fffffffU & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[0U]) 
                           | ((((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U] 
                                 << 3U) | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[0U] 
                                           >> 0x1dU)) 
                               - (IData)(1U)) << 0x1dU));
                    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U] 
                        = ((0xffffffe0U & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U]) 
                           | (__Vtemp_7 >> 3U));
                    if ((1U == (3U & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[0U] 
                                      >> 0x18U)))) {
                        __Vtemp_8 = (0xffffffffffffULL 
                                     & ((((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[2U])) 
                                          << 0x3bU) 
                                         | (((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[2U])) 
                                             << 0x1bU) 
                                            | ((QData)((IData)(
                                                               vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U])) 
                                               >> 5U))) 
                                        + (1ULL << 
                                           (7U & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[0U] 
                                                  >> 0x1aU)))));
                        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U] 
                            = ((0x1fU & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U]) 
                               | ((IData)((0xffffffffffffULL 
                                           & ((((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[2U])) 
                                                << 0x3bU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[2U])) 
                                                   << 0x1bU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[1U])) 
                                                     >> 5U))) 
                                              + (1ULL 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[0U] 
                                                     >> 0x1aU)))))) 
                                  << 5U));
                        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[2U] 
                            = ((0x1e00000U & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__ax_d[2U]) 
                               | (0x1ffffffU & (((IData)(__Vtemp_8) 
                                                 >> 0x1bU) 
                                                | ((IData)(
                                                           (__Vtemp_8 
                                                            >> 0x20U)) 
                                                   << 5U))));
                    }
                }
            }
        }
    }
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__cnt_alloc_req = 0U;
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_ready_o = 0U;
    if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__state_q)))) {
        if (((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U] 
              >> 2U) & (IData)(vlSymsp->TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters.alloc_gnt_o))) {
            if ((0U == (0xffU & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[6U]))) {
                if (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_aw_chan__ax_ready_i) {
                    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__cnt_alloc_req = 1U;
                    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_ready_o = 1U;
                }
            } else {
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__cnt_alloc_req = 1U;
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_ready_o = 1U;
            }
        }
    }
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__177(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__177\n"); );
    // Init
    QData/*63:0*/ __Vtemp_2;
    QData/*63:0*/ __Vtemp_8;
    // Body
    if (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__state_q) {
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__state_d = 1U;
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
            = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[0U];
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[1U] 
            = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[1U];
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U] 
            = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[2U];
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[0U] = 0U;
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[1U] = 0U;
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[2U] = 0U;
        if (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__state_q) {
            if (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_ar_chan__ax_ready_i) {
                if ((0U == (0xffU & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[0U] 
                                     >> 0x17U)))) {
                    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__state_d = 0U;
                }
                if ((0U != (0xffU & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[0U] 
                                     >> 0x17U)))) {
                    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                        = ((0x807fffffU & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U]) 
                           | (0x7f800000U & ((((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                                                << 9U) 
                                               | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                                                  >> 0x17U)) 
                                              - (IData)(1U)) 
                                             << 0x17U)));
                    if ((1U == (3U & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[0U] 
                                      >> 0x12U)))) {
                        __Vtemp_2 = (0xffffffffffffULL 
                                     & ((((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U])) 
                                          << 0x21U) 
                                         | (((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[1U])) 
                                             << 1U) 
                                            | ((QData)((IData)(
                                                               vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U])) 
                                               >> 0x1fU))) 
                                        + (1ULL << 
                                           (7U & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[0U] 
                                                  >> 0x14U)))));
                        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                            = ((0x7fffffffU & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U]) 
                               | ((IData)((0xffffffffffffULL 
                                           & ((((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U])) 
                                                << 0x21U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[1U])) 
                                                   << 1U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U])) 
                                                     >> 0x1fU))) 
                                              + (1ULL 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[0U] 
                                                     >> 0x14U)))))) 
                                  << 0x1fU));
                        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[1U] 
                            = (((IData)(__Vtemp_2) 
                                >> 1U) | ((IData)((__Vtemp_2 
                                                   >> 0x20U)) 
                                          << 0x1fU));
                        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U] 
                            = ((0x78000U & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U]) 
                               | (0x7ffffU & ((IData)(
                                                      (__Vtemp_2 
                                                       >> 0x20U)) 
                                              >> 1U)));
                    }
                }
            }
            vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[0U] 
                = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[0U];
            vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[1U] 
                = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[1U];
            vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[2U] 
                = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[2U];
            vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[0U] 
                = (0x807fffffU & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[0U]);
        }
    } else {
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__state_d = 0U;
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
            = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[0U];
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[1U] 
            = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[1U];
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U] 
            = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[2U];
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[0U] = 0U;
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[1U] = 0U;
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[2U] = 0U;
        if (((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
              >> 1U) & (IData)(vlSymsp->TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters.alloc_gnt_o))) {
            if ((0U != (0xffU & ((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                  << 7U) | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                            >> 0x19U))))) {
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__state_d = 1U;
            }
            if ((0U == (0xffU & ((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                  << 7U) | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                            >> 0x19U))))) {
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[0U] 
                    = ((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                        << 0x1eU) | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                     >> 2U));
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[1U] 
                    = ((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
                        << 0x1eU) | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                     >> 2U));
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[2U] 
                    = (0x7ffffU & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
                                   >> 2U));
            } else {
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                    = ((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                        << 0x1eU) | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                     >> 2U));
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[1U] 
                    = ((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
                        << 0x1eU) | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                     >> 2U));
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U] 
                    = (0x7ffffU & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
                                   >> 2U));
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[0U] 
                    = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U];
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[1U] 
                    = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[1U];
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[2U] 
                    = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U];
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[0U] 
                    = (0x807fffffU & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[0U]);
                if (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_ar_chan__ax_ready_i) {
                    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                        = ((0x807fffffU & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U]) 
                           | (0x7f800000U & ((((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                                                << 9U) 
                                               | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                                                  >> 0x17U)) 
                                              - (IData)(1U)) 
                                             << 0x17U)));
                    if ((1U == (3U & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                                      >> 0x12U)))) {
                        __Vtemp_8 = (0xffffffffffffULL 
                                     & ((((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U])) 
                                          << 0x21U) 
                                         | (((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[1U])) 
                                             << 1U) 
                                            | ((QData)((IData)(
                                                               vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U])) 
                                               >> 0x1fU))) 
                                        + (1ULL << 
                                           (7U & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                                                  >> 0x14U)))));
                        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                            = ((0x7fffffffU & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U]) 
                               | ((IData)((0xffffffffffffULL 
                                           & ((((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U])) 
                                                << 0x21U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[1U])) 
                                                   << 1U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U])) 
                                                     >> 0x1fU))) 
                                              + (1ULL 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                                                     >> 0x14U)))))) 
                                  << 0x1fU));
                        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[1U] 
                            = (((IData)(__Vtemp_8) 
                                >> 1U) | ((IData)((__Vtemp_8 
                                                   >> 0x20U)) 
                                          << 0x1fU));
                        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U] 
                            = ((0x78000U & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U]) 
                               | (0x7ffffU & ((IData)(
                                                      (__Vtemp_8 
                                                       >> 0x20U)) 
                                              >> 1U)));
                    }
                }
            }
        }
    }
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__cnt_alloc_req = 0U;
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_ready_o = 0U;
    if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__state_q)))) {
        if (((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
              >> 1U) & (IData)(vlSymsp->TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters.alloc_gnt_o))) {
            if ((0U == (0xffU & ((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                  << 7U) | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                            >> 0x19U))))) {
                if (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_ar_chan__ax_ready_i) {
                    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__cnt_alloc_req = 1U;
                    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_ready_o = 1U;
                }
            } else {
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__cnt_alloc_req = 1U;
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_ready_o = 1U;
            }
        }
    }
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__178(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__178\n"); );
    // Body
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_valid_o = 0U;
    if (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__state_q) {
        if (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__state_q) {
            vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_valid_o = 1U;
        }
    } else if (((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U] 
                 >> 2U) & (IData)(vlSymsp->TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters.alloc_gnt_o))) {
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_valid_o = 1U;
    }
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__179(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__179\n"); );
    // Body
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_valid_o = 0U;
    if (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__state_q) {
        if (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__state_q) {
            vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_valid_o = 1U;
        }
    } else if (((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                 >> 1U) & (IData)(vlSymsp->TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters.alloc_gnt_o))) {
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_valid_o = 1U;
    }
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__180(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__180\n"); );
    // Body
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__r_state_d 
        = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__r_state_q;
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__b_state_d 
        = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__b_state_q;
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[0U] 
        = (0xfffffffeU & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[0U]);
    if (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__r_state_q) {
        if (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__r_state_q) {
            if ((1U & ((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_resp[2U] 
                        >> 9U) & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U]))) {
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__r_state_d = 0U;
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[0U] 
                    = (1U | vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[0U]);
            }
        }
    } else if ((0x200U & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_resp[2U])) {
        if (vlSymsp->TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters.cnt_gnt_o) {
            if ((1U & (~ vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U]))) {
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__r_state_d = 1U;
            }
            if ((1U & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U])) {
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[0U] 
                    = (1U | vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[0U]);
            }
        }
    }
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U] 
        = (0xffdfffffU & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U]);
    if (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__b_state_q) {
        if (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__b_state_q) {
            if ((1U & ((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_resp[2U] 
                        >> 0x12U) & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
                                     >> 0x15U)))) {
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__b_state_d = 0U;
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U] 
                    = (0x200000U | vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U]);
            }
        }
    } else if ((0x40000U & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_resp[2U])) {
        if (vlSymsp->TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters.cnt_gnt_o) {
            if ((0U == (0xffU & (IData)(vlSymsp->TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters.__PVT__read_len)))) {
                if ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
                              >> 0x15U)))) {
                    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__b_state_d = 1U;
                }
                if ((0x200000U & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U])) {
                    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U] 
                        = (0x200000U | vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U]);
                }
            } else {
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U] 
                    = (0x200000U | vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U]);
            }
        }
    }
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__b_err_d 
        = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__b_err_q;
    if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__b_state_q)))) {
        if ((0x40000U & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_resp[2U])) {
            if (vlSymsp->TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters.cnt_gnt_o) {
                if ((0U == (0xffU & (IData)(vlSymsp->TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters.__PVT__read_len)))) {
                    if ((1U & (~ (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
                                  >> 0x15U)))) {
                        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__b_err_d 
                            = vlSymsp->TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters.cnt_err_o;
                    }
                }
            }
        }
    }
}

extern const VlWide<74>/*2367:0*/ Vtestharness__ConstPool__CONST_h83e56315_0;
extern const VlWide<19>/*607:0*/ Vtestharness__ConstPool__CONST_h7b108ceb_0;

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__193(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__193\n"); );
    // Init
    VlWide<74>/*2367:0*/ __Vtemp_11;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((((1U <= (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
             & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_reqs__BRA__0__KET____DOT__i_ft_reg__DOT__empty))) 
            << 1U) | (1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_reqs__BRA__0__KET____DOT__i_ft_reg__DOT__empty))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__req_q_valid_flat 
        = (1U & ((~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_reqs__BRA__0__KET____DOT__i_ft_reg__DOT__empty)) 
                 | (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_reqs__BRA__0__KET____DOT__i_ft_reg__DOT__empty))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__arb_outcome 
        = ((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_reqs__BRA__0__KET____DOT__i_ft_reg__DOT__empty) 
           | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q) 
              & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_reqs__BRA__0__KET____DOT__i_ft_reg__DOT__empty))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__arb_outcome) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0U] 
            = (((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[1U] 
                 << 0xcU) | (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0U] 
                                       >> 0x14U))) 
               | ((0x40U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0U] 
                            << 6U)) | (0x3fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0U] 
                                                >> 0x15U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[1U] 
            = ((0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[1U] 
                         >> 0x14U)) | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[2U] 
                                        << 0xcU) | 
                                       (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[1U] 
                                                  >> 0x14U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U] 
            = ((0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[2U] 
                         >> 0x14U)) | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[3U] 
                                        << 0xcU) | 
                                       (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[2U] 
                                                  >> 0x14U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[3U] 
            = ((0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[3U] 
                         >> 0x14U)) | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[4U] 
                                        << 0xcU) | 
                                       (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[3U] 
                                                  >> 0x14U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U] 
            = ((0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[4U] 
                         >> 0x14U)) | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[5U] 
                                        << 0xcU) | 
                                       (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[4U] 
                                                  >> 0x14U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U] 
            = ((0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[5U] 
                         >> 0x14U)) | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[6U] 
                                        << 0xcU) | 
                                       (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[5U] 
                                                  >> 0x14U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[6U] 
            = ((0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[6U] 
                         >> 0x14U)) | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[7U] 
                                        << 0xcU) | 
                                       (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[6U] 
                                                  >> 0x14U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[7U] 
            = ((0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[7U] 
                         >> 0x14U)) | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[8U] 
                                        << 0xcU) | 
                                       (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[7U] 
                                                  >> 0x14U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[8U] 
            = ((0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[8U] 
                         >> 0x14U)) | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[9U] 
                                        << 0xcU) | 
                                       (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[8U] 
                                                  >> 0x14U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[9U] 
            = ((0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[9U] 
                         >> 0x14U)) | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xaU] 
                                        << 0xcU) | 
                                       (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[9U] 
                                                  >> 0x14U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
            = ((0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xaU] 
                         >> 0x14U)) | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xbU] 
                                        << 0xcU) | 
                                       (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xaU] 
                                                  >> 0x14U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
            = ((0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xbU] 
                         >> 0x14U)) | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xcU] 
                                        << 0xcU) | 
                                       (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xbU] 
                                                  >> 0x14U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
            = ((0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xcU] 
                         >> 0x14U)) | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xdU] 
                                        << 0xcU) | 
                                       (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xcU] 
                                                  >> 0x14U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
            = ((0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xdU] 
                         >> 0x14U)) | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xeU] 
                                        << 0xcU) | 
                                       (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xdU] 
                                                  >> 0x14U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
            = ((0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xeU] 
                         >> 0x14U)) | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xfU] 
                                        << 0xcU) | 
                                       (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xeU] 
                                                  >> 0x14U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
            = ((0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xfU] 
                         >> 0x14U)) | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0x10U] 
                                        << 0xcU) | 
                                       (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xfU] 
                                                  >> 0x14U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
            = ((0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0x10U] 
                         >> 0x14U)) | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0x11U] 
                                        << 0xcU) | 
                                       (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0x10U] 
                                                  >> 0x14U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
            = ((0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0x11U] 
                         >> 0x14U)) | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0x12U] 
                                        << 0xcU) | 
                                       (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0x11U] 
                                                  >> 0x14U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
            = (((IData)((0xffffffffffffULL & (((QData)((IData)(
                                                               vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0x14U])) 
                                               << 0x25U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0x13U])) 
                                                  << 5U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0x12U])) 
                                                    >> 0x1bU))))) 
                << 7U) | (0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0x12U] 
                                   >> 0x14U)));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
            = (((IData)((0xffffffffffffULL & (((QData)((IData)(
                                                               vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0x14U])) 
                                               << 0x25U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0x13U])) 
                                                  << 5U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0x12U])) 
                                                    >> 0x1bU))))) 
                >> 0x19U) | ((IData)(((0xffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0x14U])) 
                                           << 0x25U) 
                                          | (((QData)((IData)(
                                                              vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0x13U])) 
                                              << 5U) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0x12U])) 
                                                >> 0x1bU)))) 
                                      >> 0x20U)) << 7U));
    } else {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0U] 
            = (((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[1U] 
                 << 0xcU) | (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0U] 
                                       >> 0x14U))) 
               | ((0x40U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0U] 
                            << 6U)) | (0x3fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0U] 
                                                >> 0x15U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[1U] 
            = ((0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[1U] 
                         >> 0x14U)) | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[2U] 
                                        << 0xcU) | 
                                       (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[1U] 
                                                  >> 0x14U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U] 
            = ((0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[2U] 
                         >> 0x14U)) | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[3U] 
                                        << 0xcU) | 
                                       (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[2U] 
                                                  >> 0x14U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[3U] 
            = ((0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[3U] 
                         >> 0x14U)) | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[4U] 
                                        << 0xcU) | 
                                       (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[3U] 
                                                  >> 0x14U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U] 
            = ((0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[4U] 
                         >> 0x14U)) | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[5U] 
                                        << 0xcU) | 
                                       (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[4U] 
                                                  >> 0x14U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U] 
            = ((0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[5U] 
                         >> 0x14U)) | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[6U] 
                                        << 0xcU) | 
                                       (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[5U] 
                                                  >> 0x14U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[6U] 
            = ((0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[6U] 
                         >> 0x14U)) | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[7U] 
                                        << 0xcU) | 
                                       (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[6U] 
                                                  >> 0x14U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[7U] 
            = ((0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[7U] 
                         >> 0x14U)) | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[8U] 
                                        << 0xcU) | 
                                       (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[7U] 
                                                  >> 0x14U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[8U] 
            = ((0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[8U] 
                         >> 0x14U)) | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[9U] 
                                        << 0xcU) | 
                                       (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[8U] 
                                                  >> 0x14U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[9U] 
            = ((0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[9U] 
                         >> 0x14U)) | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xaU] 
                                        << 0xcU) | 
                                       (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[9U] 
                                                  >> 0x14U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
            = ((0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xaU] 
                         >> 0x14U)) | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xbU] 
                                        << 0xcU) | 
                                       (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xaU] 
                                                  >> 0x14U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
            = ((0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xbU] 
                         >> 0x14U)) | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xcU] 
                                        << 0xcU) | 
                                       (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xbU] 
                                                  >> 0x14U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
            = ((0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xcU] 
                         >> 0x14U)) | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xdU] 
                                        << 0xcU) | 
                                       (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xcU] 
                                                  >> 0x14U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
            = ((0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xdU] 
                         >> 0x14U)) | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xeU] 
                                        << 0xcU) | 
                                       (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xdU] 
                                                  >> 0x14U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
            = ((0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xeU] 
                         >> 0x14U)) | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xfU] 
                                        << 0xcU) | 
                                       (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xeU] 
                                                  >> 0x14U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
            = ((0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xfU] 
                         >> 0x14U)) | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0x10U] 
                                        << 0xcU) | 
                                       (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0xfU] 
                                                  >> 0x14U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
            = ((0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0x10U] 
                         >> 0x14U)) | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0x11U] 
                                        << 0xcU) | 
                                       (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0x10U] 
                                                  >> 0x14U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
            = ((0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0x11U] 
                         >> 0x14U)) | ((vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0x12U] 
                                        << 0xcU) | 
                                       (0xf80U & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0x11U] 
                                                  >> 0x14U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
            = (((IData)((0xffffffffffffULL & (((QData)((IData)(
                                                               vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0x14U])) 
                                               << 0x25U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0x13U])) 
                                                  << 5U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0x12U])) 
                                                    >> 0x1bU))))) 
                << 7U) | (0x7fU & (vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0x12U] 
                                   >> 0x14U)));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
            = (((IData)((0xffffffffffffULL & (((QData)((IData)(
                                                               vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0x14U])) 
                                               << 0x25U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0x13U])) 
                                                  << 5U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0x12U])) 
                                                    >> 0x1bU))))) 
                >> 0x19U) | ((IData)(((0xffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0x14U])) 
                                           << 0x25U) 
                                          | (((QData)((IData)(
                                                              vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0x13U])) 
                                              << 5U) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o[0x12U])) 
                                                >> 0x1bU)))) 
                                      >> 0x20U)) << 7U));
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__in_req[0U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[1U] 
            << 0x1aU) | (0x3fffffeU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                       >> 6U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__in_req[1U] 
        = ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[1U] 
                  >> 6U)) | ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U] 
                              << 0x1aU) | (0x3fffffeU 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                              >> 6U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__in_req[2U] 
        = ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U] 
                  >> 6U)) | ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[3U] 
                              << 0x1aU) | (0x3fffffeU 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                              >> 6U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__in_req[3U] 
        = ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[3U] 
                  >> 6U)) | ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U] 
                              << 0x1aU) | (0x3fffffeU 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                              >> 6U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__in_req[4U] 
        = ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U] 
                  >> 6U)) | ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U] 
                              << 0x1aU) | (0x3fffffeU 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                              >> 6U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__in_req[5U] 
        = ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U] 
                  >> 6U)) | ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[6U] 
                              << 0x1aU) | (0x3fffffeU 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                              >> 6U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__in_req[6U] 
        = ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[6U] 
                  >> 6U)) | ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[7U] 
                              << 0x1aU) | (0x3fffffeU 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                              >> 6U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__in_req[7U] 
        = ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[7U] 
                  >> 6U)) | ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[8U] 
                              << 0x1aU) | (0x3fffffeU 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                              >> 6U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__in_req[8U] 
        = ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[8U] 
                  >> 6U)) | ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[9U] 
                              << 0x1aU) | (0x3fffffeU 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                              >> 6U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__in_req[9U] 
        = ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[9U] 
                  >> 6U)) | ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                              << 0x1aU) | (0x3fffffeU 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                              >> 6U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__in_req[0xaU] 
        = ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                  >> 6U)) | ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                              << 0x1aU) | (0x3fffffeU 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                              >> 6U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__in_req[0xbU] 
        = ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                  >> 6U)) | ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                              << 0x1aU) | (0x3fffffeU 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                              >> 6U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__in_req[0xcU] 
        = ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                  >> 6U)) | ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                              << 0x1aU) | (0x3fffffeU 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                              >> 6U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__in_req[0xdU] 
        = ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                  >> 6U)) | ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                              << 0x1aU) | (0x3fffffeU 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                              >> 6U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__in_req[0xeU] 
        = ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                  >> 6U)) | ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                              << 0x1aU) | (0x3fffffeU 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                              >> 6U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__in_req[0xfU] 
        = ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                  >> 6U)) | ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                              << 0x1aU) | (0x3fffffeU 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                              >> 6U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__in_req[0x10U] 
        = ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                  >> 6U)) | ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                              << 0x1aU) | (0x3fffffeU 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                              >> 6U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__in_req[0x11U] 
        = ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                  >> 6U)) | ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                              << 0x1aU) | (0x3fffffeU 
                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                              >> 6U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__in_req[0x12U] 
        = ((0x7fc0U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                       >> 9U)) | ((0x20U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                            >> 1U)) 
                                  | (1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                           >> 6U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
        = (((~ ((IData)(1U) << (3U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                      >> 0xdU)))) & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o)) 
           | (0xfU & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__req_q_valid_flat) 
                      << (3U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                >> 0xdU)))));
    VL_REPLICATE_WWI(591, __Vtemp_11, vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__in_req, 4U);
    VL_AND_W(74, vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o, Vtestharness__ConstPool__CONST_h83e56315_0, __Vtemp_11);
    if ((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT__unnamedblk2__DOT__i = 8U;
    }
    if ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT__unnamedblk2__DOT__i = 8U;
    }
    if ((4U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT__unnamedblk2__DOT__i = 8U;
    }
    if ((8U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT__unnamedblk2__DOT__i = 8U;
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_req_i[0U] 
        = (((Vtestharness__ConstPool__CONST_h7b108ceb_0[0U] 
             & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0U]) 
            << 1U) | (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_req_i[1U] 
        = (((Vtestharness__ConstPool__CONST_h7b108ceb_0[0U] 
             & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0U]) 
            >> 0x1fU) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[1U] 
                          & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[1U]) 
                         << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_req_i[2U] 
        = (((Vtestharness__ConstPool__CONST_h7b108ceb_0[1U] 
             & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[1U]) 
            >> 0x1fU) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[2U] 
                          & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[2U]) 
                         << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_req_i[3U] 
        = (((Vtestharness__ConstPool__CONST_h7b108ceb_0[2U] 
             & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[2U]) 
            >> 0x1fU) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[3U] 
                          & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[3U]) 
                         << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_req_i[4U] 
        = (((Vtestharness__ConstPool__CONST_h7b108ceb_0[3U] 
             & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[3U]) 
            >> 0x1fU) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[4U] 
                          & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[4U]) 
                         << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_req_i[5U] 
        = (((Vtestharness__ConstPool__CONST_h7b108ceb_0[4U] 
             & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[4U]) 
            >> 0x1fU) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[5U] 
                          & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[5U]) 
                         << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_req_i[6U] 
        = (((Vtestharness__ConstPool__CONST_h7b108ceb_0[5U] 
             & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[5U]) 
            >> 0x1fU) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[6U] 
                          & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[6U]) 
                         << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_req_i[7U] 
        = (((Vtestharness__ConstPool__CONST_h7b108ceb_0[6U] 
             & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[6U]) 
            >> 0x1fU) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[7U] 
                          & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[7U]) 
                         << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_req_i[8U] 
        = (((Vtestharness__ConstPool__CONST_h7b108ceb_0[7U] 
             & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[7U]) 
            >> 0x1fU) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[8U] 
                          & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[8U]) 
                         << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_req_i[9U] 
        = (((Vtestharness__ConstPool__CONST_h7b108ceb_0[8U] 
             & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[8U]) 
            >> 0x1fU) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[9U] 
                          & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[9U]) 
                         << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_req_i[0xaU] 
        = (((Vtestharness__ConstPool__CONST_h7b108ceb_0[9U] 
             & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[9U]) 
            >> 0x1fU) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xaU] 
                          & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0xaU]) 
                         << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_req_i[0xbU] 
        = (((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xaU] 
             & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0xaU]) 
            >> 0x1fU) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xbU] 
                          & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0xbU]) 
                         << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_req_i[0xcU] 
        = (((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xbU] 
             & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0xbU]) 
            >> 0x1fU) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xcU] 
                          & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0xcU]) 
                         << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_req_i[0xdU] 
        = (((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xcU] 
             & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0xcU]) 
            >> 0x1fU) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xdU] 
                          & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0xdU]) 
                         << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_req_i[0xeU] 
        = (((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xdU] 
             & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0xdU]) 
            >> 0x1fU) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xeU] 
                          & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0xeU]) 
                         << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_req_i[0xfU] 
        = (((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xeU] 
             & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0xeU]) 
            >> 0x1fU) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xfU] 
                          & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0xfU]) 
                         << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_req_i[0x10U] 
        = (((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xfU] 
             & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0xfU]) 
            >> 0x1fU) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0x10U] 
                          & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x10U]) 
                         << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_req_i[0x11U] 
        = (((Vtestharness__ConstPool__CONST_h7b108ceb_0[0x10U] 
             & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x10U]) 
            >> 0x1fU) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0x11U] 
                          & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x11U]) 
                         << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_req_i[0x12U] 
        = (((Vtestharness__ConstPool__CONST_h7b108ceb_0[0x11U] 
             & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x11U]) 
            >> 0x1fU) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0x12U] 
                          & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x12U]) 
                         << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_req_i[0U] 
        = (((Vtestharness__ConstPool__CONST_h7b108ceb_0[0U] 
             << 1U) & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x13U] 
                        << 0x12U) | (0x3fffeU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x12U] 
                                                 >> 0xeU)))) 
           | (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o) 
                    >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_req_i[1U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x13U] 
                                >> 0xeU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[1U] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x14U] 
                                                  << 0x12U) 
                                                 | (0x3fffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x13U] 
                                                       >> 0xeU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_req_i[2U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[1U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x14U] 
                                >> 0xeU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[2U] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x15U] 
                                                  << 0x12U) 
                                                 | (0x3fffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x14U] 
                                                       >> 0xeU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_req_i[3U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[2U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x15U] 
                                >> 0xeU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[3U] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x16U] 
                                                  << 0x12U) 
                                                 | (0x3fffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x15U] 
                                                       >> 0xeU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_req_i[4U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[3U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x16U] 
                                >> 0xeU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[4U] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x17U] 
                                                  << 0x12U) 
                                                 | (0x3fffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x16U] 
                                                       >> 0xeU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_req_i[5U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[4U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x17U] 
                                >> 0xeU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[5U] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x18U] 
                                                  << 0x12U) 
                                                 | (0x3fffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x17U] 
                                                       >> 0xeU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_req_i[6U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[5U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x18U] 
                                >> 0xeU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[6U] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x19U] 
                                                  << 0x12U) 
                                                 | (0x3fffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x18U] 
                                                       >> 0xeU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_req_i[7U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[6U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x19U] 
                                >> 0xeU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[7U] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x1aU] 
                                                  << 0x12U) 
                                                 | (0x3fffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x19U] 
                                                       >> 0xeU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_req_i[8U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[7U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x1aU] 
                                >> 0xeU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[8U] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x1bU] 
                                                  << 0x12U) 
                                                 | (0x3fffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x1aU] 
                                                       >> 0xeU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_req_i[9U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[8U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x1bU] 
                                >> 0xeU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[9U] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x1cU] 
                                                  << 0x12U) 
                                                 | (0x3fffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x1bU] 
                                                       >> 0xeU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_req_i[0xaU] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[9U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x1cU] 
                                >> 0xeU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xaU] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x1dU] 
                                                  << 0x12U) 
                                                 | (0x3fffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x1cU] 
                                                       >> 0xeU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_req_i[0xbU] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xaU] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x1dU] 
                                >> 0xeU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xbU] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x1eU] 
                                                  << 0x12U) 
                                                 | (0x3fffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x1dU] 
                                                       >> 0xeU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_req_i[0xcU] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xbU] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x1eU] 
                                >> 0xeU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xcU] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x1fU] 
                                                  << 0x12U) 
                                                 | (0x3fffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x1eU] 
                                                       >> 0xeU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_req_i[0xdU] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xcU] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x1fU] 
                                >> 0xeU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xdU] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x20U] 
                                                  << 0x12U) 
                                                 | (0x3fffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x1fU] 
                                                       >> 0xeU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_req_i[0xeU] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xdU] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x20U] 
                                >> 0xeU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xeU] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x21U] 
                                                  << 0x12U) 
                                                 | (0x3fffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x20U] 
                                                       >> 0xeU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_req_i[0xfU] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xeU] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x21U] 
                                >> 0xeU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xfU] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x22U] 
                                                  << 0x12U) 
                                                 | (0x3fffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x21U] 
                                                       >> 0xeU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_req_i[0x10U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xfU] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x22U] 
                                >> 0xeU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0x10U] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x23U] 
                                                  << 0x12U) 
                                                 | (0x3fffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x22U] 
                                                       >> 0xeU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_req_i[0x11U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0x10U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x23U] 
                                >> 0xeU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0x11U] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x24U] 
                                                  << 0x12U) 
                                                 | (0x3fffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x23U] 
                                                       >> 0xeU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_req_i[0x12U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0x11U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x24U] 
                                >> 0xeU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0x12U] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x25U] 
                                                  << 0x12U) 
                                                 | (0x3fffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x24U] 
                                                       >> 0xeU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_req_i[0U] 
        = (((Vtestharness__ConstPool__CONST_h7b108ceb_0[0U] 
             << 1U) & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x25U] 
                        << 3U) | (6U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x24U] 
                                        >> 0x1dU)))) 
           | (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o) 
                    >> 2U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_req_i[1U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x25U] 
                                >> 0x1dU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[1U] 
                                                << 1U) 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x26U] 
                                                   << 3U) 
                                                  | (6U 
                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x25U] 
                                                        >> 0x1dU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_req_i[2U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[1U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x26U] 
                                >> 0x1dU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[2U] 
                                                << 1U) 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x27U] 
                                                   << 3U) 
                                                  | (6U 
                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x26U] 
                                                        >> 0x1dU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_req_i[3U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[2U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x27U] 
                                >> 0x1dU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[3U] 
                                                << 1U) 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x28U] 
                                                   << 3U) 
                                                  | (6U 
                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x27U] 
                                                        >> 0x1dU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_req_i[4U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[3U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x28U] 
                                >> 0x1dU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[4U] 
                                                << 1U) 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x29U] 
                                                   << 3U) 
                                                  | (6U 
                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x28U] 
                                                        >> 0x1dU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_req_i[5U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[4U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x29U] 
                                >> 0x1dU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[5U] 
                                                << 1U) 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x2aU] 
                                                   << 3U) 
                                                  | (6U 
                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x29U] 
                                                        >> 0x1dU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_req_i[6U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[5U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x2aU] 
                                >> 0x1dU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[6U] 
                                                << 1U) 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x2bU] 
                                                   << 3U) 
                                                  | (6U 
                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x2aU] 
                                                        >> 0x1dU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_req_i[7U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[6U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x2bU] 
                                >> 0x1dU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[7U] 
                                                << 1U) 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x2cU] 
                                                   << 3U) 
                                                  | (6U 
                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x2bU] 
                                                        >> 0x1dU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_req_i[8U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[7U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x2cU] 
                                >> 0x1dU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[8U] 
                                                << 1U) 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x2dU] 
                                                   << 3U) 
                                                  | (6U 
                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x2cU] 
                                                        >> 0x1dU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_req_i[9U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[8U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x2dU] 
                                >> 0x1dU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[9U] 
                                                << 1U) 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x2eU] 
                                                   << 3U) 
                                                  | (6U 
                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x2dU] 
                                                        >> 0x1dU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_req_i[0xaU] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[9U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x2eU] 
                                >> 0x1dU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xaU] 
                                                << 1U) 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x2fU] 
                                                   << 3U) 
                                                  | (6U 
                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x2eU] 
                                                        >> 0x1dU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_req_i[0xbU] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xaU] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x2fU] 
                                >> 0x1dU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xbU] 
                                                << 1U) 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x30U] 
                                                   << 3U) 
                                                  | (6U 
                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x2fU] 
                                                        >> 0x1dU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_req_i[0xcU] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xbU] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x30U] 
                                >> 0x1dU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xcU] 
                                                << 1U) 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x31U] 
                                                   << 3U) 
                                                  | (6U 
                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x30U] 
                                                        >> 0x1dU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_req_i[0xdU] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xcU] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x31U] 
                                >> 0x1dU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xdU] 
                                                << 1U) 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x32U] 
                                                   << 3U) 
                                                  | (6U 
                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x31U] 
                                                        >> 0x1dU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_req_i[0xeU] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xdU] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x32U] 
                                >> 0x1dU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xeU] 
                                                << 1U) 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x33U] 
                                                   << 3U) 
                                                  | (6U 
                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x32U] 
                                                        >> 0x1dU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_req_i[0xfU] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xeU] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x33U] 
                                >> 0x1dU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xfU] 
                                                << 1U) 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x34U] 
                                                   << 3U) 
                                                  | (6U 
                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x33U] 
                                                        >> 0x1dU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_req_i[0x10U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xfU] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x34U] 
                                >> 0x1dU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0x10U] 
                                                << 1U) 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x35U] 
                                                   << 3U) 
                                                  | (6U 
                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x34U] 
                                                        >> 0x1dU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_req_i[0x11U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0x10U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x35U] 
                                >> 0x1dU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0x11U] 
                                                << 1U) 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x36U] 
                                                   << 3U) 
                                                  | (6U 
                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x35U] 
                                                        >> 0x1dU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_req_i[0x12U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0x11U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x36U] 
                                >> 0x1dU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0x12U] 
                                                << 1U) 
                                               & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x37U] 
                                                   << 3U) 
                                                  | (6U 
                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x36U] 
                                                        >> 0x1dU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_req_i[0U] 
        = (((Vtestharness__ConstPool__CONST_h7b108ceb_0[0U] 
             << 1U) & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x38U] 
                        << 0x14U) | (0xffffeU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x37U] 
                                                 >> 0xcU)))) 
           | (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o) 
                    >> 3U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_req_i[1U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x38U] 
                                >> 0xcU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[1U] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x39U] 
                                                  << 0x14U) 
                                                 | (0xffffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x38U] 
                                                       >> 0xcU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_req_i[2U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[1U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x39U] 
                                >> 0xcU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[2U] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x3aU] 
                                                  << 0x14U) 
                                                 | (0xffffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x39U] 
                                                       >> 0xcU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_req_i[3U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[2U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x3aU] 
                                >> 0xcU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[3U] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x3bU] 
                                                  << 0x14U) 
                                                 | (0xffffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x3aU] 
                                                       >> 0xcU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_req_i[4U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[3U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x3bU] 
                                >> 0xcU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[4U] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x3cU] 
                                                  << 0x14U) 
                                                 | (0xffffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x3bU] 
                                                       >> 0xcU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_req_i[5U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[4U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x3cU] 
                                >> 0xcU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[5U] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x3dU] 
                                                  << 0x14U) 
                                                 | (0xffffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x3cU] 
                                                       >> 0xcU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_req_i[6U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[5U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x3dU] 
                                >> 0xcU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[6U] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x3eU] 
                                                  << 0x14U) 
                                                 | (0xffffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x3dU] 
                                                       >> 0xcU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_req_i[7U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[6U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x3eU] 
                                >> 0xcU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[7U] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x3fU] 
                                                  << 0x14U) 
                                                 | (0xffffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x3eU] 
                                                       >> 0xcU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_req_i[8U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[7U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x3fU] 
                                >> 0xcU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[8U] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x40U] 
                                                  << 0x14U) 
                                                 | (0xffffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x3fU] 
                                                       >> 0xcU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_req_i[9U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[8U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x40U] 
                                >> 0xcU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[9U] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x41U] 
                                                  << 0x14U) 
                                                 | (0xffffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x40U] 
                                                       >> 0xcU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_req_i[0xaU] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[9U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x41U] 
                                >> 0xcU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xaU] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x42U] 
                                                  << 0x14U) 
                                                 | (0xffffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x41U] 
                                                       >> 0xcU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_req_i[0xbU] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xaU] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x42U] 
                                >> 0xcU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xbU] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x43U] 
                                                  << 0x14U) 
                                                 | (0xffffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x42U] 
                                                       >> 0xcU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_req_i[0xcU] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xbU] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x43U] 
                                >> 0xcU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xcU] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x44U] 
                                                  << 0x14U) 
                                                 | (0xffffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x43U] 
                                                       >> 0xcU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_req_i[0xdU] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xcU] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x44U] 
                                >> 0xcU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xdU] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x45U] 
                                                  << 0x14U) 
                                                 | (0xffffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x44U] 
                                                       >> 0xcU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_req_i[0xeU] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xdU] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x45U] 
                                >> 0xcU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xeU] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x46U] 
                                                  << 0x14U) 
                                                 | (0xffffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x45U] 
                                                       >> 0xcU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_req_i[0xfU] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xeU] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x46U] 
                                >> 0xcU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xfU] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x47U] 
                                                  << 0x14U) 
                                                 | (0xffffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x46U] 
                                                       >> 0xcU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_req_i[0x10U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0xfU] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x47U] 
                                >> 0xcU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0x10U] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x48U] 
                                                  << 0x14U) 
                                                 | (0xffffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x47U] 
                                                       >> 0xcU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_req_i[0x11U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0x10U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x48U] 
                                >> 0xcU))) | ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0x11U] 
                                               << 1U) 
                                              & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x49U] 
                                                  << 0x14U) 
                                                 | (0xffffeU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x48U] 
                                                       >> 0xcU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_req_i[0x12U] 
        = ((1U & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0x11U] 
                   >> 0x1fU) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x49U] 
                                >> 0xcU))) | (0xffffeU 
                                              & ((Vtestharness__ConstPool__CONST_h7b108ceb_0[0x12U] 
                                                  << 1U) 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT____Vcellout__gen_xbar__DOT__i_stream_xbar__data_o[0x49U] 
                                                    >> 0xcU))));
}

extern const VlWide<16>/*511:0*/ Vtestharness__ConstPool__CONST_h93e1b771_0;

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__194(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__194\n"); );
    // Init
    QData/*63:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 = 0;
    QData/*63:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 = 0;
    QData/*63:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 = 0;
    QData/*63:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 = 0;
    VlWide<49>/*1567:0*/ __Vtemp_58;
    VlWide<65>/*2079:0*/ __Vtemp_59;
    VlWide<16>/*511:0*/ __Vtemp_60;
    VlWide<49>/*1567:0*/ __Vtemp_63;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[0U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__0__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            << 1U) | (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.ready_o));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[1U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__0__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            >> 0x1fU) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_q)
                                    ? (((QData)((IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                    : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__0__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[2U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__1__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            << 2U) | (((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.ready_o) 
                       << 1U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_q)
                                            ? (((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                            : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__0__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                          >> 0x20U)) 
                                 >> 0x1fU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[3U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__1__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            >> 0x1eU) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_q)
                                    ? (((QData)((IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                    : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__1__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                  >> 0x20U)) << 2U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[4U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__2__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            << 3U) | (((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.ready_o) 
                       << 2U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_q)
                                            ? (((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                            : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__1__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                          >> 0x20U)) 
                                 >> 0x1eU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[5U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__2__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            >> 0x1dU) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_q)
                                    ? (((QData)((IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                    : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__2__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                  >> 0x20U)) << 3U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[6U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__3__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            << 4U) | (((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.ready_o) 
                       << 3U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_q)
                                            ? (((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                            : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__2__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                          >> 0x20U)) 
                                 >> 0x1dU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[7U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__3__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            >> 0x1cU) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_q)
                                    ? (((QData)((IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                    : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__3__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                  >> 0x20U)) << 4U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[8U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__4__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            << 5U) | (((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.ready_o) 
                       << 4U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_q)
                                            ? (((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                            : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__3__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                          >> 0x20U)) 
                                 >> 0x1cU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[9U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__4__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            >> 0x1bU) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_q)
                                    ? (((QData)((IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                    : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__4__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                  >> 0x20U)) << 5U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[0xaU] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__5__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            << 6U) | (((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.ready_o) 
                       << 5U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_q)
                                            ? (((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                            : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__4__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                          >> 0x20U)) 
                                 >> 0x1bU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[0xbU] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__5__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            >> 0x1aU) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_q)
                                    ? (((QData)((IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                    : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__5__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                  >> 0x20U)) << 6U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[0xcU] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__6__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            << 7U) | (((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.ready_o) 
                       << 6U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_q)
                                            ? (((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                            : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__5__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                          >> 0x20U)) 
                                 >> 0x1aU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[0xdU] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__6__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            >> 0x19U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_q)
                                    ? (((QData)((IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                    : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__6__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                  >> 0x20U)) << 7U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[0xeU] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__7__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            << 8U) | (((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.ready_o) 
                       << 7U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_q)
                                            ? (((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                            : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__6__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                          >> 0x20U)) 
                                 >> 0x19U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[0xfU] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__7__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            >> 0x18U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_q)
                                    ? (((QData)((IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                    : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__7__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                  >> 0x20U)) << 8U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[0x10U] 
        = ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__7__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                    >> 0x20U)) >> 0x18U);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[0U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__8__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            << 1U) | (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.ready_o));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[1U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__8__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            >> 0x1fU) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_q)
                                    ? (((QData)((IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                    : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__8__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[2U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__9__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            << 2U) | (((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.ready_o) 
                       << 1U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_q)
                                            ? (((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                            : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__8__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                          >> 0x20U)) 
                                 >> 0x1fU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[3U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__9__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            >> 0x1eU) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_q)
                                    ? (((QData)((IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                    : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__9__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                  >> 0x20U)) << 2U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[4U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__10__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            << 3U) | (((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.ready_o) 
                       << 2U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_q)
                                            ? (((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                            : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__9__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                          >> 0x20U)) 
                                 >> 0x1eU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[5U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__10__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            >> 0x1dU) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_q)
                                    ? (((QData)((IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                    : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__10__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                  >> 0x20U)) << 3U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[6U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__11__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            << 4U) | (((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.ready_o) 
                       << 3U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_q)
                                            ? (((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                            : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__10__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                          >> 0x20U)) 
                                 >> 0x1dU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[7U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__11__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            >> 0x1cU) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_q)
                                    ? (((QData)((IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                    : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__11__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                  >> 0x20U)) << 4U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[8U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__12__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            << 5U) | (((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.ready_o) 
                       << 4U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_q)
                                            ? (((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                            : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__11__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                          >> 0x20U)) 
                                 >> 0x1cU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[9U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__12__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            >> 0x1bU) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_q)
                                    ? (((QData)((IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                    : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__12__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                  >> 0x20U)) << 5U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[0xaU] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__13__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            << 6U) | (((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.ready_o) 
                       << 5U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_q)
                                            ? (((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                            : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__12__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                          >> 0x20U)) 
                                 >> 0x1bU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[0xbU] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__13__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            >> 0x1aU) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_q)
                                    ? (((QData)((IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                    : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__13__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                  >> 0x20U)) << 6U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[0xcU] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__14__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            << 7U) | (((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.ready_o) 
                       << 6U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_q)
                                            ? (((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                            : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__13__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                          >> 0x20U)) 
                                 >> 0x1aU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[0xdU] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__14__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            >> 0x19U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_q)
                                    ? (((QData)((IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                    : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__14__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                  >> 0x20U)) << 7U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[0xeU] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__15__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            << 8U) | (((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.ready_o) 
                       << 7U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_q)
                                            ? (((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                            : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__14__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                          >> 0x20U)) 
                                 >> 0x19U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[0xfU] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__15__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            >> 0x18U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_q)
                                    ? (((QData)((IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                    : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__15__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                  >> 0x20U)) << 8U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[0x10U] 
        = ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__15__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                    >> 0x20U)) >> 0x18U);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[0U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__16__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            << 1U) | (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.ready_o));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[1U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__16__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            >> 0x1fU) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_q)
                                    ? (((QData)((IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                    : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__16__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[2U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__17__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            << 2U) | (((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.ready_o) 
                       << 1U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_q)
                                            ? (((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                            : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__16__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                          >> 0x20U)) 
                                 >> 0x1fU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[3U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__17__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            >> 0x1eU) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_q)
                                    ? (((QData)((IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                    : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__17__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                  >> 0x20U)) << 2U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[4U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__18__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            << 3U) | (((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.ready_o) 
                       << 2U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_q)
                                            ? (((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                            : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__17__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                          >> 0x20U)) 
                                 >> 0x1eU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[5U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__18__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            >> 0x1dU) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_q)
                                    ? (((QData)((IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                    : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__18__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                  >> 0x20U)) << 3U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[6U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__19__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            << 4U) | (((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.ready_o) 
                       << 3U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_q)
                                            ? (((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                            : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__18__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                          >> 0x20U)) 
                                 >> 0x1dU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[7U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__19__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            >> 0x1cU) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_q)
                                    ? (((QData)((IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                    : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__19__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                  >> 0x20U)) << 4U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[8U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__20__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            << 5U) | (((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.ready_o) 
                       << 4U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_q)
                                            ? (((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                            : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__19__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                          >> 0x20U)) 
                                 >> 0x1cU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[9U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__20__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            >> 0x1bU) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_q)
                                    ? (((QData)((IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                    : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__20__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                  >> 0x20U)) << 5U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[0xaU] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__21__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            << 6U) | (((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.ready_o) 
                       << 5U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_q)
                                            ? (((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                            : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__20__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                          >> 0x20U)) 
                                 >> 0x1bU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[0xbU] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__21__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            >> 0x1aU) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_q)
                                    ? (((QData)((IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                    : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__21__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                  >> 0x20U)) << 6U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[0xcU] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__22__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            << 7U) | (((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.ready_o) 
                       << 6U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_q)
                                            ? (((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                            : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__21__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                          >> 0x20U)) 
                                 >> 0x1aU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[0xdU] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__22__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            >> 0x19U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_q)
                                    ? (((QData)((IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                    : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__22__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                  >> 0x20U)) << 7U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[0xeU] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__23__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            << 8U) | (((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.ready_o) 
                       << 7U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_q)
                                            ? (((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                            : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__22__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                          >> 0x20U)) 
                                 >> 0x19U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[0xfU] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__23__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            >> 0x18U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_q)
                                    ? (((QData)((IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                    : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__23__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                  >> 0x20U)) << 8U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[0x10U] 
        = ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__23__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                    >> 0x20U)) >> 0x18U);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[0U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__24__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            << 1U) | (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.ready_o));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[1U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__24__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            >> 0x1fU) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_q)
                                    ? (((QData)((IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                    : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__24__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[2U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__25__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            << 2U) | (((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.ready_o) 
                       << 1U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_q)
                                            ? (((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__0__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                            : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__24__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                          >> 0x20U)) 
                                 >> 0x1fU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[3U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__25__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            >> 0x1eU) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_q)
                                    ? (((QData)((IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                    : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__25__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                  >> 0x20U)) << 2U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[4U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__26__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            << 3U) | (((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.ready_o) 
                       << 2U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_q)
                                            ? (((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__1__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                            : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__25__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                          >> 0x20U)) 
                                 >> 0x1eU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[5U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__26__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            >> 0x1dU) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_q)
                                    ? (((QData)((IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                    : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__26__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                  >> 0x20U)) << 3U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[6U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__27__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            << 4U) | (((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.ready_o) 
                       << 3U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_q)
                                            ? (((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__2__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                            : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__26__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                          >> 0x20U)) 
                                 >> 0x1dU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[7U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__27__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            >> 0x1cU) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_q)
                                    ? (((QData)((IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                    : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__27__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                  >> 0x20U)) << 4U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[8U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__28__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            << 5U) | (((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.ready_o) 
                       << 4U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_q)
                                            ? (((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__3__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                            : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__27__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                          >> 0x20U)) 
                                 >> 0x1cU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[9U] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__28__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            >> 0x1bU) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_q)
                                    ? (((QData)((IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                    : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__28__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                  >> 0x20U)) << 5U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[0xaU] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__29__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            << 6U) | (((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.ready_o) 
                       << 5U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_q)
                                            ? (((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__4__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                            : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__28__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                          >> 0x20U)) 
                                 >> 0x1bU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[0xbU] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__29__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            >> 0x1aU) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_q)
                                    ? (((QData)((IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                    : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__29__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                  >> 0x20U)) << 6U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[0xcU] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__30__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            << 7U) | (((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.ready_o) 
                       << 6U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_q)
                                            ? (((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__5__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                            : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__29__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                          >> 0x20U)) 
                                 >> 0x1aU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[0xdU] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__30__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            >> 0x19U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_q)
                                    ? (((QData)((IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                    : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__30__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                  >> 0x20U)) << 7U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[0xeU] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__31__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            << 8U) | (((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.ready_o) 
                       << 7U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_q)
                                            ? (((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__6__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                            : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__30__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                          >> 0x20U)) 
                                 >> 0x19U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[0xfU] 
        = (((IData)(((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__31__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q)) 
            >> 0x18U) | ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_q)
                                    ? (((QData)((IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                                    : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__31__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                                  >> 0x20U)) << 8U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[0x10U] 
        = ((IData)((((IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_q)
                      ? (((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__gen_tcdm_bank__BRA__7__KET____DOT__i_amo_shim.__PVT__sc_successful_q))))))
                      : vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_snitch_data_mem__DOT__gen_banks__BRA__31__KET____DOT__i_data_mem.__PVT__i_tc_sram__DOT__rdata_q) 
                    >> 0x20U)) >> 0x18U);
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
        = (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[2U])) 
            << 0x3fU) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[1U])) 
                          << 0x1fU) | ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[0U])) 
                                       >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
              << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[1U] 
        = (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
            >> 0x1fU) | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[2U] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[2U]) 
           | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                       >> 0x20U)) >> 0x1fU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
        = (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[4U])) 
            << 0x3eU) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[3U])) 
                          << 0x1eU) | ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[2U])) 
                                       >> 2U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[2U] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[2U]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
              << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[3U] 
        = (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
            >> 0x1fU) | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[4U] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[4U]) 
           | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                       >> 0x20U)) >> 0x1fU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
        = (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[6U])) 
            << 0x3dU) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[5U])) 
                          << 0x1dU) | ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[4U])) 
                                       >> 3U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[4U] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[4U]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
              << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[5U] 
        = (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
            >> 0x1fU) | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[6U] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[6U]) 
           | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                       >> 0x20U)) >> 0x1fU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
        = (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[8U])) 
            << 0x3cU) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[7U])) 
                          << 0x1cU) | ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[6U])) 
                                       >> 4U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[6U] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[6U]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
              << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[7U] 
        = (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
            >> 0x1fU) | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[8U] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[8U]) 
           | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                       >> 0x20U)) >> 0x1fU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
        = (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[0xaU])) 
            << 0x3bU) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[9U])) 
                          << 0x1bU) | ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[8U])) 
                                       >> 5U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[8U] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[8U]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
              << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[9U] 
        = (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
            >> 0x1fU) | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xaU] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xaU]) 
           | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                       >> 0x20U)) >> 0x1fU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
        = (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[0xcU])) 
            << 0x3aU) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[0xbU])) 
                          << 0x1aU) | ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[0xaU])) 
                                       >> 6U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xaU] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xaU]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
              << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xbU] 
        = (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
            >> 0x1fU) | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xcU] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xcU]) 
           | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                       >> 0x20U)) >> 0x1fU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
        = (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[0xeU])) 
            << 0x39U) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[0xdU])) 
                          << 0x19U) | ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[0xcU])) 
                                       >> 7U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xcU] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xcU]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
              << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xdU] 
        = (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
            >> 0x1fU) | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xeU] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xeU]) 
           | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                       >> 0x20U)) >> 0x1fU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
        = (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[0x10U])) 
            << 0x38U) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[0xfU])) 
                          << 0x18U) | ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[0xeU])) 
                                       >> 8U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xeU] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xeU]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
              << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xfU] 
        = (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
            >> 0x1fU) | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0x10U] 
        = ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                    >> 0x20U)) >> 0x1fU);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
        = (0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[0U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[1U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[1U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[2U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[2U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[3U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[3U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[4U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[4U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[5U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[5U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[6U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[6U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[7U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[7U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[8U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[8U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[9U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[9U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xaU] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[0xaU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xbU] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[0xbU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xcU] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[0xcU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xdU] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[0xdU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xeU] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[0xeU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xfU] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[0xfU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0x10U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__0__KET____DOT__amo_rsp[0x10U];
    if ((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
            = (1U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
            = (1U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
            = (1U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
            = (1U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
            = (1U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
            = (1U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
            = (1U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
            = (1U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0U] 
            = (0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[2U] 
            = (0xfffffffdU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[2U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[4U] 
            = (0xfffffffbU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[4U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[6U] 
            = (0xfffffff7U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[6U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[8U] 
            = (0xffffffefU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[8U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xaU] 
            = (0xffffffdfU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xaU]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xcU] 
            = (0xffffffbfU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xcU]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xeU] 
            = (0xffffff7fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xeU]);
    }
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
        = (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[2U])) 
            << 0x3fU) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[1U])) 
                          << 0x1fU) | ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[0U])) 
                                       >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
              << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[1U] 
        = (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
            >> 0x1fU) | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[2U] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[2U]) 
           | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                       >> 0x20U)) >> 0x1fU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
        = (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[4U])) 
            << 0x3eU) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[3U])) 
                          << 0x1eU) | ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[2U])) 
                                       >> 2U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[2U] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[2U]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
              << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[3U] 
        = (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
            >> 0x1fU) | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[4U] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[4U]) 
           | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                       >> 0x20U)) >> 0x1fU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
        = (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[6U])) 
            << 0x3dU) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[5U])) 
                          << 0x1dU) | ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[4U])) 
                                       >> 3U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[4U] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[4U]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
              << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[5U] 
        = (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
            >> 0x1fU) | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[6U] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[6U]) 
           | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                       >> 0x20U)) >> 0x1fU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
        = (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[8U])) 
            << 0x3cU) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[7U])) 
                          << 0x1cU) | ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[6U])) 
                                       >> 4U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[6U] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[6U]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
              << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[7U] 
        = (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
            >> 0x1fU) | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[8U] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[8U]) 
           | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                       >> 0x20U)) >> 0x1fU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
        = (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[0xaU])) 
            << 0x3bU) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[9U])) 
                          << 0x1bU) | ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[8U])) 
                                       >> 5U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[8U] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[8U]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
              << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[9U] 
        = (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
            >> 0x1fU) | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xaU] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xaU]) 
           | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                       >> 0x20U)) >> 0x1fU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
        = (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[0xcU])) 
            << 0x3aU) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[0xbU])) 
                          << 0x1aU) | ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[0xaU])) 
                                       >> 6U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xaU] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xaU]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
              << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xbU] 
        = (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
            >> 0x1fU) | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xcU] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xcU]) 
           | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                       >> 0x20U)) >> 0x1fU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
        = (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[0xeU])) 
            << 0x39U) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[0xdU])) 
                          << 0x19U) | ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[0xcU])) 
                                       >> 7U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xcU] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xcU]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
              << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xdU] 
        = (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
            >> 0x1fU) | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xeU] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xeU]) 
           | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                       >> 0x20U)) >> 0x1fU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
        = (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[0x10U])) 
            << 0x38U) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[0xfU])) 
                          << 0x18U) | ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[0xeU])) 
                                       >> 8U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xeU] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xeU]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
              << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xfU] 
        = (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
            >> 0x1fU) | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0x10U] 
        = ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                    >> 0x20U)) >> 0x1fU);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
        = (0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[0U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[1U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[1U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[2U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[2U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[3U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[3U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[4U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[4U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[5U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[5U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[6U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[6U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[7U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[7U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[8U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[8U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[9U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[9U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xaU] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[0xaU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xbU] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[0xbU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xcU] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[0xcU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xdU] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[0xdU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xeU] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[0xeU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xfU] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[0xfU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0x10U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__1__KET____DOT__amo_rsp[0x10U];
    if ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
            = (1U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
            = (1U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
            = (1U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
            = (1U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
            = (1U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
            = (1U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
            = (1U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
            = (1U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0U] 
            = (0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[2U] 
            = (0xfffffffdU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[2U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[4U] 
            = (0xfffffffbU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[4U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[6U] 
            = (0xfffffff7U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[6U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[8U] 
            = (0xffffffefU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[8U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xaU] 
            = (0xffffffdfU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xaU]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xcU] 
            = (0xffffffbfU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xcU]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xeU] 
            = (0xffffff7fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xeU]);
    }
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
        = (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[2U])) 
            << 0x3fU) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[1U])) 
                          << 0x1fU) | ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[0U])) 
                                       >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
              << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[1U] 
        = (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
            >> 0x1fU) | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[2U] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[2U]) 
           | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                       >> 0x20U)) >> 0x1fU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
        = (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[4U])) 
            << 0x3eU) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[3U])) 
                          << 0x1eU) | ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[2U])) 
                                       >> 2U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[2U] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[2U]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
              << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[3U] 
        = (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
            >> 0x1fU) | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[4U] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[4U]) 
           | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                       >> 0x20U)) >> 0x1fU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
        = (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[6U])) 
            << 0x3dU) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[5U])) 
                          << 0x1dU) | ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[4U])) 
                                       >> 3U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[4U] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[4U]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
              << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[5U] 
        = (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
            >> 0x1fU) | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[6U] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[6U]) 
           | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                       >> 0x20U)) >> 0x1fU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
        = (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[8U])) 
            << 0x3cU) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[7U])) 
                          << 0x1cU) | ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[6U])) 
                                       >> 4U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[6U] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[6U]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
              << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[7U] 
        = (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
            >> 0x1fU) | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[8U] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[8U]) 
           | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                       >> 0x20U)) >> 0x1fU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
        = (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[0xaU])) 
            << 0x3bU) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[9U])) 
                          << 0x1bU) | ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[8U])) 
                                       >> 5U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[8U] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[8U]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
              << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[9U] 
        = (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
            >> 0x1fU) | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xaU] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xaU]) 
           | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                       >> 0x20U)) >> 0x1fU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
        = (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[0xcU])) 
            << 0x3aU) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[0xbU])) 
                          << 0x1aU) | ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[0xaU])) 
                                       >> 6U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xaU] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xaU]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
              << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xbU] 
        = (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
            >> 0x1fU) | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xcU] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xcU]) 
           | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                       >> 0x20U)) >> 0x1fU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
        = (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[0xeU])) 
            << 0x39U) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[0xdU])) 
                          << 0x19U) | ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[0xcU])) 
                                       >> 7U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xcU] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xcU]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
              << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xdU] 
        = (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
            >> 0x1fU) | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xeU] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xeU]) 
           | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                       >> 0x20U)) >> 0x1fU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
        = (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[0x10U])) 
            << 0x38U) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[0xfU])) 
                          << 0x18U) | ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[0xeU])) 
                                       >> 8U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xeU] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xeU]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
              << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xfU] 
        = (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
            >> 0x1fU) | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0x10U] 
        = ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                    >> 0x20U)) >> 0x1fU);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
        = (0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[0U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[1U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[1U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[2U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[2U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[3U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[3U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[4U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[4U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[5U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[5U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[6U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[6U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[7U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[7U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[8U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[8U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[9U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[9U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xaU] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[0xaU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xbU] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[0xbU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xcU] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[0xcU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xdU] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[0xdU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xeU] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[0xeU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xfU] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[0xfU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0x10U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__2__KET____DOT__amo_rsp[0x10U];
    if ((4U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
            = (1U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
            = (1U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
            = (1U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
            = (1U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
            = (1U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
            = (1U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
            = (1U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
            = (1U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0U] 
            = (0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[2U] 
            = (0xfffffffdU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[2U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[4U] 
            = (0xfffffffbU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[4U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[6U] 
            = (0xfffffff7U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[6U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[8U] 
            = (0xffffffefU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[8U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xaU] 
            = (0xffffffdfU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xaU]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xcU] 
            = (0xffffffbfU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xcU]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xeU] 
            = (0xffffff7fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xeU]);
    }
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
        = (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[2U])) 
            << 0x3fU) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[1U])) 
                          << 0x1fU) | ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[0U])) 
                                       >> 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
              << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[1U] 
        = (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
            >> 0x1fU) | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[2U] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[2U]) 
           | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                       >> 0x20U)) >> 0x1fU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
        = (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[4U])) 
            << 0x3eU) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[3U])) 
                          << 0x1eU) | ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[2U])) 
                                       >> 2U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[2U] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[2U]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
              << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[3U] 
        = (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
            >> 0x1fU) | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[4U] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[4U]) 
           | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                       >> 0x20U)) >> 0x1fU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
        = (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[6U])) 
            << 0x3dU) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[5U])) 
                          << 0x1dU) | ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[4U])) 
                                       >> 3U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[4U] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[4U]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
              << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[5U] 
        = (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
            >> 0x1fU) | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[6U] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[6U]) 
           | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                       >> 0x20U)) >> 0x1fU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
        = (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[8U])) 
            << 0x3cU) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[7U])) 
                          << 0x1cU) | ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[6U])) 
                                       >> 4U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[6U] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[6U]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
              << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[7U] 
        = (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
            >> 0x1fU) | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[8U] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[8U]) 
           | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                       >> 0x20U)) >> 0x1fU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
        = (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[0xaU])) 
            << 0x3bU) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[9U])) 
                          << 0x1bU) | ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[8U])) 
                                       >> 5U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[8U] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[8U]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
              << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[9U] 
        = (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
            >> 0x1fU) | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xaU] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xaU]) 
           | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                       >> 0x20U)) >> 0x1fU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
        = (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[0xcU])) 
            << 0x3aU) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[0xbU])) 
                          << 0x1aU) | ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[0xaU])) 
                                       >> 6U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xaU] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xaU]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
              << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xbU] 
        = (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
            >> 0x1fU) | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xcU] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xcU]) 
           | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                       >> 0x20U)) >> 0x1fU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
        = (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[0xeU])) 
            << 0x39U) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[0xdU])) 
                          << 0x19U) | ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[0xcU])) 
                                       >> 7U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xcU] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xcU]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
              << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xdU] 
        = (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
            >> 0x1fU) | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xeU] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xeU]) 
           | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                       >> 0x20U)) >> 0x1fU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
        = (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[0x10U])) 
            << 0x38U) | (((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[0xfU])) 
                          << 0x18U) | ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[0xeU])) 
                                       >> 8U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xeU] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xeU]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
              << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xfU] 
        = (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0) 
            >> 0x1fU) | ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                                  >> 0x20U)) << 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0x10U] 
        = ((IData)((testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__DOT____Vlvbound_hb245c66f__0 
                    >> 0x20U)) >> 0x1fU);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
        = (0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[0U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[1U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[1U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[2U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[2U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[3U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[3U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[4U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[4U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[5U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[5U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[6U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[6U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[7U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[7U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[8U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[8U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[9U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[9U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xaU] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[0xaU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xbU] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[0xbU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xcU] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[0xcU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xdU] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[0xdU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xeU] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[0xeU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xfU] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[0xfU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0x10U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_tcdm_super_bank__BRA__3__KET____DOT__amo_rsp[0x10U];
    if ((8U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
            = (1U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
            = (1U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
            = (1U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
            = (1U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
            = (1U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
            = (1U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
            = (1U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
            = (1U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0U] 
            = (0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[2U] 
            = (0xfffffffdU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[2U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[4U] 
            = (0xfffffffbU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[4U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[6U] 
            = (0xfffffff7U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[6U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[8U] 
            = (0xffffffefU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[8U]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xaU] 
            = (0xffffffdfU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xaU]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xcU] 
            = (0xffffffbfU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xcU]);
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xeU] 
            = (0xffffff7fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xeU]);
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__rsp_q_ready_flat 
        = (1U & (((8U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
                         << 3U)) | ((4U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
                                           << 2U)) 
                                    | ((2U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
                                              << 1U)) 
                                       | (1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U])))) 
                 >> (3U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                           >> 0xdU))));
    __Vtemp_58[0U] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U];
    __Vtemp_58[1U] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[1U];
    __Vtemp_58[2U] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[2U];
    __Vtemp_58[3U] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[3U];
    __Vtemp_58[4U] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[4U];
    __Vtemp_58[5U] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[5U];
    __Vtemp_58[6U] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[6U];
    __Vtemp_58[7U] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[7U];
    __Vtemp_58[8U] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[8U];
    __Vtemp_58[9U] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[9U];
    __Vtemp_58[0xaU] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xaU];
    __Vtemp_58[0xbU] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xbU];
    __Vtemp_58[0xcU] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xcU];
    __Vtemp_58[0xdU] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xdU];
    __Vtemp_58[0xeU] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xeU];
    __Vtemp_58[0xfU] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xfU];
    __Vtemp_58[0x10U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
                          << 1U) | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0x10U]);
    __Vtemp_58[0x11U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
                          >> 0x1fU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[1U] 
                                       << 1U));
    __Vtemp_58[0x12U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[1U] 
                          >> 0x1fU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[2U] 
                                       << 1U));
    __Vtemp_58[0x13U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[2U] 
                          >> 0x1fU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[3U] 
                                       << 1U));
    __Vtemp_58[0x14U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[3U] 
                          >> 0x1fU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[4U] 
                                       << 1U));
    __Vtemp_58[0x15U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[4U] 
                          >> 0x1fU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[5U] 
                                       << 1U));
    __Vtemp_58[0x16U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[5U] 
                          >> 0x1fU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[6U] 
                                       << 1U));
    __Vtemp_58[0x17U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[6U] 
                          >> 0x1fU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[7U] 
                                       << 1U));
    __Vtemp_58[0x18U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[7U] 
                          >> 0x1fU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[8U] 
                                       << 1U));
    __Vtemp_58[0x19U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[8U] 
                          >> 0x1fU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[9U] 
                                       << 1U));
    __Vtemp_58[0x1aU] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[9U] 
                          >> 0x1fU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xaU] 
                                       << 1U));
    __Vtemp_58[0x1bU] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xaU] 
                          >> 0x1fU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xbU] 
                                       << 1U));
    __Vtemp_58[0x1cU] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xbU] 
                          >> 0x1fU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xcU] 
                                       << 1U));
    __Vtemp_58[0x1dU] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xcU] 
                          >> 0x1fU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xdU] 
                                       << 1U));
    __Vtemp_58[0x1eU] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xdU] 
                          >> 0x1fU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xeU] 
                                       << 1U));
    __Vtemp_58[0x1fU] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xeU] 
                          >> 0x1fU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xfU] 
                                       << 1U));
    __Vtemp_58[0x20U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
                          << 2U) | ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xfU] 
                                     >> 0x1fU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0x10U] 
                                                  << 1U)));
    __Vtemp_58[0x21U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0U] 
                          >> 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[1U] 
                                       << 2U));
    __Vtemp_58[0x22U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[1U] 
                          >> 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[2U] 
                                       << 2U));
    __Vtemp_58[0x23U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[2U] 
                          >> 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[3U] 
                                       << 2U));
    __Vtemp_58[0x24U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[3U] 
                          >> 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[4U] 
                                       << 2U));
    __Vtemp_58[0x25U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[4U] 
                          >> 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[5U] 
                                       << 2U));
    __Vtemp_58[0x26U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[5U] 
                          >> 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[6U] 
                                       << 2U));
    __Vtemp_58[0x27U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[6U] 
                          >> 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[7U] 
                                       << 2U));
    __Vtemp_58[0x28U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[7U] 
                          >> 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[8U] 
                                       << 2U));
    __Vtemp_58[0x29U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[8U] 
                          >> 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[9U] 
                                       << 2U));
    __Vtemp_58[0x2aU] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[9U] 
                          >> 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xaU] 
                                       << 2U));
    __Vtemp_58[0x2bU] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xaU] 
                          >> 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xbU] 
                                       << 2U));
    __Vtemp_58[0x2cU] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xbU] 
                          >> 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xcU] 
                                       << 2U));
    __Vtemp_58[0x2dU] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xcU] 
                          >> 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xdU] 
                                       << 2U));
    __Vtemp_58[0x2eU] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xdU] 
                          >> 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xeU] 
                                       << 2U));
    __Vtemp_58[0x2fU] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xeU] 
                          >> 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xfU] 
                                       << 2U));
    __Vtemp_58[0x30U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0xfU] 
                          >> 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_wide_rsp_o[0x10U] 
                                       << 2U));
    VL_CONCAT_WWW(2052,513,1539, __Vtemp_59, vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_wide_rsp_o, __Vtemp_58);
    __Vtemp_60[0U] = (((0U == (0x1fU & ((IData)(1U) 
                                        + (0xfffU & 
                                           ((IData)(0x201U) 
                                            * (3U & 
                                               ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                >> 1U)))))))
                        ? 0U : (__Vtemp_59[((IData)(1U) 
                                            + (((IData)(1U) 
                                                + (0xfffU 
                                                   & ((IData)(0x201U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                          >> 1U))))) 
                                               >> 5U))] 
                                << ((IData)(0x20U) 
                                    - (0x1fU & ((IData)(1U) 
                                                + (0xfffU 
                                                   & ((IData)(0x201U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                          >> 1U))))))))) 
                      | (__Vtemp_59[(((IData)(1U) + 
                                      (0xfffU & ((IData)(0x201U) 
                                                 * 
                                                 (3U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                     >> 1U))))) 
                                     >> 5U)] >> (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (0xfffU 
                                                     & ((IData)(0x201U) 
                                                        * 
                                                        (3U 
                                                         & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                            >> 1U))))))));
    __Vtemp_60[1U] = (((0U == (0x1fU & ((IData)(1U) 
                                        + (0xfffU & 
                                           ((IData)(0x201U) 
                                            * (3U & 
                                               ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                >> 1U)))))))
                        ? 0U : (__Vtemp_59[((IData)(2U) 
                                            + (((IData)(1U) 
                                                + (0xfffU 
                                                   & ((IData)(0x201U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                          >> 1U))))) 
                                               >> 5U))] 
                                << ((IData)(0x20U) 
                                    - (0x1fU & ((IData)(1U) 
                                                + (0xfffU 
                                                   & ((IData)(0x201U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                          >> 1U))))))))) 
                      | (__Vtemp_59[((IData)(1U) + 
                                     (((IData)(1U) 
                                       + (0xfffU & 
                                          ((IData)(0x201U) 
                                           * (3U & 
                                              ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                               >> 1U))))) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x201U) 
                                                          * 
                                                          (3U 
                                                           & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                              >> 1U))))))));
    __Vtemp_60[2U] = (((0U == (0x1fU & ((IData)(1U) 
                                        + (0xfffU & 
                                           ((IData)(0x201U) 
                                            * (3U & 
                                               ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                >> 1U)))))))
                        ? 0U : (__Vtemp_59[((IData)(3U) 
                                            + (((IData)(1U) 
                                                + (0xfffU 
                                                   & ((IData)(0x201U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                          >> 1U))))) 
                                               >> 5U))] 
                                << ((IData)(0x20U) 
                                    - (0x1fU & ((IData)(1U) 
                                                + (0xfffU 
                                                   & ((IData)(0x201U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                          >> 1U))))))))) 
                      | (__Vtemp_59[((IData)(2U) + 
                                     (((IData)(1U) 
                                       + (0xfffU & 
                                          ((IData)(0x201U) 
                                           * (3U & 
                                              ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                               >> 1U))))) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x201U) 
                                                          * 
                                                          (3U 
                                                           & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                              >> 1U))))))));
    __Vtemp_60[3U] = (((0U == (0x1fU & ((IData)(1U) 
                                        + (0xfffU & 
                                           ((IData)(0x201U) 
                                            * (3U & 
                                               ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                >> 1U)))))))
                        ? 0U : (__Vtemp_59[((IData)(4U) 
                                            + (((IData)(1U) 
                                                + (0xfffU 
                                                   & ((IData)(0x201U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                          >> 1U))))) 
                                               >> 5U))] 
                                << ((IData)(0x20U) 
                                    - (0x1fU & ((IData)(1U) 
                                                + (0xfffU 
                                                   & ((IData)(0x201U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                          >> 1U))))))))) 
                      | (__Vtemp_59[((IData)(3U) + 
                                     (((IData)(1U) 
                                       + (0xfffU & 
                                          ((IData)(0x201U) 
                                           * (3U & 
                                              ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                               >> 1U))))) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x201U) 
                                                          * 
                                                          (3U 
                                                           & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                              >> 1U))))))));
    __Vtemp_60[4U] = (((0U == (0x1fU & ((IData)(1U) 
                                        + (0xfffU & 
                                           ((IData)(0x201U) 
                                            * (3U & 
                                               ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                >> 1U)))))))
                        ? 0U : (__Vtemp_59[((IData)(5U) 
                                            + (((IData)(1U) 
                                                + (0xfffU 
                                                   & ((IData)(0x201U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                          >> 1U))))) 
                                               >> 5U))] 
                                << ((IData)(0x20U) 
                                    - (0x1fU & ((IData)(1U) 
                                                + (0xfffU 
                                                   & ((IData)(0x201U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                          >> 1U))))))))) 
                      | (__Vtemp_59[((IData)(4U) + 
                                     (((IData)(1U) 
                                       + (0xfffU & 
                                          ((IData)(0x201U) 
                                           * (3U & 
                                              ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                               >> 1U))))) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x201U) 
                                                          * 
                                                          (3U 
                                                           & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                              >> 1U))))))));
    __Vtemp_60[5U] = (((0U == (0x1fU & ((IData)(1U) 
                                        + (0xfffU & 
                                           ((IData)(0x201U) 
                                            * (3U & 
                                               ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                >> 1U)))))))
                        ? 0U : (__Vtemp_59[((IData)(6U) 
                                            + (((IData)(1U) 
                                                + (0xfffU 
                                                   & ((IData)(0x201U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                          >> 1U))))) 
                                               >> 5U))] 
                                << ((IData)(0x20U) 
                                    - (0x1fU & ((IData)(1U) 
                                                + (0xfffU 
                                                   & ((IData)(0x201U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                          >> 1U))))))))) 
                      | (__Vtemp_59[((IData)(5U) + 
                                     (((IData)(1U) 
                                       + (0xfffU & 
                                          ((IData)(0x201U) 
                                           * (3U & 
                                              ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                               >> 1U))))) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x201U) 
                                                          * 
                                                          (3U 
                                                           & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                              >> 1U))))))));
    __Vtemp_60[6U] = (((0U == (0x1fU & ((IData)(1U) 
                                        + (0xfffU & 
                                           ((IData)(0x201U) 
                                            * (3U & 
                                               ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                >> 1U)))))))
                        ? 0U : (__Vtemp_59[((IData)(7U) 
                                            + (((IData)(1U) 
                                                + (0xfffU 
                                                   & ((IData)(0x201U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                          >> 1U))))) 
                                               >> 5U))] 
                                << ((IData)(0x20U) 
                                    - (0x1fU & ((IData)(1U) 
                                                + (0xfffU 
                                                   & ((IData)(0x201U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                          >> 1U))))))))) 
                      | (__Vtemp_59[((IData)(6U) + 
                                     (((IData)(1U) 
                                       + (0xfffU & 
                                          ((IData)(0x201U) 
                                           * (3U & 
                                              ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                               >> 1U))))) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x201U) 
                                                          * 
                                                          (3U 
                                                           & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                              >> 1U))))))));
    __Vtemp_60[7U] = (((0U == (0x1fU & ((IData)(1U) 
                                        + (0xfffU & 
                                           ((IData)(0x201U) 
                                            * (3U & 
                                               ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                >> 1U)))))))
                        ? 0U : (__Vtemp_59[((IData)(8U) 
                                            + (((IData)(1U) 
                                                + (0xfffU 
                                                   & ((IData)(0x201U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                          >> 1U))))) 
                                               >> 5U))] 
                                << ((IData)(0x20U) 
                                    - (0x1fU & ((IData)(1U) 
                                                + (0xfffU 
                                                   & ((IData)(0x201U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                          >> 1U))))))))) 
                      | (__Vtemp_59[((IData)(7U) + 
                                     (((IData)(1U) 
                                       + (0xfffU & 
                                          ((IData)(0x201U) 
                                           * (3U & 
                                              ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                               >> 1U))))) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x201U) 
                                                          * 
                                                          (3U 
                                                           & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                              >> 1U))))))));
    __Vtemp_60[8U] = (((0U == (0x1fU & ((IData)(1U) 
                                        + (0xfffU & 
                                           ((IData)(0x201U) 
                                            * (3U & 
                                               ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                >> 1U)))))))
                        ? 0U : (__Vtemp_59[((IData)(9U) 
                                            + (((IData)(1U) 
                                                + (0xfffU 
                                                   & ((IData)(0x201U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                          >> 1U))))) 
                                               >> 5U))] 
                                << ((IData)(0x20U) 
                                    - (0x1fU & ((IData)(1U) 
                                                + (0xfffU 
                                                   & ((IData)(0x201U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                          >> 1U))))))))) 
                      | (__Vtemp_59[((IData)(8U) + 
                                     (((IData)(1U) 
                                       + (0xfffU & 
                                          ((IData)(0x201U) 
                                           * (3U & 
                                              ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                               >> 1U))))) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x201U) 
                                                          * 
                                                          (3U 
                                                           & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                              >> 1U))))))));
    __Vtemp_60[9U] = (((0U == (0x1fU & ((IData)(1U) 
                                        + (0xfffU & 
                                           ((IData)(0x201U) 
                                            * (3U & 
                                               ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                >> 1U)))))))
                        ? 0U : (__Vtemp_59[((IData)(0xaU) 
                                            + (((IData)(1U) 
                                                + (0xfffU 
                                                   & ((IData)(0x201U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                          >> 1U))))) 
                                               >> 5U))] 
                                << ((IData)(0x20U) 
                                    - (0x1fU & ((IData)(1U) 
                                                + (0xfffU 
                                                   & ((IData)(0x201U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                          >> 1U))))))))) 
                      | (__Vtemp_59[((IData)(9U) + 
                                     (((IData)(1U) 
                                       + (0xfffU & 
                                          ((IData)(0x201U) 
                                           * (3U & 
                                              ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                               >> 1U))))) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x201U) 
                                                          * 
                                                          (3U 
                                                           & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                              >> 1U))))))));
    __Vtemp_60[0xaU] = (((0U == (0x1fU & ((IData)(1U) 
                                          + (0xfffU 
                                             & ((IData)(0x201U) 
                                                * (3U 
                                                   & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                      >> 1U)))))))
                          ? 0U : (__Vtemp_59[((IData)(0xbU) 
                                              + (((IData)(1U) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x201U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                          >> 1U))))) 
                                                 >> 5U))] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(1U) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x201U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                          >> 1U))))))))) 
                        | (__Vtemp_59[((IData)(0xaU) 
                                       + (((IData)(1U) 
                                           + (0xfffU 
                                              & ((IData)(0x201U) 
                                                 * 
                                                 (3U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                     >> 1U))))) 
                                          >> 5U))] 
                           >> (0x1fU & ((IData)(1U) 
                                        + (0xfffU & 
                                           ((IData)(0x201U) 
                                            * (3U & 
                                               ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                >> 1U))))))));
    __Vtemp_60[0xbU] = (((0U == (0x1fU & ((IData)(1U) 
                                          + (0xfffU 
                                             & ((IData)(0x201U) 
                                                * (3U 
                                                   & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                      >> 1U)))))))
                          ? 0U : (__Vtemp_59[((IData)(0xcU) 
                                              + (((IData)(1U) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x201U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                          >> 1U))))) 
                                                 >> 5U))] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(1U) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x201U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                          >> 1U))))))))) 
                        | (__Vtemp_59[((IData)(0xbU) 
                                       + (((IData)(1U) 
                                           + (0xfffU 
                                              & ((IData)(0x201U) 
                                                 * 
                                                 (3U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                     >> 1U))))) 
                                          >> 5U))] 
                           >> (0x1fU & ((IData)(1U) 
                                        + (0xfffU & 
                                           ((IData)(0x201U) 
                                            * (3U & 
                                               ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                >> 1U))))))));
    __Vtemp_60[0xcU] = (((0U == (0x1fU & ((IData)(1U) 
                                          + (0xfffU 
                                             & ((IData)(0x201U) 
                                                * (3U 
                                                   & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                      >> 1U)))))))
                          ? 0U : (__Vtemp_59[((IData)(0xdU) 
                                              + (((IData)(1U) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x201U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                          >> 1U))))) 
                                                 >> 5U))] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(1U) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x201U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                          >> 1U))))))))) 
                        | (__Vtemp_59[((IData)(0xcU) 
                                       + (((IData)(1U) 
                                           + (0xfffU 
                                              & ((IData)(0x201U) 
                                                 * 
                                                 (3U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                     >> 1U))))) 
                                          >> 5U))] 
                           >> (0x1fU & ((IData)(1U) 
                                        + (0xfffU & 
                                           ((IData)(0x201U) 
                                            * (3U & 
                                               ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                >> 1U))))))));
    __Vtemp_60[0xdU] = (((0U == (0x1fU & ((IData)(1U) 
                                          + (0xfffU 
                                             & ((IData)(0x201U) 
                                                * (3U 
                                                   & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                      >> 1U)))))))
                          ? 0U : (__Vtemp_59[((IData)(0xeU) 
                                              + (((IData)(1U) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x201U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                          >> 1U))))) 
                                                 >> 5U))] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(1U) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x201U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                          >> 1U))))))))) 
                        | (__Vtemp_59[((IData)(0xdU) 
                                       + (((IData)(1U) 
                                           + (0xfffU 
                                              & ((IData)(0x201U) 
                                                 * 
                                                 (3U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                     >> 1U))))) 
                                          >> 5U))] 
                           >> (0x1fU & ((IData)(1U) 
                                        + (0xfffU & 
                                           ((IData)(0x201U) 
                                            * (3U & 
                                               ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                >> 1U))))))));
    __Vtemp_60[0xeU] = (((0U == (0x1fU & ((IData)(1U) 
                                          + (0xfffU 
                                             & ((IData)(0x201U) 
                                                * (3U 
                                                   & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                      >> 1U)))))))
                          ? 0U : (__Vtemp_59[((IData)(0xfU) 
                                              + (((IData)(1U) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x201U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                          >> 1U))))) 
                                                 >> 5U))] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(1U) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x201U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                          >> 1U))))))))) 
                        | (__Vtemp_59[((IData)(0xeU) 
                                       + (((IData)(1U) 
                                           + (0xfffU 
                                              & ((IData)(0x201U) 
                                                 * 
                                                 (3U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                     >> 1U))))) 
                                          >> 5U))] 
                           >> (0x1fU & ((IData)(1U) 
                                        + (0xfffU & 
                                           ((IData)(0x201U) 
                                            * (3U & 
                                               ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                >> 1U))))))));
    __Vtemp_60[0xfU] = (((0U == (0x1fU & ((IData)(1U) 
                                          + (0xfffU 
                                             & ((IData)(0x201U) 
                                                * (3U 
                                                   & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                      >> 1U)))))))
                          ? 0U : (__Vtemp_59[((IData)(0x10U) 
                                              + (((IData)(1U) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x201U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                          >> 1U))))) 
                                                 >> 5U))] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(1U) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x201U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                          >> 1U))))))))) 
                        | (__Vtemp_59[((IData)(0xfU) 
                                       + (((IData)(1U) 
                                           + (0xfffU 
                                              & ((IData)(0x201U) 
                                                 * 
                                                 (3U 
                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                     >> 1U))))) 
                                          >> 5U))] 
                           >> (0x1fU & ((IData)(1U) 
                                        + (0xfffU & 
                                           ((IData)(0x201U) 
                                            * (3U & 
                                               ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                >> 1U))))))));
    if ((0x803U >= ((IData)(1U) + (0xfffU & ((IData)(0x201U) 
                                             * (3U 
                                                & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
                                                   >> 1U))))))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__r_mem_rdata[0U] 
            = __Vtemp_60[0U];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__r_mem_rdata[1U] 
            = __Vtemp_60[1U];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__r_mem_rdata[2U] 
            = __Vtemp_60[2U];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__r_mem_rdata[3U] 
            = __Vtemp_60[3U];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__r_mem_rdata[4U] 
            = __Vtemp_60[4U];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__r_mem_rdata[5U] 
            = __Vtemp_60[5U];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__r_mem_rdata[6U] 
            = __Vtemp_60[6U];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__r_mem_rdata[7U] 
            = __Vtemp_60[7U];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__r_mem_rdata[8U] 
            = __Vtemp_60[8U];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__r_mem_rdata[9U] 
            = __Vtemp_60[9U];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__r_mem_rdata[0xaU] 
            = __Vtemp_60[0xaU];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__r_mem_rdata[0xbU] 
            = __Vtemp_60[0xbU];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__r_mem_rdata[0xcU] 
            = __Vtemp_60[0xcU];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__r_mem_rdata[0xdU] 
            = __Vtemp_60[0xdU];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__r_mem_rdata[0xeU] 
            = __Vtemp_60[0xeU];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__r_mem_rdata[0xfU] 
            = __Vtemp_60[0xfU];
    } else {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__r_mem_rdata[0U] 
            = Vtestharness__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__r_mem_rdata[1U] 
            = Vtestharness__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__r_mem_rdata[2U] 
            = Vtestharness__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__r_mem_rdata[3U] 
            = Vtestharness__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__r_mem_rdata[4U] 
            = Vtestharness__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__r_mem_rdata[5U] 
            = Vtestharness__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__r_mem_rdata[6U] 
            = Vtestharness__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__r_mem_rdata[7U] 
            = Vtestharness__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__r_mem_rdata[8U] 
            = Vtestharness__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__r_mem_rdata[9U] 
            = Vtestharness__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__r_mem_rdata[0xaU] 
            = Vtestharness__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__r_mem_rdata[0xbU] 
            = Vtestharness__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__r_mem_rdata[0xcU] 
            = Vtestharness__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__r_mem_rdata[0xdU] 
            = Vtestharness__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__r_mem_rdata[0xeU] 
            = Vtestharness__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__r_mem_rdata[0xfU] 
            = Vtestharness__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__mem_q_ready_flat 
        = ((0x80000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xeU] 
                           << 0x18U)) | ((0x40000000U 
                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xcU] 
                                             << 0x18U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xaU] 
                                                << 0x18U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[8U] 
                                                   << 0x18U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[6U] 
                                                      << 0x18U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[4U] 
                                                         << 0x18U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[2U] 
                                                            << 0x18U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0U] 
                                                               << 0x18U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xeU] 
                                                                  << 0x10U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xcU] 
                                                                     << 0x10U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xaU] 
                                                                        << 0x10U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[8U] 
                                                                           << 0x10U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[6U] 
                                                                              << 0x10U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[4U] 
                                                                                << 0x10U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[2U] 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0U] 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xeU] 
                                                                                << 8U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xcU] 
                                                                                << 8U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xaU] 
                                                                                << 8U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[8U] 
                                                                                << 8U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[6U] 
                                                                                << 8U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[4U] 
                                                                                << 8U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[2U] 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0U] 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xeU]) 
                                                                                | ((0x40U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xcU]) 
                                                                                | ((0x20U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xaU]) 
                                                                                | ((0x10U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[8U]) 
                                                                                | ((8U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[6U]) 
                                                                                | ((4U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[4U]) 
                                                                                | ((2U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[2U]) 
                                                                                | (1U 
                                                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0U]))))))))))))))))))))))))))))))));
    __Vtemp_63[0U] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0U];
    __Vtemp_63[1U] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[1U];
    __Vtemp_63[2U] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[2U];
    __Vtemp_63[3U] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[3U];
    __Vtemp_63[4U] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[4U];
    __Vtemp_63[5U] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[5U];
    __Vtemp_63[6U] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[6U];
    __Vtemp_63[7U] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[7U];
    __Vtemp_63[8U] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[8U];
    __Vtemp_63[9U] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[9U];
    __Vtemp_63[0xaU] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xaU];
    __Vtemp_63[0xbU] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xbU];
    __Vtemp_63[0xcU] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xcU];
    __Vtemp_63[0xdU] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xdU];
    __Vtemp_63[0xeU] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xeU];
    __Vtemp_63[0xfU] = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xfU];
    __Vtemp_63[0x10U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0U] 
                          << 8U) | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0x10U]);
    __Vtemp_63[0x11U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0U] 
                          >> 0x18U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[1U] 
                                       << 8U));
    __Vtemp_63[0x12U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[1U] 
                          >> 0x18U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[2U] 
                                       << 8U));
    __Vtemp_63[0x13U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[2U] 
                          >> 0x18U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[3U] 
                                       << 8U));
    __Vtemp_63[0x14U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[3U] 
                          >> 0x18U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[4U] 
                                       << 8U));
    __Vtemp_63[0x15U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[4U] 
                          >> 0x18U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[5U] 
                                       << 8U));
    __Vtemp_63[0x16U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[5U] 
                          >> 0x18U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[6U] 
                                       << 8U));
    __Vtemp_63[0x17U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[6U] 
                          >> 0x18U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[7U] 
                                       << 8U));
    __Vtemp_63[0x18U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[7U] 
                          >> 0x18U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[8U] 
                                       << 8U));
    __Vtemp_63[0x19U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[8U] 
                          >> 0x18U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[9U] 
                                       << 8U));
    __Vtemp_63[0x1aU] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[9U] 
                          >> 0x18U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xaU] 
                                       << 8U));
    __Vtemp_63[0x1bU] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xaU] 
                          >> 0x18U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xbU] 
                                       << 8U));
    __Vtemp_63[0x1cU] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xbU] 
                          >> 0x18U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xcU] 
                                       << 8U));
    __Vtemp_63[0x1dU] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xcU] 
                          >> 0x18U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xdU] 
                                       << 8U));
    __Vtemp_63[0x1eU] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xdU] 
                          >> 0x18U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xeU] 
                                       << 8U));
    __Vtemp_63[0x1fU] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xeU] 
                          >> 0x18U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xfU] 
                                       << 8U));
    __Vtemp_63[0x20U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0U] 
                          << 0x10U) | ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xfU] 
                                        >> 0x18U) | 
                                       (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0x10U] 
                                        << 8U)));
    __Vtemp_63[0x21U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0U] 
                          >> 0x10U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[1U] 
                                       << 0x10U));
    __Vtemp_63[0x22U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[1U] 
                          >> 0x10U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[2U] 
                                       << 0x10U));
    __Vtemp_63[0x23U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[2U] 
                          >> 0x10U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[3U] 
                                       << 0x10U));
    __Vtemp_63[0x24U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[3U] 
                          >> 0x10U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[4U] 
                                       << 0x10U));
    __Vtemp_63[0x25U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[4U] 
                          >> 0x10U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[5U] 
                                       << 0x10U));
    __Vtemp_63[0x26U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[5U] 
                          >> 0x10U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[6U] 
                                       << 0x10U));
    __Vtemp_63[0x27U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[6U] 
                          >> 0x10U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[7U] 
                                       << 0x10U));
    __Vtemp_63[0x28U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[7U] 
                          >> 0x10U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[8U] 
                                       << 0x10U));
    __Vtemp_63[0x29U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[8U] 
                          >> 0x10U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[9U] 
                                       << 0x10U));
    __Vtemp_63[0x2aU] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[9U] 
                          >> 0x10U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xaU] 
                                       << 0x10U));
    __Vtemp_63[0x2bU] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xaU] 
                          >> 0x10U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xbU] 
                                       << 0x10U));
    __Vtemp_63[0x2cU] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xbU] 
                          >> 0x10U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xcU] 
                                       << 0x10U));
    __Vtemp_63[0x2dU] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xcU] 
                          >> 0x10U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xdU] 
                                       << 0x10U));
    __Vtemp_63[0x2eU] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xdU] 
                          >> 0x10U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xeU] 
                                       << 0x10U));
    __Vtemp_63[0x2fU] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xeU] 
                          >> 0x10U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xfU] 
                                       << 0x10U));
    __Vtemp_63[0x30U] = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xfU] 
                          >> 0x10U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0x10U] 
                                       << 0x10U));
    VL_CONCAT_WWW(2080,520,1560, vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellinp__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__mem_rsp_i, vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__3__KET____DOT__i_tcdm_mux__in_narrow_rsp_o, __Vtemp_63);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__w_mem_gnt 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__rsp_q_ready_flat) 
           & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__arb_outcome)) 
              & (~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write.__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_reqs__BRA__0__KET____DOT__i_ft_reg__DOT__empty))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__r_mem_gnt 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__rsp_q_ready_flat) 
           & ((~ (IData)(vlSymsp->TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read.__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_reqs__BRA__0__KET____DOT__i_ft_reg__DOT__empty)) 
              & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__arb_outcome)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__i_fifo_v3_response_trgt_store__push_i 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__rsp_q_ready_flat) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__req_q_valid_flat));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_fifo_v3_response_trgt_store__DOT__gate_clock = 1U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_fifo_v3_response_trgt_store__DOT__write_pointer_n 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_fifo_v3_response_trgt_store__DOT__write_pointer_q;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_fifo_v3_response_trgt_store__DOT__status_cnt_n 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_fifo_v3_response_trgt_store__DOT__status_cnt_q;
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__i_fifo_v3_response_trgt_store__push_i) 
         & (3U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_fifo_v3_response_trgt_store__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_fifo_v3_response_trgt_store__DOT__gate_clock = 0U;
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_fifo_v3_response_trgt_store__DOT__write_pointer_n 
            = ((2U == (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_fifo_v3_response_trgt_store__DOT__write_pointer_q))
                ? 0U : (3U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_fifo_v3_response_trgt_store__DOT__write_pointer_q))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_fifo_v3_response_trgt_store__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_fifo_v3_response_trgt_store__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_fifo_v3_response_trgt_store__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_fifo_v3_response_trgt_store__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_fifo_v3_response_trgt_store__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__i_fifo_v3_response_trgt_store__push_i) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q)) 
          & (3U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_fifo_v3_response_trgt_store__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_fifo_v3_response_trgt_store__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_fifo_v3_response_trgt_store__DOT__status_cnt_n 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_fifo_v3_response_trgt_store__DOT__status_cnt_q;
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__i_fifo_v3_response_trgt_store__push_i)
                  ? ((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_fifo_v3_response_trgt_store__DOT__mem_n 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_fifo_v3_response_trgt_store__DOT__mem_q;
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__i_fifo_v3_response_trgt_store__push_i) 
         & (3U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_fifo_v3_response_trgt_store__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_fifo_v3_response_trgt_store__DOT____Vlvbound_h94a500ec__0 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__arb_outcome;
        if ((2U >= (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_fifo_v3_response_trgt_store__DOT__write_pointer_q))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_fifo_v3_response_trgt_store__DOT__mem_n 
                = (((~ ((IData)(1U) << (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_fifo_v3_response_trgt_store__DOT__write_pointer_q))) 
                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_fifo_v3_response_trgt_store__DOT__mem_n)) 
                   | (7U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_fifo_v3_response_trgt_store__DOT____Vlvbound_h94a500ec__0) 
                            << (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__genblk1__BRA__0__KET____DOT__i_fifo_v3_response_trgt_store__DOT__write_pointer_q))));
        }
    }
}
