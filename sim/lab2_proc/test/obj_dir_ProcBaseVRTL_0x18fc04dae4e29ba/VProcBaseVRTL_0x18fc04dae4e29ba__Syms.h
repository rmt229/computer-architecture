// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VProcBaseVRTL_0x18fc04dae4e29ba__Syms_H_
#define _VProcBaseVRTL_0x18fc04dae4e29ba__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VProcBaseVRTL_0x18fc04dae4e29ba.h"
#include "VProcBaseVRTL_0x18fc04dae4e29ba___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)
typedef void (*VProcBaseVRTL_0x18fc04dae4e29ba__Vcb_line_trace_t) (VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, WData (& trace_str)[128]);

// SYMS CLASS
class VProcBaseVRTL_0x18fc04dae4e29ba__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool	__Vm_activity;		///< Used by trace routines to determine change occurred
    bool	__Vm_didInit;
    //char	__VpadToAlign10[6];
    
    // SUBCELL STATE
    VProcBaseVRTL_0x18fc04dae4e29ba* TOPp;
    VProcBaseVRTL_0x18fc04dae4e29ba___024unit TOP____024unit;
    
    // COVERAGE
    
    // SCOPE NAMES
    VerilatedScope __Vscope_v__verilog_module;
    VerilatedScope __Vscope_v__verilog_module__dmemreq_trace;
    VerilatedScope __Vscope_v__verilog_module__dmemresp_trace;
    VerilatedScope __Vscope_v__verilog_module__dpath__mul;
    VerilatedScope __Vscope_v__verilog_module__imemreq_trace;
    VerilatedScope __Vscope_v__verilog_module__imemresp_trace;
    
    // CREATORS
    VProcBaseVRTL_0x18fc04dae4e29ba__Syms(VProcBaseVRTL_0x18fc04dae4e29ba* topp, const char* namep);
    ~VProcBaseVRTL_0x18fc04dae4e29ba__Syms() {};
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r;}
    
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
