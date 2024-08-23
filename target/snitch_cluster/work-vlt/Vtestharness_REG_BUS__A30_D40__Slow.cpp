// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness_REG_BUS__A30_D40.h"
#include "Vtestharness__Syms.h"

void Vtestharness_REG_BUS__A30_D40___ctor_var_reset(Vtestharness_REG_BUS__A30_D40* vlSelf);

Vtestharness_REG_BUS__A30_D40::Vtestharness_REG_BUS__A30_D40(Vtestharness__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestharness_REG_BUS__A30_D40___ctor_var_reset(this);
}

void Vtestharness_REG_BUS__A30_D40::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtestharness_REG_BUS__A30_D40::~Vtestharness_REG_BUS__A30_D40() {
}
