// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness___024root.h"

// Parameter definitions for Vtestharness___024root
constexpr VlUnpacked<IData/*31:0*/, 2> Vtestharness___024root::testharness__DOT__i_snax_dream_cluster__DOT__NumIntOutstandingLoads;
constexpr VlUnpacked<IData/*31:0*/, 2> Vtestharness___024root::testharness__DOT__i_snax_dream_cluster__DOT__NumIntOutstandingMem;
constexpr VlUnpacked<IData/*31:0*/, 2> Vtestharness___024root::testharness__DOT__i_snax_dream_cluster__DOT__NumFPOutstandingLoads;
constexpr VlUnpacked<IData/*31:0*/, 2> Vtestharness___024root::testharness__DOT__i_snax_dream_cluster__DOT__NumFPOutstandingMem;
constexpr VlUnpacked<IData/*31:0*/, 2> Vtestharness___024root::testharness__DOT__i_snax_dream_cluster__DOT__NumDTLBEntries;
constexpr VlUnpacked<IData/*31:0*/, 2> Vtestharness___024root::testharness__DOT__i_snax_dream_cluster__DOT__NumITLBEntries;
constexpr VlUnpacked<IData/*31:0*/, 2> Vtestharness___024root::testharness__DOT__i_snax_dream_cluster__DOT__NumSequencerInstr;
constexpr VlUnpacked<IData/*31:0*/, 2> Vtestharness___024root::testharness__DOT__i_snax_dream_cluster__DOT__NumSsrs;
constexpr VlUnpacked<IData/*31:0*/, 2> Vtestharness___024root::testharness__DOT__i_snax_dream_cluster__DOT__SsrMuxRespDepth;
constexpr VlUnpacked<IData/*31:0*/, 2> Vtestharness___024root::testharness__DOT__i_snax_dream_cluster__DOT__SnaxNarrowTcdmPorts;
constexpr VlUnpacked<IData/*31:0*/, 2> Vtestharness___024root::testharness__DOT__i_snax_dream_cluster__DOT__SnaxWideTcdmPorts;
constexpr VlUnpacked<IData/*31:0*/, 1> Vtestharness___024root::testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__ICacheLineWidth;
constexpr VlUnpacked<IData/*31:0*/, 1> Vtestharness___024root::testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__ICacheLineCount;
constexpr VlUnpacked<IData/*31:0*/, 1> Vtestharness___024root::testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__ICacheSets;
constexpr VlUnpacked<IData/*31:0*/, 2> Vtestharness___024root::testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__SnaxNarrowTcdmPorts;
constexpr VlUnpacked<IData/*31:0*/, 2> Vtestharness___024root::testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__SnaxWideTcdmPorts;
constexpr VlUnpacked<IData/*31:0*/, 1> Vtestharness___024root::testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__SnaxNarrowStartIdx;
constexpr VlUnpacked<IData/*31:0*/, 1> Vtestharness___024root::testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__SnaxNarrowEndIdx;
constexpr VlUnpacked<IData/*31:0*/, 1> Vtestharness___024root::testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__SnaxWideStartIdx;
constexpr VlUnpacked<IData/*31:0*/, 1> Vtestharness___024root::testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__SnaxWideEndIdx;
constexpr VlUnpacked<IData/*31:0*/, 2> Vtestharness___024root::testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__NumIntOutstandingLoads;
constexpr VlUnpacked<IData/*31:0*/, 2> Vtestharness___024root::testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__NumIntOutstandingMem;
constexpr VlUnpacked<IData/*31:0*/, 2> Vtestharness___024root::testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__NumFPOutstandingLoads;
constexpr VlUnpacked<IData/*31:0*/, 2> Vtestharness___024root::testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__NumFPOutstandingMem;
constexpr VlUnpacked<IData/*31:0*/, 2> Vtestharness___024root::testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__NumDTLBEntries;
constexpr VlUnpacked<IData/*31:0*/, 2> Vtestharness___024root::testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__NumITLBEntries;
constexpr VlUnpacked<IData/*31:0*/, 2> Vtestharness___024root::testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__NumSsrs;
constexpr VlUnpacked<IData/*31:0*/, 2> Vtestharness___024root::testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__SsrMuxRespDepth;
constexpr VlUnpacked<IData/*31:0*/, 2> Vtestharness___024root::testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__NumSequencerInstr;
constexpr VlUnpacked<IData/*31:0*/, 2> Vtestharness___024root::testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__Hive;


void Vtestharness___024root___ctor_var_reset(Vtestharness___024root* vlSelf);

Vtestharness___024root::Vtestharness___024root(Vtestharness__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestharness___024root___ctor_var_reset(this);
}

void Vtestharness___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtestharness___024root::~Vtestharness___024root() {
}
