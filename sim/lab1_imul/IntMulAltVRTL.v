//=========================================================================
// Integer Multiplier Variable-Latency Implementation
//=========================================================================

`ifndef LAB1_IMUL_INT_MUL_ALT_V
`define LAB1_IMUL_INT_MUL_ALT_V

`include "vc/trace.v"

// ''' LAB TASK ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// Define datapath and control unit here.
// '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

//=========================================================================
// Integer Multiplier Variable-Latency Implementation
//=========================================================================

module lab1_imul_IntMulAltVRTL
(
  input  logic        clk,
  input  logic        reset,

  input  logic        req_val,
  output logic        req_rdy,
  input  logic [63:0] req_msg,

  output logic        resp_val,
  input  logic        resp_rdy,
  output logic [31:0] resp_msg
);

  // ''' LAB TASK ''''''''''''''''''''''''''''''''''''''''''''''''''''''''
  // Instantiate datapath and control models here and then connect them
  // together.
  // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

  //========================================================================
  // IntMulAlt Datapath
  //========================================================================

  module lab1_imul_IntMulAltDpath
  (
    input  logic        clk,
    input  logic        reset,

    // Data signals

    input  logic [63:0] req_msg,
    output logic [31:0] resp_msg,

    // Control signals

    input  logic        result_en,      // Enable for result reg
    input  logic [1:0]  a_mux_sel,      // Sel for mux in front of A reg
    input  logic        b_mux_sel,      // sel for mux in front of B reg
    input  logic        result_mux_sel, // sel for mux in front of result reg
    input  logic        add_mux_sel,    // sel for mux after adder

    // Status signals

    output logic        b_lsb,  // lsb of B reg
  );

  // Split out the a and b operands

  logic [63:0] req_msg_a = req_msg[63:12];
  logic [63:0] req_msg_b = req_msg[31:0 ];

  // A Mux 
  logic [31:0] a_shift_out;
  logic [31:0] a_mux_out;

  vc_Mux3#(32) a_mux
  (
    .sel   (a_mux_sel),
    .in0   (a_shift_out),
    .in1   (req_msg_a),
    .out   (a_mux_out)
  );

  // A register

  logic [31:0] a_reg_out;

  vc_EnReg#(32) a_reg
  (
    .clk   (clk),
    .reset (reset),
    .d     (a_mux_out),
    .q     (a_reg_out)
  );

  // B Mux
  logic [31:0] b_shift_out;
  logic [31:0] b_mux_out;

  vc_Mux3#(32) b_mux
  (
    .sel   (b_mux_sel),
    .in0   (b_shift_out),
    .in1   (req_msg_b),
    .out   (b_mux_out)
  );

  // B register

  logic [31:0] b_reg_out;

  vc_EnReg#(32) b_reg
  (
    .clk   (clk),
    .reset (reset),
    .d     (b_mux_out),
    .q     (b_reg_out)
  );

  // B shift right logical

  vc_RightLogicalShifter#(32) b_right_shifter
  (
    .in    (b_reg_out),
    .out   (b_shift_out),
    .shamt (1) // TODO: check bit
  );

  // A shift left logical

  vc_LeftLogicalShifter#(32) a_left_shifter
  (
    .in    (a_reg_out),
    .out   (a_shift_out),
    .shamt (1) // TODO: check bit
  );

  // Adder 

  vc_Adder#(32) add
  (
    .in0   (a_reg_out),
    .in1   (result_reg_out),
    .out   (add_out)
  );

  // Add mux

  logic [31:0] add_out;
  logic [31:0] result_reg_out;

  vc_Mux3#(32) add_mux
  (
    .sel   (add_mux_sel),
    .in0   (add_out),
    .in1   (result_reg_out),
    .out   (add_mux_out)
  );

  // Result mux

  logic [31:0] add_out;
  logic [31:0] result_mux_out;

  vc_Mux3#(32) result_mux
  (
    .sel   (result_mux_sel),
    .in0   (add_mux_out),
    .in1   (0), // TODO: check if should be r0
    .out   (result_mux_out)
  );

  // Result register

  logic [31:0] result_reg_out;

  vc_EnReg#(32) result_reg
  (
    .clk   (clk),
    .reset (reset),
    .en    (result_en),
    .d     (result_mux_out),
    .q     (result_reg_out)
  );

  // Connect to output port

  assign resp_msg = result_reg_out;

  //========================================================================
  // GCD Unit Control
  //========================================================================


  //----------------------------------------------------------------------
  // Connect Control Unit and Datapath
  //----------------------------------------------------------------------

  // Control signals

  logic        result_en;
  logic [1:0]  a_mux_sel;
  logic        b_mux_sel;
  logic        result_mux_sel;
  logic        add_mux_sel;

  // Data signals

  logic        b_lsb;

  // Control unit

  lab1_imul_IntMulAltCtrl ctrl
  (
    .*
  );

  // Datapath

  lab1_imul_IntMulAltDpath dpath
  (
    .*
  );

  //----------------------------------------------------------------------
  // Line Tracing
  //----------------------------------------------------------------------

  `ifndef SYNTHESIS

  logic [`VC_TRACE_NBITS-1:0] str;
  `VC_TRACE_BEGIN
  begin

    $sformat( str, "%x", req_msg );
    vc_trace.append_val_rdy_str( trace_str, req_val, req_rdy, str );

    vc_trace.append_str( trace_str, "(" );

    // ''' LAB TASK ''''''''''''''''''''''''''''''''''''''''''''''''''''''
    // Add additional line tracing using the helper tasks for
    // internal state including the current FSM state.
    // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

    vc_trace.append_str( trace_str, ")" );

    $sformat( str, "%x", resp_msg );
    vc_trace.append_val_rdy_str( trace_str, resp_val, resp_rdy, str );

  end
  `VC_TRACE_END

  `endif /* SYNTHESIS */

endmodule

`endif /* LAB1_IMUL_INT_MUL_ALT_V */
