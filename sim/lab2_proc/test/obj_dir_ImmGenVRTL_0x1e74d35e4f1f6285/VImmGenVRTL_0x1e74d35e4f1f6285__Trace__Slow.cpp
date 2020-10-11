// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VImmGenVRTL_0x1e74d35e4f1f6285__Syms.h"


//======================

void VImmGenVRTL_0x1e74d35e4f1f6285::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VImmGenVRTL_0x1e74d35e4f1f6285::traceInit, &VImmGenVRTL_0x1e74d35e4f1f6285::traceFull, &VImmGenVRTL_0x1e74d35e4f1f6285::traceChg, this);
}
void VImmGenVRTL_0x1e74d35e4f1f6285::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VImmGenVRTL_0x1e74d35e4f1f6285* t=(VImmGenVRTL_0x1e74d35e4f1f6285*)userthis;
    VImmGenVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VImmGenVRTL_0x1e74d35e4f1f6285::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VImmGenVRTL_0x1e74d35e4f1f6285* t=(VImmGenVRTL_0x1e74d35e4f1f6285*)userthis;
    VImmGenVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VImmGenVRTL_0x1e74d35e4f1f6285::traceInitThis(VImmGenVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VImmGenVRTL_0x1e74d35e4f1f6285* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VImmGenVRTL_0x1e74d35e4f1f6285::traceFullThis(VImmGenVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VImmGenVRTL_0x1e74d35e4f1f6285* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VImmGenVRTL_0x1e74d35e4f1f6285::traceInitThis__1(VImmGenVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VImmGenVRTL_0x1e74d35e4f1f6285* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBus  (c+1,"clk",-1,0,0);
	vcdp->declBus  (c+2,"imm",-1,31,0);
	vcdp->declBus  (c+3,"imm_type",-1,2,0);
	vcdp->declBus  (c+4,"inst",-1,31,0);
	vcdp->declBus  (c+5,"reset",-1,0,0);
	vcdp->declBus  (c+1,"v clk",-1,0,0);
	vcdp->declBus  (c+2,"v imm",-1,31,0);
	vcdp->declBus  (c+3,"v imm_type",-1,2,0);
	vcdp->declBus  (c+4,"v inst",-1,31,0);
	vcdp->declBus  (c+5,"v reset",-1,0,0);
	vcdp->declBus  (c+3,"v verilog_module imm_type",-1,2,0);
	vcdp->declBus  (c+4,"v verilog_module inst",-1,31,0);
	vcdp->declBus  (c+2,"v verilog_module imm",-1,31,0);
    }
}

void VImmGenVRTL_0x1e74d35e4f1f6285::traceFullThis__1(VImmGenVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VImmGenVRTL_0x1e74d35e4f1f6285* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->clk),1);
	vcdp->fullBus  (c+5,(vlTOPp->reset),1);
	vcdp->fullBus  (c+3,(vlTOPp->imm_type),3);
	vcdp->fullBus  (c+4,(vlTOPp->inst),32);
	vcdp->fullBus  (c+2,(vlTOPp->imm),32);
    }
}
