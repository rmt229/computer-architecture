//========================================================================
// Integer Multiplier Fixed-Latency Implementation
//========================================================================

`ifndef LAB1_IMUL_INT_MUL_BASE_V
`define LAB1_IMUL_INT_MUL_BASE_V

`include "vc/trace.v"
`include "vc/counters.v"

// ''' LAB TASK ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// Define datapath and control unit here.
// '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

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


/* State enum  definition */
typedef enum logic [$clog2(4)-1:0] 
{ 
  STATE_IDLE = 2'b00, 
  STATE_CALC = 2'b01, 
  STATE_DONE = 2'b10
} state_t;

module lab1_imul_IntMulCtrl
(
  input  logic  clk,
  input  logic  reset,
              
  // Dataflow Signals
  input  logic  req_val,
  output logic  req_rdy,
  output logic  resp_val,
  input  logic  resp_rdy,
  
  // Register Enables
  output logic  a_reg_en,
  output logic  b_reg_en,
  output logic  result_en,

  // Mux Selects
  output logic  a_mux_sel,
  output logic  b_mux_sel,
  output logic  add_mux_sel,
  output logic  result_mux_sel,
  
  // Data Signals
  input  logic  b_lsb
);

  state_t      state;
  state_t next_state;

  logic cclk; // Gated clock
  logic done; // Done goes high when the counter reaches a value of 32
  logic incr; // Wire used to trigger incrementation in the fsm in CACL
  logic  clr; // Clear counter, triggered by DONE state

  // Combinatinoal logic block for the Counter Unit
  always_comb begin
    cclk = clk && (state != STATE_IDLE);
    incr = (state == STATE_CALC);
    clr = (state == STATE_DONE);
  end
 
  vc_Basic#(32) cycle_counter
  (
   .clk           (cclk),
   .reset         (reset),
   .clear         (clear),
   .increment     (incr),
   .decrement     (1'b0),
   .count_is_max  (done)
  );

  assign shift =        !done; // Multiply Cycle Counter
  assign   add =        b_lsb; // LSB of the B value

  //----------------------------------------------------------------------
  // 32 Bit Counter logic
  //----------------------------------------------------------------------
  // TODO
  
  //----------------------------------------------------------------------
  // Next State logic 
  //----------------------------------------------------------------------
  always_comb begin
    case(state)
      STATE_IDLE: if (req_val && req_rdy)   state = STATE_CALC;
      STATE_CALC: if (!shift)               state = STATE_DONE;
      STATE_DONE; if (resp_val && resp_rdy) state = STATE_IDLE;
      default: state_next = 'x;                                        
    endcase
  end
  
  //----------------------------------------------------------------------
  // State Outputs
  //----------------------------------------------------------------------
  // Task allows all of the outputs to be "bundled together"
  task cs 
  (
   input logic cs_req_rdy,
   input logic cs_resp_val,
   input logic cs_a_reg_en,
   input logic cs_b_reg_en,
   input logic cs_result_en,
   input logic cs_a_mux_sel,
   input logic cs_b_mux_sel,
   input logic cs_add_mux_sel,
   input logic cs_result_mux_sel
  );
    begin
      req_rdy = cs_req_rdy;
      resp_val = cs_resp_val;
      a_reg_en = cs_a_reg_en;
      b_reg_en = cs_b_reg_en;
      result_en = cs_result_en;
      a_mux_sel = cs_a_mux_sel;
      b_mux_sel = cs_b_mux_sel;
      add_mux_sel = cs_add_mux_sel;
      result_mux_sel = cs_result_mux_sel;
    end
  endtask
  
  always_comb begin
    case ( state )
      //       req resp a_reg b_reg result a_mux b_mux add_mux result_mux
      //        rdy val  en    en    en     sel   sel    sel    sel
      STATE_IDLE: cs(  0,  0,  0,  0,  0,  0,  0,  0,  0);
      STATE_CALC: cs(  0,  0,  0,  0,  0,  0,  0,  0,  0);
      STATE_DONE: cs(  0,  1,  0,  0,  0,  0,  0,  0,  0);
      default:    cs(  0,  0,  0,  0,  0,  0,  0,  0,  0);
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

`endif /* LAB1_IMUL_INT_MUL_BASE_V */

