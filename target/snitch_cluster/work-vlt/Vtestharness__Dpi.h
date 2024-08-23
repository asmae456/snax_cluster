// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTESTHARNESS__DPI_H_
#define VERILATED_VTESTHARNESS__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /workspaces/snax_cluster/target/snitch_cluster/test/testharness.sv:12:32
    extern void clint_tick(const svOpenArrayHandle msip);
    // DPI import at /workspaces/snax_cluster/target/common/test/tb_memory_regbus.sv:24:32
    extern void tb_memory_read(long long addr, int len, const svOpenArrayHandle data);
    // DPI import at /workspaces/snax_cluster/target/common/test/tb_memory_regbus.sv:29:32
    extern void tb_memory_write(long long addr, int len, const svOpenArrayHandle data, const svOpenArrayHandle strb);

#ifdef __cplusplus
}
#endif

#endif  // guard
