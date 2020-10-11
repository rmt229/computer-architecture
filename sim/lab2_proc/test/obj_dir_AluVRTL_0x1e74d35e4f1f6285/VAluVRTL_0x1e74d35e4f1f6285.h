// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAluVRTL_0x1e74d35e4f1f6285_H_
#define _VAluVRTL_0x1e74d35e4f1f6285_H_

#include "verilated.h"
#include "VAluVRTL_0x1e74d35e4f1f6285__Dpi.h"

class VAluVRTL_0x1e74d35e4f1f6285__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VAluVRTL_0x1e74d35e4f1f6285) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(fn,3,0);
    VL_OUT8(ops_eq,0,0);
    VL_OUT8(ops_lt,0,0);
    VL_OUT8(ops_ltu,0,0);
    VL_IN8(reset,0,0);
    //char	__VpadToAlign6[2];
    VL_IN(in0,31,0);
    VL_IN(in1,31,0);
    VL_OUT(out,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign36[4];
    VAluVRTL_0x1e74d35e4f1f6285__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VAluVRTL_0x1e74d35e4f1f6285& operator= (const VAluVRTL_0x1e74d35e4f1f6285&);	///< Copying not allowed
    VAluVRTL_0x1e74d35e4f1f6285(const VAluVRTL_0x1e74d35e4f1f6285&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VAluVRTL_0x1e74d35e4f1f6285(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VAluVRTL_0x1e74d35e4f1f6285();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VAluVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VAluVRTL_0x1e74d35e4f1f6285__Syms* symsp, bool first);
  private:
    static QData	_change_request(VAluVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__1(VAluVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp);
    static void	_eval(VAluVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp);
    static void	_eval_initial(VAluVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp);
    static void	_eval_settle(VAluVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp);
    static void	traceChgThis(VAluVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VAluVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VAluVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VAluVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VAluVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VAluVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
