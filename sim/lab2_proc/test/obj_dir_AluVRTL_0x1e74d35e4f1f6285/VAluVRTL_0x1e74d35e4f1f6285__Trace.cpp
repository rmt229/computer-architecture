// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAluVRTL_0x1e74d35e4f1f6285__Syms.h"


//======================

void VAluVRTL_0x1e74d35e4f1f6285::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAluVRTL_0x1e74d35e4f1f6285* t=(VAluVRTL_0x1e74d35e4f1f6285*)userthis;
    VAluVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VAluVRTL_0x1e74d35e4f1f6285::traceChgThis(VAluVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAluVRTL_0x1e74d35e4f1f6285* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAluVRTL_0x1e74d35e4f1f6285::traceChgThis__2(VAluVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAluVRTL_0x1e74d35e4f1f6285* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->clk),1);
	vcdp->chgBus  (c+9,(vlTOPp->reset),1);
	vcdp->chgBus  (c+2,(vlTOPp->fn),4);
	vcdp->chgBus  (c+8,(vlTOPp->out),32);
	vcdp->chgBit  (c+6,(vlTOPp->ops_lt));
	vcdp->chgQuad (c+10,((VL_ULL(0x1ffffffff) & 
			      ((((QData)((IData)((1U 
						  & (vlTOPp->in0 
						     >> 0x1fU)))) 
				 << 0x20U) | (QData)((IData)(vlTOPp->in0))) 
			       - (((QData)((IData)(
						   (1U 
						    & (vlTOPp->in1 
						       >> 0x1fU)))) 
				   << 0x20U) | (QData)((IData)(vlTOPp->in1)))))),33);
	vcdp->chgBit  (c+5,(vlTOPp->ops_eq));
	vcdp->chgBus  (c+3,(vlTOPp->in0),32);
	vcdp->chgBus  (c+4,(vlTOPp->in1),32);
	vcdp->chgBit  (c+7,(vlTOPp->ops_ltu));
    }
}
