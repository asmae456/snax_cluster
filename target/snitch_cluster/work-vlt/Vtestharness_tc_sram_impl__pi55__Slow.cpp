// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_tc_sram_impl__pi55.h"

void Vtestharness_tc_sram_impl__pi55___ctor_var_reset(Vtestharness_tc_sram_impl__pi55* vlSelf);

Vtestharness_tc_sram_impl__pi55::Vtestharness_tc_sram_impl__pi55(Vtestharness__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestharness_tc_sram_impl__pi55___ctor_var_reset(this);
}

void Vtestharness_tc_sram_impl__pi55::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtestharness_tc_sram_impl__pi55::~Vtestharness_tc_sram_impl__pi55() {
}
