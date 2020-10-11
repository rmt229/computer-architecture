// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VImmGenVRTL_0x1e74d35e4f1f6285__Syms_H_
#define _VImmGenVRTL_0x1e74d35e4f1f6285__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VImmGenVRTL_0x1e74d35e4f1f6285.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class VImmGenVRTL_0x1e74d35e4f1f6285__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool	__Vm_activity;		///< Used by trace routines to determine change occurred
    bool	__Vm_didInit;
    //char	__VpadToAlign10[6];
    
    // SUBCELL STATE
    VImmGenVRTL_0x1e74d35e4f1f6285* TOPp;
    
    // COVERAGE
    
    // SCOPE NAMES
    
    // CREATORS
    VImmGenVRTL_0x1e74d35e4f1f6285__Syms(VImmGenVRTL_0x1e74d35e4f1f6285* topp, const char* namep);
    ~VImmGenVRTL_0x1e74d35e4f1f6285__Syms() {};
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r;}
    
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
