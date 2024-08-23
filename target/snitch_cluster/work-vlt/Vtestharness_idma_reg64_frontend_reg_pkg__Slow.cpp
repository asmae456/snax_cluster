// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_idma_reg64_frontend_reg_pkg.h"

// Parameter definitions for Vtestharness_idma_reg64_frontend_reg_pkg
constexpr VlUnpacked<CData/*3:0*/, 7> Vtestharness_idma_reg64_frontend_reg_pkg::__PVT__IDMA_REG64_FRONTEND_PERMIT;


void Vtestharness_idma_reg64_frontend_reg_pkg___ctor_var_reset(Vtestharness_idma_reg64_frontend_reg_pkg* vlSelf);

Vtestharness_idma_reg64_frontend_reg_pkg::Vtestharness_idma_reg64_frontend_reg_pkg(Vtestharness__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestharness_idma_reg64_frontend_reg_pkg___ctor_var_reset(this);
}

void Vtestharness_idma_reg64_frontend_reg_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtestharness_idma_reg64_frontend_reg_pkg::~Vtestharness_idma_reg64_frontend_reg_pkg() {
}
