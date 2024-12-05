// Memory module to be used for the TUDDCIM_sram
// which needs to be the functional wrapper of
// the actual memory module

module TUDDCIM_sram #(
  parameter int unsigned NumWords   = 32'd1024, // Number of Words in data array
  parameter int unsigned DataWidth  = 32'd128,  // Data signal width
  parameter int unsigned ByteWidth  = 32'd8,    // Width of a data byte
  parameter int unsigned NumPorts   = 32'd2,    // Number of read and write ports
  parameter int unsigned Latency    = 32'd1,    // Latency when the read data is available
  parameter type         impl_in_t  = logic,    // Type for implementation inputs
  parameter type         impl_out_t = logic,
  // DEPENDENT PARAMETERS, DO NOT OVERWRITE!
  parameter int unsigned AddrWidth  = (NumWords > 32'd1) ? $clog2(NumWords) : 32'd1,
  parameter int unsigned BeWidth    = (DataWidth + ByteWidth - 32'd1) / ByteWidth, // ceil_div
  parameter type         addr_t     = logic [AddrWidth-1:0],
  parameter type         data_t     = logic [DataWidth-1:0],
  parameter type         be_t       = logic [BeWidth-1:0]
)(
  input  logic                 clk_i,      // Clock
  input  logic                 rst_ni,     // Asynchronous reset active low
  // implementation-related IO
  input  impl_in_t             impl_i,
  output impl_out_t            impl_o,
  // input ports
  input  logic  [NumPorts-1:0] req_i,      // request
  input  logic  [NumPorts-1:0] we_i,       // write enable
  input  addr_t [NumPorts-1:0] addr_i,     // request address
  input  data_t [NumPorts-1:0] wdata_i,    // write data
  input  be_t   [NumPorts-1:0] be_i,       // write byte enable
  // output ports
  output data_t [NumPorts-1:0] rdata_o     // read data
);

  //----------------------------
  // Note:
  //
  // This module is very specific to our tapeout
  // needs only. So configurations are tailored
  // for the Hemaia setup
  //
  // Data memory uses the 512x64b
  // Cache data are 128x128b
  // Cache tag are 128x39b
  //----------------------------

  // For data memory of the TCDM
  if (NumWords == 512 && DataWidth==64) begin: gen_data_mem

    // Memory implementation for synthesis
    // Converting the byte enable to bit enable
    logic [DataWidth-1:0] bit_en;

    always_comb begin
      for (int i = 0; i < DataWidth / 8; i = i + 1) begin
        bit_en[i*8+:8] = {8{~be_i[0][i]}};
      end
    end

    IN22FDX_R1PH_NFHN_W00512B064M02C256 i_data_mem (
       // Normal Pins
            .CLK      (clk_i),
            .CEN      (~req_i[0]),                 // Active low chip enable
            .RDWEN    (~we_i[0]),                  // Active low write enable
            .AC       (addr_i[0][0]),              // Address LSB
            .AW       (addr_i[0][AddrWidth-1:1]),  // Address bits except LSB
            .D        (wdata_i[0]),                // Write data
            .BW       (bit_en[DataWidth-1:0]),     // Bit write enable
            .Q        (rdata_o[0]),                // Read data
            // Test Pins: all disabled
            .T_LOGIC  (1'b0),
            // Margin Ajust Pins
            .MA_SAWL  (1'b0),
            .MA_WL    (1'b0),
            .MA_WRAS  (1'b0),
            .MA_WRASD (1'b0),
            // Observation Output (Ignore)
            .OBSV_CTL ()
    );

  // For cache data memory
  end else if (NumWords == 128 && DataWidth == 256) begin: gen_cache_data_mem

    IN22FDX_R1PH_NFHN_W00128B128M02C256 i_cache_mem_0(
       // Normal Pins
            .CLK      (clk_i),
            .CEN      (~req_i[0]),                    // Active low chip enable
            .RDWEN    (~we_i[0]),                     // Active low write enable
            .AC       (addr_i[0][0]),                 // Address LSB
            .AW       (addr_i[0][AddrWidth-1:1]),     // Address bits except LSB
            .D        (wdata_i[0][DataWidth-1:128]),  // Write data
            .BW       (bit_en[DataWidth-1:128]),      // Bit write enable
            .Q        (rdata_o[0][DataWidth-1:128]),  // Read data
            // Test Pins: all disabled
            .T_LOGIC  (1'b0),
            // Margin Ajust Pins
            .MA_SAWL  (1'b0),
            .MA_WL    (1'b0),
            .MA_WRAS  (1'b0),
            .MA_WRASD (1'b0),
            // Observation Output (Ignore)
            .OBSV_CTL ()
    );

    IN22FDX_R1PH_NFHN_W00128B128M02C256 i_cache_mem_1(
      // Normal Pins
            .CLK      (clk_i),
            .CEN      (~req_i[0]),                 // Active low chip enable
            .RDWEN    (~we_i[0]),                  // Active low write enable
            .AC       (addr_i[0][0]),              // Address LSB
            .AW       (addr_i[0][AddrWidth-1:1]),  // Address bits except LSB
            .D        (wdata_i[0][127:0]),         // Write data
            .BW       (bit_en[127:0]),             // Bit write enable
            .Q        (rdata_o[0][127:0]),         // Read data
            // Test Pins: all disabled
            .T_LOGIC  (1'b0),
            // Margin Ajust Pins
            .MA_SAWL  (1'b0),
            .MA_WL    (1'b0),
            .MA_WRAS  (1'b0),
            .MA_WRASD (1'b0),
            // Observation Output (Ignore)
            .OBSV_CTL ()
    );

  // For cache tag memory
  end else if (NumWords == 128 && DataWidth == 39) begin: gen_cache_tag_mem

    IN22FDX_R1PH_NFHN_W00128B039M02C256 i_tag_mem(
       // Normal Pins
            .CLK      (clk_i),
            .CEN      (~req_i[0]),                 // Active low chip enable
            .RDWEN    (~we_i[0]),                  // Active low write enable
            .AC       (addr_i[0][0]),              // Address LSB
            .AW       (addr_i[0][AddrWidth-1:1]),  // Address bits except LSB
            .D        (wdata_i[0]),                // Write data
            .BW       (bit_en[DataWidth-1:0]),     // Bit write enable
            .Q        (rdata_o[0]),                // Read data
            // Test Pins: all disabled
            .T_LOGIC  (1'b0),
            // Margin Ajust Pins
            .MA_SAWL  (1'b0),
            .MA_WL    (1'b0),
            .MA_WRAS  (1'b0),
            .MA_WRASD (1'b0),
            // Observation Output (Ignore)
            .OBSV_CTL ()
    );

  end else begin: err_no_mem

    $error("Error! No memory instantiated.");

  end

  
  

endmodule