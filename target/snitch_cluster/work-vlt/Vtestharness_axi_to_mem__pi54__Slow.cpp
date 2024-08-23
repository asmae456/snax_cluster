// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_axi_to_mem__pi54.h"

void Vtestharness_axi_to_mem__pi54___ctor_var_reset(Vtestharness_axi_to_mem__pi54* vlSelf);

Vtestharness_axi_to_mem__pi54::Vtestharness_axi_to_mem__pi54(Vtestharness__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestharness_axi_to_mem__pi54___ctor_var_reset(this);
}

void Vtestharness_axi_to_mem__pi54::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtestharness_axi_to_mem__pi54::~Vtestharness_axi_to_mem__pi54() {
}
