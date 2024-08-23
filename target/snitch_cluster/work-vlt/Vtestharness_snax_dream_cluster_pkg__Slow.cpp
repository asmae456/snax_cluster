// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_snax_dream_cluster_pkg.h"

// Parameter definitions for Vtestharness_snax_dream_cluster_pkg
constexpr VlUnpacked<IData/*31:0*/, 1> Vtestharness_snax_dream_cluster_pkg::__PVT__ICacheLineWidth;
constexpr VlUnpacked<IData/*31:0*/, 1> Vtestharness_snax_dream_cluster_pkg::__PVT__ICacheLineCount;
constexpr VlUnpacked<IData/*31:0*/, 1> Vtestharness_snax_dream_cluster_pkg::__PVT__ICacheSets;
constexpr VlUnpacked<IData/*31:0*/, 2> Vtestharness_snax_dream_cluster_pkg::__PVT__Hive;


void Vtestharness_snax_dream_cluster_pkg___ctor_var_reset(Vtestharness_snax_dream_cluster_pkg* vlSelf);

Vtestharness_snax_dream_cluster_pkg::Vtestharness_snax_dream_cluster_pkg(Vtestharness__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestharness_snax_dream_cluster_pkg___ctor_var_reset(this);
}

void Vtestharness_snax_dream_cluster_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtestharness_snax_dream_cluster_pkg::~Vtestharness_snax_dream_cluster_pkg() {
}
