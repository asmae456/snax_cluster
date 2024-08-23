// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness___024unit.h"

void Vtestharness___024unit___ctor_var_reset(Vtestharness___024unit* vlSelf);

Vtestharness___024unit::Vtestharness___024unit(Vtestharness__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestharness___024unit___ctor_var_reset(this);
}

void Vtestharness___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtestharness___024unit::~Vtestharness___024unit() {
}
