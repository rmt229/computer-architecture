// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAluVRTL_0x1e74d35e4f1f6285.h for the primary calling header

#include "VAluVRTL_0x1e74d35e4f1f6285.h" // For This
#include "VAluVRTL_0x1e74d35e4f1f6285__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VAluVRTL_0x1e74d35e4f1f6285) {
    VAluVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp = __VlSymsp = new VAluVRTL_0x1e74d35e4f1f6285__Syms(this, name());
    VAluVRTL_0x1e74d35e4f1f6285* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    clk = VL_RAND_RESET_I(1);
    fn = VL_RAND_RESET_I(4);
    in0 = VL_RAND_RESET_I(32);
    in1 = VL_RAND_RESET_I(32);
    ops_eq = VL_RAND_RESET_I(1);
    ops_lt = VL_RAND_RESET_I(1);
    ops_ltu = VL_RAND_RESET_I(1);
    out = VL_RAND_RESET_I(32);
    reset = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VAluVRTL_0x1e74d35e4f1f6285::__Vconfigure(VAluVRTL_0x1e74d35e4f1f6285__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VAluVRTL_0x1e74d35e4f1f6285::~VAluVRTL_0x1e74d35e4f1f6285() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VAluVRTL_0x1e74d35e4f1f6285::eval() {
    VAluVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VAluVRTL_0x1e74d35e4f1f6285* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VAluVRTL_0x1e74d35e4f1f6285::eval\n"); );
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void VAluVRTL_0x1e74d35e4f1f6285::_eval_initial_loop(VAluVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VAluVRTL_0x1e74d35e4f1f6285::_combo__TOP__1(VAluVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAluVRTL_0x1e74d35e4f1f6285::_combo__TOP__1\n"); );
    VAluVRTL_0x1e74d35e4f1f6285* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ops_lt = (1U & (IData)((VL_ULL(1) & (((
						   ((QData)((IData)(
								    (1U 
								     & (vlTOPp->in0 
									>> 0x1fU)))) 
						    << 0x20U) 
						   | (QData)((IData)(vlTOPp->in0))) 
						  - 
						  (((QData)((IData)(
								    (1U 
								     & (vlTOPp->in1 
									>> 0x1fU)))) 
						    << 0x20U) 
						   | (QData)((IData)(vlTOPp->in1)))) 
						 >> 0x20U))));
    vlTOPp->ops_eq = (vlTOPp->in0 == vlTOPp->in1);
    vlTOPp->ops_ltu = (vlTOPp->in0 < vlTOPp->in1);
    // ALWAYS at lab2_proc/ProcDpathComponentsVRTL.v:67
    vlTOPp->out = ((8U & (IData)(vlTOPp->fn)) ? ((4U 
						  & (IData)(vlTOPp->fn))
						  ? 
						 ((2U 
						   & (IData)(vlTOPp->fn))
						   ? 0U
						   : 
						  ((1U 
						    & (IData)(vlTOPp->fn))
						    ? 
						   (0xfffffffeU 
						    & (vlTOPp->in0 
						       + vlTOPp->in1))
						    : vlTOPp->in1))
						  : 
						 ((2U 
						   & (IData)(vlTOPp->fn))
						   ? 
						  ((1U 
						    & (IData)(vlTOPp->fn))
						    ? vlTOPp->in0
						    : 
						   ((0x1fU 
						     >= vlTOPp->in1)
						     ? 
						    (vlTOPp->in0 
						     << vlTOPp->in1)
						     : 0U))
						   : 
						  ((1U 
						    & (IData)(vlTOPp->fn))
						    ? 
						   ((0x1fU 
						     >= vlTOPp->in1)
						     ? 
						    (vlTOPp->in0 
						     >> vlTOPp->in1)
						     : 0U)
						    : 
						   VL_SHIFTRS_III(32,32,5, vlTOPp->in0, 
								  (0x1fU 
								   & vlTOPp->in1)))))
		    : ((4U & (IData)(vlTOPp->fn)) ? 
		       ((2U & (IData)(vlTOPp->fn)) ? 
			((1U & (IData)(vlTOPp->fn))
			  ? ((vlTOPp->in0 < vlTOPp->in1)
			      ? 1U : 0U) : (VL_LTS_III(1,32,32, vlTOPp->in0, vlTOPp->in1)
					     ? 1U : 0U))
			 : ((1U & (IData)(vlTOPp->fn))
			     ? (vlTOPp->in0 ^ vlTOPp->in1)
			     : (vlTOPp->in0 | vlTOPp->in1)))
		        : ((2U & (IData)(vlTOPp->fn))
			    ? ((1U & (IData)(vlTOPp->fn))
			        ? (vlTOPp->in0 & vlTOPp->in1)
			        : (vlTOPp->in0 * vlTOPp->in1))
			    : ((1U & (IData)(vlTOPp->fn))
			        ? (vlTOPp->in0 - vlTOPp->in1)
			        : (vlTOPp->in0 + vlTOPp->in1)))));
}

void VAluVRTL_0x1e74d35e4f1f6285::_eval(VAluVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAluVRTL_0x1e74d35e4f1f6285::_eval\n"); );
    VAluVRTL_0x1e74d35e4f1f6285* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VAluVRTL_0x1e74d35e4f1f6285::_eval_initial(VAluVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAluVRTL_0x1e74d35e4f1f6285::_eval_initial\n"); );
    VAluVRTL_0x1e74d35e4f1f6285* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAluVRTL_0x1e74d35e4f1f6285::final() {
    VL_DEBUG_IF(VL_PRINTF("    VAluVRTL_0x1e74d35e4f1f6285::final\n"); );
    // Variables
    VAluVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAluVRTL_0x1e74d35e4f1f6285* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAluVRTL_0x1e74d35e4f1f6285::_eval_settle(VAluVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAluVRTL_0x1e74d35e4f1f6285::_eval_settle\n"); );
    VAluVRTL_0x1e74d35e4f1f6285* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VAluVRTL_0x1e74d35e4f1f6285::_change_request(VAluVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAluVRTL_0x1e74d35e4f1f6285::_change_request\n"); );
    VAluVRTL_0x1e74d35e4f1f6285* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
