// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VImmGenVRTL_0x1e74d35e4f1f6285.h for the primary calling header

#include "VImmGenVRTL_0x1e74d35e4f1f6285.h" // For This
#include "VImmGenVRTL_0x1e74d35e4f1f6285__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VImmGenVRTL_0x1e74d35e4f1f6285) {
    VImmGenVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp = __VlSymsp = new VImmGenVRTL_0x1e74d35e4f1f6285__Syms(this, name());
    VImmGenVRTL_0x1e74d35e4f1f6285* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    clk = VL_RAND_RESET_I(1);
    imm = VL_RAND_RESET_I(32);
    imm_type = VL_RAND_RESET_I(3);
    inst = VL_RAND_RESET_I(32);
    reset = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VImmGenVRTL_0x1e74d35e4f1f6285::__Vconfigure(VImmGenVRTL_0x1e74d35e4f1f6285__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VImmGenVRTL_0x1e74d35e4f1f6285::~VImmGenVRTL_0x1e74d35e4f1f6285() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VImmGenVRTL_0x1e74d35e4f1f6285::eval() {
    VImmGenVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VImmGenVRTL_0x1e74d35e4f1f6285* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VImmGenVRTL_0x1e74d35e4f1f6285::eval\n"); );
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

void VImmGenVRTL_0x1e74d35e4f1f6285::_eval_initial_loop(VImmGenVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VImmGenVRTL_0x1e74d35e4f1f6285::_combo__TOP__1(VImmGenVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VImmGenVRTL_0x1e74d35e4f1f6285::_combo__TOP__1\n"); );
    VImmGenVRTL_0x1e74d35e4f1f6285* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at lab2_proc/ProcDpathComponentsVRTL.v:21
    vlTOPp->imm = ((4U & (IData)(vlTOPp->imm_type))
		    ? ((2U & (IData)(vlTOPp->imm_type))
		        ? 0U : ((1U & (IData)(vlTOPp->imm_type))
				 ? 0U : ((0xfff00000U 
					  & (VL_NEGATE_I((IData)(
								 (1U 
								  & (vlTOPp->inst 
								     >> 0x1fU)))) 
					     << 0x14U)) 
					 | ((0xff000U 
					     & vlTOPp->inst) 
					    | ((0x800U 
						& (vlTOPp->inst 
						   >> 9U)) 
					       | (0x7feU 
						  & (vlTOPp->inst 
						     >> 0x14U)))))))
		    : ((2U & (IData)(vlTOPp->imm_type))
		        ? ((1U & (IData)(vlTOPp->imm_type))
			    ? (0xfffff000U & vlTOPp->inst)
			    : ((0xfffff000U & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlTOPp->inst 
								       >> 0x1fU)))) 
					       << 0xcU)) 
			       | ((0x800U & (vlTOPp->inst 
					     << 4U)) 
				  | ((0x7e0U & (vlTOPp->inst 
						>> 0x14U)) 
				     | (0x1eU & (vlTOPp->inst 
						 >> 7U))))))
		        : ((1U & (IData)(vlTOPp->imm_type))
			    ? ((0xfffff800U & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlTOPp->inst 
								       >> 0x1fU)))) 
					       << 0xbU)) 
			       | ((0x7e0U & (vlTOPp->inst 
					     >> 0x14U)) 
				  | (0x1fU & (vlTOPp->inst 
					      >> 7U))))
			    : ((0xfffff800U & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlTOPp->inst 
								       >> 0x1fU)))) 
					       << 0xbU)) 
			       | (0x7ffU & (vlTOPp->inst 
					    >> 0x14U))))));
}

void VImmGenVRTL_0x1e74d35e4f1f6285::_eval(VImmGenVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VImmGenVRTL_0x1e74d35e4f1f6285::_eval\n"); );
    VImmGenVRTL_0x1e74d35e4f1f6285* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VImmGenVRTL_0x1e74d35e4f1f6285::_eval_initial(VImmGenVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VImmGenVRTL_0x1e74d35e4f1f6285::_eval_initial\n"); );
    VImmGenVRTL_0x1e74d35e4f1f6285* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VImmGenVRTL_0x1e74d35e4f1f6285::final() {
    VL_DEBUG_IF(VL_PRINTF("    VImmGenVRTL_0x1e74d35e4f1f6285::final\n"); );
    // Variables
    VImmGenVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp = this->__VlSymsp;
    VImmGenVRTL_0x1e74d35e4f1f6285* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VImmGenVRTL_0x1e74d35e4f1f6285::_eval_settle(VImmGenVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VImmGenVRTL_0x1e74d35e4f1f6285::_eval_settle\n"); );
    VImmGenVRTL_0x1e74d35e4f1f6285* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VImmGenVRTL_0x1e74d35e4f1f6285::_change_request(VImmGenVRTL_0x1e74d35e4f1f6285__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VImmGenVRTL_0x1e74d35e4f1f6285::_change_request\n"); );
    VImmGenVRTL_0x1e74d35e4f1f6285* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
