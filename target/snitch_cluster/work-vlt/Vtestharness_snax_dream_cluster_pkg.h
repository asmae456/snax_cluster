// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestharness.h for the primary calling header

#ifndef VERILATED_VTESTHARNESS_SNAX_DREAM_CLUSTER_PKG_H_
#define VERILATED_VTESTHARNESS_SNAX_DREAM_CLUSTER_PKG_H_  // guard

#include "verilated.h"


class Vtestharness__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestharness_snax_dream_cluster_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtestharness__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr VlUnpacked<IData/*31:0*/, 1> __PVT__ICacheLineWidth = {{
        0x00000100U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 1> __PVT__ICacheLineCount = {{
        0x00000080U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 1> __PVT__ICacheSets = {{
        0x00000002U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 2> __PVT__Hive = {{
        0x00000000U, 0x00000000U
    }};

    // CONSTRUCTORS
    Vtestharness_snax_dream_cluster_pkg(Vtestharness__Syms* symsp, const char* v__name);
    ~Vtestharness_snax_dream_cluster_pkg();
    VL_UNCOPYABLE(Vtestharness_snax_dream_cluster_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
