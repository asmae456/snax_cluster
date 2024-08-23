// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestharness.h for the primary calling header

#ifndef VERILATED_VTESTHARNESS___024UNIT_H_
#define VERILATED_VTESTHARNESS___024UNIT_H_  // guard

#include "verilated.h"


class Vtestharness__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestharness___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtestharness__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestharness___024unit(Vtestharness__Syms* symsp, const char* v__name);
    ~Vtestharness___024unit();
    VL_UNCOPYABLE(Vtestharness___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
