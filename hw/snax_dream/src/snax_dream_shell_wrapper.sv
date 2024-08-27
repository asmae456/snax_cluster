// Copyright 2024 KU Leuven.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51

// Ryan Antonio <ryan.antonio@esat.kuleuven.be>

//-------------------------------
// Accelerator wrapper
//-------------------------------
module snax_dream_shell_wrapper #(
  // Custom parameters. As much as possible,
  // these parameters should not be taken from outside
  parameter int unsigned RegRWCount   = 2,
  parameter int unsigned RegROCount   = 1,
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

  //-------------------------------
  // CSR manager ports
  //-------------------------------
  input  logic [RegRWCount-1:0][RegDataWidth-1:0] csr_reg_set_i,
  input  logic                                    csr_reg_set_valid_i,
  output logic                                    csr_reg_set_ready_o,
  output logic [RegROCount-1:0][RegDataWidth-1:0] csr_reg_ro_set_o
);

  //-------------------------------
  // Wires
  //-------------------------------

  // Wiring for accelerator ports
  logic [NumPE-1:0][DataWidth-1:0] a_split;
  logic [NumPE-1:0][DataWidth-1:0] b_split;
  logic [NumPE-1:0][DataWidth-1:0] c_split;

  logic [NumPE-1:0] a_ready;
  logic [NumPE-1:0] b_ready;
  logic [NumPE-1:0] result_valid;

  // Control signals
  logic       acc_output_success;
  logic       acc_ready;
  logic [1:0] csr_dream_config;
  logic [6:0] csr_address_config;

  // Read only signals towards CSR manager
  logic [RegROCount-1:0][RegDataWidth-1:0] csr_reg_ro_set;

  //-------------------------------
  // Re-mapping
  //-------------------------------
  //debug
  //debug
  always @* begin
    // $write("Contents of array:"); // display
    // for(int i=0; i< 2; i++) begin // display
    if (  csr_reg_set_valid_i && csr_reg_ro_set_o)  begin
        $write(" mode :%h \n",csr_dream_config); // display
        $write(" Address :%h \n",csr_address_config); // display
        $write("a_split:%h \n",stream2acc_0_data_i);
        $write("acc2stream_0_data_o:%h \n",acc2stream_0_data_o);
        $write("clk_i:%h \n",clk_i);
        $write("csr_reg_set_i0:%h \n",csr_reg_set_i[0]);
        $write("csr_reg_set_i1:%h \n",csr_reg_set_i[1]);
        $write("csr_reg_set_valid_i:%h \n",csr_reg_set_valid_i);
        $write("csr_reg_set_ready_o:%h \n",csr_reg_set_ready_o);
        $write("csr_reg_ro_set_o:%h \n",csr_reg_ro_set_o);
        $write("acc_output_success:%h \n",acc_output_success);
        $write("stream2acc_0_valid_i:%h \n",stream2acc_0_valid_i);
        $write("stream2acc_0_ready_o:%h \n",stream2acc_0_ready_o);
        $write("acc2stream_0_valid_o:%h \n",acc2stream_0_valid_o);
        $write("acc2stream_0_ready_i:%h \n",acc2stream_0_ready_i);
        $write("acc_ready:%h \n",acc_ready);
      //$write("\n"); // display
    end 
     
  end
  // Re-mapping for configuration registers
  // This is doing some SystemVerilog part slicing!
  always_comb begin
    for (int i = 0; i < NumPE; i++) begin
      // De-concatanating the input signals
      a_split[i] = stream2acc_0_data_i[i*DataWidth+:DataWidth];

      // Concatenating the output signals
      acc2stream_0_data_o[i*DataWidth+:DataWidth] = c_split[i];
    end

    // Inputs are read when all ready signals are ready
    // Output valid is valid only when all outputs are valid
    assign stream2acc_0_ready_o = a_ready;
    assign acc2stream_0_valid_o = result_valid;
  end

  //-------------------------------
  // Combinational logic && acc2stream_0_ready_i
  //-------------------------------
  assign acc_output_success = acc2stream_0_valid_o ;

  //-------------------------------
  // CSR Manager
  //-------------------------------
  snax_dream_csr #(
    .RegDataWidth         ( RegDataWidth        )
  ) i_simple_dream_csr (
    //-------------------------------
    // Clocks and reset
    //-------------------------------
    .clk_i                ( clk_i               ),
    .rst_ni               ( rst_ni              ),
    //-------------------------------
    // Register config inputs from CSR manager
    //-------------------------------
    .csr_reg_set_i        ( csr_reg_set_i       ),
    .csr_reg_set_valid_i  ( csr_reg_set_valid_i ),
    .csr_reg_set_ready_o  ( csr_reg_set_ready_o ),
    //-------------------------------
    // Register config inputs from CSR manager
    //-------------------------------
    .csr_reg_ro_set_o     ( csr_reg_ro_set_o    ),
    //-------------------------------
    // Direct register control signals
    //-------------------------------
    .acc_output_success_i ( acc_output_success  ),
    .acc_ready_o          ( Ready_acc_ctl           ),
    .csr_dream_config_o     ( csr_dream_config      ),
    .csr_address_config_o     ( csr_address_config      )
  );

  //-------------------------------
  // Generate parallel arrays
  //-------------------------------
  //for (genvar i = 0; i < NumPE; i ++) begin: gen_muls
    Top_level 
     i_snax_dream_pe (
      .clk_i          ( clk_i                ),
      .rst_ni         ( rst_ni               ),
      .a_i            ( a_split           ),
      .a_valid_i      ( stream2acc_0_valid_i ),
      .a_ready_o      ( a_ready           ),
      .c_o            ( c_split           ),
      .c_valid_o      ( result_valid      ),
      .c_ready_i      ( acc2stream_0_ready_i ),
      .acc_ready_i    ( csr_reg_set_ready_o),
      .Ready_acc_ctl    ( Ready_acc_ctl ),
      .DREAM_config_i   ( csr_dream_config       ),
      .csr_RW_adress_i   ( csr_address_config       )
    );



endmodule
