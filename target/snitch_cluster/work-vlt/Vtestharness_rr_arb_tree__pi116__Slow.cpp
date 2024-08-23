// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_rr_arb_tree__pi116.h"

void Vtestharness_rr_arb_tree__pi116___ctor_var_reset(Vtestharness_rr_arb_tree__pi116* vlSelf);

Vtestharness_rr_arb_tree__pi116::Vtestharness_rr_arb_tree__pi116(Vtestharness__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestharness_rr_arb_tree__pi116___ctor_var_reset(this);
}

void Vtestharness_rr_arb_tree__pi116::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtestharness_rr_arb_tree__pi116::~Vtestharness_rr_arb_tree__pi116() {
}
