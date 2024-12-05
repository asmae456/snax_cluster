module tc_sram #(
    parameter int unsigned NumWords = 1024,  // Number of Words in data array
    parameter int unsigned DataWidth = 128,  // Data signal width
    parameter int unsigned ByteWidth = 8,  // Width of a data byte
    parameter int unsigned NumPorts = 1,  // Number of read and write ports
    parameter int unsigned Latency = 1,  // Latency when the read data is available
    parameter SimInit = "none",  // Simulation initialization
    parameter bit PrintSimCfg = 1'b0,  // Print configuration
    parameter ImplKey = "none",  // Reference to specific implementation
    // DEPENDENT PARAMETERS, DO NOT OVERWRITE!
    parameter int unsigned AddrWidth = (NumWords > 1) ? $clog2(NumWords) : 1,
    parameter int unsigned BeWidth = (DataWidth + ByteWidth - 1) / ByteWidth,  // ceil_div
    parameter type addr_t = logic [AddrWidth-1:0],
    parameter type data_t = logic [DataWidth-1:0],
    parameter type be_t = logic [BeWidth-1:0]
) (
    input  logic                 clk_i,    // Clock
    input  logic                 rst_ni,   // Asynchronous reset active low

    // implementation-related IO
    input  impl_in_t             impl_i,
    output impl_out_t            impl_o,
    
    // input ports
    input  logic  [NumPorts-1:0] req_i,    // request
    input  logic  [NumPorts-1:0] we_i,     // write enable
    input  addr_t [NumPorts-1:0] addr_i,   // request address
    input  data_t [NumPorts-1:0] wdata_i,  // write data
    input  be_t   [NumPorts-1:0] be_i,     // write byte enable
    // output ports
    output data_t [NumPorts-1:0] rdata_o   // read data
);

  generate
    if (NumPorts != 1) begin : gen_error_numports
      initial begin
        $error("tc_sram: Only NumPorts == 1 is supported with current memory macros.");
      end
    end else begin: gen_mem
      // Generate bit enable signals from byte enables
      logic [(DataWidth+7)/8*8-1:0] bit_en;
      for (genvar i = 0; i < BeWidth; i++) begin : gen_bit_en
        assign bit_en[i*ByteWidth+:ByteWidth] = {ByteWidth{be_i[0][i]}};
      end

      if (NumWords == 512 && DataWidth == 64) begin : gen_512x64
        // Instantiate IN22FDX_R1PH_NFHN_W00512B064M02C256
        IN22FDX_R1PH_NFHN_W00512B064M02C256 u_sram (
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
      end else if (NumWords == 128 && DataWidth == 256) begin : gen_128x256
        // Instantiate two IN22FDX_R1PH_NFHN_W00128B128M02C256, one for MSB and another for LSB
        IN22FDX_R1PH_NFHN_W00128B128M02C256 u_sram_msb (
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
        IN22FDX_R1PH_NFHN_W00128B128M02C256 u_sram_lsb (
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
      end else if (NumWords == 128 && DataWidth == 39) begin : gen_128x39
        // Odd number of bits requires MUX=8
        // Instantiate IN22FDX_R1PH_NFHN_W00128B039M02C256
        IN22FDX_R1PH_NFHN_W00128B039M02C256 u_sram (
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
      end else begin : gen_no_sram_matched
        // Throw an error and use a register array to emulate the SRAM
        initial begin
          $error(
              "tc_sram: No memory macro available for NumWords=%0d, DataWidth=%0d. Using register array to emulate.",
              NumWords, DataWidth);
        end
      end
    end
  endgenerate

  // Validation of parameters
  initial begin : p_assertions
    if ($bits(addr_i) != NumPorts * AddrWidth) $fatal(1, "AddrWidth problem on `addr_i`");
    if ($bits(wdata_i) != NumPorts * DataWidth) $fatal(1, "DataWidth problem on `wdata_i`");
    if ($bits(be_i) != NumPorts * BeWidth) $fatal(1, "BeWidth problem on `be_i`");
    if ($bits(rdata_o) != NumPorts * DataWidth) $fatal(1, "DataWidth problem on `rdata_o`");
    if (NumWords < 1) $fatal(1, "NumWords has to be > 0");
    if (DataWidth < 1) $fatal(1, "DataWidth has to be > 0");
    if (ByteWidth < 1) $fatal(1, "ByteWidth has to be > 0");
    if (NumPorts < 1) $fatal(1, "The number of ports must be at least 1!");
  end

  // Address range check
  always @(posedge clk_i) begin
    if (req_i[0] && addr_i[0] >= NumWords) begin
      $error("Request address %0h not mapped, port 0, expect random write or read behavior!",
             addr_i[0]);
    end
  end

endmodule
