// Copyright 2024 KU Leuven.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51

// Ryan Antonio <ryan.antonio@esat.kuleuven.be>

//-------------------------------
// Simple set of CSRs for the
// simple ALU accelerator
//-------------------------------
module snax_dream_csr #(
  parameter int unsigned RegRWCount   = 2,
  parameter int unsigned RegROCount   = 1,
  parameter int unsigned RegDataWidth = 32
)(
  //-------------------------------
  // Clocks and reset
  //-------------------------------
  input  logic                                    clk_i,
  input  logic                                    rst_ni,
  //-------------------------------
  // Register RW from CSR manager
  //-------------------------------
  input  logic [RegRWCount-1:0][RegDataWidth-1:0] csr_reg_set_i,
  input  logic                                    csr_reg_set_valid_i,
  output logic                                    csr_reg_set_ready_o,
  //-------------------------------
  // Register RO to CSR manager
  //-------------------------------
  output logic [RegROCount-1:0][RegDataWidth-1:0] csr_reg_ro_set_o,
  //-------------------------------
  // Direct register control signals
  // to and from the ALU PEs
  //-------------------------------
  // Signal to indicate an output was placed to memory
  input  logic                                    acc_output_success_i,
  // Signal to set ready signal for PE side
  // Accelerator is only ready when it's busy!
  input logic                                    acc_ready_o,
  // 4 ALU operations that go directly to the PE
  output logic               [1:0]                csr_dream_config_o,
  output logic               [6:0]                csr_address_config_o
);

  //-------------------------------
  // R/W register set
  //-------------------------------
  logic [RegRWCount-1:0][RegDataWidth-1:0] csr_reg_rw_set;

  //-------------------------------
  // Control for updating register set
  //-------------------------------
  logic [RegDataWidth-1:0] csr_reg_rw_len;
  logic                    csr_reg_set_req_success;

  //-------------------------------
  // Internal registers that become
  // read only to the CSR manager
  //-------------------------------
  logic                    reg_ro_busy;

  logic [RegDataWidth-1:0] len_counter;
  logic                    len_counter_finish;

  // The CSR manager is always ready to take
  // in new configurations
  assign csr_reg_set_ready_o = 1'b1;

  // When a valid-ready is successful
  //assign csr_reg_set_req_success = csr_reg_set_valid_i && csr_reg_set_ready_o;
    assign csr_reg_set_req_success = acc_ready_o;
  //-------------------------------
  // Updating CSR registers
  //-------------------------------
  always_ff @ (posedge clk_i or negedge rst_ni) begin
    if(!rst_ni) begin
      for( int i = 0; i < RegRWCount; i++) begin
        assign csr_reg_rw_set[i] = {RegDataWidth{1'b0}};
      end
    end else begin

      if(csr_reg_set_req_success) begin
        assign csr_reg_rw_set = csr_reg_set_i;
      end else begin
        assign csr_reg_rw_set = csr_reg_rw_set;
      end
    end
  end

  //-------------------------------
  // Register control signals directly
  // going to the accelerators
  //-------------------------------
  // This one is for the ALU configuration
  assign csr_dream_config_o = csr_reg_rw_set[0][1:0];
  assign csr_address_config_o = csr_reg_rw_set[0][8:2];
  // This one is for the total length
  // to indicate how long it takes for the process to finish
  assign csr_reg_rw_len = csr_reg_rw_set[1];
  //assign csr_reg_rw_len = 120;
  // Indicate if accelerator is busy or not
  // Use this signal for the ready side of the PEs
  //assign acc_ready_o = reg_ro_busy;

  // Some simple logic to indicate the last counter
  assign len_counter_finish = (len_counter == (csr_reg_rw_len - 1));

  // First one is when the accelerator will be busy
  // It's set when the start arrives
  // Then it's cleared when the len of elements is complete
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if(!rst_ni) begin
      assign len_counter        = {RegDataWidth{1'b0}};
      assign reg_ro_busy       = 1'b0;
    end else begin 
      // This one is just for tracking and setting busy
      // status of the accelerator acc_output_success_i
      if (len_counter_finish ) begin
        assign len_counter = {RegDataWidth{1'b0}};
      end //else if (acc_output_success_i) begin
        //assign len_counter = len_counter + 1;
      //end 
      else begin
        assign len_counter = len_counter + 1;
      end

      // First logic for reg_ro_busy
      // End takes priority over start
      // Otherwise maintain the state  || acc_output_success_i
      if (len_counter_finish) begin
        // $write("len_counter_finish1 : %b",len_counter_finish);
        // $write("acc_output_success_i : %b",acc_output_success_i);
        // $write("len_counter : %b",len_counter);
        // $write("csr_reg_rw_len : %b",csr_reg_rw_len);
        // $write("csr_reg_rw_len1 : %b",csr_reg_rw_set[1]);
        //  $write("csr_reg_rw_len1 : %b",{{(RegDataWidth-1){1'b0}},reg_ro_busy});
        assign reg_ro_busy = 1'b0;
        // $write("len_counter_finish1 : %b",len_counter_finish);
        //  $write("reg_ro_busy1 : %b",reg_ro_busy);
      end else if (!csr_reg_set_req_success) begin
       assign reg_ro_busy = 1'b1;
        // $write("len_counter_finish2 : %b",len_counter_finish);
        // $write("reg_ro_busy2 : %b",reg_ro_busy);
        // for (int i =0; i<32; i++) begin 
        // $write("length[%b]2  : %b",i,csr_reg_rw_set[0][i]);
        // $write("length[%b]2  : %b",i,csr_reg_rw_set[1][i]);
        
      end else begin
        assign reg_ro_busy = reg_ro_busy;
        // $write("len_counter_finish3 : %b",len_counter_finish);
        // $write("reg_ro_busy3 : %b",reg_ro_busy);
       
      end

    end
  end

  //-------------------------------
  // Register read only parts
  //-------------------------------
  assign csr_reg_ro_set_o[0] = {{(RegDataWidth-1){1'b0}},reg_ro_busy};

endmodule
