// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness_axi_burst_splitter_counters__pi151.h"

VL_INLINE_OPT void Vtestharness_axi_burst_splitter_counters__pi151___act_sequent__TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters__0(Vtestharness_axi_burst_splitter_counters__pi151* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestharness_axi_burst_splitter_counters__pi151___act_sequent__TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters__0\n"); );
    // Init
    VlWide<28>/*895:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<5>/*159:0*/ __Vtemp_13;
    VlWide<6>/*191:0*/ __Vtemp_17;
    VlWide<7>/*223:0*/ __Vtemp_20;
    VlWide<7>/*223:0*/ __Vtemp_22;
    VlWide<8>/*255:0*/ __Vtemp_27;
    VlWide<9>/*287:0*/ __Vtemp_31;
    VlWide<10>/*319:0*/ __Vtemp_34;
    VlWide<10>/*319:0*/ __Vtemp_36;
    VlWide<11>/*351:0*/ __Vtemp_41;
    VlWide<12>/*383:0*/ __Vtemp_45;
    VlWide<13>/*415:0*/ __Vtemp_49;
    VlWide<14>/*447:0*/ __Vtemp_52;
    VlWide<14>/*447:0*/ __Vtemp_54;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)((0x7fU 
                                               & ((0x20000U 
                                                   & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                   ? 
                                                  ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    << 9U) 
                                                   | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                      >> 0x17U))
                                                   : 
                                                  ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    << 2U) 
                                                   | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                      >> 0x1eU)))))) 
                              << 0x38U) | (((QData)((IData)(
                                                            (0x7fU 
                                                             & ((0x8000U 
                                                                 & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                                 ? 
                                                                ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x10U) 
                                                                 | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0x10U)))))) 
                                            << 0x31U) 
                                           | (((QData)((IData)(
                                                               (0x7fU 
                                                                & ((0x2000U 
                                                                    & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                                    ? 
                                                                   ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 5U) 
                                                                    | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1bU))
                                                                    : 
                                                                   ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1eU) 
                                                                    | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 2U)))))) 
                                               << 0x2aU) 
                                              | (((QData)((IData)(
                                                                  (0x7fU 
                                                                   & ((0x800U 
                                                                       & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                                       ? 
                                                                      ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0x13U) 
                                                                       | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0xdU))
                                                                       : 
                                                                      ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xcU) 
                                                                       | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x14U)))))) 
                                                  << 0x23U) 
                                                 | (((QData)((IData)(
                                                                     (0x7fU 
                                                                      & ((0x200U 
                                                                          & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                                          ? 
                                                                         ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 1U) 
                                                                          | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                             >> 0x1fU))
                                                                          : 
                                                                         ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x1aU) 
                                                                          | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 6U)))))) 
                                                     << 0x1cU) 
                                                    | (QData)((IData)(
                                                                      ((0xfe00000U 
                                                                        & (((0x80U 
                                                                             & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                                             ? 
                                                                            ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                              << 0xfU) 
                                                                             | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x11U))
                                                                             : 
                                                                            ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                              << 8U) 
                                                                             | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x18U))) 
                                                                           << 0x15U)) 
                                                                       | ((0x1fc000U 
                                                                           & (((0x20U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                                                ? 
                                                                               ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                : 
                                                                               ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xaU))) 
                                                                              << 0xeU)) 
                                                                          | ((0x3f80U 
                                                                              & (((8U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                                                 ? 
                                                                                ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x15U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 4U) 
                                                                                | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1cU))) 
                                                                                << 7U)) 
                                                                             | (0x7fU 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                                                 ? 
                                                                                ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x19U) 
                                                                                | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 7U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x12U) 
                                                                                | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xeU)))))))))))))));
    __Vtemp_2[1U] = ((((0x80000U & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                        ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                            << 0x1bU) | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                         >> 5U)) : 
                       ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                         << 0x14U) | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                      >> 0xcU))) << 0x1fU) 
                     | (IData)(((((QData)((IData)((0x7fU 
                                                   & ((0x20000U 
                                                       & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                       ? 
                                                      ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                        << 9U) 
                                                       | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                          >> 0x17U))
                                                       : 
                                                      ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                        << 2U) 
                                                       | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                          >> 0x1eU)))))) 
                                  << 0x38U) | (((QData)((IData)(
                                                                (0x7fU 
                                                                 & ((0x8000U 
                                                                     & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                                     ? 
                                                                    ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x10U) 
                                                                     | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0x10U)))))) 
                                                << 0x31U) 
                                               | (((QData)((IData)(
                                                                   (0x7fU 
                                                                    & ((0x2000U 
                                                                        & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                                        ? 
                                                                       ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 5U) 
                                                                        | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1bU))
                                                                        : 
                                                                       ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1eU) 
                                                                        | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 2U)))))) 
                                                   << 0x2aU) 
                                                  | (((QData)((IData)(
                                                                      (0x7fU 
                                                                       & ((0x800U 
                                                                           & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                                           ? 
                                                                          ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0x13U) 
                                                                           | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0xdU))
                                                                           : 
                                                                          ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xcU) 
                                                                           | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x14U)))))) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(
                                                                         (0x7fU 
                                                                          & ((0x200U 
                                                                              & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                                              ? 
                                                                             ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 1U) 
                                                                              | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1fU))
                                                                              : 
                                                                             ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x1aU) 
                                                                              | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                         << 0x1cU) 
                                                        | (QData)((IData)(
                                                                          ((0xfe00000U 
                                                                            & (((0x80U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                                                 ? 
                                                                                ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xfU) 
                                                                                | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x11U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 8U) 
                                                                                | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x18U))) 
                                                                               << 0x15U)) 
                                                                           | ((0x1fc000U 
                                                                               & (((0x20U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                                                 ? 
                                                                                ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xaU))) 
                                                                                << 0xeU)) 
                                                                              | ((0x3f80U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                                                 ? 
                                                                                ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x15U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 4U) 
                                                                                | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1cU))) 
                                                                                << 7U)) 
                                                                                | (0x7fU 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                                                 ? 
                                                                                ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x19U) 
                                                                                | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 7U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x12U) 
                                                                                | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xeU)))))))))))))) 
                                >> 0x20U)));
    __Vtemp_4[2U] = ((0xfe000U & (((0x800000U & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                    ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[5U] 
                                        << 0x1fU) | 
                                       (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[5U] 
                                        >> 1U)) : (
                                                   (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                    << 0x18U) 
                                                   | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                      >> 8U))) 
                                  << 0xdU)) | ((0x1fc0U 
                                                & (((0x200000U 
                                                     & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                     ? 
                                                    ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      << 0xdU) 
                                                     | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                        >> 0x13U))
                                                     : 
                                                    ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                      << 6U) 
                                                     | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                        >> 0x1aU))) 
                                                   << 6U)) 
                                               | (0x3fU 
                                                  & (((0x80000U 
                                                       & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                       ? 
                                                      ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                        << 0x1bU) 
                                                       | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                          >> 5U))
                                                       : 
                                                      ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                        << 0x14U) 
                                                       | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                          >> 0xcU))) 
                                                     >> 1U))));
    __Vtemp_9[3U] = ((0x7f0000U & (((2U & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                                     ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[7U] 
                                         << 0x19U) 
                                        | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[7U] 
                                           >> 7U)) : 
                                    ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[7U] 
                                      << 0x12U) | (
                                                   vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                   >> 0xeU))) 
                                   << 0x10U)) | ((0xfe00U 
                                                  & (((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U] 
                                                       >> 0x1fU)
                                                       ? 
                                                      ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                        << 7U) 
                                                       | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                          >> 0x19U))
                                                       : 
                                                      vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[7U]) 
                                                     << 9U)) 
                                                 | ((0x1fcU 
                                                     & (((0x20000000U 
                                                          & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                          ? 
                                                         ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                           << 0x15U) 
                                                          | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                             >> 0xbU))
                                                          : 
                                                         ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                           << 0xeU) 
                                                          | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                             >> 0x12U))) 
                                                        << 2U)) 
                                                    | (3U 
                                                       & (((0x8000000U 
                                                            & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                            ? 
                                                           ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                             << 3U) 
                                                            | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                               >> 0x1dU))
                                                            : 
                                                           ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                             << 0x1cU) 
                                                            | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                               >> 4U))) 
                                                          >> 5U)))));
    __Vtemp_13[4U] = ((0x7f000U & (((0x200U & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                                     ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[9U] 
                                         << 1U) | (
                                                   vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                   >> 0x1fU))
                                     : ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[9U] 
                                         << 0x1aU) 
                                        | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[9U] 
                                           >> 6U))) 
                                   << 0xcU)) | ((0xfe0U 
                                                 & (((0x80U 
                                                      & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                                                      ? 
                                                     ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                       << 0xfU) 
                                                      | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                         >> 0x11U))
                                                      : 
                                                     ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                       << 8U) 
                                                      | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                         >> 0x18U))) 
                                                    << 5U)) 
                                                | (0x1fU 
                                                   & (((0x20U 
                                                        & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                                                        ? 
                                                       ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                         << 0x1dU) 
                                                        | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                           >> 3U))
                                                        : 
                                                       ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                         << 0x16U) 
                                                        | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                           >> 0xaU))) 
                                                      >> 2U))));
    __Vtemp_17[5U] = ((0x7f00U & (((0x20000U & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                                    ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                        << 9U) | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                  >> 0x17U))
                                    : ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                        << 2U) | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                  >> 0x1eU))) 
                                  << 8U)) | ((0xfeU 
                                              & (((0x8000U 
                                                   & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                                                   ? 
                                                  ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                    << 0x17U) 
                                                   | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                      >> 9U))
                                                   : 
                                                  ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                    << 0x10U) 
                                                   | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                      >> 0x10U))) 
                                                 << 1U)) 
                                             | (1U 
                                                & (((0x2000U 
                                                     & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                                                     ? 
                                                    ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                      << 5U) 
                                                     | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                        >> 0x1bU))
                                                     : 
                                                    ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                      << 0x1eU) 
                                                     | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                        >> 2U))) 
                                                   >> 6U))));
    __Vtemp_20[5U] = ((((0x800000U & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                         ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xcU] 
                             << 0x1fU) | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xcU] 
                                          >> 1U)) : 
                        ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xcU] 
                          << 0x18U) | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xcU] 
                                       >> 8U))) << 0x1dU) 
                      | ((0x1fc00000U & (((0x200000U 
                                           & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                                           ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                               << 0xdU) 
                                              | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                 >> 0x13U))
                                           : ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xcU] 
                                               << 6U) 
                                              | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                 >> 0x1aU))) 
                                         << 0x16U)) 
                         | ((0x3f8000U & (((0x80000U 
                                            & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                                            ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                << 0x1bU) 
                                               | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                  >> 5U))
                                            : ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                << 0x14U) 
                                               | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                  >> 0xcU))) 
                                          << 0xfU)) 
                            | __Vtemp_17[5U])));
    __Vtemp_22[6U] = ((0x3f800U & (((0x8000000U & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                                     ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xdU] 
                                         << 3U) | (
                                                   vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xcU] 
                                                   >> 0x1dU))
                                     : ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xdU] 
                                         << 0x1cU) 
                                        | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xdU] 
                                           >> 4U))) 
                                   << 0xbU)) | ((0x7f0U 
                                                 & (((0x2000000U 
                                                      & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                                                      ? 
                                                     ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xcU] 
                                                       << 0x11U) 
                                                      | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xcU] 
                                                         >> 0xfU))
                                                      : 
                                                     ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xcU] 
                                                       << 0xaU) 
                                                      | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xcU] 
                                                         >> 0x16U))) 
                                                    << 4U)) 
                                                | (0xfU 
                                                   & (((0x800000U 
                                                        & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                                                        ? 
                                                       ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xcU] 
                                                         << 0x1fU) 
                                                        | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xcU] 
                                                           >> 1U))
                                                        : 
                                                       ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xcU] 
                                                         << 0x18U) 
                                                        | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xcU] 
                                                           >> 8U))) 
                                                      >> 3U))));
    __Vtemp_27[7U] = ((0x1fc000U & (((0x20U & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                                      ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xfU] 
                                          << 0x1dU) 
                                         | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xfU] 
                                            >> 3U))
                                      : ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xfU] 
                                          << 0x16U) 
                                         | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xfU] 
                                            >> 0xaU))) 
                                    << 0xeU)) | ((0x3f80U 
                                                  & (((8U 
                                                       & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                                                       ? 
                                                      ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xeU] 
                                                        << 0xbU) 
                                                       | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xeU] 
                                                          >> 0x15U))
                                                       : 
                                                      ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xfU] 
                                                        << 4U) 
                                                       | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xeU] 
                                                          >> 0x1cU))) 
                                                     << 7U)) 
                                                 | (0x7fU 
                                                    & ((2U 
                                                        & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                                                        ? 
                                                       ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xeU] 
                                                         << 0x19U) 
                                                        | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xeU] 
                                                           >> 7U))
                                                        : 
                                                       ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xeU] 
                                                         << 0x12U) 
                                                        | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xeU] 
                                                           >> 0xeU))))));
    __Vtemp_31[8U] = ((0x1fc00U & (((0x2000U & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                                     ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x11U] 
                                         << 5U) | (
                                                   vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x10U] 
                                                   >> 0x1bU))
                                     : ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x11U] 
                                         << 0x1eU) 
                                        | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x11U] 
                                           >> 2U))) 
                                   << 0xaU)) | ((0x3f8U 
                                                 & (((0x800U 
                                                      & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                                                      ? 
                                                     ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x10U] 
                                                       << 0x13U) 
                                                      | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x10U] 
                                                         >> 0xdU))
                                                      : 
                                                     ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x10U] 
                                                       << 0xcU) 
                                                      | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x10U] 
                                                         >> 0x14U))) 
                                                    << 3U)) 
                                                | (7U 
                                                   & (((0x200U 
                                                        & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                                                        ? 
                                                       ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x10U] 
                                                         << 1U) 
                                                        | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xfU] 
                                                           >> 0x1fU))
                                                        : 
                                                       ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x10U] 
                                                         << 0x1aU) 
                                                        | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x10U] 
                                                           >> 6U))) 
                                                      >> 4U))));
    __Vtemp_34[8U] = ((((0x80000U & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                         ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x12U] 
                             << 0x1bU) | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x12U] 
                                          >> 5U)) : 
                        ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x12U] 
                          << 0x14U) | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x12U] 
                                       >> 0xcU))) << 0x1fU) 
                      | ((0x7f000000U & (((0x20000U 
                                           & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                                           ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x11U] 
                                               << 9U) 
                                              | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x11U] 
                                                 >> 0x17U))
                                           : ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x12U] 
                                               << 2U) 
                                              | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x11U] 
                                                 >> 0x1eU))) 
                                         << 0x18U)) 
                         | ((0xfe0000U & (((0x8000U 
                                            & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                                            ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x11U] 
                                                << 0x17U) 
                                               | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x11U] 
                                                  >> 9U))
                                            : ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x11U] 
                                                << 0x10U) 
                                               | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x11U] 
                                                  >> 0x10U))) 
                                          << 0x11U)) 
                            | __Vtemp_31[8U])));
    __Vtemp_36[9U] = ((0xfe000U & (((0x800000U & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                                     ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x13U] 
                                         << 0x1fU) 
                                        | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x13U] 
                                           >> 1U)) : 
                                    ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x13U] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x13U] 
                                                   >> 8U))) 
                                   << 0xdU)) | ((0x1fc0U 
                                                 & (((0x200000U 
                                                      & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                                                      ? 
                                                     ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x12U] 
                                                       << 0xdU) 
                                                      | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x12U] 
                                                         >> 0x13U))
                                                      : 
                                                     ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x13U] 
                                                       << 6U) 
                                                      | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x12U] 
                                                         >> 0x1aU))) 
                                                    << 6U)) 
                                                | (0x3fU 
                                                   & (((0x80000U 
                                                        & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                                                        ? 
                                                       ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x12U] 
                                                         << 0x1bU) 
                                                        | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x12U] 
                                                           >> 5U))
                                                        : 
                                                       ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x12U] 
                                                         << 0x14U) 
                                                        | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x12U] 
                                                           >> 0xcU))) 
                                                      >> 1U))));
    __Vtemp_41[0xaU] = ((0x7f0000U & (((2U & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                                        ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x15U] 
                                            << 0x19U) 
                                           | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x15U] 
                                              >> 7U))
                                        : ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x15U] 
                                            << 0x12U) 
                                           | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x15U] 
                                              >> 0xeU))) 
                                      << 0x10U)) | 
                        ((0xfe00U & (((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U] 
                                       >> 0x1fU) ? 
                                      ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x14U] 
                                        << 7U) | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x14U] 
                                                  >> 0x19U))
                                       : vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x15U]) 
                                     << 9U)) | ((0x1fcU 
                                                 & (((0x20000000U 
                                                      & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                                                      ? 
                                                     ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x14U] 
                                                       << 0x15U) 
                                                      | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x14U] 
                                                         >> 0xbU))
                                                      : 
                                                     ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x14U] 
                                                       << 0xeU) 
                                                      | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x14U] 
                                                         >> 0x12U))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (((0x8000000U 
                                                        & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                                                        ? 
                                                       ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x14U] 
                                                         << 3U) 
                                                        | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x13U] 
                                                           >> 0x1dU))
                                                        : 
                                                       ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x14U] 
                                                         << 0x1cU) 
                                                        | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x14U] 
                                                           >> 4U))) 
                                                      >> 5U)))));
    __Vtemp_45[0xbU] = ((0x7f000U & (((0x200U & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                                       ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x17U] 
                                           << 1U) | 
                                          (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x16U] 
                                           >> 0x1fU))
                                       : ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x17U] 
                                           << 0x1aU) 
                                          | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x17U] 
                                             >> 6U))) 
                                     << 0xcU)) | ((0xfe0U 
                                                   & (((0x80U 
                                                        & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                                                        ? 
                                                       ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x16U] 
                                                         << 0xfU) 
                                                        | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x16U] 
                                                           >> 0x11U))
                                                        : 
                                                       ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x16U] 
                                                         << 8U) 
                                                        | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x16U] 
                                                           >> 0x18U))) 
                                                      << 5U)) 
                                                  | (0x1fU 
                                                     & (((0x20U 
                                                          & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                                                          ? 
                                                         ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x16U] 
                                                           << 0x1dU) 
                                                          | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x16U] 
                                                             >> 3U))
                                                          : 
                                                         ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x16U] 
                                                           << 0x16U) 
                                                          | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x16U] 
                                                             >> 0xaU))) 
                                                        >> 2U))));
    __Vtemp_49[0xcU] = ((0x7f00U & (((0x20000U & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                                      ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x18U] 
                                          << 9U) | 
                                         (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x18U] 
                                          >> 0x17U))
                                      : ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x19U] 
                                          << 2U) | 
                                         (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x18U] 
                                          >> 0x1eU))) 
                                    << 8U)) | ((0xfeU 
                                                & (((0x8000U 
                                                     & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                                                     ? 
                                                    ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x18U] 
                                                      << 0x17U) 
                                                     | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x18U] 
                                                        >> 9U))
                                                     : 
                                                    ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x18U] 
                                                      << 0x10U) 
                                                     | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x18U] 
                                                        >> 0x10U))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (((0x2000U 
                                                       & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                                                       ? 
                                                      ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x18U] 
                                                        << 5U) 
                                                       | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x17U] 
                                                          >> 0x1bU))
                                                       : 
                                                      ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x18U] 
                                                        << 0x1eU) 
                                                       | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x18U] 
                                                          >> 2U))) 
                                                     >> 6U))));
    __Vtemp_52[0xcU] = ((((0x800000U & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                           ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x1aU] 
                               << 0x1fU) | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x1aU] 
                                            >> 1U))
                           : ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x1aU] 
                               << 0x18U) | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x1aU] 
                                            >> 8U))) 
                         << 0x1dU) | ((0x1fc00000U 
                                       & (((0x200000U 
                                            & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                                            ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x19U] 
                                                << 0xdU) 
                                               | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x19U] 
                                                  >> 0x13U))
                                            : ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                << 6U) 
                                               | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x19U] 
                                                  >> 0x1aU))) 
                                          << 0x16U)) 
                                      | ((0x3f8000U 
                                          & (((0x80000U 
                                               & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                                               ? ((
                                                   vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x19U] 
                                                   << 0x1bU) 
                                                  | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x19U] 
                                                     >> 5U))
                                               : ((
                                                   vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x19U] 
                                                   << 0x14U) 
                                                  | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x19U] 
                                                     >> 0xcU))) 
                                             << 0xfU)) 
                                         | __Vtemp_49[0xcU])));
    __Vtemp_54[0xdU] = ((0x3f800U & (((0x8000000U & 
                                       vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                                       ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x1bU] 
                                           << 3U) | 
                                          (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x1aU] 
                                           >> 0x1dU))
                                       : ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x1bU] 
                                           << 0x1cU) 
                                          | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x1bU] 
                                             >> 4U))) 
                                     << 0xbU)) | ((0x7f0U 
                                                   & (((0x2000000U 
                                                        & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                                                        ? 
                                                       ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                         << 0x11U) 
                                                        | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                           >> 0xfU))
                                                        : 
                                                       ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                         << 0xaU) 
                                                        | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                           >> 0x16U))) 
                                                      << 4U)) 
                                                  | (0xfU 
                                                     & (((0x800000U 
                                                          & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                                                          ? 
                                                         ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                           << 0x1fU) 
                                                          | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                             >> 1U))
                                                          : 
                                                         ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                           << 0x18U) 
                                                          | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                             >> 8U))) 
                                                        >> 3U))));
    __Vtemp_1[2U] = ((((0x8000000U & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                        ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[6U] 
                            << 3U) | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[5U] 
                                      >> 0x1dU)) : 
                       ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[6U] 
                         << 0x1cU) | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[6U] 
                                      >> 4U))) << 0x1bU) 
                     | ((0x7f00000U & (((0x2000000U 
                                         & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                         ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[5U] 
                                             << 0x11U) 
                                            | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[5U] 
                                               >> 0xfU))
                                         : ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[5U] 
                                             << 0xaU) 
                                            | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[5U] 
                                               >> 0x16U))) 
                                       << 0x14U)) | 
                        __Vtemp_4[2U]));
    __Vtemp_1[3U] = ((((0x20U & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                        ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[8U] 
                            << 0x1dU) | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[8U] 
                                         >> 3U)) : 
                       ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[8U] 
                         << 0x16U) | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[8U] 
                                      >> 0xaU))) << 0x1eU) 
                     | ((0x3f800000U & (((8U & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                                          ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[7U] 
                                              << 0xbU) 
                                             | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                >> 0x15U))
                                          : ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[8U] 
                                              << 4U) 
                                             | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                >> 0x1cU))) 
                                        << 0x17U)) 
                        | __Vtemp_9[3U]));
    __Vtemp_1[4U] = ((((0x2000U & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                        ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                            << 5U) | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[9U] 
                                      >> 0x1bU)) : 
                       ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                         << 0x1eU) | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                      >> 2U))) << 0x1aU) 
                     | ((0x3f80000U & (((0x800U & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                                         ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[9U] 
                                             << 0x13U) 
                                            | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[9U] 
                                               >> 0xdU))
                                         : ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[9U] 
                                             << 0xcU) 
                                            | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[9U] 
                                               >> 0x14U))) 
                                       << 0x13U)) | 
                        __Vtemp_13[4U]));
    __Vtemp_1[6U] = ((((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U] 
                        >> 0x1fU) ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xdU] 
                                      << 7U) | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xdU] 
                                                >> 0x19U))
                        : vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xeU]) 
                      << 0x19U) | ((0x1fc0000U & ((
                                                   (0x20000000U 
                                                    & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                                                    ? 
                                                   ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xdU] 
                                                     << 0x15U) 
                                                    | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xdU] 
                                                       >> 0xbU))
                                                    : 
                                                   ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xdU] 
                                                     << 0xeU) 
                                                    | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xdU] 
                                                       >> 0x12U))) 
                                                  << 0x12U)) 
                                   | __Vtemp_22[6U]));
    __Vtemp_1[7U] = ((((0x200U & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                        ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x10U] 
                            << 1U) | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xfU] 
                                      >> 0x1fU)) : 
                       ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x10U] 
                         << 0x1aU) | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x10U] 
                                      >> 6U))) << 0x1cU) 
                     | ((0xfe00000U & (((0x80U & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                                         ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xfU] 
                                             << 0xfU) 
                                            | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xfU] 
                                               >> 0x11U))
                                         : ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xfU] 
                                             << 8U) 
                                            | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xfU] 
                                               >> 0x18U))) 
                                       << 0x15U)) | 
                        __Vtemp_27[7U]));
    __Vtemp_1[9U] = ((((0x8000000U & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                        ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x14U] 
                            << 3U) | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x13U] 
                                      >> 0x1dU)) : 
                       ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x14U] 
                         << 0x1cU) | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x14U] 
                                      >> 4U))) << 0x1bU) 
                     | ((0x7f00000U & (((0x2000000U 
                                         & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                                         ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x13U] 
                                             << 0x11U) 
                                            | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x13U] 
                                               >> 0xfU))
                                         : ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x13U] 
                                             << 0xaU) 
                                            | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x13U] 
                                               >> 0x16U))) 
                                       << 0x14U)) | 
                        __Vtemp_36[9U]));
    __Vtemp_1[0xaU] = ((((0x20U & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                          ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x16U] 
                              << 0x1dU) | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x16U] 
                                           >> 3U)) : 
                         ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x16U] 
                           << 0x16U) | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x16U] 
                                        >> 0xaU))) 
                        << 0x1eU) | ((0x3f800000U & 
                                      (((8U & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                                         ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x15U] 
                                             << 0xbU) 
                                            | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x15U] 
                                               >> 0x15U))
                                         : ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x16U] 
                                             << 4U) 
                                            | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x15U] 
                                               >> 0x1cU))) 
                                       << 0x17U)) | 
                                     __Vtemp_41[0xaU]));
    __Vtemp_1[0xbU] = ((((0x2000U & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                          ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x18U] 
                              << 5U) | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x17U] 
                                        >> 0x1bU)) : 
                         ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x18U] 
                           << 0x1eU) | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x18U] 
                                        >> 2U))) << 0x1aU) 
                       | ((0x3f80000U & (((0x800U & 
                                           vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                                           ? ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x17U] 
                                               << 0x13U) 
                                              | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x17U] 
                                                 >> 0xdU))
                                           : ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x17U] 
                                               << 0xcU) 
                                              | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x17U] 
                                                 >> 0x14U))) 
                                         << 0x13U)) 
                          | __Vtemp_45[0xbU]));
    __Vtemp_1[0xdU] = ((((1U & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U])
                          ? 0U : 1U) << 0x19U) | ((0x1fc0000U 
                                                   & (((0x20000000U 
                                                        & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                                                        ? 
                                                       ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x1bU] 
                                                         << 0x15U) 
                                                        | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x1bU] 
                                                           >> 0xbU))
                                                        : 
                                                       ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x1bU] 
                                                         << 0xeU) 
                                                        | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x1bU] 
                                                           >> 0x12U))) 
                                                      << 0x12U)) 
                                                  | __Vtemp_54[0xdU]));
    vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_2[0U];
    vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_2[1U];
    vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
        = __Vtemp_1[2U];
    vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
        = __Vtemp_1[3U];
    vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
        = __Vtemp_1[4U];
    vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[5U] 
        = __Vtemp_20[5U];
    vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[6U] 
        = __Vtemp_1[6U];
    vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[7U] 
        = __Vtemp_1[7U];
    vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[8U] 
        = __Vtemp_34[8U];
    vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[9U] 
        = __Vtemp_1[9U];
    vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xaU] 
        = __Vtemp_1[0xaU];
    vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xbU] 
        = __Vtemp_1[0xbU];
    vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xcU] 
        = __Vtemp_52[0xcU];
    vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xdU] 
        = __Vtemp_1[0xdU];
    vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xeU] 
        = ((((0x400U & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U])
              ? 0xaU : 0xbU) << 0x1cU) | ((((0x100U 
                                             & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U])
                                             ? 8U : 9U) 
                                           << 0x15U) 
                                          | ((((0x40U 
                                                & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U])
                                                ? 6U
                                                : 7U) 
                                              << 0xeU) 
                                             | ((((0x10U 
                                                   & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U])
                                                   ? 4U
                                                   : 5U) 
                                                 << 7U) 
                                                | ((4U 
                                                    & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U])
                                                    ? 2U
                                                    : 3U)))));
    vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0xfU] 
        = ((((0x100000U & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U])
              ? 0x14U : 0x15U) << 0x1fU) | ((((0x40000U 
                                               & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U])
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U])
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x11U) 
                                               | ((((0x4000U 
                                                     & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U])
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xaU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U])
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 3U) 
                                                     | (((0x400U 
                                                          & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U])
                                                          ? 0xaU
                                                          : 0xbU) 
                                                        >> 4U))))));
    vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x10U] 
        = ((((0x10000000U & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U])
              ? 0x1cU : 0x1dU) << 0x1bU) | ((((0x4000000U 
                                               & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U])
                                               ? 0x1aU
                                               : 0x1bU) 
                                             << 0x14U) 
                                            | ((((0x1000000U 
                                                  & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U])
                                                  ? 0x18U
                                                  : 0x19U) 
                                                << 0xdU) 
                                               | ((((0x400000U 
                                                     & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U])
                                                     ? 0x16U
                                                     : 0x17U) 
                                                   << 6U) 
                                                  | (((0x100000U 
                                                       & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U])
                                                       ? 0x14U
                                                       : 0x15U) 
                                                     >> 1U)))));
    vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x11U] 
        = ((((0x40U & vlSelf->__PVT__i_idq__DOT__linked_data_free[1U])
              ? 0x26U : 0x27U) << 0x1eU) | ((((0x10U 
                                               & vlSelf->__PVT__i_idq__DOT__linked_data_free[1U])
                                               ? 0x24U
                                               : 0x25U) 
                                             << 0x17U) 
                                            | ((((4U 
                                                  & vlSelf->__PVT__i_idq__DOT__linked_data_free[1U])
                                                  ? 0x22U
                                                  : 0x23U) 
                                                << 0x10U) 
                                               | ((((1U 
                                                     & vlSelf->__PVT__i_idq__DOT__linked_data_free[1U])
                                                     ? 0x20U
                                                     : 0x21U) 
                                                   << 9U) 
                                                  | ((((0x40000000U 
                                                        & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U])
                                                        ? 0x1eU
                                                        : 0x1fU) 
                                                      << 2U) 
                                                     | (((0x10000000U 
                                                          & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U])
                                                          ? 0x1cU
                                                          : 0x1dU) 
                                                        >> 5U))))));
    vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x12U] 
        = ((((0x4000U & vlSelf->__PVT__i_idq__DOT__linked_data_free[1U])
              ? 0x2eU : 0x2fU) << 0x1aU) | ((((0x1000U 
                                               & vlSelf->__PVT__i_idq__DOT__linked_data_free[1U])
                                               ? 0x2cU
                                               : 0x2dU) 
                                             << 0x13U) 
                                            | ((((0x400U 
                                                  & vlSelf->__PVT__i_idq__DOT__linked_data_free[1U])
                                                  ? 0x2aU
                                                  : 0x2bU) 
                                                << 0xcU) 
                                               | ((((0x100U 
                                                     & vlSelf->__PVT__i_idq__DOT__linked_data_free[1U])
                                                     ? 0x28U
                                                     : 0x29U) 
                                                   << 5U) 
                                                  | (((0x40U 
                                                       & vlSelf->__PVT__i_idq__DOT__linked_data_free[1U])
                                                       ? 0x26U
                                                       : 0x27U) 
                                                     >> 2U)))));
    vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x13U] 
        = ((((0x1000000U & vlSelf->__PVT__i_idq__DOT__linked_data_free[1U])
              ? 0x38U : 0x39U) << 0x1dU) | ((((0x400000U 
                                               & vlSelf->__PVT__i_idq__DOT__linked_data_free[1U])
                                               ? 0x36U
                                               : 0x37U) 
                                             << 0x16U) 
                                            | ((((0x100000U 
                                                  & vlSelf->__PVT__i_idq__DOT__linked_data_free[1U])
                                                  ? 0x34U
                                                  : 0x35U) 
                                                << 0xfU) 
                                               | ((((0x40000U 
                                                     & vlSelf->__PVT__i_idq__DOT__linked_data_free[1U])
                                                     ? 0x32U
                                                     : 0x33U) 
                                                   << 8U) 
                                                  | ((((0x10000U 
                                                        & vlSelf->__PVT__i_idq__DOT__linked_data_free[1U])
                                                        ? 0x30U
                                                        : 0x31U) 
                                                      << 1U) 
                                                     | (((0x4000U 
                                                          & vlSelf->__PVT__i_idq__DOT__linked_data_free[1U])
                                                          ? 0x2eU
                                                          : 0x2fU) 
                                                        >> 6U))))));
    vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x14U] 
        = ((((1U & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U])
              ? 0x40U : 0x41U) << 0x19U) | ((((0x40000000U 
                                               & vlSelf->__PVT__i_idq__DOT__linked_data_free[1U])
                                               ? 0x3eU
                                               : 0x3fU) 
                                             << 0x12U) 
                                            | ((((0x10000000U 
                                                  & vlSelf->__PVT__i_idq__DOT__linked_data_free[1U])
                                                  ? 0x3cU
                                                  : 0x3dU) 
                                                << 0xbU) 
                                               | ((((0x4000000U 
                                                     & vlSelf->__PVT__i_idq__DOT__linked_data_free[1U])
                                                     ? 0x3aU
                                                     : 0x3bU) 
                                                   << 4U) 
                                                  | (((0x1000000U 
                                                       & vlSelf->__PVT__i_idq__DOT__linked_data_free[1U])
                                                       ? 0x38U
                                                       : 0x39U) 
                                                     >> 3U)))));
    vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x15U] 
        = ((((0x400U & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U])
              ? 0x4aU : 0x4bU) << 0x1cU) | ((((0x100U 
                                               & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U])
                                               ? 0x48U
                                               : 0x49U) 
                                             << 0x15U) 
                                            | ((((0x40U 
                                                  & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U])
                                                  ? 0x46U
                                                  : 0x47U) 
                                                << 0xeU) 
                                               | ((((0x10U 
                                                     & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U])
                                                     ? 0x44U
                                                     : 0x45U) 
                                                   << 7U) 
                                                  | ((4U 
                                                      & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U])
                                                      ? 0x42U
                                                      : 0x43U)))));
    vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x16U] 
        = ((((0x100000U & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U])
              ? 0x54U : 0x55U) << 0x1fU) | ((((0x40000U 
                                               & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U])
                                               ? 0x52U
                                               : 0x53U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U])
                                                  ? 0x50U
                                                  : 0x51U) 
                                                << 0x11U) 
                                               | ((((0x4000U 
                                                     & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U])
                                                     ? 0x4eU
                                                     : 0x4fU) 
                                                   << 0xaU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U])
                                                        ? 0x4cU
                                                        : 0x4dU) 
                                                      << 3U) 
                                                     | (((0x400U 
                                                          & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U])
                                                          ? 0x4aU
                                                          : 0x4bU) 
                                                        >> 4U))))));
    vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x17U] 
        = ((((0x10000000U & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U])
              ? 0x5cU : 0x5dU) << 0x1bU) | ((((0x4000000U 
                                               & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U])
                                               ? 0x5aU
                                               : 0x5bU) 
                                             << 0x14U) 
                                            | ((((0x1000000U 
                                                  & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U])
                                                  ? 0x58U
                                                  : 0x59U) 
                                                << 0xdU) 
                                               | ((((0x400000U 
                                                     & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U])
                                                     ? 0x56U
                                                     : 0x57U) 
                                                   << 6U) 
                                                  | (((0x100000U 
                                                       & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U])
                                                       ? 0x54U
                                                       : 0x55U) 
                                                     >> 1U)))));
    vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x18U] 
        = ((((0x40U & vlSelf->__PVT__i_idq__DOT__linked_data_free[3U])
              ? 0x66U : 0x67U) << 0x1eU) | ((((0x10U 
                                               & vlSelf->__PVT__i_idq__DOT__linked_data_free[3U])
                                               ? 0x64U
                                               : 0x65U) 
                                             << 0x17U) 
                                            | ((((4U 
                                                  & vlSelf->__PVT__i_idq__DOT__linked_data_free[3U])
                                                  ? 0x62U
                                                  : 0x63U) 
                                                << 0x10U) 
                                               | ((((1U 
                                                     & vlSelf->__PVT__i_idq__DOT__linked_data_free[3U])
                                                     ? 0x60U
                                                     : 0x61U) 
                                                   << 9U) 
                                                  | ((((0x40000000U 
                                                        & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U])
                                                        ? 0x5eU
                                                        : 0x5fU) 
                                                      << 2U) 
                                                     | (((0x10000000U 
                                                          & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U])
                                                          ? 0x5cU
                                                          : 0x5dU) 
                                                        >> 5U))))));
    vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x19U] 
        = ((((0x4000U & vlSelf->__PVT__i_idq__DOT__linked_data_free[3U])
              ? 0x6eU : 0x6fU) << 0x1aU) | ((((0x1000U 
                                               & vlSelf->__PVT__i_idq__DOT__linked_data_free[3U])
                                               ? 0x6cU
                                               : 0x6dU) 
                                             << 0x13U) 
                                            | ((((0x400U 
                                                  & vlSelf->__PVT__i_idq__DOT__linked_data_free[3U])
                                                  ? 0x6aU
                                                  : 0x6bU) 
                                                << 0xcU) 
                                               | ((((0x100U 
                                                     & vlSelf->__PVT__i_idq__DOT__linked_data_free[3U])
                                                     ? 0x68U
                                                     : 0x69U) 
                                                   << 5U) 
                                                  | (((0x40U 
                                                       & vlSelf->__PVT__i_idq__DOT__linked_data_free[3U])
                                                       ? 0x66U
                                                       : 0x67U) 
                                                     >> 2U)))));
    vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x1aU] 
        = ((((0x1000000U & vlSelf->__PVT__i_idq__DOT__linked_data_free[3U])
              ? 0x78U : 0x79U) << 0x1dU) | ((((0x400000U 
                                               & vlSelf->__PVT__i_idq__DOT__linked_data_free[3U])
                                               ? 0x76U
                                               : 0x77U) 
                                             << 0x16U) 
                                            | ((((0x100000U 
                                                  & vlSelf->__PVT__i_idq__DOT__linked_data_free[3U])
                                                  ? 0x74U
                                                  : 0x75U) 
                                                << 0xfU) 
                                               | ((((0x40000U 
                                                     & vlSelf->__PVT__i_idq__DOT__linked_data_free[3U])
                                                     ? 0x72U
                                                     : 0x73U) 
                                                   << 8U) 
                                                  | ((((0x10000U 
                                                        & vlSelf->__PVT__i_idq__DOT__linked_data_free[3U])
                                                        ? 0x70U
                                                        : 0x71U) 
                                                      << 1U) 
                                                     | (((0x4000U 
                                                          & vlSelf->__PVT__i_idq__DOT__linked_data_free[3U])
                                                          ? 0x6eU
                                                          : 0x6fU) 
                                                        >> 6U))))));
    vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x1bU] 
        = ((0xfe000000U & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0x1bU]) 
           | ((((0x40000000U & vlSelf->__PVT__i_idq__DOT__linked_data_free[3U])
                 ? 0x7eU : 0x7fU) << 0x12U) | ((((0x10000000U 
                                                  & vlSelf->__PVT__i_idq__DOT__linked_data_free[3U])
                                                  ? 0x7cU
                                                  : 0x7dU) 
                                                << 0xbU) 
                                               | ((((0x4000000U 
                                                     & vlSelf->__PVT__i_idq__DOT__linked_data_free[3U])
                                                     ? 0x7aU
                                                     : 0x7bU) 
                                                   << 4U) 
                                                  | (((0x1000000U 
                                                       & vlSelf->__PVT__i_idq__DOT__linked_data_free[3U])
                                                       ? 0x78U
                                                       : 0x79U) 
                                                     >> 3U)))));
}

VL_INLINE_OPT void Vtestharness_axi_burst_splitter_counters__pi151___act_sequent__TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters__1(Vtestharness_axi_burst_splitter_counters__pi151* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestharness_axi_burst_splitter_counters__pi151___act_sequent__TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters__1\n"); );
    // Init
    QData/*63:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((QData)((IData)(((0x4000U & (IData)(vlSelf->__PVT__i_idq__DOT__head_tail_free))
                                    ? 0xeU : 0xfU))) 
                  << 0x38U) | (((QData)((IData)(((0x1000U 
                                                  & (IData)(vlSelf->__PVT__i_idq__DOT__head_tail_free))
                                                  ? 0xcU
                                                  : 0xdU))) 
                                << 0x34U) | (((QData)((IData)(
                                                              ((0x400U 
                                                                & (IData)(vlSelf->__PVT__i_idq__DOT__head_tail_free))
                                                                ? 0xaU
                                                                : 0xbU))) 
                                              << 0x30U) 
                                             | (((QData)((IData)(
                                                                 ((0x100U 
                                                                   & (IData)(vlSelf->__PVT__i_idq__DOT__head_tail_free))
                                                                   ? 8U
                                                                   : 9U))) 
                                                 << 0x2cU) 
                                                | (((QData)((IData)(
                                                                    ((0x40U 
                                                                      & (IData)(vlSelf->__PVT__i_idq__DOT__head_tail_free))
                                                                      ? 6U
                                                                      : 7U))) 
                                                    << 0x28U) 
                                                   | (((QData)((IData)(
                                                                       ((0x10U 
                                                                         & (IData)(vlSelf->__PVT__i_idq__DOT__head_tail_free))
                                                                         ? 4U
                                                                         : 5U))) 
                                                       << 0x24U) 
                                                      | (((QData)((IData)(
                                                                          ((4U 
                                                                            & (IData)(vlSelf->__PVT__i_idq__DOT__head_tail_free))
                                                                            ? 2U
                                                                            : 3U))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((((1U 
                                                                               & (IData)(vlSelf->__PVT__i_idq__DOT__head_tail_free))
                                                                               ? 0U
                                                                               : 1U) 
                                                                             << 0x1cU) 
                                                                            | ((0xf000000U 
                                                                                & (((0x2000U 
                                                                                & (IData)(vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x34U))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x38U))) 
                                                                                << 0x18U)) 
                                                                               | ((0xf00000U 
                                                                                & (((0x800U 
                                                                                & (IData)(vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x2cU))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x30U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf0000U 
                                                                                & (((0x200U 
                                                                                & (IData)(vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x24U))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x28U))) 
                                                                                << 0x10U)) 
                                                                                | ((0xf000U 
                                                                                & (((0x80U 
                                                                                & (IData)(vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x1cU))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x20U))) 
                                                                                << 0xcU)) 
                                                                                | ((0xf00U 
                                                                                & (((0x20U 
                                                                                & (IData)(vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x18U))) 
                                                                                << 8U)) 
                                                                                | ((0xf0U 
                                                                                & (((8U 
                                                                                & (IData)(vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0xcU))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x10U))) 
                                                                                << 4U)) 
                                                                                | (0xfU 
                                                                                & ((2U 
                                                                                & (IData)(vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 4U))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 8U))))))))))))))))))));
    vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__index_nodes 
        = ((0xf000000000000000ULL & vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__index_nodes) 
           | __Vtemp_1);
}

VL_INLINE_OPT void Vtestharness_axi_burst_splitter_counters__pi151___act_sequent__TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters__2(Vtestharness_axi_burst_splitter_counters__pi151* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestharness_axi_burst_splitter_counters__pi151___act_sequent__TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters__2\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<4>/*127:0*/ __Vtemp_40;
    VlWide<4>/*127:0*/ __Vtemp_47;
    VlWide<4>/*127:0*/ __Vtemp_54;
    VlWide<4>/*127:0*/ __Vtemp_61;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)((0U != 
                                               (3U 
                                                & vlSelf->__PVT__cnt_free[0U])))) 
                              << 0x3fU) | (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (0x60000000U 
                                                              & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (0U 
                                                                != 
                                                                (0x18000000U 
                                                                 & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x6000000U 
                                                                    & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x1800000U 
                                                                       & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x600000U 
                                                                          & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x180000U 
                                                                             & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x60000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U] 
                                                                                >> 0x1fU) 
                                                                                | vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((0x80000000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]) 
                                                                                | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U] 
                                                                                << 0x1fU))) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x19U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x12U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & ((0x8000U 
                                                                                & (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U] 
                                                                                >> 0x10U)) 
                                                                                | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U] 
                                                                                << 0xfU))) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_2[1U] = (IData)(((((QData)((IData)((0U 
                                                != 
                                                (3U 
                                                 & vlSelf->__PVT__cnt_free[0U])))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (0U 
                                                              != 
                                                              (0x60000000U 
                                                               & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x18000000U 
                                                                  & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x6000000U 
                                                                     & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0x1800000U 
                                                                        & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0x600000U 
                                                                           & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (0x180000U 
                                                                              & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U] 
                                                                                >> 0x1fU) 
                                                                                | vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((0x80000000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]) 
                                                                                | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U] 
                                                                                << 0x1fU))) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x19U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x12U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & ((0x8000U 
                                                                                & (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U] 
                                                                                >> 0x10U)) 
                                                                                | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U] 
                                                                                << 0xfU))) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                             >> 0x20U));
    __Vtemp_8[2U] = (((IData)((0U != (0xc000U & vlSelf->__PVT__cnt_free[0U]))) 
                      << 6U) | (((IData)((0U != (0x3000U 
                                                 & vlSelf->__PVT__cnt_free[0U]))) 
                                 << 5U) | (((IData)(
                                                    (0U 
                                                     != 
                                                     (0xc00U 
                                                      & vlSelf->__PVT__cnt_free[0U]))) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0x300U 
                                                         & vlSelf->__PVT__cnt_free[0U]))) 
                                               << 3U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0xc0U 
                                                            & vlSelf->__PVT__cnt_free[0U]))) 
                                                  << 2U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0x30U 
                                                               & vlSelf->__PVT__cnt_free[0U]))) 
                                                     << 1U) 
                                                    | (IData)(
                                                              (0U 
                                                               != 
                                                               (0xcU 
                                                                & vlSelf->__PVT__cnt_free[0U])))))))));
    __Vtemp_15[2U] = (((IData)((0U != (0x30000000U 
                                       & vlSelf->__PVT__cnt_free[0U]))) 
                       << 0xdU) | (((IData)((0U != 
                                             (0xc000000U 
                                              & vlSelf->__PVT__cnt_free[0U]))) 
                                    << 0xcU) | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0x3000000U 
                                                           & vlSelf->__PVT__cnt_free[0U]))) 
                                                 << 0xbU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00000U 
                                                              & vlSelf->__PVT__cnt_free[0U]))) 
                                                    << 0xaU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x300000U 
                                                                 & vlSelf->__PVT__cnt_free[0U]))) 
                                                       << 9U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSelf->__PVT__cnt_free[0U]))) 
                                                          << 8U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSelf->__PVT__cnt_free[0U]))) 
                                                             << 7U) 
                                                            | __Vtemp_8[2U])))))));
    __Vtemp_22[2U] = (((IData)((0U != (0xc00U & vlSelf->__PVT__cnt_free[1U]))) 
                       << 0x14U) | (((IData)((0U != 
                                              (0x300U 
                                               & vlSelf->__PVT__cnt_free[1U]))) 
                                     << 0x13U) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xc0U 
                                                             & vlSelf->__PVT__cnt_free[1U]))) 
                                                   << 0x12U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (0x30U 
                                                                & vlSelf->__PVT__cnt_free[1U]))) 
                                                      << 0x11U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0xcU 
                                                                   & vlSelf->__PVT__cnt_free[1U]))) 
                                                         << 0x10U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (3U 
                                                                      & vlSelf->__PVT__cnt_free[1U]))) 
                                                            << 0xfU) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0xc0000000U 
                                                                         & vlSelf->__PVT__cnt_free[0U]))) 
                                                               << 0xeU) 
                                                              | __Vtemp_15[2U])))))));
    __Vtemp_29[2U] = (((IData)((0U != (0x3000000U & 
                                       vlSelf->__PVT__cnt_free[1U]))) 
                       << 0x1bU) | (((IData)((0U != 
                                              (0xc00000U 
                                               & vlSelf->__PVT__cnt_free[1U]))) 
                                     << 0x1aU) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x300000U 
                                                             & vlSelf->__PVT__cnt_free[1U]))) 
                                                   << 0x19U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (0xc0000U 
                                                                & vlSelf->__PVT__cnt_free[1U]))) 
                                                      << 0x18U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x30000U 
                                                                   & vlSelf->__PVT__cnt_free[1U]))) 
                                                         << 0x17U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0xc000U 
                                                                      & vlSelf->__PVT__cnt_free[1U]))) 
                                                            << 0x16U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0x3000U 
                                                                         & vlSelf->__PVT__cnt_free[1U]))) 
                                                               << 0x15U) 
                                                              | __Vtemp_22[2U])))))));
    __Vtemp_40[3U] = (((IData)((0U != (0xc000U & vlSelf->__PVT__cnt_free[2U]))) 
                       << 6U) | (((IData)((0U != (0x3000U 
                                                  & vlSelf->__PVT__cnt_free[2U]))) 
                                  << 5U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (0xc00U 
                                                       & vlSelf->__PVT__cnt_free[2U]))) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x300U 
                                                          & vlSelf->__PVT__cnt_free[2U]))) 
                                                << 3U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xc0U 
                                                             & vlSelf->__PVT__cnt_free[2U]))) 
                                                   << 2U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (0x30U 
                                                                & vlSelf->__PVT__cnt_free[2U]))) 
                                                      << 1U) 
                                                     | (IData)(
                                                               (0U 
                                                                != 
                                                                (0xcU 
                                                                 & vlSelf->__PVT__cnt_free[2U])))))))));
    __Vtemp_47[3U] = (((IData)((0U != (0x30000000U 
                                       & vlSelf->__PVT__cnt_free[2U]))) 
                       << 0xdU) | (((IData)((0U != 
                                             (0xc000000U 
                                              & vlSelf->__PVT__cnt_free[2U]))) 
                                    << 0xcU) | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0x3000000U 
                                                           & vlSelf->__PVT__cnt_free[2U]))) 
                                                 << 0xbU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00000U 
                                                              & vlSelf->__PVT__cnt_free[2U]))) 
                                                    << 0xaU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x300000U 
                                                                 & vlSelf->__PVT__cnt_free[2U]))) 
                                                       << 9U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSelf->__PVT__cnt_free[2U]))) 
                                                          << 8U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSelf->__PVT__cnt_free[2U]))) 
                                                             << 7U) 
                                                            | __Vtemp_40[3U])))))));
    __Vtemp_54[3U] = (((IData)((0U != (0xc00U & vlSelf->__PVT__cnt_free[3U]))) 
                       << 0x14U) | (((IData)((0U != 
                                              (0x300U 
                                               & vlSelf->__PVT__cnt_free[3U]))) 
                                     << 0x13U) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xc0U 
                                                             & vlSelf->__PVT__cnt_free[3U]))) 
                                                   << 0x12U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (0x30U 
                                                                & vlSelf->__PVT__cnt_free[3U]))) 
                                                      << 0x11U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0xcU 
                                                                   & vlSelf->__PVT__cnt_free[3U]))) 
                                                         << 0x10U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (3U 
                                                                      & vlSelf->__PVT__cnt_free[3U]))) 
                                                            << 0xfU) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0xc0000000U 
                                                                         & vlSelf->__PVT__cnt_free[2U]))) 
                                                               << 0xeU) 
                                                              | __Vtemp_47[3U])))))));
    __Vtemp_61[3U] = (((IData)((0U != (0x3000000U & 
                                       vlSelf->__PVT__cnt_free[3U]))) 
                       << 0x1bU) | (((IData)((0U != 
                                              (0xc00000U 
                                               & vlSelf->__PVT__cnt_free[3U]))) 
                                     << 0x1aU) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x300000U 
                                                             & vlSelf->__PVT__cnt_free[3U]))) 
                                                   << 0x19U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (0xc0000U 
                                                                & vlSelf->__PVT__cnt_free[3U]))) 
                                                      << 0x18U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x30000U 
                                                                   & vlSelf->__PVT__cnt_free[3U]))) 
                                                         << 0x17U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0xc000U 
                                                                      & vlSelf->__PVT__cnt_free[3U]))) 
                                                            << 0x16U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0x3000U 
                                                                         & vlSelf->__PVT__cnt_free[3U]))) 
                                                               << 0x15U) 
                                                              | __Vtemp_54[3U])))))));
    vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U] 
        = __Vtemp_2[0U];
    vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U] 
        = __Vtemp_2[1U];
    vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U] 
        = (((IData)((0U != (3U & vlSelf->__PVT__cnt_free[2U]))) 
            << 0x1fU) | (((IData)((0U != (0xc0000000U 
                                          & vlSelf->__PVT__cnt_free[1U]))) 
                          << 0x1eU) | (((IData)((0U 
                                                 != 
                                                 (0x30000000U 
                                                  & vlSelf->__PVT__cnt_free[1U]))) 
                                        << 0x1dU) | 
                                       (((IData)((0U 
                                                  != 
                                                  (0xc000000U 
                                                   & vlSelf->__PVT__cnt_free[1U]))) 
                                         << 0x1cU) 
                                        | __Vtemp_29[2U]))));
    vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U] 
        = ((0x80000000U & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U]) 
           | (((IData)((0U != (0xc0000000U & vlSelf->__PVT__cnt_free[3U]))) 
               << 0x1eU) | (((IData)((0U != (0x30000000U 
                                             & vlSelf->__PVT__cnt_free[3U]))) 
                             << 0x1dU) | (((IData)(
                                                   (0U 
                                                    != 
                                                    (0xc000000U 
                                                     & vlSelf->__PVT__cnt_free[3U]))) 
                                           << 0x1cU) 
                                          | __Vtemp_61[3U]))));
}

VL_INLINE_OPT void Vtestharness_axi_burst_splitter_counters__pi151___act_sequent__TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters__3(Vtestharness_axi_burst_splitter_counters__pi151* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestharness_axi_burst_splitter_counters__pi151___act_sequent__TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters__3\n"); );
    // Init
    SData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((IData)((0U != (0xc000U & (IData)(vlSelf->__PVT__i_idq__DOT__head_tail_free)))) 
                  << 0xeU) | (((IData)((0U != (0x3000U 
                                               & (IData)(vlSelf->__PVT__i_idq__DOT__head_tail_free)))) 
                               << 0xdU) | (((IData)(
                                                    (0U 
                                                     != 
                                                     (0xc00U 
                                                      & (IData)(vlSelf->__PVT__i_idq__DOT__head_tail_free)))) 
                                            << 0xcU) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0x300U 
                                                         & (IData)(vlSelf->__PVT__i_idq__DOT__head_tail_free)))) 
                                               << 0xbU) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0xc0U 
                                                            & (IData)(vlSelf->__PVT__i_idq__DOT__head_tail_free)))) 
                                                  << 0xaU) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0x30U 
                                                               & (IData)(vlSelf->__PVT__i_idq__DOT__head_tail_free)))) 
                                                     << 9U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xcU 
                                                                  & (IData)(vlSelf->__PVT__i_idq__DOT__head_tail_free)))) 
                                                        << 8U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (3U 
                                                                     & (IData)(vlSelf->__PVT__i_idq__DOT__head_tail_free)))) 
                                                           << 7U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0x6000U 
                                                                        & (IData)(vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                              << 6U) 
                                                             | (((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0x1800U 
                                                                           & (IData)(vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                 << 5U) 
                                                                | (((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (0x600U 
                                                                              & (IData)(vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                    << 4U) 
                                                                   | (((IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & (IData)(vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                       << 3U) 
                                                                      | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & (IData)(vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                          << 2U) 
                                                                         | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & (IData)(vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                             << 1U) 
                                                                            | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__sel_nodes))))))))))))))))));
    vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x8000U & (IData)(vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__sel_nodes)) 
           | __Vtemp_1);
}

VL_INLINE_OPT void Vtestharness_axi_burst_splitter_counters__pi151___act_sequent__TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters__4(Vtestharness_axi_burst_splitter_counters__pi151* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestharness_axi_burst_splitter_counters__pi151___act_sequent__TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters__4\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<4>/*127:0*/ __Vtemp_40;
    VlWide<4>/*127:0*/ __Vtemp_47;
    VlWide<4>/*127:0*/ __Vtemp_54;
    VlWide<4>/*127:0*/ __Vtemp_61;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)((0U != 
                                               (3U 
                                                & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U])))) 
                              << 0x3fU) | (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (0x60000000U 
                                                              & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (0U 
                                                                != 
                                                                (0x18000000U 
                                                                 & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x6000000U 
                                                                    & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x1800000U 
                                                                       & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x600000U 
                                                                          & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x180000U 
                                                                             & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x60000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U] 
                                                                                >> 0x1fU) 
                                                                                | vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((0x80000000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]) 
                                                                                | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U] 
                                                                                << 0x1fU))) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x19U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x12U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & ((0x8000U 
                                                                                & (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U] 
                                                                                >> 0x10U)) 
                                                                                | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U] 
                                                                                << 0xfU))) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_2[1U] = (IData)(((((QData)((IData)((0U 
                                                != 
                                                (3U 
                                                 & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U])))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (0U 
                                                              != 
                                                              (0x60000000U 
                                                               & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x18000000U 
                                                                  & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x6000000U 
                                                                     & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0x1800000U 
                                                                        & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0x600000U 
                                                                           & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (0x180000U 
                                                                              & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U] 
                                                                                >> 0x1fU) 
                                                                                | vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((0x80000000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]) 
                                                                                | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U] 
                                                                                << 0x1fU))) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x19U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x12U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & ((0x8000U 
                                                                                & (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U] 
                                                                                >> 0x10U)) 
                                                                                | (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U] 
                                                                                << 0xfU))) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                             >> 0x20U));
    __Vtemp_8[2U] = (((IData)((0U != (0xc000U & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U]))) 
                      << 6U) | (((IData)((0U != (0x3000U 
                                                 & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U]))) 
                                 << 5U) | (((IData)(
                                                    (0U 
                                                     != 
                                                     (0xc00U 
                                                      & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U]))) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0x300U 
                                                         & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U]))) 
                                               << 3U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0xc0U 
                                                            & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U]))) 
                                                  << 2U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0x30U 
                                                               & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U]))) 
                                                     << 1U) 
                                                    | (IData)(
                                                              (0U 
                                                               != 
                                                               (0xcU 
                                                                & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U])))))))));
    __Vtemp_15[2U] = (((IData)((0U != (0x30000000U 
                                       & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U]))) 
                       << 0xdU) | (((IData)((0U != 
                                             (0xc000000U 
                                              & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U]))) 
                                    << 0xcU) | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0x3000000U 
                                                           & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U]))) 
                                                 << 0xbU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00000U 
                                                              & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U]))) 
                                                    << 0xaU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x300000U 
                                                                 & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U]))) 
                                                       << 9U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U]))) 
                                                          << 8U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U]))) 
                                                             << 7U) 
                                                            | __Vtemp_8[2U])))))));
    __Vtemp_22[2U] = (((IData)((0U != (0xc00U & vlSelf->__PVT__i_idq__DOT__linked_data_free[1U]))) 
                       << 0x14U) | (((IData)((0U != 
                                              (0x300U 
                                               & vlSelf->__PVT__i_idq__DOT__linked_data_free[1U]))) 
                                     << 0x13U) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xc0U 
                                                             & vlSelf->__PVT__i_idq__DOT__linked_data_free[1U]))) 
                                                   << 0x12U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (0x30U 
                                                                & vlSelf->__PVT__i_idq__DOT__linked_data_free[1U]))) 
                                                      << 0x11U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0xcU 
                                                                   & vlSelf->__PVT__i_idq__DOT__linked_data_free[1U]))) 
                                                         << 0x10U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (3U 
                                                                      & vlSelf->__PVT__i_idq__DOT__linked_data_free[1U]))) 
                                                            << 0xfU) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0xc0000000U 
                                                                         & vlSelf->__PVT__i_idq__DOT__linked_data_free[0U]))) 
                                                               << 0xeU) 
                                                              | __Vtemp_15[2U])))))));
    __Vtemp_29[2U] = (((IData)((0U != (0x3000000U & 
                                       vlSelf->__PVT__i_idq__DOT__linked_data_free[1U]))) 
                       << 0x1bU) | (((IData)((0U != 
                                              (0xc00000U 
                                               & vlSelf->__PVT__i_idq__DOT__linked_data_free[1U]))) 
                                     << 0x1aU) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x300000U 
                                                             & vlSelf->__PVT__i_idq__DOT__linked_data_free[1U]))) 
                                                   << 0x19U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (0xc0000U 
                                                                & vlSelf->__PVT__i_idq__DOT__linked_data_free[1U]))) 
                                                      << 0x18U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x30000U 
                                                                   & vlSelf->__PVT__i_idq__DOT__linked_data_free[1U]))) 
                                                         << 0x17U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0xc000U 
                                                                      & vlSelf->__PVT__i_idq__DOT__linked_data_free[1U]))) 
                                                            << 0x16U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0x3000U 
                                                                         & vlSelf->__PVT__i_idq__DOT__linked_data_free[1U]))) 
                                                               << 0x15U) 
                                                              | __Vtemp_22[2U])))))));
    __Vtemp_40[3U] = (((IData)((0U != (0xc000U & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U]))) 
                       << 6U) | (((IData)((0U != (0x3000U 
                                                  & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U]))) 
                                  << 5U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (0xc00U 
                                                       & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U]))) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x300U 
                                                          & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U]))) 
                                                << 3U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xc0U 
                                                             & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U]))) 
                                                   << 2U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (0x30U 
                                                                & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U]))) 
                                                      << 1U) 
                                                     | (IData)(
                                                               (0U 
                                                                != 
                                                                (0xcU 
                                                                 & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U])))))))));
    __Vtemp_47[3U] = (((IData)((0U != (0x30000000U 
                                       & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U]))) 
                       << 0xdU) | (((IData)((0U != 
                                             (0xc000000U 
                                              & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U]))) 
                                    << 0xcU) | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0x3000000U 
                                                           & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U]))) 
                                                 << 0xbU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00000U 
                                                              & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U]))) 
                                                    << 0xaU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x300000U 
                                                                 & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U]))) 
                                                       << 9U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U]))) 
                                                          << 8U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U]))) 
                                                             << 7U) 
                                                            | __Vtemp_40[3U])))))));
    __Vtemp_54[3U] = (((IData)((0U != (0xc00U & vlSelf->__PVT__i_idq__DOT__linked_data_free[3U]))) 
                       << 0x14U) | (((IData)((0U != 
                                              (0x300U 
                                               & vlSelf->__PVT__i_idq__DOT__linked_data_free[3U]))) 
                                     << 0x13U) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xc0U 
                                                             & vlSelf->__PVT__i_idq__DOT__linked_data_free[3U]))) 
                                                   << 0x12U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (0x30U 
                                                                & vlSelf->__PVT__i_idq__DOT__linked_data_free[3U]))) 
                                                      << 0x11U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0xcU 
                                                                   & vlSelf->__PVT__i_idq__DOT__linked_data_free[3U]))) 
                                                         << 0x10U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (3U 
                                                                      & vlSelf->__PVT__i_idq__DOT__linked_data_free[3U]))) 
                                                            << 0xfU) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0xc0000000U 
                                                                         & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U]))) 
                                                               << 0xeU) 
                                                              | __Vtemp_47[3U])))))));
    __Vtemp_61[3U] = (((IData)((0U != (0x3000000U & 
                                       vlSelf->__PVT__i_idq__DOT__linked_data_free[3U]))) 
                       << 0x1bU) | (((IData)((0U != 
                                              (0xc00000U 
                                               & vlSelf->__PVT__i_idq__DOT__linked_data_free[3U]))) 
                                     << 0x1aU) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x300000U 
                                                             & vlSelf->__PVT__i_idq__DOT__linked_data_free[3U]))) 
                                                   << 0x19U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (0xc0000U 
                                                                & vlSelf->__PVT__i_idq__DOT__linked_data_free[3U]))) 
                                                      << 0x18U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x30000U 
                                                                   & vlSelf->__PVT__i_idq__DOT__linked_data_free[3U]))) 
                                                         << 0x17U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0xc000U 
                                                                      & vlSelf->__PVT__i_idq__DOT__linked_data_free[3U]))) 
                                                            << 0x16U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0x3000U 
                                                                         & vlSelf->__PVT__i_idq__DOT__linked_data_free[3U]))) 
                                                               << 0x15U) 
                                                              | __Vtemp_54[3U])))))));
    vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[0U] 
        = __Vtemp_2[0U];
    vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[1U] 
        = __Vtemp_2[1U];
    vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[2U] 
        = (((IData)((0U != (3U & vlSelf->__PVT__i_idq__DOT__linked_data_free[2U]))) 
            << 0x1fU) | (((IData)((0U != (0xc0000000U 
                                          & vlSelf->__PVT__i_idq__DOT__linked_data_free[1U]))) 
                          << 0x1eU) | (((IData)((0U 
                                                 != 
                                                 (0x30000000U 
                                                  & vlSelf->__PVT__i_idq__DOT__linked_data_free[1U]))) 
                                        << 0x1dU) | 
                                       (((IData)((0U 
                                                  != 
                                                  (0xc000000U 
                                                   & vlSelf->__PVT__i_idq__DOT__linked_data_free[1U]))) 
                                         << 0x1cU) 
                                        | __Vtemp_29[2U]))));
    vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U] 
        = ((0x80000000U & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__sel_nodes[3U]) 
           | (((IData)((0U != (0xc0000000U & vlSelf->__PVT__i_idq__DOT__linked_data_free[3U]))) 
               << 0x1eU) | (((IData)((0U != (0x30000000U 
                                             & vlSelf->__PVT__i_idq__DOT__linked_data_free[3U]))) 
                             << 0x1dU) | (((IData)(
                                                   (0U 
                                                    != 
                                                    (0xc000000U 
                                                     & vlSelf->__PVT__i_idq__DOT__linked_data_free[3U]))) 
                                           << 0x1cU) 
                                          | __Vtemp_61[3U]))));
}

VL_INLINE_OPT void Vtestharness_axi_burst_splitter_counters__pi151___act_sequent__TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters__5(Vtestharness_axi_burst_splitter_counters__pi151* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestharness_axi_burst_splitter_counters__pi151___act_sequent__TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters__5\n"); );
    // Init
    VlWide<28>/*895:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<5>/*159:0*/ __Vtemp_13;
    VlWide<6>/*191:0*/ __Vtemp_17;
    VlWide<7>/*223:0*/ __Vtemp_20;
    VlWide<7>/*223:0*/ __Vtemp_22;
    VlWide<8>/*255:0*/ __Vtemp_27;
    VlWide<9>/*287:0*/ __Vtemp_31;
    VlWide<10>/*319:0*/ __Vtemp_34;
    VlWide<10>/*319:0*/ __Vtemp_36;
    VlWide<11>/*351:0*/ __Vtemp_41;
    VlWide<12>/*383:0*/ __Vtemp_45;
    VlWide<13>/*415:0*/ __Vtemp_49;
    VlWide<14>/*447:0*/ __Vtemp_52;
    VlWide<14>/*447:0*/ __Vtemp_54;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)((0x7fU 
                                               & ((0x20000U 
                                                   & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                   ? 
                                                  ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    << 9U) 
                                                   | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                      >> 0x17U))
                                                   : 
                                                  ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    << 2U) 
                                                   | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                      >> 0x1eU)))))) 
                              << 0x38U) | (((QData)((IData)(
                                                            (0x7fU 
                                                             & ((0x8000U 
                                                                 & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                                 ? 
                                                                ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x10U) 
                                                                 | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0x10U)))))) 
                                            << 0x31U) 
                                           | (((QData)((IData)(
                                                               (0x7fU 
                                                                & ((0x2000U 
                                                                    & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                                    ? 
                                                                   ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 5U) 
                                                                    | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1bU))
                                                                    : 
                                                                   ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1eU) 
                                                                    | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 2U)))))) 
                                               << 0x2aU) 
                                              | (((QData)((IData)(
                                                                  (0x7fU 
                                                                   & ((0x800U 
                                                                       & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                                       ? 
                                                                      ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0x13U) 
                                                                       | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0xdU))
                                                                       : 
                                                                      ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xcU) 
                                                                       | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x14U)))))) 
                                                  << 0x23U) 
                                                 | (((QData)((IData)(
                                                                     (0x7fU 
                                                                      & ((0x200U 
                                                                          & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                                          ? 
                                                                         ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 1U) 
                                                                          | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                             >> 0x1fU))
                                                                          : 
                                                                         ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x1aU) 
                                                                          | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 6U)))))) 
                                                     << 0x1cU) 
                                                    | (QData)((IData)(
                                                                      ((0xfe00000U 
                                                                        & (((0x80U 
                                                                             & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                                             ? 
                                                                            ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                              << 0xfU) 
                                                                             | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x11U))
                                                                             : 
                                                                            ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                              << 8U) 
                                                                             | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x18U))) 
                                                                           << 0x15U)) 
                                                                       | ((0x1fc000U 
                                                                           & (((0x20U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                                                ? 
                                                                               ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                : 
                                                                               ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xaU))) 
                                                                              << 0xeU)) 
                                                                          | ((0x3f80U 
                                                                              & (((8U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                                                 ? 
                                                                                ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x15U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 4U) 
                                                                                | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1cU))) 
                                                                                << 7U)) 
                                                                             | (0x7fU 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                                                 ? 
                                                                                ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x19U) 
                                                                                | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 7U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x12U) 
                                                                                | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xeU)))))))))))))));
    __Vtemp_2[1U] = ((((0x80000U & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                        ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                            << 0x1bU) | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                         >> 5U)) : 
                       ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                         << 0x14U) | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                      >> 0xcU))) << 0x1fU) 
                     | (IData)(((((QData)((IData)((0x7fU 
                                                   & ((0x20000U 
                                                       & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                       ? 
                                                      ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                        << 9U) 
                                                       | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                          >> 0x17U))
                                                       : 
                                                      ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                        << 2U) 
                                                       | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                          >> 0x1eU)))))) 
                                  << 0x38U) | (((QData)((IData)(
                                                                (0x7fU 
                                                                 & ((0x8000U 
                                                                     & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                                     ? 
                                                                    ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x10U) 
                                                                     | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0x10U)))))) 
                                                << 0x31U) 
                                               | (((QData)((IData)(
                                                                   (0x7fU 
                                                                    & ((0x2000U 
                                                                        & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                                        ? 
                                                                       ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 5U) 
                                                                        | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1bU))
                                                                        : 
                                                                       ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1eU) 
                                                                        | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 2U)))))) 
                                                   << 0x2aU) 
                                                  | (((QData)((IData)(
                                                                      (0x7fU 
                                                                       & ((0x800U 
                                                                           & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                                           ? 
                                                                          ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0x13U) 
                                                                           | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0xdU))
                                                                           : 
                                                                          ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xcU) 
                                                                           | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x14U)))))) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(
                                                                         (0x7fU 
                                                                          & ((0x200U 
                                                                              & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                                              ? 
                                                                             ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 1U) 
                                                                              | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1fU))
                                                                              : 
                                                                             ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x1aU) 
                                                                              | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                         << 0x1cU) 
                                                        | (QData)((IData)(
                                                                          ((0xfe00000U 
                                                                            & (((0x80U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                                                 ? 
                                                                                ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xfU) 
                                                                                | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x11U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 8U) 
                                                                                | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x18U))) 
                                                                               << 0x15U)) 
                                                                           | ((0x1fc000U 
                                                                               & (((0x20U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                                                 ? 
                                                                                ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xaU))) 
                                                                                << 0xeU)) 
                                                                              | ((0x3f80U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                                                 ? 
                                                                                ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x15U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 4U) 
                                                                                | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1cU))) 
                                                                                << 7U)) 
                                                                                | (0x7fU 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                                                 ? 
                                                                                ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x19U) 
                                                                                | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 7U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x12U) 
                                                                                | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xeU)))))))))))))) 
                                >> 0x20U)));
    __Vtemp_4[2U] = ((0xfe000U & (((0x800000U & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                    ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[5U] 
                                        << 0x1fU) | 
                                       (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[5U] 
                                        >> 1U)) : (
                                                   (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                    << 0x18U) 
                                                   | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                      >> 8U))) 
                                  << 0xdU)) | ((0x1fc0U 
                                                & (((0x200000U 
                                                     & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                     ? 
                                                    ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      << 0xdU) 
                                                     | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                        >> 0x13U))
                                                     : 
                                                    ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                      << 6U) 
                                                     | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                        >> 0x1aU))) 
                                                   << 6U)) 
                                               | (0x3fU 
                                                  & (((0x80000U 
                                                       & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                       ? 
                                                      ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                        << 0x1bU) 
                                                       | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                          >> 5U))
                                                       : 
                                                      ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                        << 0x14U) 
                                                       | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                          >> 0xcU))) 
                                                     >> 1U))));
    __Vtemp_9[3U] = ((0x7f0000U & (((2U & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                                     ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[7U] 
                                         << 0x19U) 
                                        | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[7U] 
                                           >> 7U)) : 
                                    ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[7U] 
                                      << 0x12U) | (
                                                   vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                   >> 0xeU))) 
                                   << 0x10U)) | ((0xfe00U 
                                                  & (((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U] 
                                                       >> 0x1fU)
                                                       ? 
                                                      ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                        << 7U) 
                                                       | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                          >> 0x19U))
                                                       : 
                                                      vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[7U]) 
                                                     << 9U)) 
                                                 | ((0x1fcU 
                                                     & (((0x20000000U 
                                                          & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                          ? 
                                                         ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                           << 0x15U) 
                                                          | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                             >> 0xbU))
                                                          : 
                                                         ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                           << 0xeU) 
                                                          | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                             >> 0x12U))) 
                                                        << 2U)) 
                                                    | (3U 
                                                       & (((0x8000000U 
                                                            & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                                            ? 
                                                           ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                             << 3U) 
                                                            | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                               >> 0x1dU))
                                                            : 
                                                           ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                             << 0x1cU) 
                                                            | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                               >> 4U))) 
                                                          >> 5U)))));
    __Vtemp_13[4U] = ((0x7f000U & (((0x200U & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                                     ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[9U] 
                                         << 1U) | (
                                                   vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                   >> 0x1fU))
                                     : ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[9U] 
                                         << 0x1aU) 
                                        | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[9U] 
                                           >> 6U))) 
                                   << 0xcU)) | ((0xfe0U 
                                                 & (((0x80U 
                                                      & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                                                      ? 
                                                     ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                       << 0xfU) 
                                                      | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                         >> 0x11U))
                                                      : 
                                                     ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                       << 8U) 
                                                      | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                         >> 0x18U))) 
                                                    << 5U)) 
                                                | (0x1fU 
                                                   & (((0x20U 
                                                        & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                                                        ? 
                                                       ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                         << 0x1dU) 
                                                        | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                           >> 3U))
                                                        : 
                                                       ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                         << 0x16U) 
                                                        | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                           >> 0xaU))) 
                                                      >> 2U))));
    __Vtemp_17[5U] = ((0x7f00U & (((0x20000U & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                                    ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                        << 9U) | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                  >> 0x17U))
                                    : ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                        << 2U) | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                  >> 0x1eU))) 
                                  << 8U)) | ((0xfeU 
                                              & (((0x8000U 
                                                   & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                                                   ? 
                                                  ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                    << 0x17U) 
                                                   | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                      >> 9U))
                                                   : 
                                                  ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                    << 0x10U) 
                                                   | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                      >> 0x10U))) 
                                                 << 1U)) 
                                             | (1U 
                                                & (((0x2000U 
                                                     & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                                                     ? 
                                                    ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                      << 5U) 
                                                     | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                        >> 0x1bU))
                                                     : 
                                                    ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                      << 0x1eU) 
                                                     | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                        >> 2U))) 
                                                   >> 6U))));
    __Vtemp_20[5U] = ((((0x800000U & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                         ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xcU] 
                             << 0x1fU) | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xcU] 
                                          >> 1U)) : 
                        ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xcU] 
                          << 0x18U) | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xcU] 
                                       >> 8U))) << 0x1dU) 
                      | ((0x1fc00000U & (((0x200000U 
                                           & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                                           ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                               << 0xdU) 
                                              | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                 >> 0x13U))
                                           : ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xcU] 
                                               << 6U) 
                                              | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                 >> 0x1aU))) 
                                         << 0x16U)) 
                         | ((0x3f8000U & (((0x80000U 
                                            & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                                            ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                << 0x1bU) 
                                               | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                  >> 5U))
                                            : ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                << 0x14U) 
                                               | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                  >> 0xcU))) 
                                          << 0xfU)) 
                            | __Vtemp_17[5U])));
    __Vtemp_22[6U] = ((0x3f800U & (((0x8000000U & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                                     ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xdU] 
                                         << 3U) | (
                                                   vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xcU] 
                                                   >> 0x1dU))
                                     : ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xdU] 
                                         << 0x1cU) 
                                        | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xdU] 
                                           >> 4U))) 
                                   << 0xbU)) | ((0x7f0U 
                                                 & (((0x2000000U 
                                                      & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                                                      ? 
                                                     ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xcU] 
                                                       << 0x11U) 
                                                      | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xcU] 
                                                         >> 0xfU))
                                                      : 
                                                     ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xcU] 
                                                       << 0xaU) 
                                                      | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xcU] 
                                                         >> 0x16U))) 
                                                    << 4U)) 
                                                | (0xfU 
                                                   & (((0x800000U 
                                                        & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                                                        ? 
                                                       ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xcU] 
                                                         << 0x1fU) 
                                                        | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xcU] 
                                                           >> 1U))
                                                        : 
                                                       ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xcU] 
                                                         << 0x18U) 
                                                        | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xcU] 
                                                           >> 8U))) 
                                                      >> 3U))));
    __Vtemp_27[7U] = ((0x1fc000U & (((0x20U & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                                      ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xfU] 
                                          << 0x1dU) 
                                         | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xfU] 
                                            >> 3U))
                                      : ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xfU] 
                                          << 0x16U) 
                                         | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xfU] 
                                            >> 0xaU))) 
                                    << 0xeU)) | ((0x3f80U 
                                                  & (((8U 
                                                       & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                                                       ? 
                                                      ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xeU] 
                                                        << 0xbU) 
                                                       | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xeU] 
                                                          >> 0x15U))
                                                       : 
                                                      ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xfU] 
                                                        << 4U) 
                                                       | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xeU] 
                                                          >> 0x1cU))) 
                                                     << 7U)) 
                                                 | (0x7fU 
                                                    & ((2U 
                                                        & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                                                        ? 
                                                       ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xeU] 
                                                         << 0x19U) 
                                                        | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xeU] 
                                                           >> 7U))
                                                        : 
                                                       ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xeU] 
                                                         << 0x12U) 
                                                        | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xeU] 
                                                           >> 0xeU))))));
    __Vtemp_31[8U] = ((0x1fc00U & (((0x2000U & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                                     ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x11U] 
                                         << 5U) | (
                                                   vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x10U] 
                                                   >> 0x1bU))
                                     : ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x11U] 
                                         << 0x1eU) 
                                        | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x11U] 
                                           >> 2U))) 
                                   << 0xaU)) | ((0x3f8U 
                                                 & (((0x800U 
                                                      & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                                                      ? 
                                                     ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x10U] 
                                                       << 0x13U) 
                                                      | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x10U] 
                                                         >> 0xdU))
                                                      : 
                                                     ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x10U] 
                                                       << 0xcU) 
                                                      | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x10U] 
                                                         >> 0x14U))) 
                                                    << 3U)) 
                                                | (7U 
                                                   & (((0x200U 
                                                        & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                                                        ? 
                                                       ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x10U] 
                                                         << 1U) 
                                                        | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xfU] 
                                                           >> 0x1fU))
                                                        : 
                                                       ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x10U] 
                                                         << 0x1aU) 
                                                        | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x10U] 
                                                           >> 6U))) 
                                                      >> 4U))));
    __Vtemp_34[8U] = ((((0x80000U & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                         ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x12U] 
                             << 0x1bU) | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x12U] 
                                          >> 5U)) : 
                        ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x12U] 
                          << 0x14U) | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x12U] 
                                       >> 0xcU))) << 0x1fU) 
                      | ((0x7f000000U & (((0x20000U 
                                           & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                                           ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x11U] 
                                               << 9U) 
                                              | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x11U] 
                                                 >> 0x17U))
                                           : ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x12U] 
                                               << 2U) 
                                              | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x11U] 
                                                 >> 0x1eU))) 
                                         << 0x18U)) 
                         | ((0xfe0000U & (((0x8000U 
                                            & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                                            ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x11U] 
                                                << 0x17U) 
                                               | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x11U] 
                                                  >> 9U))
                                            : ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x11U] 
                                                << 0x10U) 
                                               | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x11U] 
                                                  >> 0x10U))) 
                                          << 0x11U)) 
                            | __Vtemp_31[8U])));
    __Vtemp_36[9U] = ((0xfe000U & (((0x800000U & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                                     ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x13U] 
                                         << 0x1fU) 
                                        | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x13U] 
                                           >> 1U)) : 
                                    ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x13U] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x13U] 
                                                   >> 8U))) 
                                   << 0xdU)) | ((0x1fc0U 
                                                 & (((0x200000U 
                                                      & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                                                      ? 
                                                     ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x12U] 
                                                       << 0xdU) 
                                                      | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x12U] 
                                                         >> 0x13U))
                                                      : 
                                                     ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x13U] 
                                                       << 6U) 
                                                      | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x12U] 
                                                         >> 0x1aU))) 
                                                    << 6U)) 
                                                | (0x3fU 
                                                   & (((0x80000U 
                                                        & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                                                        ? 
                                                       ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x12U] 
                                                         << 0x1bU) 
                                                        | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x12U] 
                                                           >> 5U))
                                                        : 
                                                       ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x12U] 
                                                         << 0x14U) 
                                                        | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x12U] 
                                                           >> 0xcU))) 
                                                      >> 1U))));
    __Vtemp_41[0xaU] = ((0x7f0000U & (((2U & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                                        ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x15U] 
                                            << 0x19U) 
                                           | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x15U] 
                                              >> 7U))
                                        : ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x15U] 
                                            << 0x12U) 
                                           | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x15U] 
                                              >> 0xeU))) 
                                      << 0x10U)) | 
                        ((0xfe00U & (((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U] 
                                       >> 0x1fU) ? 
                                      ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x14U] 
                                        << 7U) | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x14U] 
                                                  >> 0x19U))
                                       : vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x15U]) 
                                     << 9U)) | ((0x1fcU 
                                                 & (((0x20000000U 
                                                      & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                                                      ? 
                                                     ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x14U] 
                                                       << 0x15U) 
                                                      | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x14U] 
                                                         >> 0xbU))
                                                      : 
                                                     ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x14U] 
                                                       << 0xeU) 
                                                      | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x14U] 
                                                         >> 0x12U))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (((0x8000000U 
                                                        & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                                                        ? 
                                                       ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x14U] 
                                                         << 3U) 
                                                        | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x13U] 
                                                           >> 0x1dU))
                                                        : 
                                                       ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x14U] 
                                                         << 0x1cU) 
                                                        | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x14U] 
                                                           >> 4U))) 
                                                      >> 5U)))));
    __Vtemp_45[0xbU] = ((0x7f000U & (((0x200U & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                                       ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x17U] 
                                           << 1U) | 
                                          (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x16U] 
                                           >> 0x1fU))
                                       : ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x17U] 
                                           << 0x1aU) 
                                          | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x17U] 
                                             >> 6U))) 
                                     << 0xcU)) | ((0xfe0U 
                                                   & (((0x80U 
                                                        & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                                                        ? 
                                                       ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x16U] 
                                                         << 0xfU) 
                                                        | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x16U] 
                                                           >> 0x11U))
                                                        : 
                                                       ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x16U] 
                                                         << 8U) 
                                                        | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x16U] 
                                                           >> 0x18U))) 
                                                      << 5U)) 
                                                  | (0x1fU 
                                                     & (((0x20U 
                                                          & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                                                          ? 
                                                         ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x16U] 
                                                           << 0x1dU) 
                                                          | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x16U] 
                                                             >> 3U))
                                                          : 
                                                         ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x16U] 
                                                           << 0x16U) 
                                                          | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x16U] 
                                                             >> 0xaU))) 
                                                        >> 2U))));
    __Vtemp_49[0xcU] = ((0x7f00U & (((0x20000U & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                                      ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x18U] 
                                          << 9U) | 
                                         (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x18U] 
                                          >> 0x17U))
                                      : ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x19U] 
                                          << 2U) | 
                                         (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x18U] 
                                          >> 0x1eU))) 
                                    << 8U)) | ((0xfeU 
                                                & (((0x8000U 
                                                     & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                                                     ? 
                                                    ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x18U] 
                                                      << 0x17U) 
                                                     | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x18U] 
                                                        >> 9U))
                                                     : 
                                                    ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x18U] 
                                                      << 0x10U) 
                                                     | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x18U] 
                                                        >> 0x10U))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (((0x2000U 
                                                       & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                                                       ? 
                                                      ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x18U] 
                                                        << 5U) 
                                                       | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x17U] 
                                                          >> 0x1bU))
                                                       : 
                                                      ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x18U] 
                                                        << 0x1eU) 
                                                       | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x18U] 
                                                          >> 2U))) 
                                                     >> 6U))));
    __Vtemp_52[0xcU] = ((((0x800000U & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                           ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x1aU] 
                               << 0x1fU) | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x1aU] 
                                            >> 1U))
                           : ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x1aU] 
                               << 0x18U) | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x1aU] 
                                            >> 8U))) 
                         << 0x1dU) | ((0x1fc00000U 
                                       & (((0x200000U 
                                            & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                                            ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x19U] 
                                                << 0xdU) 
                                               | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x19U] 
                                                  >> 0x13U))
                                            : ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                << 6U) 
                                               | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x19U] 
                                                  >> 0x1aU))) 
                                          << 0x16U)) 
                                      | ((0x3f8000U 
                                          & (((0x80000U 
                                               & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                                               ? ((
                                                   vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x19U] 
                                                   << 0x1bU) 
                                                  | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x19U] 
                                                     >> 5U))
                                               : ((
                                                   vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x19U] 
                                                   << 0x14U) 
                                                  | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x19U] 
                                                     >> 0xcU))) 
                                             << 0xfU)) 
                                         | __Vtemp_49[0xcU])));
    __Vtemp_54[0xdU] = ((0x3f800U & (((0x8000000U & 
                                       vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                                       ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x1bU] 
                                           << 3U) | 
                                          (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x1aU] 
                                           >> 0x1dU))
                                       : ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x1bU] 
                                           << 0x1cU) 
                                          | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x1bU] 
                                             >> 4U))) 
                                     << 0xbU)) | ((0x7f0U 
                                                   & (((0x2000000U 
                                                        & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                                                        ? 
                                                       ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                         << 0x11U) 
                                                        | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                           >> 0xfU))
                                                        : 
                                                       ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                         << 0xaU) 
                                                        | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                           >> 0x16U))) 
                                                      << 4U)) 
                                                  | (0xfU 
                                                     & (((0x800000U 
                                                          & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                                                          ? 
                                                         ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                           << 0x1fU) 
                                                          | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                             >> 1U))
                                                          : 
                                                         ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                           << 0x18U) 
                                                          | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                             >> 8U))) 
                                                        >> 3U))));
    __Vtemp_1[2U] = ((((0x8000000U & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                        ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[6U] 
                            << 3U) | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[5U] 
                                      >> 0x1dU)) : 
                       ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[6U] 
                         << 0x1cU) | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[6U] 
                                      >> 4U))) << 0x1bU) 
                     | ((0x7f00000U & (((0x2000000U 
                                         & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[0U])
                                         ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[5U] 
                                             << 0x11U) 
                                            | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[5U] 
                                               >> 0xfU))
                                         : ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[5U] 
                                             << 0xaU) 
                                            | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[5U] 
                                               >> 0x16U))) 
                                       << 0x14U)) | 
                        __Vtemp_4[2U]));
    __Vtemp_1[3U] = ((((0x20U & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                        ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[8U] 
                            << 0x1dU) | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[8U] 
                                         >> 3U)) : 
                       ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[8U] 
                         << 0x16U) | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[8U] 
                                      >> 0xaU))) << 0x1eU) 
                     | ((0x3f800000U & (((8U & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                                          ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[7U] 
                                              << 0xbU) 
                                             | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                >> 0x15U))
                                          : ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[8U] 
                                              << 4U) 
                                             | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                >> 0x1cU))) 
                                        << 0x17U)) 
                        | __Vtemp_9[3U]));
    __Vtemp_1[4U] = ((((0x2000U & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                        ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                            << 5U) | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[9U] 
                                      >> 0x1bU)) : 
                       ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                         << 0x1eU) | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                      >> 2U))) << 0x1aU) 
                     | ((0x3f80000U & (((0x800U & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                                         ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[9U] 
                                             << 0x13U) 
                                            | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[9U] 
                                               >> 0xdU))
                                         : ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[9U] 
                                             << 0xcU) 
                                            | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[9U] 
                                               >> 0x14U))) 
                                       << 0x13U)) | 
                        __Vtemp_13[4U]));
    __Vtemp_1[6U] = ((((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U] 
                        >> 0x1fU) ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xdU] 
                                      << 7U) | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xdU] 
                                                >> 0x19U))
                        : vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xeU]) 
                      << 0x19U) | ((0x1fc0000U & ((
                                                   (0x20000000U 
                                                    & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[1U])
                                                    ? 
                                                   ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xdU] 
                                                     << 0x15U) 
                                                    | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xdU] 
                                                       >> 0xbU))
                                                    : 
                                                   ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xdU] 
                                                     << 0xeU) 
                                                    | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xdU] 
                                                       >> 0x12U))) 
                                                  << 0x12U)) 
                                   | __Vtemp_22[6U]));
    __Vtemp_1[7U] = ((((0x200U & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                        ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x10U] 
                            << 1U) | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xfU] 
                                      >> 0x1fU)) : 
                       ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x10U] 
                         << 0x1aU) | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x10U] 
                                      >> 6U))) << 0x1cU) 
                     | ((0xfe00000U & (((0x80U & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                                         ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xfU] 
                                             << 0xfU) 
                                            | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xfU] 
                                               >> 0x11U))
                                         : ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xfU] 
                                             << 8U) 
                                            | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xfU] 
                                               >> 0x18U))) 
                                       << 0x15U)) | 
                        __Vtemp_27[7U]));
    __Vtemp_1[9U] = ((((0x8000000U & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                        ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x14U] 
                            << 3U) | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x13U] 
                                      >> 0x1dU)) : 
                       ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x14U] 
                         << 0x1cU) | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x14U] 
                                      >> 4U))) << 0x1bU) 
                     | ((0x7f00000U & (((0x2000000U 
                                         & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[2U])
                                         ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x13U] 
                                             << 0x11U) 
                                            | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x13U] 
                                               >> 0xfU))
                                         : ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x13U] 
                                             << 0xaU) 
                                            | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x13U] 
                                               >> 0x16U))) 
                                       << 0x14U)) | 
                        __Vtemp_36[9U]));
    __Vtemp_1[0xaU] = ((((0x20U & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                          ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x16U] 
                              << 0x1dU) | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x16U] 
                                           >> 3U)) : 
                         ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x16U] 
                           << 0x16U) | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x16U] 
                                        >> 0xaU))) 
                        << 0x1eU) | ((0x3f800000U & 
                                      (((8U & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                                         ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x15U] 
                                             << 0xbU) 
                                            | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x15U] 
                                               >> 0x15U))
                                         : ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x16U] 
                                             << 4U) 
                                            | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x15U] 
                                               >> 0x1cU))) 
                                       << 0x17U)) | 
                                     __Vtemp_41[0xaU]));
    __Vtemp_1[0xbU] = ((((0x2000U & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                          ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x18U] 
                              << 5U) | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x17U] 
                                        >> 0x1bU)) : 
                         ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x18U] 
                           << 0x1eU) | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x18U] 
                                        >> 2U))) << 0x1aU) 
                       | ((0x3f80000U & (((0x800U & 
                                           vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                                           ? ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x17U] 
                                               << 0x13U) 
                                              | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x17U] 
                                                 >> 0xdU))
                                           : ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x17U] 
                                               << 0xcU) 
                                              | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x17U] 
                                                 >> 0x14U))) 
                                         << 0x13U)) 
                          | __Vtemp_45[0xbU]));
    __Vtemp_1[0xdU] = ((((1U & vlSelf->__PVT__cnt_free[0U])
                          ? 0U : 1U) << 0x19U) | ((0x1fc0000U 
                                                   & (((0x20000000U 
                                                        & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__sel_nodes[3U])
                                                        ? 
                                                       ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x1bU] 
                                                         << 0x15U) 
                                                        | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x1bU] 
                                                           >> 0xbU))
                                                        : 
                                                       ((vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x1bU] 
                                                         << 0xeU) 
                                                        | (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x1bU] 
                                                           >> 0x12U))) 
                                                      << 0x12U)) 
                                                  | __Vtemp_54[0xdU]));
    vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_2[0U];
    vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_2[1U];
    vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
        = __Vtemp_1[2U];
    vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
        = __Vtemp_1[3U];
    vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
        = __Vtemp_1[4U];
    vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[5U] 
        = __Vtemp_20[5U];
    vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[6U] 
        = __Vtemp_1[6U];
    vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[7U] 
        = __Vtemp_1[7U];
    vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[8U] 
        = __Vtemp_34[8U];
    vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[9U] 
        = __Vtemp_1[9U];
    vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xaU] 
        = __Vtemp_1[0xaU];
    vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xbU] 
        = __Vtemp_1[0xbU];
    vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xcU] 
        = __Vtemp_52[0xcU];
    vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xdU] 
        = __Vtemp_1[0xdU];
    vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xeU] 
        = ((((0x400U & vlSelf->__PVT__cnt_free[0U])
              ? 0xaU : 0xbU) << 0x1cU) | ((((0x100U 
                                             & vlSelf->__PVT__cnt_free[0U])
                                             ? 8U : 9U) 
                                           << 0x15U) 
                                          | ((((0x40U 
                                                & vlSelf->__PVT__cnt_free[0U])
                                                ? 6U
                                                : 7U) 
                                              << 0xeU) 
                                             | ((((0x10U 
                                                   & vlSelf->__PVT__cnt_free[0U])
                                                   ? 4U
                                                   : 5U) 
                                                 << 7U) 
                                                | ((4U 
                                                    & vlSelf->__PVT__cnt_free[0U])
                                                    ? 2U
                                                    : 3U)))));
    vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0xfU] 
        = ((((0x100000U & vlSelf->__PVT__cnt_free[0U])
              ? 0x14U : 0x15U) << 0x1fU) | ((((0x40000U 
                                               & vlSelf->__PVT__cnt_free[0U])
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->__PVT__cnt_free[0U])
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x11U) 
                                               | ((((0x4000U 
                                                     & vlSelf->__PVT__cnt_free[0U])
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xaU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->__PVT__cnt_free[0U])
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 3U) 
                                                     | (((0x400U 
                                                          & vlSelf->__PVT__cnt_free[0U])
                                                          ? 0xaU
                                                          : 0xbU) 
                                                        >> 4U))))));
    vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x10U] 
        = ((((0x10000000U & vlSelf->__PVT__cnt_free[0U])
              ? 0x1cU : 0x1dU) << 0x1bU) | ((((0x4000000U 
                                               & vlSelf->__PVT__cnt_free[0U])
                                               ? 0x1aU
                                               : 0x1bU) 
                                             << 0x14U) 
                                            | ((((0x1000000U 
                                                  & vlSelf->__PVT__cnt_free[0U])
                                                  ? 0x18U
                                                  : 0x19U) 
                                                << 0xdU) 
                                               | ((((0x400000U 
                                                     & vlSelf->__PVT__cnt_free[0U])
                                                     ? 0x16U
                                                     : 0x17U) 
                                                   << 6U) 
                                                  | (((0x100000U 
                                                       & vlSelf->__PVT__cnt_free[0U])
                                                       ? 0x14U
                                                       : 0x15U) 
                                                     >> 1U)))));
    vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x11U] 
        = ((((0x40U & vlSelf->__PVT__cnt_free[1U]) ? 0x26U
              : 0x27U) << 0x1eU) | ((((0x10U & vlSelf->__PVT__cnt_free[1U])
                                       ? 0x24U : 0x25U) 
                                     << 0x17U) | ((
                                                   ((4U 
                                                     & vlSelf->__PVT__cnt_free[1U])
                                                     ? 0x22U
                                                     : 0x23U) 
                                                   << 0x10U) 
                                                  | ((((1U 
                                                        & vlSelf->__PVT__cnt_free[1U])
                                                        ? 0x20U
                                                        : 0x21U) 
                                                      << 9U) 
                                                     | ((((0x40000000U 
                                                           & vlSelf->__PVT__cnt_free[0U])
                                                           ? 0x1eU
                                                           : 0x1fU) 
                                                         << 2U) 
                                                        | (((0x10000000U 
                                                             & vlSelf->__PVT__cnt_free[0U])
                                                             ? 0x1cU
                                                             : 0x1dU) 
                                                           >> 5U))))));
    vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x12U] 
        = ((((0x4000U & vlSelf->__PVT__cnt_free[1U])
              ? 0x2eU : 0x2fU) << 0x1aU) | ((((0x1000U 
                                               & vlSelf->__PVT__cnt_free[1U])
                                               ? 0x2cU
                                               : 0x2dU) 
                                             << 0x13U) 
                                            | ((((0x400U 
                                                  & vlSelf->__PVT__cnt_free[1U])
                                                  ? 0x2aU
                                                  : 0x2bU) 
                                                << 0xcU) 
                                               | ((((0x100U 
                                                     & vlSelf->__PVT__cnt_free[1U])
                                                     ? 0x28U
                                                     : 0x29U) 
                                                   << 5U) 
                                                  | (((0x40U 
                                                       & vlSelf->__PVT__cnt_free[1U])
                                                       ? 0x26U
                                                       : 0x27U) 
                                                     >> 2U)))));
    vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x13U] 
        = ((((0x1000000U & vlSelf->__PVT__cnt_free[1U])
              ? 0x38U : 0x39U) << 0x1dU) | ((((0x400000U 
                                               & vlSelf->__PVT__cnt_free[1U])
                                               ? 0x36U
                                               : 0x37U) 
                                             << 0x16U) 
                                            | ((((0x100000U 
                                                  & vlSelf->__PVT__cnt_free[1U])
                                                  ? 0x34U
                                                  : 0x35U) 
                                                << 0xfU) 
                                               | ((((0x40000U 
                                                     & vlSelf->__PVT__cnt_free[1U])
                                                     ? 0x32U
                                                     : 0x33U) 
                                                   << 8U) 
                                                  | ((((0x10000U 
                                                        & vlSelf->__PVT__cnt_free[1U])
                                                        ? 0x30U
                                                        : 0x31U) 
                                                      << 1U) 
                                                     | (((0x4000U 
                                                          & vlSelf->__PVT__cnt_free[1U])
                                                          ? 0x2eU
                                                          : 0x2fU) 
                                                        >> 6U))))));
    vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x14U] 
        = ((((1U & vlSelf->__PVT__cnt_free[2U]) ? 0x40U
              : 0x41U) << 0x19U) | ((((0x40000000U 
                                       & vlSelf->__PVT__cnt_free[1U])
                                       ? 0x3eU : 0x3fU) 
                                     << 0x12U) | ((
                                                   ((0x10000000U 
                                                     & vlSelf->__PVT__cnt_free[1U])
                                                     ? 0x3cU
                                                     : 0x3dU) 
                                                   << 0xbU) 
                                                  | ((((0x4000000U 
                                                        & vlSelf->__PVT__cnt_free[1U])
                                                        ? 0x3aU
                                                        : 0x3bU) 
                                                      << 4U) 
                                                     | (((0x1000000U 
                                                          & vlSelf->__PVT__cnt_free[1U])
                                                          ? 0x38U
                                                          : 0x39U) 
                                                        >> 3U)))));
    vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x15U] 
        = ((((0x400U & vlSelf->__PVT__cnt_free[2U])
              ? 0x4aU : 0x4bU) << 0x1cU) | ((((0x100U 
                                               & vlSelf->__PVT__cnt_free[2U])
                                               ? 0x48U
                                               : 0x49U) 
                                             << 0x15U) 
                                            | ((((0x40U 
                                                  & vlSelf->__PVT__cnt_free[2U])
                                                  ? 0x46U
                                                  : 0x47U) 
                                                << 0xeU) 
                                               | ((((0x10U 
                                                     & vlSelf->__PVT__cnt_free[2U])
                                                     ? 0x44U
                                                     : 0x45U) 
                                                   << 7U) 
                                                  | ((4U 
                                                      & vlSelf->__PVT__cnt_free[2U])
                                                      ? 0x42U
                                                      : 0x43U)))));
    vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x16U] 
        = ((((0x100000U & vlSelf->__PVT__cnt_free[2U])
              ? 0x54U : 0x55U) << 0x1fU) | ((((0x40000U 
                                               & vlSelf->__PVT__cnt_free[2U])
                                               ? 0x52U
                                               : 0x53U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->__PVT__cnt_free[2U])
                                                  ? 0x50U
                                                  : 0x51U) 
                                                << 0x11U) 
                                               | ((((0x4000U 
                                                     & vlSelf->__PVT__cnt_free[2U])
                                                     ? 0x4eU
                                                     : 0x4fU) 
                                                   << 0xaU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->__PVT__cnt_free[2U])
                                                        ? 0x4cU
                                                        : 0x4dU) 
                                                      << 3U) 
                                                     | (((0x400U 
                                                          & vlSelf->__PVT__cnt_free[2U])
                                                          ? 0x4aU
                                                          : 0x4bU) 
                                                        >> 4U))))));
    vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x17U] 
        = ((((0x10000000U & vlSelf->__PVT__cnt_free[2U])
              ? 0x5cU : 0x5dU) << 0x1bU) | ((((0x4000000U 
                                               & vlSelf->__PVT__cnt_free[2U])
                                               ? 0x5aU
                                               : 0x5bU) 
                                             << 0x14U) 
                                            | ((((0x1000000U 
                                                  & vlSelf->__PVT__cnt_free[2U])
                                                  ? 0x58U
                                                  : 0x59U) 
                                                << 0xdU) 
                                               | ((((0x400000U 
                                                     & vlSelf->__PVT__cnt_free[2U])
                                                     ? 0x56U
                                                     : 0x57U) 
                                                   << 6U) 
                                                  | (((0x100000U 
                                                       & vlSelf->__PVT__cnt_free[2U])
                                                       ? 0x54U
                                                       : 0x55U) 
                                                     >> 1U)))));
    vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x18U] 
        = ((((0x40U & vlSelf->__PVT__cnt_free[3U]) ? 0x66U
              : 0x67U) << 0x1eU) | ((((0x10U & vlSelf->__PVT__cnt_free[3U])
                                       ? 0x64U : 0x65U) 
                                     << 0x17U) | ((
                                                   ((4U 
                                                     & vlSelf->__PVT__cnt_free[3U])
                                                     ? 0x62U
                                                     : 0x63U) 
                                                   << 0x10U) 
                                                  | ((((1U 
                                                        & vlSelf->__PVT__cnt_free[3U])
                                                        ? 0x60U
                                                        : 0x61U) 
                                                      << 9U) 
                                                     | ((((0x40000000U 
                                                           & vlSelf->__PVT__cnt_free[2U])
                                                           ? 0x5eU
                                                           : 0x5fU) 
                                                         << 2U) 
                                                        | (((0x10000000U 
                                                             & vlSelf->__PVT__cnt_free[2U])
                                                             ? 0x5cU
                                                             : 0x5dU) 
                                                           >> 5U))))));
    vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x19U] 
        = ((((0x4000U & vlSelf->__PVT__cnt_free[3U])
              ? 0x6eU : 0x6fU) << 0x1aU) | ((((0x1000U 
                                               & vlSelf->__PVT__cnt_free[3U])
                                               ? 0x6cU
                                               : 0x6dU) 
                                             << 0x13U) 
                                            | ((((0x400U 
                                                  & vlSelf->__PVT__cnt_free[3U])
                                                  ? 0x6aU
                                                  : 0x6bU) 
                                                << 0xcU) 
                                               | ((((0x100U 
                                                     & vlSelf->__PVT__cnt_free[3U])
                                                     ? 0x68U
                                                     : 0x69U) 
                                                   << 5U) 
                                                  | (((0x40U 
                                                       & vlSelf->__PVT__cnt_free[3U])
                                                       ? 0x66U
                                                       : 0x67U) 
                                                     >> 2U)))));
    vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x1aU] 
        = ((((0x1000000U & vlSelf->__PVT__cnt_free[3U])
              ? 0x78U : 0x79U) << 0x1dU) | ((((0x400000U 
                                               & vlSelf->__PVT__cnt_free[3U])
                                               ? 0x76U
                                               : 0x77U) 
                                             << 0x16U) 
                                            | ((((0x100000U 
                                                  & vlSelf->__PVT__cnt_free[3U])
                                                  ? 0x74U
                                                  : 0x75U) 
                                                << 0xfU) 
                                               | ((((0x40000U 
                                                     & vlSelf->__PVT__cnt_free[3U])
                                                     ? 0x72U
                                                     : 0x73U) 
                                                   << 8U) 
                                                  | ((((0x10000U 
                                                        & vlSelf->__PVT__cnt_free[3U])
                                                        ? 0x70U
                                                        : 0x71U) 
                                                      << 1U) 
                                                     | (((0x4000U 
                                                          & vlSelf->__PVT__cnt_free[3U])
                                                          ? 0x6eU
                                                          : 0x6fU) 
                                                        >> 6U))))));
    vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x1bU] 
        = ((0xfe000000U & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0x1bU]) 
           | ((((0x40000000U & vlSelf->__PVT__cnt_free[3U])
                 ? 0x7eU : 0x7fU) << 0x12U) | ((((0x10000000U 
                                                  & vlSelf->__PVT__cnt_free[3U])
                                                  ? 0x7cU
                                                  : 0x7dU) 
                                                << 0xbU) 
                                               | ((((0x4000000U 
                                                     & vlSelf->__PVT__cnt_free[3U])
                                                     ? 0x7aU
                                                     : 0x7bU) 
                                                   << 4U) 
                                                  | (((0x1000000U 
                                                       & vlSelf->__PVT__cnt_free[3U])
                                                       ? 0x78U
                                                       : 0x79U) 
                                                     >> 3U)))));
}

VL_INLINE_OPT void Vtestharness_axi_burst_splitter_counters__pi151___act_sequent__TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters__6(Vtestharness_axi_burst_splitter_counters__pi151* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestharness_axi_burst_splitter_counters__pi151___act_sequent__TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters__6\n"); );
    // Body
    vlSelf->alloc_gnt_o = ((IData)(vlSelf->__PVT__idq_inp_gnt) 
                           & (0U != (((vlSelf->__PVT__cnt_free[0U] 
                                       | vlSelf->__PVT__cnt_free[1U]) 
                                      | vlSelf->__PVT__cnt_free[2U]) 
                                     | vlSelf->__PVT__cnt_free[3U])));
}
