// Copyright 2024 KU Leuven.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//#include <inttypes.h>
//#include <inttypes.h>
#include "snrt.h" 

#include "data.h"



int main() {
    // Set err value for checking
    int err = 0;
    printf("Running program c \n");
    // Allocates space in TCDM
    uint64_t *local_a, *local_o;
    int test =10;

    local_a = (uint64_t *)snrt_l1_next();
    local_o = local_a + DATA_LEN;

    // Start of pre-loading data from L2 memory
    // towards the L1 TCDM memory
    // Use the Snitch core with a DMA
    // to move the data from L2 to L1
    if (snrt_is_dm_core()) {
        // This measures the start of cycle count
        // for preloading the data to the L1 memory
        uint32_t start_dma_load = snrt_mcycle();

        // The DATA_LEN is found in data.h
        size_t vector_size = DATA_LEN * sizeof(uint64_t);
        snrt_dma_start_1d(local_a, A, vector_size);

        // Measure the end of the transfer process
        uint32_t end_dma_load = snrt_mcycle();
    }

    // Synchronize cores by setting up a
    // fence barrier for the DMA and accelerator core
    snrt_cluster_hw_barrier();

    // This assigns the tasks inside the condition
    // to the core controlling the accelerator
    if (snrt_is_compute_core()) {
        // This marks the start of the
        // setting of CSRs for the accelerator
        uint32_t start_csr_setup = snrt_mcycle();

        //------------------------------
        // 1st set the streamer CSRs
        // The list of CSRs are:
        // 0x3c0 - loop bound for all components (RW)
        // 0x3c1 - temporal stride for input A (RW)
        // 0x3c2 - temporal stride for input B (RW)
        // 0x3c3 - temporal stride for output O (RW)
        // 0x3c4 - spatial stride for input A (RW)
        // 0x3c5 - spatial stride for input B (RW)
        // 0x3c6 - spatial stride for input O (RW)
        // 0x3c7 - base pointer for input A (RW)
        // 0x3c8 - base pointer for input B (RW)
        // 0x3c9 - base pointer for input O (RW)
        // 0x3ca - send configurations to streamer (RW)
        // 0x3cb - performance counter of streamer (RO)
        //------------------------------
        write_csr(0x3c0, LOOP_ITER);
        write_csr(0x3c1, 64);
        write_csr(0x3c2, 64);
        write_csr(0x3c3, 8);
        write_csr(0x3c4, 8);
        write_csr(0x3c5, (uint64_t)local_a);
        write_csr(0x3c6, (uint64_t)local_o);

        //------------------------------
        // 2nd set the CSRs of the accelerator
        // 0x3cc - mode of the ALU (RW)
        //       - 0 for add, 1 for sub, 2 for mul, 3 for XOR
        // 0x3cd - length of data (RW)
        // 0x3ce - send configurations to accelerator (RW)
        // 0x3cf - busy status (RO)
        // 0x3d0 - performance counter (RO)
        //------------------------------
        write_csr(0x3ca, (ADDRESS<<2)| MODE);
        write_csr(0x3cb, LOOP_ITER);

        // Start streamer then start ALU
        write_csr(0x3c7, 1);
        write_csr(0x3cc, 1);
        printf("write_csr(0x3cc, 1) %d \n", (int)read_csr(0x3cc));

        // Mark the end of the CSR setup cycles
        uint32_t end_csr_setup = snrt_mcycle();

        // Do this to poll the accelerator
        while (!read_csr(0x3ce)) {
            printf("write_csr(0x3cd, 1) %d \n", (int)read_csr(0x3cd));
        };
        // Do this to poll the accelerator
        //  while (read_csr(0x3c8)) {
        //  };
        // Compare results and check if the
        // accelerator returns correct answers
        // For every incorrect answer, increment err 0x3c6
            printf("write_csr(0x3c6, 1) %d \n", read_csr(0x3c6));
        
        for (uint16_t j = 0; j < 8; j++) {
            if (OUT[j] != *(local_o + j)) {
                printf("*(local_o + j): %b \n", OUT[j]);
                err++;
            }
        }
        // Read performance counter
        uint32_t perf_count = read_csr(0x3ce);

        printf("OUT[0]: %d \n", (int)OUT[0]);
        printf("*(local_a + 0): %d \n", (int)*(local_a + 0));
        // Read performance counter

        printf("Accelerator Done! \n");
        printf("Accelerator Cycles: %d \n", perf_count);
        printf("Number of errors: %d \n", err);
    };

    return err;
}
