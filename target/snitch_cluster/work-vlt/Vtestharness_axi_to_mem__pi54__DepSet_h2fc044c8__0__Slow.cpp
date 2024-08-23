// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_axi_to_mem__pi54.h"

VL_ATTR_COLD void Vtestharness_axi_to_mem__pi54___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write__0(Vtestharness_axi_to_mem__pi54* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_axi_to_mem__pi54___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_write__0\n"); );
    // Body
    vlSelf->__PVT__i_axi_to_detailed_mem__DOT__mem_req_ready 
        = ((1U != (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_reqs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_q)) 
           & (1U != (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_q)));
    vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__push 
        = ((1U != (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_q)) 
           & ((~ (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__arb_outcome_head)) 
              & (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q)));
    vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__gate_clock = 1U;
    vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__empty 
        = ((~ (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__push)) 
           & (0U == (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_q)));
    vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_n 
        = vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_q;
    if (((IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__push) 
         & (1U != (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__gate_clock = 0U;
        vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_q)));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__empty)))) {
        vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if ((((IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__push) 
          & (~ (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__empty))) 
         & (1U != (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_n 
            = vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_q;
    }
    vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__read_pointer_n 
        = vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__read_pointer_q;
    if ((1U & (~ (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__empty)))) {
        vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__read_pointer_n 
            = ((IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__read_pointer_q)));
    }
    vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__write_pointer_n 
        = vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__write_pointer_q;
    if (((IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__push) 
         & (1U != (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__write_pointer_n 
            = ((IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__write_pointer_q)));
    }
    if (((0U == (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_q)) 
         & (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__push))) {
        if ((1U & (~ (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__empty)))) {
            vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_n 
                = vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_q;
            vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__read_pointer_n 
                = vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__read_pointer_q;
            vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__write_pointer_n 
                = vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__write_pointer_q;
        }
    }
    vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__push 
        = ((2U != (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_q)) 
           & (~ (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__empty)));
    vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__gate_clock = 1U;
    if (((IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__push) 
         & (2U != (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__gate_clock = 0U;
    }
    vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__empty 
        = ((~ (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__push)) 
           & (0U == (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_q)));
}

VL_ATTR_COLD void Vtestharness_axi_to_mem__pi54___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read__0(Vtestharness_axi_to_mem__pi54* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_axi_to_mem__pi54___stl_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__i_axi_to_mem_read__0\n"); );
    // Body
    vlSelf->__PVT__i_axi_to_detailed_mem__DOT__mem_req_ready 
        = ((1U != (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_reqs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_q)) 
           & (1U != (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_q)));
    vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__push 
        = ((1U != (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_mem_dma__DOT__arb_outcome_head) 
              & (IData)(vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_no_wide_acc_connect__DOT__i_dma_interconnect__DOT__gen_rsp_mux__BRA__0__KET____DOT__i_shift_reg__DOT__i_shift_reg_gated__DOT__gen_shift_reg__DOT__data_q)));
    vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__gate_clock = 1U;
    vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__empty 
        = ((~ (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__push)) 
           & (0U == (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_q)));
    vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_n 
        = vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_q;
    if (((IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__push) 
         & (1U != (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__gate_clock = 0U;
        vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_q)));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__empty)))) {
        vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if ((((IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__push) 
          & (~ (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__empty))) 
         & (1U != (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_n 
            = vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_q;
    }
    vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__read_pointer_n 
        = vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__read_pointer_q;
    if ((1U & (~ (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__empty)))) {
        vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__read_pointer_n 
            = ((IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__read_pointer_q)));
    }
    vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__write_pointer_n 
        = vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__write_pointer_q;
    if (((IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__push) 
         & (1U != (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__write_pointer_n 
            = ((IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__write_pointer_q)));
    }
    if (((0U == (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_q)) 
         & (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__push))) {
        if ((1U & (~ (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__empty)))) {
            vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_n 
                = vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_q;
            vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__read_pointer_n 
                = vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__read_pointer_q;
            vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__write_pointer_n 
                = vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__write_pointer_q;
        }
    }
    vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__push 
        = ((2U != (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_q)) 
           & (~ (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__empty)));
    vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__gate_clock = 1U;
    if (((IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__push) 
         & (2U != (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__gate_clock = 0U;
    }
    vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__empty 
        = ((~ (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__push)) 
           & (0U == (IData)(vlSelf->__PVT__i_axi_to_detailed_mem__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_q)));
}
