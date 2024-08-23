// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_axi_mux__pi51.h"

void Vtestharness_axi_mux__pi51___ctor_var_reset(Vtestharness_axi_mux__pi51* vlSelf);

Vtestharness_axi_mux__pi51::Vtestharness_axi_mux__pi51(Vtestharness__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestharness_axi_mux__pi51___ctor_var_reset(this);
}

void Vtestharness_axi_mux__pi51::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtestharness_axi_mux__pi51::~Vtestharness_axi_mux__pi51() {
}
