// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestharness.h for the primary calling header

#ifndef VERILATED_VTESTHARNESS_AXI_ERR_SLV__PI67_H_
#define VERILATED_VTESTHARNESS_AXI_ERR_SLV__PI67_H_  // guard

#include "verilated.h"


class Vtestharness__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestharness_axi_err_slv__pi67 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        VL_IN8(test_i,0,0);
        CData/*0:0*/ __PVT__w_fifo_empty;
        CData/*0:0*/ __PVT__w_fifo_push;
        CData/*0:0*/ __PVT__w_fifo_pop;
        CData/*1:0*/ __PVT__w_fifo_data;
        CData/*0:0*/ __PVT__b_fifo_push;
        CData/*0:0*/ __PVT__b_fifo_pop;
        CData/*0:0*/ __PVT__r_fifo_push;
        CData/*0:0*/ __PVT__r_fifo_pop;
        CData/*0:0*/ __PVT__r_cnt_clear;
        CData/*0:0*/ __PVT__r_cnt_en;
        CData/*0:0*/ __PVT__r_cnt_load;
        CData/*0:0*/ __PVT__r_busy_d;
        CData/*0:0*/ __PVT__r_busy_q;
        CData/*0:0*/ __PVT__r_busy_load;
        CData/*0:0*/ __PVT__i_w_fifo__DOT__gate_clock;
        CData/*1:0*/ __PVT__i_w_fifo__DOT__read_pointer_n;
        CData/*1:0*/ __PVT__i_w_fifo__DOT__read_pointer_q;
        CData/*1:0*/ __PVT__i_w_fifo__DOT__write_pointer_n;
        CData/*1:0*/ __PVT__i_w_fifo__DOT__write_pointer_q;
        CData/*2:0*/ __PVT__i_w_fifo__DOT__status_cnt_n;
        CData/*2:0*/ __PVT__i_w_fifo__DOT__status_cnt_q;
        CData/*7:0*/ __PVT__i_w_fifo__DOT__mem_n;
        CData/*7:0*/ __PVT__i_w_fifo__DOT__mem_q;
        CData/*0:0*/ __PVT__i_b_fifo__DOT__gate_clock;
        CData/*0:0*/ __PVT__i_b_fifo__DOT__read_pointer_n;
        CData/*0:0*/ __PVT__i_b_fifo__DOT__read_pointer_q;
        CData/*0:0*/ __PVT__i_b_fifo__DOT__write_pointer_n;
        CData/*0:0*/ __PVT__i_b_fifo__DOT__write_pointer_q;
        CData/*1:0*/ __PVT__i_b_fifo__DOT__status_cnt_n;
        CData/*1:0*/ __PVT__i_b_fifo__DOT__status_cnt_q;
        CData/*3:0*/ __PVT__i_b_fifo__DOT__mem_n;
        CData/*3:0*/ __PVT__i_b_fifo__DOT__mem_q;
        CData/*0:0*/ __PVT__i_r_fifo__DOT__gate_clock;
        CData/*1:0*/ __PVT__i_r_fifo__DOT__read_pointer_n;
        CData/*1:0*/ __PVT__i_r_fifo__DOT__read_pointer_q;
        CData/*1:0*/ __PVT__i_r_fifo__DOT__write_pointer_n;
        CData/*1:0*/ __PVT__i_r_fifo__DOT__write_pointer_q;
        CData/*2:0*/ __PVT__i_r_fifo__DOT__status_cnt_n;
        CData/*2:0*/ __PVT__i_r_fifo__DOT__status_cnt_q;
        CData/*3:0*/ __PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d;
        CData/*3:0*/ __PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q;
        CData/*2:0*/ __PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d;
        CData/*2:0*/ __PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q;
        CData/*1:0*/ __PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d;
        CData/*1:0*/ __PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q;
        CData/*1:0*/ __PVT__genblk1__DOT__i_atop_filter__DOT__id_d;
        CData/*1:0*/ __PVT__genblk1__DOT__i_atop_filter__DOT__id_q;
        CData/*7:0*/ __PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d;
        CData/*7:0*/ __PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_q;
        CData/*0:0*/ __PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream;
        CData/*0:0*/ __PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream;
        CData/*0:0*/ __PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid;
        CData/*0:0*/ __PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_ready;
        CData/*0:0*/ __PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_valid;
        CData/*0:0*/ __PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready;
        CData/*7:0*/ genblk1__DOT__i_atop_filter__DOT____Vcellout__r_resp_cmd__data_o;
        SData/*9:0*/ __PVT__r_fifo_data;
        QData/*39:0*/ __PVT__i_r_fifo__DOT__mem_n;
        QData/*39:0*/ __PVT__i_r_fifo__DOT__mem_q;
        SData/*9:0*/ i_r_fifo__DOT____Vlvbound_h3ef5e7b3__0;
        SData/*8:0*/ __PVT__i_r_counter__DOT__i_counter__DOT__counter_q;
    };
    struct {
        SData/*8:0*/ __PVT__i_r_counter__DOT__i_counter__DOT__counter_d;
        VL_INW(slv_req_i,247,0,8);
        VL_OUTW(slv_resp_o,81,0,3);
        VlWide<8>/*247:0*/ __PVT__err_req;
        VlWide<3>/*81:0*/ __PVT__err_resp;
    };

    // INTERNAL VARIABLES
    Vtestharness__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestharness_axi_err_slv__pi67(Vtestharness__Syms* symsp, const char* v__name);
    ~Vtestharness_axi_err_slv__pi67();
    VL_UNCOPYABLE(Vtestharness_axi_err_slv__pi67);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
