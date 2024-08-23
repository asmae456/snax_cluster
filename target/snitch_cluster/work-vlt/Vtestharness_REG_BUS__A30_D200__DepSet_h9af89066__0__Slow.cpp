// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness_REG_BUS__A30_D200.h"

VL_ATTR_COLD void Vtestharness_REG_BUS__A30_D200___ctor_var_reset(Vtestharness_REG_BUS__A30_D200* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_REG_BUS__A30_D200___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->rdata);
}
