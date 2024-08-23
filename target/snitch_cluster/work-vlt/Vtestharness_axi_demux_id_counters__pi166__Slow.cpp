// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_axi_demux_id_counters__pi166.h"

void Vtestharness_axi_demux_id_counters__pi166___ctor_var_reset(Vtestharness_axi_demux_id_counters__pi166* vlSelf);

Vtestharness_axi_demux_id_counters__pi166::Vtestharness_axi_demux_id_counters__pi166(Vtestharness__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestharness_axi_demux_id_counters__pi166___ctor_var_reset(this);
}

void Vtestharness_axi_demux_id_counters__pi166::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtestharness_axi_demux_id_counters__pi166::~Vtestharness_axi_demux_id_counters__pi166() {
}
