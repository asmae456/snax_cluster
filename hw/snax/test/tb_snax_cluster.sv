// Copyright 2021 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51

// AUTOMATICALLY GENERATED by clustergen.py; edit the script or configuration
// instead.

`include "axi/typedef.svh"

//`timescale 1ns/1ps

// verilog_lint: waive-start package-filename
package snitch_cluster_pkg;

  localparam int unsigned NrCores = 2;
  localparam int unsigned NrHives = 1;

  localparam int unsigned AddrWidth = 48;
  localparam int unsigned NarrowDataWidth = 64;
  localparam int unsigned WideDataWidth = 512;

  localparam int unsigned NarrowIdWidthIn = 2;
  localparam int unsigned NrMasters = 3;
  localparam int unsigned NarrowIdWidthOut = $clog2(NrMasters) + NarrowIdWidthIn;

  localparam int unsigned NrDmaMasters = 2 + 1;
  localparam int unsigned WideIdWidthIn = 1;
  localparam int unsigned WideIdWidthOut = $clog2(NrDmaMasters) + WideIdWidthIn;

  localparam int unsigned NarrowUserWidth = 1;
  localparam int unsigned WideUserWidth = 1;

  localparam int unsigned ICacheLineWidth [NrHives] = '{
    256
};
  localparam int unsigned ICacheLineCount [NrHives] = '{
    128
};
  localparam int unsigned ICacheSets [NrHives] = '{
    2
};

  localparam int unsigned Hive [NrCores] = '{0, 0};

  typedef struct packed {
    logic [0:0] reserved;
  } sram_cfg_t;

  typedef struct packed {
    sram_cfg_t icache_tag;
    sram_cfg_t icache_data;
    sram_cfg_t tcdm;
  } sram_cfgs_t;

  typedef logic [AddrWidth-1:0]         addr_t;
  typedef logic [NarrowDataWidth-1:0]   data_t;
  typedef logic [NarrowDataWidth/8-1:0] strb_t;
  typedef logic [WideDataWidth-1:0]     data_dma_t;
  typedef logic [WideDataWidth/8-1:0]   strb_dma_t;
  typedef logic [NarrowIdWidthIn-1:0]   narrow_in_id_t;
  typedef logic [NarrowIdWidthOut-1:0]  narrow_out_id_t;
  typedef logic [WideIdWidthIn-1:0]     wide_in_id_t;
  typedef logic [WideIdWidthOut-1:0]    wide_out_id_t;
  typedef logic [NarrowUserWidth-1:0]   user_t;
  typedef logic [WideUserWidth-1:0]     user_dma_t;

  `AXI_TYPEDEF_ALL(narrow_in, addr_t, narrow_in_id_t, data_t, strb_t, user_t)
  `AXI_TYPEDEF_ALL(narrow_out, addr_t, narrow_out_id_t, data_t, strb_t, user_t)
  `AXI_TYPEDEF_ALL(wide_in, addr_t, wide_in_id_t, data_dma_t, strb_dma_t, user_dma_t)
  `AXI_TYPEDEF_ALL(wide_out, addr_t, wide_out_id_t, data_dma_t, strb_dma_t, user_dma_t)

  function automatic snitch_pma_pkg::rule_t [snitch_pma_pkg::NrMaxRules-1:0] get_cached_regions();
    automatic snitch_pma_pkg::rule_t [snitch_pma_pkg::NrMaxRules-1:0] cached_regions;
    cached_regions = '{default: '0};
    cached_regions[0] = '{base: 48'h80000000, mask: 48'hffff80000000};
    return cached_regions;
  endfunction

  localparam snitch_pma_pkg::snitch_pma_t SnitchPMACfg = '{
      NrCachedRegionRules: 1,
      CachedRegion: get_cached_regions(),
      default: 0
  };

  localparam fpnew_pkg::fpu_implementation_t FPUImplementation [2] = '{
    '{
        PipeRegs: // FMA Block
                  '{
                    '{  3, // FP32
                        3, // FP64
                        2, // FP16
                        1, // FP8
                        2, // FP16alt
                        1  // FP8alt
                      },
                    '{1, 1, 1, 1, 1, 1},   // DIVSQRT
                    '{1,
                      1,
                      1,
                      1,
                      1,
                      1},   // NONCOMP
                    '{1,
                      1,
                      1,
                      1,
                      1,
                      1},   // CONV
                    '{2,
                      2,
                      2,
                      2,
                      2,
                      2}    // DOTP
                    },
        UnitTypes: '{'{fpnew_pkg::MERGED,
                       fpnew_pkg::MERGED,
                       fpnew_pkg::MERGED,
                       fpnew_pkg::MERGED,
                       fpnew_pkg::MERGED,
                       fpnew_pkg::MERGED},  // FMA
                    '{fpnew_pkg::DISABLED,
                        fpnew_pkg::DISABLED,
                        fpnew_pkg::DISABLED,
                        fpnew_pkg::DISABLED,
                        fpnew_pkg::DISABLED,
                        fpnew_pkg::DISABLED}, // DIVSQRT
                    '{fpnew_pkg::PARALLEL,
                        fpnew_pkg::PARALLEL,
                        fpnew_pkg::PARALLEL,
                        fpnew_pkg::PARALLEL,
                        fpnew_pkg::PARALLEL,
                        fpnew_pkg::PARALLEL}, // NONCOMP
                    '{fpnew_pkg::MERGED,
                        fpnew_pkg::MERGED,
                        fpnew_pkg::MERGED,
                        fpnew_pkg::MERGED,
                        fpnew_pkg::MERGED,
                        fpnew_pkg::MERGED},   // CONV
                    '{fpnew_pkg::MERGED,
                        fpnew_pkg::MERGED,
                        fpnew_pkg::MERGED,
                        fpnew_pkg::MERGED,
                        fpnew_pkg::MERGED,
                        fpnew_pkg::MERGED}},  // DOTP
        PipeConfig: fpnew_pkg::BEFORE
    },
    '{
        PipeRegs: // FMA Block
                  '{
                    '{  3, // FP32
                        3, // FP64
                        2, // FP16
                        1, // FP8
                        2, // FP16alt
                        1  // FP8alt
                      },
                    '{1, 1, 1, 1, 1, 1},   // DIVSQRT
                    '{1,
                      1,
                      1,
                      1,
                      1,
                      1},   // NONCOMP
                    '{1,
                      1,
                      1,
                      1,
                      1,
                      1},   // CONV
                    '{2,
                      2,
                      2,
                      2,
                      2,
                      2}    // DOTP
                    },
        UnitTypes: '{'{fpnew_pkg::MERGED,
                       fpnew_pkg::MERGED,
                       fpnew_pkg::MERGED,
                       fpnew_pkg::MERGED,
                       fpnew_pkg::MERGED,
                       fpnew_pkg::MERGED},  // FMA
                    '{fpnew_pkg::DISABLED,
                        fpnew_pkg::DISABLED,
                        fpnew_pkg::DISABLED,
                        fpnew_pkg::DISABLED,
                        fpnew_pkg::DISABLED,
                        fpnew_pkg::DISABLED}, // DIVSQRT
                    '{fpnew_pkg::PARALLEL,
                        fpnew_pkg::PARALLEL,
                        fpnew_pkg::PARALLEL,
                        fpnew_pkg::PARALLEL,
                        fpnew_pkg::PARALLEL,
                        fpnew_pkg::PARALLEL}, // NONCOMP
                    '{fpnew_pkg::MERGED,
                        fpnew_pkg::MERGED,
                        fpnew_pkg::MERGED,
                        fpnew_pkg::MERGED,
                        fpnew_pkg::MERGED,
                        fpnew_pkg::MERGED},   // CONV
                    '{fpnew_pkg::DISABLED,
                        fpnew_pkg::DISABLED,
                        fpnew_pkg::DISABLED,
                        fpnew_pkg::DISABLED,
                        fpnew_pkg::DISABLED,
                        fpnew_pkg::DISABLED}}, // DOTP
        PipeConfig: fpnew_pkg::BEFORE
    }
  };

  localparam snitch_ssr_pkg::ssr_cfg_t [3-1:0] SsrCfgs [2] = '{
    '{'{0, 0, 0, 0, 1, 1, 4, 14, 17, 3, 4, 3, 8, 4, 3},
      '{0, 0, 0, 0, 1, 1, 4, 14, 17, 3, 4, 3, 8, 4, 3},
      '{0, 0, 0, 0, 1, 1, 4, 14, 17, 3, 4, 3, 8, 4, 3}},
    '{/*None*/ '0,
      /*None*/ '0,
      /*None*/ '0}
  };

  localparam logic [3-1:0][4:0] SsrRegs [2] = '{
    '{2, 1, 0},
    '{/*None*/ 0, /*None*/ 0, /*None*/ 0}
  };

endpackage
// verilog_lint: waive-stop package-filename

module tb_snax_cluster;

  logic                                   clk_i;
  logic                                   rst_ni;
  logic [snitch_cluster_pkg::NrCores-1:0] debug_req_i;
  logic [snitch_cluster_pkg::NrCores-1:0] meip_i;
  logic [snitch_cluster_pkg::NrCores-1:0] mtip_i;
  logic [snitch_cluster_pkg::NrCores-1:0] msip_i;
  snitch_cluster_pkg::narrow_in_req_t     narrow_in_req_i;
  snitch_cluster_pkg::narrow_in_resp_t    narrow_in_resp_o;
  snitch_cluster_pkg::narrow_out_req_t    narrow_out_req_o;
  snitch_cluster_pkg::narrow_out_resp_t   narrow_out_resp_i;
  snitch_cluster_pkg::wide_out_req_t      wide_out_req_o;
  snitch_cluster_pkg::wide_out_resp_t     wide_out_resp_i;
  snitch_cluster_pkg::wide_in_req_t       wide_in_req_i;
  snitch_cluster_pkg::wide_in_resp_t      wide_in_resp_o;

  localparam int unsigned NumIntOutstandingLoads [2] = '{1, 1};
  localparam int unsigned NumIntOutstandingMem [2] = '{4, 4};
  localparam int unsigned NumFPOutstandingLoads [2] = '{4, 4};
  localparam int unsigned NumFPOutstandingMem [2] = '{4, 4};
  localparam int unsigned NumDTLBEntries [2] = '{1, 1};
  localparam int unsigned NumITLBEntries [2] = '{1, 1};
  localparam int unsigned NumSequencerInstr [2] = '{16, 16};
  localparam int unsigned NumSsrs [2] = '{3, 1};
  localparam int unsigned SsrMuxRespDepth [2] = '{4, 4};

  // SNAX cluster under test.
  snax_cluster #(
    .PhysicalAddrWidth (48),
    .NarrowDataWidth (64),
    .WideDataWidth (512),
    .NarrowIdWidthIn (snitch_cluster_pkg::NarrowIdWidthIn),
    .WideIdWidthIn (snitch_cluster_pkg::WideIdWidthIn),
    .NarrowUserWidth (snitch_cluster_pkg::NarrowUserWidth),
    .WideUserWidth (snitch_cluster_pkg::WideUserWidth),
    .BootAddr (32'h1000),
    .narrow_in_req_t (snitch_cluster_pkg::narrow_in_req_t),
    .narrow_in_resp_t (snitch_cluster_pkg::narrow_in_resp_t),
    .narrow_out_req_t (snitch_cluster_pkg::narrow_out_req_t),
    .narrow_out_resp_t (snitch_cluster_pkg::narrow_out_resp_t),
    .wide_out_req_t (snitch_cluster_pkg::wide_out_req_t),
    .wide_out_resp_t (snitch_cluster_pkg::wide_out_resp_t),
    .wide_in_req_t (snitch_cluster_pkg::wide_in_req_t),
    .wide_in_resp_t (snitch_cluster_pkg::wide_in_resp_t),
    .NrHives (1),
    .NrCores (2),
    .TCDMDepth (512),
    .ZeroMemorySize (64),
    .ClusterPeriphSize (64),
    .NrBanks (32),
    .DMAAxiReqFifoDepth (3),
    .DMAReqFifoDepth (3),
    .ICacheLineWidth (snitch_cluster_pkg::ICacheLineWidth),
    .ICacheLineCount (snitch_cluster_pkg::ICacheLineCount),
    .ICacheSets (snitch_cluster_pkg::ICacheSets),
    .SNAX(2'b01),
    .VMSupport (1),
    .RVE (2'b00),
    .RVF (2'b11),
    .RVD (2'b11),
    .XDivSqrt (2'b00),
    .XF16 (2'b01),
    .XF16ALT (2'b01),
    .XF8 (2'b01),
    .XF8ALT (2'b01),
    .XFVEC (2'b01),
    .XFDOTP (2'b01),
    .Xdma (2'b10),
    .Xssr (2'b01),
    .Xfrep (2'b01),
    .FPUImplementation (snitch_cluster_pkg::FPUImplementation),
    .SnitchPMACfg (snitch_cluster_pkg::SnitchPMACfg),
    .NumIntOutstandingLoads (NumIntOutstandingLoads),
    .NumIntOutstandingMem (NumIntOutstandingMem),
    .NumFPOutstandingLoads (NumFPOutstandingLoads),
    .NumFPOutstandingMem (NumFPOutstandingMem),
    .NumDTLBEntries (NumDTLBEntries),
    .NumITLBEntries (NumITLBEntries),
    .NumSsrsMax (3),
    .NumSsrs (NumSsrs),
    .SsrMuxRespDepth (SsrMuxRespDepth),
    .SsrRegs (snitch_cluster_pkg::SsrRegs),
    .SsrCfgs (snitch_cluster_pkg::SsrCfgs),
    .NumSequencerInstr (NumSequencerInstr),
    .Hive (snitch_cluster_pkg::Hive),
    .Topology (snax_snitch_pkg::LogarithmicInterconnect),
    .Radix (2),
    .RegisterOffloadReq (0),
    .RegisterOffloadRsp (0),
    .RegisterCoreReq (0),
    .RegisterCoreRsp (0),
    .RegisterTCDMCuts (0),
    .RegisterExtWide (0),
    .RegisterExtNarrow (0),
    .RegisterFPUReq (0),
    .RegisterFPUIn (0),
    .RegisterFPUOut (0),
    .RegisterSequencer (0),
    .IsoCrossing (0),
    .NarrowXbarLatency (axi_pkg::CUT_ALL_PORTS),
    .WideXbarLatency (axi_pkg::CUT_ALL_PORTS),
    .WideMaxMstTrans (4),
    .WideMaxSlvTrans (4),
    .NarrowMaxMstTrans (4),
    .NarrowMaxSlvTrans (4),
    .sram_cfg_t (snitch_cluster_pkg::sram_cfg_t),
    .sram_cfgs_t (snitch_cluster_pkg::sram_cfgs_t)
  ) i_cluster (
    .clk_i,
    .rst_ni,
    .debug_req_i,
    .meip_i,
    .mtip_i,
    .msip_i,
    .hart_base_id_i (10'h0),
    .cluster_base_addr_i (48'h10000000),
    .clk_d2_bypass_i (1'b0),
    .sram_cfgs_i (snitch_cluster_pkg::sram_cfgs_t'('0)),
    .narrow_in_req_i,
    .narrow_in_resp_o,
    .narrow_out_req_o,
    .narrow_out_resp_i,
    .wide_out_req_o,
    .wide_out_resp_i,
    .wide_in_req_i,
    .wide_in_resp_o
  );

  // Clock
  always begin #10; clk_i <= !clk_i; end

  // Instruction memory
  logic [47:0] inst_mem [0:1024];
  logic [47:0] instruction_addr_offset;
  logic [47:0] hook_inst_addr;
  logic [31:0] hook_inst_data;
  


  initial begin $readmemh("./mem/inst/csr_mac_test.txt", inst_mem); end

  // Dirty fix to offset the instruction memory since boot starts at 4096
  always_comb begin
    instruction_addr_offset = hook_inst_addr - 48'd4096;
  end

  assign hook_inst_data  = inst_mem[(instruction_addr_offset >> 2)];
  

  // Stimulus
  initial begin

    clk_i = 0;
    rst_ni = 0;
    debug_req_i = '0;
    meip_i = '0;
    mtip_i = '0;
    msip_i = '0;
    narrow_in_req_i = '0;
    narrow_out_resp_i = '0;
    wide_out_resp_i = '0;
    wide_in_req_i = '0;

    // Synthetic forced values
    force i_cluster.gen_core[0].i_snax_cc.i_snax_snitch.inst_ready_i = 1'b1;
    force hook_inst_addr                                             = i_cluster.gen_core[0].i_snax_cc.i_snax_snitch.inst_addr_o;
    force i_cluster.gen_core[0].i_snax_cc.i_snax_snitch.inst_data_i  = hook_inst_data;
    force i_cluster.gen_core[1].i_snax_cc.i_snax_snitch.inst_data_i  = 32'h00000013;

    #500;
    rst_ni = 1;
    #500;

  end


endmodule
