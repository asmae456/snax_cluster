// Copyright 2024 KU Leuven.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51

// Ryan Antonio <ryan.antonio@esat.kuleuven.be>

// The actual data memory. This memory is made into a module
// to support multiple power domain needed by the floor plan tool

module snitch_data_mem #(
  parameter int unsigned TCDMDepth       = 1024,
  parameter int unsigned NarrowDataWidth = 64,
  parameter int unsigned NumTotalBanks   = 32,
  // Memory configuration input types; these vary depending on implementation.
  parameter type sram_cfg_t       = logic,
  parameter type sram_cfgs_t      = logic,
  parameter type tcdm_mem_addr_t  = logic,
  parameter type strb_t           = logic,
  parameter type data_t           = logic
)(
  input  logic                               clk_i,
  input  logic                               rst_ni,
  input  sram_cfgs_t                         sram_cfgs_i,
  input  logic           [NumTotalBanks-1:0] mem_cs_i,
  input  tcdm_mem_addr_t [NumTotalBanks-1:0] mem_add_i,
  input  logic           [NumTotalBanks-1:0] mem_wen_i,
  input  strb_t          [NumTotalBanks-1:0] mem_be_i,
  input  data_t          [NumTotalBanks-1:0] mem_wdata_i,
  output data_t          [NumTotalBanks-1:0] mem_rdata_o
);

  for (genvar i = 0; i < NumTotalBanks; i++) begin: gen_banks
`ifndef TARGET_SYNTHESIS
    tc_sram_impl #(
      .NumWords   ( TCDMDepth         ),
      .DataWidth  ( NarrowDataWidth   ),
      .ByteWidth  ( 8                 ),
      .NumPorts   ( 1                 ),
      .Latency    ( 1                 ),
      .impl_in_t  ( sram_cfg_t        )
    ) i_data_mem (
      .clk_i      ( clk_i             ),
      .rst_ni     ( rst_ni            ),
      .impl_i     ( sram_cfgs_i.tcdm  ),
      .impl_o     ( /*Unused*/        ),
      .req_i      ( mem_cs_i[i]       ),
      .we_i       ( mem_wen_i[i]      ),
      .addr_i     ( mem_add_i[i]      ),
      .be_i       ( mem_be_i[i]       ),
      .wdata_i    ( mem_wdata_i[i]    ),
      .rdata_o    ( mem_rdata_o[i]    )
    );
  end
`else
  // memory implementation for syntesis
  logic [NarrowDataWidth - 1 : 0] bit_en;

  always_comb begin
    for (int j = 0; i < NarrowDataWidth / 8; j = j + 1) begin
      bit_en[j*8+:8] = {8{mem_be_i[j]}};
    end
  end
  // tech memory macro "M" Means Multi-Bank
  // tech memory macro "S" Means Single-Bank

  //`include "mem_def/mem_def.svh"
  //`TC_SRAM_IMPL (S, TCDMDepth, NarrowDataWidth)
    TS1N16FFCLLSBLVTD512X64M4SW i_data_mem(
                        .CLK(clk_i),
                        .CEB(~mem_cs_i),
                        .WEB(~mem_wen_i),
                        .A(mem_add_i[$clog2(TCDMDepth)-1:0]),
                        .D(mem_wdata_i),
                        .BWEB(~bit_en),
                        .RTSEL(2'b01),
                        .WTSEL(2'b01),
                        .Q(mem_rdata_o));
`endif

endmodule
