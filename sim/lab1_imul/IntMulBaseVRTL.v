//========================================================================
// Integer Multiplier Fixed-Latency Implementation
//========================================================================

`ifndef LAB1_IMUL_INT_MUL_BASE_V
`define LAB1_IMUL_INT_MUL_BASE_V

`include "vc/trace.v"
`include "vc/counters.v"
`include "vc/muxes.v"
`include "vc/regs.v"
`include "vc/arithmetic.v"

// ''' LAB TASK ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// Define datapath and control unit here.
// '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

//========================================================================
// IntMulBase Datapath
//========================================================================

module lab1_imul_IntMulBaseDpath
(
  input  logic        clk,
  input  logic        reset,

  // Data signals

  input  logic [63:0] req_msg,
  output logic [31:0] resp_msg,

  // Control signals

  input  logic   a_mux_sel,      // Sel for mux in front of A reg
  input  logic   b_mux_sel,      // sel for mux in front of B reg
  input  logic   result_mux_sel, // sel for mux in front of result reg
  input  logic   result_en,      // Enable for result reg
  input  logic   add_mux_sel,    // sel for mux after adder

  // Status signals

  output logic        b_lsb,          // lsb of B reg
  output logic        count_is_max    // counter is 32
);

  // Split out the a and b operands

  logic [31:0] req_msg_a = req_msg[63:32];
  logic [31:0] req_msg_b = req_msg[31:0 ];

  // A Mux
  logic [31:0] a_shift_out;
  logic [31:0] a_mux_out;

  vc_Mux2#(32) a_mux
  (
    .sel   (a_mux_sel),
    .in0   (a_shift_out),
    .in1   (req_msg_a),
    .out   (a_mux_out)
  );

  // A register

  logic [31:0] a_reg_out;

  vc_Reg#(32) a_reg
  (
    .clk   (clk),
    .d     (a_mux_out),
    .q     (a_reg_out)
  );

  // B Mux

  logic [31:0] b_shift_out;
  logic [31:0] b_mux_out;

  vc_Mux2#(32) b_mux
  (
    .sel   (b_mux_sel),
    .in0   (b_shift_out),
    .in1   (req_msg_b),
    .out   (b_mux_out)
  );

  // B register

  logic [31:0] b_reg_out;

  vc_Reg#(32) b_reg
  (
    .clk   (clk),
    .d     (b_mux_out),
    .q     (b_reg_out)
  );

  assign b_lsb = b_reg_out[0]; // TODO: not sure if b_lsb should be assigned this way

  // B shift right logical

  vc_RightLogicalShifter#(32,1) b_right_shifter
  (
    .in    (b_reg_out),
    .out   (b_shift_out),
    .shamt (1)
  );

  // A shift left logical

  vc_LeftLogicalShifter#(32,1) a_left_shifter
  (
    .in    (a_reg_out),
    .out   (a_shift_out),
    .shamt (1)
  );

  // Adder

  logic [31:0] add_out;
  logic add_cout;

  vc_Adder#(32) add
  (
    .in0   (a_reg_out),
    .in1   (result_reg_out),
    .cin   (0),
    .out   (add_out),
    .cout  (add_cout)
  );

  // Add mux

  logic [31:0] result_reg_out;
  logic [31:0] add_mux_out;

  vc_Mux2#(32) add_mux
  (
    .sel   (add_mux_sel),
    .in0   (add_out),
    .in1   (result_reg_out),
    .out   (add_mux_out)
  );

  // Result mux

  logic [31:0] result_mux_out;

  vc_Mux2#(32) result_mux
  (
    .sel   (result_mux_sel),
    .in0   (add_mux_out),
    .in1   (0),
    .out   (result_mux_out)
  );

  // Result register

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

endmodule

//========================================================================
// GCD Unit Control
//========================================================================

module lab1_imul_IntMulBaseCtrl
(
  input  logic  clk,
  input  logic  reset,

  // Dataflow Signals

  input  logic  req_val,
  output logic  req_rdy,
  output logic  resp_val,
  input  logic  resp_rdy,

  // Register Enables

  output logic  result_en,

  // Mux Selects

  output logic  a_mux_sel,
  output logic  b_mux_sel,
  output logic  add_mux_sel,
  output logic  result_mux_sel,

  // Data Signals
  input  logic  b_lsb,
  input  logic  count_is_max
);

  //----------------------------------------------------------------------
  // State Enum Definitions
  //----------------------------------------------------------------------

  typedef enum logic [$clog2(4)-1:0]
  {
    STATE_IDLE = 2'b00,
    STATE_CALC = 2'b01,
    STATE_DONE = 2'b10
  } state_t;

  //----------------------------------------------------------------------
  // State
  //----------------------------------------------------------------------

  state_t      state;
  state_t next_state;

  // Counter

  logic           cclk; // Gated clock
  logic      count_max; // Done goes high when the counter reaches a value of 32
  logic           incr; // Wire used to trigger incrementation in the fsm in CALC
  logic            clr; // Clear counter, triggered by DONE state
  logic [5:0]    count; // Count
  logic  count_is_zero; // Count is zero

  // Combinatinoal logic block for the Counter Unit
  always_comb begin

    // cclk = clk && (state != STATE_IDLE); // TODO: attemp to fix clk
    incr = (state == STATE_CALC);
    clr  = (state == STATE_DONE);

  end

  vc_BasicCounter#(6, 0, 32) cycle_counter
    (
      .clk           (clk),
    //  .clk           (cclk), // TODO: attemp to fix clk
      .reset         (reset),
      .clear         (clr),
      .increment     (incr),
      .decrement     (0),
      .count         (count),
      .count_is_zero (count_is_zero),
      .count_is_max  (count_max)
    );

  // assign count_is_max = count_max;
  //----------------------------------------------------------------------
  // State Transitions
  //----------------------------------------------------------------------

  always_comb begin

    next_state = state;

    case( state )

      STATE_IDLE: if ( req_val && req_rdy )   next_state = STATE_CALC;
      STATE_CALC: if ( !count_is_max )        next_state = STATE_DONE;
      STATE_DONE: if ( resp_val && resp_rdy ) next_state = STATE_IDLE;
      default:    next_state = 'x;

    endcase

  end

  //----------------------------------------------------------------------
  // State Outputs
  //----------------------------------------------------------------------
  // Task allows all of the outputs to be "bundled together"

  localparam a_x        = 1'dx;
  localparam a_shift    = 1'd0;
  localparam a_ld       = 1'd1;

  localparam b_x        = 1'dx;
  localparam b_shift    = 1'd0;
  localparam b_ld       = 1'd1;

  localparam add_x      = 1'dx;
  localparam add_add    = 1'd0;
  localparam add_res    = 1'd1;

  localparam result_x   = 1'dx;
  localparam result_add = 1'd0;
  localparam result_0   = 1'd1;

  task cs
  (
    input logic cs_req_rdy,
    input logic cs_resp_val,
    input logic cs_result_en,
    input logic cs_a_mux_sel,
    input logic cs_b_mux_sel,
    input logic cs_add_mux_sel,
    input logic cs_result_mux_sel
  );
  begin
    req_rdy = cs_req_rdy;
    resp_val = cs_resp_val;
    result_en = cs_result_en;
    a_mux_sel = cs_a_mux_sel;
    b_mux_sel = cs_b_mux_sel;
    add_mux_sel = cs_add_mux_sel;
    result_mux_sel = cs_result_mux_sel;
  end
  endtask

  // Labels for Mealy transitions

  logic do_add_shift;
  logic do_shift;

  assign do_add_shift = !count_is_max && b_lsb; // TODO: should we seperate the logic for add and shift?
  assign do_shift     = !count_is_max && !b_lsb;

  // Set outputs using a control signal "table"

  always_comb begin

    cs(  0,  0,  a_x,  b_x,  0,  0,  0 ); // TODO: Check cs
    case ( state )
      //                                     req resp a_mux    b_mux    result add_mux  result_mux
      //                                     rdy val  sel      sel      en     sel      sel
      STATE_IDLE:                       cs(  1,  0,   a_ld,    b_ld,    1,     add_x,   result_0 );
      STATE_CALC: if ( do_add_shift )   cs(  0,  0,   a_shift, 0, 1,     add_add, result_add );
             else if ( do_shift )       cs(  0,  0,   a_shift, b_shift, 1,     add_res, result_add );
      STATE_DONE:                       cs(  0,  1,   a_x,     b_x,     0,     add_x,   0);
      default                           cs( 'x, 'x,   a_x,     b_x,    'x,     add_x,   result_x );

    endcase

  end

  //----------------------------------------------------------------------
  // FSM Sync. State progression
  //----------------------------------------------------------------------
  always_ff @(posedge clk) begin
    if (reset) state <= STATE_IDLE;
    else       state <= next_state;
  end

endmodule

//========================================================================
// Integer Multiplier Fixed-Latency Implementation
//========================================================================

module lab1_imul_IntMulBaseVRTL
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

  //----------------------------------------------------------------------
  // Connect Control Unit and Datapath
  //----------------------------------------------------------------------

  // Control signals

  logic        result_en;
  logic        a_mux_sel;
  logic        b_mux_sel;
  logic        result_mux_sel;
  logic        add_mux_sel;

  // Data signals

  logic        b_lsb;
  logic        count_is_max;

  // Control unit

  lab1_imul_IntMulBaseCtrl ctrl
  (
    .*
  );

  // Datapath

  lab1_imul_IntMulBaseDpath dpath
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

    $sformat( str, "%x", dpath.a_reg_out );
    vc_trace.append_str( trace_str, str );
    vc_trace.append_str( trace_str, " " );

    $sformat( str, "%x", dpath.b_reg_out );
    vc_trace.append_str( trace_str, str );
    vc_trace.append_str( trace_str, " " );

    $sformat( str, "%x", dpath.b_lsb );
    vc_trace.append_str( trace_str, str );
    vc_trace.append_str( trace_str, " " );

    $sformat( str, "%x", dpath.count_is_max );
    vc_trace.append_str( trace_str, str );
    vc_trace.append_str( trace_str, " " );

    $sformat( str, "%x", dpath.a_shift_out );
    vc_trace.append_str( trace_str, str );
    vc_trace.append_str( trace_str, " " );

    $sformat( str, "%x", dpath.b_shift_out );
    vc_trace.append_str( trace_str, str );
    vc_trace.append_str( trace_str, " " );

    $sformat( str, "%x", dpath.a_mux_sel );
    vc_trace.append_str( trace_str, str );
    vc_trace.append_str( trace_str, " " );

    $sformat( str, "%x", dpath.b_mux_sel );
    vc_trace.append_str( trace_str, str );
    vc_trace.append_str( trace_str, " " );

    case ( ctrl.state )

      ctrl.STATE_IDLE:
        vc_trace.append_str( trace_str, "I " );

      ctrl.STATE_CALC:
      begin
        if ( ctrl.do_add_shift )
          vc_trace.append_str( trace_str, "Caddshift" );
        else if ( ctrl.do_shift )
          vc_trace.append_str( trace_str, "Cshift" );
        else
          vc_trace.append_str( trace_str, "C " );
      end

      ctrl.STATE_DONE:
        vc_trace.append_str( trace_str, "D " );

      default:
        vc_trace.append_str( trace_str, "? " );

    endcase

    vc_trace.append_str( trace_str, ")" );

    $sformat( str, "%x", resp_msg );
    vc_trace.append_val_rdy_str( trace_str, resp_val, resp_rdy, str );

  end
  `VC_TRACE_END

  `endif /* SYNTHESIS */

endmodule

`endif /* LAB1_IMUL_INT_MUL_BASE_V */