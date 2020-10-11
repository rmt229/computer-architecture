// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAluVRTL_0x1e74d35e4f1f6285__Syms.h"


//======================

void VAluVRTL_0x1e74d35e4f1f6285::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VAluVRTL_0x1e74d35e4f1f6285::traceInit, &VAluVRTL_0x1e74d35e4f1f6285::traceFull, &VAluVRTL_0x1e74d35e4f1f6285::traceChg, this);
}
void VAluVRTL_0x1e74d35e4f1f6285::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VAluVRTL_0x1e74d35e4f1f6285* t=(VAluVRTL_0x1e74d35e4f1f6285*)userthis;
    VAluVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VAluVRTL_0x1e74d35e4f1f6285::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAluVRTL_0x1e74d35e4f1f6285* t=(VAluVRTL_0x1e74d35e4f1f6285*)userthis;
    VAluVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VAluVRTL_0x1e74d35e4f1f6285::traceInitThis(VAluVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAluVRTL_0x1e74d35e4f1f6285* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VAluVRTL_0x1e74d35e4f1f6285::traceFullThis(VAluVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAluVRTL_0x1e74d35e4f1f6285* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAluVRTL_0x1e74d35e4f1f6285::traceInitThis__1(VAluVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAluVRTL_0x1e74d35e4f1f6285* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBus  (c+1,"clk",-1,0,0);
	vcdp->declBus  (c+2,"fn",-1,3,0);
	vcdp->declBus  (c+3,"in0",-1,31,0);
	vcdp->declBus  (c+4,"in1",-1,31,0);
	vcdp->declBus  (c+5,"ops_eq",-1,0,0);
	vcdp->declBus  (c+6,"ops_lt",-1,0,0);
	vcdp->declBus  (c+7,"ops_ltu",-1,0,0);
	vcdp->declBus  (c+8,"out",-1,31,0);
	vcdp->declBus  (c+9,"reset",-1,0,0);
	vcdp->declBus  (c+1,"v clk",-1,0,0);
	vcdp->declBus  (c+2,"v fn",-1,3,0);
	vcdp->declBus  (c+3,"v in0",-1,31,0);
	vcdp->declBus  (c+4,"v in1",-1,31,0);
	vcdp->declBus  (c+5,"v ops_eq",-1,0,0);
	vcdp->declBus  (c+6,"v ops_lt",-1,0,0);
	vcdp->declBus  (c+7,"v ops_ltu",-1,0,0);
	vcdp->declBus  (c+8,"v out",-1,31,0);
	vcdp->declBus  (c+9,"v reset",-1,0,0);
	vcdp->declBus  (c+3,"v verilog_module in0",-1,31,0);
	vcdp->declBus  (c+4,"v verilog_module in1",-1,31,0);
	vcdp->declBus  (c+2,"v verilog_module fn",-1,3,0);
	vcdp->declBus  (c+8,"v verilog_module out",-1,31,0);
	vcdp->declBit  (c+5,"v verilog_module ops_eq",-1);
	vcdp->declBit  (c+6,"v verilog_module ops_lt",-1);
	vcdp->declBit  (c+7,"v verilog_module ops_ltu",-1);
	vcdp->declQuad (c+10,"v verilog_module diff",-1,32,0);
	vcdp->declBus  (c+12,"v verilog_module cond_eq_comp p_nbits",-1,31,0);
	vcdp->declBus  (c+3,"v verilog_module cond_eq_comp in0",-1,31,0);
	vcdp->declBus  (c+4,"v verilog_module cond_eq_comp in1",-1,31,0);
	vcdp->declBit  (c+5,"v verilog_module cond_eq_comp out",-1);
	vcdp->declBus  (c+12,"v verilog_module cond_ltu_comp p_nbits",-1,31,0);
	vcdp->declBus  (c+3,"v verilog_module cond_ltu_comp in0",-1,31,0);
	vcdp->declBus  (c+4,"v verilog_module cond_ltu_comp in1",-1,31,0);
	vcdp->declBit  (c+7,"v verilog_module cond_ltu_comp out",-1);
    }
}

void VAluVRTL_0x1e74d35e4f1f6285::traceFullThis__1(VAluVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAluVRTL_0x1e74d35e4f1f6285* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->clk),1);
	vcdp->fullBus  (c+9,(vlTOPp->reset),1);
	vcdp->fullBus  (c+2,(vlTOPp->fn),4);
	vcdp->fullBus  (c+8,(vlTOPp->out),32);
	vcdp->fullBit  (c+6,(vlTOPp->ops_lt));
	vcdp->fullQuad (c+10,((VL_ULL(0x1ffffffff) 
			       & ((((QData)((IData)(
						    (1U 
						     & (vlTOPp->in0 
							>> 0x1fU)))) 
				    << 0x20U) | (QData)((IData)(vlTOPp->in0))) 
				  - (((QData)((IData)(
						      (1U 
						       & (vlTOPp->in1 
							  >> 0x1fU)))) 
				      << 0x20U) | (QData)((IData)(vlTOPp->in1)))))),33);
	vcdp->fullBit  (c+5,(vlTOPp->ops_eq));
	vcdp->fullBus  (c+3,(vlTOPp->in0),32);
	vcdp->fullBus  (c+4,(vlTOPp->in1),32);
	vcdp->fullBit  (c+7,(vlTOPp->ops_ltu));
	vcdp->fullBus  (c+12,(0x20U),32);
    }
}
