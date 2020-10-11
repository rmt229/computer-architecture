// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VImmGenVRTL_0x1e74d35e4f1f6285_H_
#define _VImmGenVRTL_0x1e74d35e4f1f6285_H_

#include "verilated.h"
#include "VImmGenVRTL_0x1e74d35e4f1f6285__Dpi.h"

class VImmGenVRTL_0x1e74d35e4f1f6285__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VImmGenVRTL_0x1e74d35e4f1f6285) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(imm_type,2,0);
    VL_IN8(reset,0,0);
    //char	__VpadToAlign3[1];
    VL_OUT(imm,31,0);
    VL_IN(inst,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign28[4];
    VImmGenVRTL_0x1e74d35e4f1f6285__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VImmGenVRTL_0x1e74d35e4f1f6285& operator= (const VImmGenVRTL_0x1e74d35e4f1f6285&);	///< Copying not allowed
    VImmGenVRTL_0x1e74d35e4f1f6285(const VImmGenVRTL_0x1e74d35e4f1f6285&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VImmGenVRTL_0x1e74d35e4f1f6285(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VImmGenVRTL_0x1e74d35e4f1f6285();
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
    static void _eval_initial_loop(VImmGenVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VImmGenVRTL_0x1e74d35e4f1f6285__Syms* symsp, bool first);
  private:
    static QData	_change_request(VImmGenVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__1(VImmGenVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp);
    static void	_eval(VImmGenVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp);
    static void	_eval_initial(VImmGenVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp);
    static void	_eval_settle(VImmGenVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp);
    static void	traceChgThis(VImmGenVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VImmGenVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VImmGenVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VImmGenVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VImmGenVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VImmGenVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
