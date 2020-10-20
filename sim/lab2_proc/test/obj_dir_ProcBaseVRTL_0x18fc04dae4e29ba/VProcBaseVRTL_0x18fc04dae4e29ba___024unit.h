// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VProcBaseVRTL_0x18fc04dae4e29ba.h for the primary calling header

#ifndef _VProcBaseVRTL_0x18fc04dae4e29ba___024unit_H_
#define _VProcBaseVRTL_0x18fc04dae4e29ba___024unit_H_

#include "verilated.h"
#include "VProcBaseVRTL_0x18fc04dae4e29ba__Inlines.h"
#include "VProcBaseVRTL_0x18fc04dae4e29ba__Dpi.h"

class VProcBaseVRTL_0x18fc04dae4e29ba__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VProcBaseVRTL_0x18fc04dae4e29ba___024unit) {
  public:
    // CELLS
    
    // PORTS
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign12[4];
    VProcBaseVRTL_0x18fc04dae4e29ba__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VProcBaseVRTL_0x18fc04dae4e29ba___024unit& operator= (const VProcBaseVRTL_0x18fc04dae4e29ba___024unit&);	///< Copying not allowed
    VProcBaseVRTL_0x18fc04dae4e29ba___024unit(const VProcBaseVRTL_0x18fc04dae4e29ba___024unit&);	///< Copying not allowed
  public:
    VProcBaseVRTL_0x18fc04dae4e29ba___024unit(const char* name="TOP");
    ~VProcBaseVRTL_0x18fc04dae4e29ba___024unit();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* symsp, bool first);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
