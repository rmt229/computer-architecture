// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VImmGenVRTL_0x1e74d35e4f1f6285__Syms.h"


//======================

void VImmGenVRTL_0x1e74d35e4f1f6285::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VImmGenVRTL_0x1e74d35e4f1f6285* t=(VImmGenVRTL_0x1e74d35e4f1f6285*)userthis;
    VImmGenVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VImmGenVRTL_0x1e74d35e4f1f6285::traceChgThis(VImmGenVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VImmGenVRTL_0x1e74d35e4f1f6285* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VImmGenVRTL_0x1e74d35e4f1f6285::traceChgThis__2(VImmGenVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VImmGenVRTL_0x1e74d35e4f1f6285* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->clk),1);
	vcdp->chgBus  (c+5,(vlTOPp->reset),1);
	vcdp->chgBus  (c+3,(vlTOPp->imm_type),3);
	vcdp->chgBus  (c+4,(vlTOPp->inst),32);
	vcdp->chgBus  (c+2,(vlTOPp->imm),32);
    }
}
