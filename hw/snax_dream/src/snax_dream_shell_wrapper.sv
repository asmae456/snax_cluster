// Copyright 2024 KU Leuven.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51


//-------------------------------
// Accelerator wrapper
//-------------------------------
module snax_dream_shell_wrapper #(
  // Custom parameters. As much as possible,
  // these parameters should not be taken from outside
  parameter int unsigned RegRWCount   = 3,
  parameter int unsigned RegROCount   = 2,
  parameter int unsigned NumPE        = 1,
  parameter int unsigned DataWidth    = 512,
  parameter int unsigned RegDataWidth = 32,
  parameter int unsigned RegAddrWidth = 32
)(
  //-------------------------------
  // Clocks and reset
  //-------------------------------
  input  logic clk_i,
  input  logic rst_ni,

  //-------------------------------
  // Accelerator ports
  //-------------------------------
  // Note, we maintained the form of these signals
  // just to comply with the top-level wrapper

  // Ports from accelerator to streamer
  output logic [(NumPE*DataWidth)-1:0] acc2stream_0_data_o,
  output logic acc2stream_0_valid_o,
  input  logic acc2stream_0_ready_i,

  // Ports from streamer to accelerator
  input  logic [(NumPE*DataWidth)-1:0] stream2acc_0_data_i,
  input  logic stream2acc_0_valid_i,
  output logic stream2acc_0_ready_o,

  input  logic [(NumPE*DataWidth)-1:0] stream2acc_1_data_i,
  input  logic stream2acc_1_valid_i,
  output logic stream2acc_1_ready_o,

  //-------------------------------
  // CSR manager ports
  //-------------------------------
  input  logic [RegRWCount-1:0][RegDataWidth-1:0] csr_reg_set_i,
  input  logic                                    csr_reg_set_valid_i,
  output logic                                    csr_reg_set_ready_o,
  output logic [RegROCount-1:0][RegDataWidth-1:0] csr_reg_ro_set_o
);
endmodule
