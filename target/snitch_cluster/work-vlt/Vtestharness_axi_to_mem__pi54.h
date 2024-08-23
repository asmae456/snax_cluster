// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestharness.h for the primary calling header

#ifndef VERILATED_VTESTHARNESS_AXI_TO_MEM__PI54_H_
#define VERILATED_VTESTHARNESS_AXI_TO_MEM__PI54_H_  // guard

#include "verilated.h"


class Vtestharness__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestharness_axi_to_mem__pi54 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        VL_OUT8(busy_o,0,0);
        VL_OUT8(mem_req_o,0,0);
        VL_IN8(mem_gnt_i,0,0);
        VL_OUT8(mem_atop_o,5,0);
        VL_OUT8(mem_we_o,0,0);
        VL_IN8(mem_rvalid_i,0,0);
        CData/*7:0*/ __PVT__i_axi_to_detailed_mem__DOT__r_cnt_d;
        CData/*7:0*/ __PVT__i_axi_to_detailed_mem__DOT__r_cnt_q;
        CData/*7:0*/ __PVT__i_axi_to_detailed_mem__DOT__w_cnt_d;
        CData/*7:0*/ __PVT__i_axi_to_detailed_mem__DOT__w_cnt_q;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__arb_valid;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__arb_ready;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__rd_valid;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__wr_valid;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__sel_buf_ready;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__sel_lock_d;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__sel_lock_q;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__meta_buf_ready;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__meta_sel_d;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__meta_sel_q;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__m2s_req_ready;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__mem_req_ready;
        CData/*1:0*/ i_axi_to_detailed_mem__DOT____Vcellout__i_ax_mux__inp_ready_o;
        CData/*2:0*/ i_axi_to_detailed_mem__DOT____Vcellinp__i_fork__ready_i;
        CData/*2:0*/ i_axi_to_detailed_mem__DOT____Vcellout__i_fork__valid_o;
        CData/*1:0*/ i_axi_to_detailed_mem__DOT____Vcellout__i_sel_buf__data_o;
        CData/*1:0*/ i_axi_to_detailed_mem__DOT____Vcellinp__i_sel_buf__data_i;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__mem_join_ready;
        CData/*1:0*/ i_axi_to_detailed_mem__DOT____Vcellinp__i_join__inp_valid_i;
        CData/*1:0*/ i_axi_to_detailed_mem__DOT____Vcellinp__i_fork_dynamic__ready_i;
        CData/*1:0*/ i_axi_to_detailed_mem__DOT____Vcellout__i_fork_dynamic__valid_o;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__meta_buf_size_enable;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__collect_b_err_d;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__collect_b_err_q;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__collect_b_exokay_d;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__collect_b_exokay_q;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__next_collect_b_err;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__next_collect_b_exokay;
        CData/*2:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_fork__DOT__oup_ready;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_fork__DOT__inp_state_d;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_fork__DOT__inp_state_q;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_fork__DOT__gen_oup_state__BRA__0__KET____DOT__oup_state_d;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_fork__DOT__gen_oup_state__BRA__0__KET____DOT__oup_state_q;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_fork__DOT__gen_oup_state__BRA__1__KET____DOT__oup_state_d;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_fork__DOT__gen_oup_state__BRA__1__KET____DOT__oup_state_q;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_fork__DOT__gen_oup_state__BRA__2__KET____DOT__oup_state_d;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_fork__DOT__gen_oup_state__BRA__2__KET____DOT__oup_state_q;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_sel_buf__DOT__push;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_sel_buf__DOT__pop;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_sel_buf__DOT__empty;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_sel_buf__DOT__fifo_i__DOT__gate_clock;
        CData/*1:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_sel_buf__DOT__fifo_i__DOT__read_pointer_n;
        CData/*1:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_sel_buf__DOT__fifo_i__DOT__read_pointer_q;
        CData/*1:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_sel_buf__DOT__fifo_i__DOT__write_pointer_n;
        CData/*1:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_sel_buf__DOT__fifo_i__DOT__write_pointer_q;
        CData/*2:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_sel_buf__DOT__fifo_i__DOT__status_cnt_n;
        CData/*2:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_sel_buf__DOT__fifo_i__DOT__status_cnt_q;
        CData/*5:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_sel_buf__DOT__fifo_i__DOT__mem_n;
        CData/*5:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_sel_buf__DOT__fifo_i__DOT__mem_q;
        CData/*1:0*/ i_axi_to_detailed_mem__DOT__i_sel_buf__DOT__fifo_i__DOT____Vlvbound_haaa6db43__0;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_meta_buf__DOT__push;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_meta_buf__DOT__pop;
    };
    struct {
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_meta_buf__DOT__empty;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_meta_buf__DOT__fifo_i__DOT__gate_clock;
        CData/*1:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_meta_buf__DOT__fifo_i__DOT__read_pointer_n;
        CData/*1:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_meta_buf__DOT__fifo_i__DOT__read_pointer_q;
        CData/*1:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_meta_buf__DOT__fifo_i__DOT__write_pointer_n;
        CData/*1:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_meta_buf__DOT__fifo_i__DOT__write_pointer_q;
        CData/*2:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_meta_buf__DOT__fifo_i__DOT__status_cnt_n;
        CData/*2:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_meta_buf__DOT__fifo_i__DOT__status_cnt_q;
        CData/*2:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_stream_to_mem__DOT__cnt_d;
        CData/*2:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_stream_to_mem__DOT__cnt_q;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_stream_to_mem__DOT__req_ready;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__push;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__pop;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__empty;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__gate_clock;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__read_pointer_n;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__read_pointer_q;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__write_pointer_n;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__write_pointer_q;
        CData/*1:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_n;
        CData/*1:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__status_cnt_q;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_reqs__BRA__0__KET____DOT__i_ft_reg__DOT__push;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_reqs__BRA__0__KET____DOT__i_ft_reg__DOT__pop;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_reqs__BRA__0__KET____DOT__i_ft_reg__DOT__empty;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_reqs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__gate_clock;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_reqs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__read_pointer_n;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_reqs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__read_pointer_q;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_reqs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__write_pointer_n;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_reqs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__write_pointer_q;
        CData/*1:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_reqs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_n;
        CData/*1:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_reqs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_q;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__push;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__empty;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__gate_clock;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__read_pointer_n;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__read_pointer_q;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__write_pointer_n;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__write_pointer_q;
        CData/*1:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_n;
        CData/*1:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__status_cnt_q;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_fork_dynamic__DOT__int_inp_valid;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_fork_dynamic__DOT__int_inp_ready;
        CData/*1:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_fork_dynamic__DOT__int_oup_valid;
        CData/*1:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_fork_dynamic__DOT__int_oup_ready;
        CData/*1:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_fork_dynamic__DOT__i_fork__DOT__oup_ready;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_fork_dynamic__DOT__i_fork__DOT__inp_state_d;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_fork_dynamic__DOT__i_fork__DOT__inp_state_q;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_fork_dynamic__DOT__i_fork__DOT__gen_oup_state__BRA__0__KET____DOT__oup_state_d;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_fork_dynamic__DOT__i_fork__DOT__gen_oup_state__BRA__0__KET____DOT__oup_state_q;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_fork_dynamic__DOT__i_fork__DOT__gen_oup_state__BRA__1__KET____DOT__oup_state_d;
        CData/*0:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_fork_dynamic__DOT__i_fork__DOT__gen_oup_state__BRA__1__KET____DOT__oup_state_q;
        CData/*2:0*/ __Vfunc_num_bytes__0__size;
        CData/*2:0*/ __Vfunc_aligned_addr__1__size;
        CData/*2:0*/ __Vfunc_num_bytes__2__size;
        CData/*2:0*/ __Vfunc_aligned_addr__3__size;
        CData/*2:0*/ __Vfunc_num_bytes__5__size;
        CData/*2:0*/ __Vfunc_aligned_addr__6__size;
        CData/*2:0*/ __Vfunc_num_bytes__7__size;
        CData/*2:0*/ __Vfunc_aligned_addr__8__size;
        SData/*15:0*/ __Vfunc_num_bytes__0__Vfuncout;
        SData/*15:0*/ __Vfunc_num_bytes__2__Vfuncout;
        SData/*15:0*/ __Vfunc_num_bytes__5__Vfuncout;
        SData/*15:0*/ __Vfunc_num_bytes__7__Vfuncout;
        VL_OUTW(mem_wdata_o,511,0,16);
    };
    struct {
        VL_INW(mem_rdata_i,511,0,16);
        VlWide<17>/*513:0*/ i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__data_o;
        VlWide<17>/*513:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__mem_n;
        VlWide<17>/*513:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__mem_q;
        VlWide<17>/*513:0*/ i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_resp_regs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT____Vlvbound_haa0bdeac__0;
        VlWide<4>/*127:0*/ __Vfunc_aligned_addr__1__Vfuncout;
        VlWide<4>/*127:0*/ __Vfunc_aligned_addr__1__addr;
        VlWide<4>/*127:0*/ __Vfunc_aligned_addr__3__Vfuncout;
        VlWide<4>/*127:0*/ __Vfunc_aligned_addr__3__addr;
        VlWide<4>/*127:0*/ __Vfunc_aligned_addr__6__Vfuncout;
        VlWide<4>/*127:0*/ __Vfunc_aligned_addr__6__addr;
        VlWide<4>/*127:0*/ __Vfunc_aligned_addr__8__Vfuncout;
        VlWide<4>/*127:0*/ __Vfunc_aligned_addr__8__addr;
        VL_INW(axi_req_i,753,0,24);
        VL_OUTW(axi_resp_o,531,0,17);
        VL_OUT64(mem_addr_o,47,0);
        VL_OUT64(mem_strb_o,63,0);
        VlWide<17>/*513:0*/ __PVT__i_axi_to_detailed_mem__DOT__mem_rdata;
        VlWide<17>/*513:0*/ __PVT__i_axi_to_detailed_mem__DOT__m2s_resp;
        VlWide<5>/*142:0*/ __PVT__i_axi_to_detailed_mem__DOT__rd_meta;
        VlWide<5>/*142:0*/ __PVT__i_axi_to_detailed_mem__DOT__rd_meta_d;
        VlWide<5>/*142:0*/ __PVT__i_axi_to_detailed_mem__DOT__rd_meta_q;
        VlWide<5>/*142:0*/ __PVT__i_axi_to_detailed_mem__DOT__wr_meta;
        VlWide<5>/*142:0*/ __PVT__i_axi_to_detailed_mem__DOT__wr_meta_d;
        VlWide<5>/*142:0*/ __PVT__i_axi_to_detailed_mem__DOT__wr_meta_q;
        VlWide<5>/*142:0*/ __PVT__i_axi_to_detailed_mem__DOT__meta;
        VlWide<5>/*142:0*/ __PVT__i_axi_to_detailed_mem__DOT__meta_buf;
        VlWide<14>/*428:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_meta_buf__DOT__fifo_i__DOT__mem_n;
        VlWide<14>/*428:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_meta_buf__DOT__fifo_i__DOT__mem_q;
        VlWide<5>/*142:0*/ i_axi_to_detailed_mem__DOT__i_meta_buf__DOT__fifo_i__DOT____Vlvbound_h3b04d550__0;
        VlWide<33>/*1027:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__mem_n;
        VlWide<33>/*1027:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT__mem_q;
        VlWide<17>/*513:0*/ i_axi_to_detailed_mem__DOT__i_stream_to_mem__DOT__gen_buf__DOT__i_resp_buf__DOT__fifo_i__DOT____Vlvbound_haa0a3507__0;
        VlWide<21>/*650:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__bank_req;
        VlWide<21>/*650:0*/ i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT____Vcellout__gen_reqs__BRA__0__KET____DOT__i_ft_reg__data_o;
        VlWide<21>/*650:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_reqs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__mem_n;
        VlWide<21>/*650:0*/ __PVT__i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_reqs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT__mem_q;
        VlWide<21>/*650:0*/ i_axi_to_detailed_mem__DOT__i_mem_to_banks__DOT__gen_reqs__BRA__0__KET____DOT__i_ft_reg__DOT__fifo_i__DOT____Vlvbound_ha249014b__0;
    };

    // INTERNAL VARIABLES
    Vtestharness__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestharness_axi_to_mem__pi54(Vtestharness__Syms* symsp, const char* v__name);
    ~Vtestharness_axi_to_mem__pi54();
    VL_UNCOPYABLE(Vtestharness_axi_to_mem__pi54);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
