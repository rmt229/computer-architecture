// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VProcBaseVRTL_0x18fc04dae4e29ba__Syms.h"


//======================

void VProcBaseVRTL_0x18fc04dae4e29ba::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VProcBaseVRTL_0x18fc04dae4e29ba* t=(VProcBaseVRTL_0x18fc04dae4e29ba*)userthis;
    VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VProcBaseVRTL_0x18fc04dae4e29ba::traceChgThis(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VProcBaseVRTL_0x18fc04dae4e29ba* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 7U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 7U)) | (vlTOPp->__Vm_traceActivity 
					      >> 8U))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity 
				 | (vlTOPp->__Vm_traceActivity 
				    >> 7U)) | (vlTOPp->__Vm_traceActivity 
					       >> 8U)) 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 0xaU))))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 7U)) | (vlTOPp->__Vm_traceActivity 
					      >> 9U))))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 8U))))) {
	    vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 8U)) | (vlTOPp->__Vm_traceActivity 
					      >> 0xaU))))) {
	    vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 9U))))) {
	    vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 0xaU))))) {
	    vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x20U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__14(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x40U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__15(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x80U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__16(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__17(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VProcBaseVRTL_0x18fc04dae4e29ba::traceChgThis__2(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VProcBaseVRTL_0x18fc04dae4e29ba* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+8,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__ostall_W));
	vcdp->chgBit  (c+9,((1U == (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__j_type_D))));
	vcdp->chgBit  (c+10,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__inst_val_D));
	vcdp->chgBus  (c+11,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__j_type_D),2);
	vcdp->chgBus  (c+12,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__br_type_D),3);
	vcdp->chgBit  (c+13,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rs1_en_D));
	vcdp->chgBit  (c+14,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rs2_en_D));
	vcdp->chgBus  (c+15,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__alu_fn_D),4);
	vcdp->chgBus  (c+16,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__ex_result_sel_D),2);
	vcdp->chgBus  (c+17,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__dmemreq_type_D),2);
	vcdp->chgBit  (c+18,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__wb_result_sel_D));
	vcdp->chgBit  (c+19,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_wen_pending_D));
	vcdp->chgBit  (c+20,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__csrr_D));
	vcdp->chgBit  (c+21,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__csrw_D));
	vcdp->chgBit  (c+22,((((((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rs1_en_D) 
				 & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_X)) 
				& (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_wen_pending_X)) 
			       & ((0x1fU & (vlTOPp->v__DOT__verilog_module__DOT__inst_D 
					    >> 0xfU)) 
				  == (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_waddr_X))) 
			      & (0U != (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_waddr_X)))));
	vcdp->chgBit  (c+23,((((((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rs1_en_D) 
				 & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_M)) 
				& (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_wen_pending_M)) 
			       & ((0x1fU & (vlTOPp->v__DOT__verilog_module__DOT__inst_D 
					    >> 0xfU)) 
				  == (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_waddr_M))) 
			      & (0U != (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_waddr_M)))));
	vcdp->chgBit  (c+24,((((((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rs1_en_D) 
				 & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_W)) 
				& (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_wen_pending_W)) 
			       & ((0x1fU & (vlTOPp->v__DOT__verilog_module__DOT__inst_D 
					    >> 0xfU)) 
				  == (IData)(vlTOPp->v__DOT__verilog_module__DOT__rf_waddr_W))) 
			      & (0U != (IData)(vlTOPp->v__DOT__verilog_module__DOT__rf_waddr_W)))));
	vcdp->chgBit  (c+25,((((((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rs2_en_D) 
				 & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_X)) 
				& (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_wen_pending_X)) 
			       & ((0x1fU & (vlTOPp->v__DOT__verilog_module__DOT__inst_D 
					    >> 0x14U)) 
				  == (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_waddr_X))) 
			      & (0U != (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_waddr_X)))));
	vcdp->chgBit  (c+26,((((((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rs2_en_D) 
				 & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_M)) 
				& (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_wen_pending_M)) 
			       & ((0x1fU & (vlTOPp->v__DOT__verilog_module__DOT__inst_D 
					    >> 0x14U)) 
				  == (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_waddr_M))) 
			      & (0U != (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_waddr_M)))));
	vcdp->chgBit  (c+27,((((((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rs2_en_D) 
				 & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_W)) 
				& (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_wen_pending_W)) 
			       & ((0x1fU & (vlTOPp->v__DOT__verilog_module__DOT__inst_D 
					    >> 0x14U)) 
				  == (IData)(vlTOPp->v__DOT__verilog_module__DOT__rf_waddr_W))) 
			      & (0U != (IData)(vlTOPp->v__DOT__verilog_module__DOT__rf_waddr_W)))));
	vcdp->chgBit  (c+28,(((((((((((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rs1_en_D) 
				      & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_X)) 
				     & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_wen_pending_X)) 
				    & ((0x1fU & (vlTOPp->v__DOT__verilog_module__DOT__inst_D 
						 >> 0xfU)) 
				       == (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_waddr_X))) 
				   & (0U != (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_waddr_X))) 
				  | (((((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rs1_en_D) 
					& (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_M)) 
				       & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_wen_pending_M)) 
				      & ((0x1fU & (vlTOPp->v__DOT__verilog_module__DOT__inst_D 
						   >> 0xfU)) 
					 == (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_waddr_M))) 
				     & (0U != (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_waddr_M)))) 
				 | (((((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rs1_en_D) 
				       & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_W)) 
				      & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_wen_pending_W)) 
				     & ((0x1fU & (vlTOPp->v__DOT__verilog_module__DOT__inst_D 
						  >> 0xfU)) 
					== (IData)(vlTOPp->v__DOT__verilog_module__DOT__rf_waddr_W))) 
				    & (0U != (IData)(vlTOPp->v__DOT__verilog_module__DOT__rf_waddr_W)))) 
				| (((((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rs2_en_D) 
				      & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_X)) 
				     & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_wen_pending_X)) 
				    & ((0x1fU & (vlTOPp->v__DOT__verilog_module__DOT__inst_D 
						 >> 0x14U)) 
				       == (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_waddr_X))) 
				   & (0U != (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_waddr_X)))) 
			       | (((((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rs2_en_D) 
				     & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_M)) 
				    & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_wen_pending_M)) 
				   & ((0x1fU & (vlTOPp->v__DOT__verilog_module__DOT__inst_D 
						>> 0x14U)) 
				      == (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_waddr_M))) 
				  & (0U != (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_waddr_M)))) 
			      | (((((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rs2_en_D) 
				    & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_W)) 
				   & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_wen_pending_W)) 
				  & ((0x1fU & (vlTOPp->v__DOT__verilog_module__DOT__inst_D 
					       >> 0x14U)) 
				     == (IData)(vlTOPp->v__DOT__verilog_module__DOT__rf_waddr_W))) 
				 & (0U != (IData)(vlTOPp->v__DOT__verilog_module__DOT__rf_waddr_W))))));
	vcdp->chgBus  (c+7,((3U & ((IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full)
				    ? 0U : ((IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty)
					     ? 2U : 
					    (((IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr) 
					      > (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr))
					      ? ((IData)(2U) 
						 - 
						 ((IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr) 
						  - (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr)))
					      : (((IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr) 
						  > (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr))
						  ? 
						 ((IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr) 
						  - (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr))
						  : 0U)))))),2);
	vcdp->chgBus  (c+30,(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr_inc),1);
	vcdp->chgArray(c+31,(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__read_data),77);
	vcdp->chgBit  (c+29,(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty));
	vcdp->chgBus  (c+4,(vlTOPp->v__DOT__verilog_module__DOT__imm_type_D),3);
	vcdp->chgBus  (c+37,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rf_read_data0),32);
	vcdp->chgBus  (c+38,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rf_read_data1),32);
	vcdp->chgBus  (c+34,(((0U == (0x1fU & (vlTOPp->v__DOT__verilog_module__DOT__inst_D 
					       >> 0xfU)))
			       ? 0U : vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rf_read_data0)),32);
	vcdp->chgBit  (c+2,(vlTOPp->v__DOT__verilog_module__DOT__op1_sel_D));
	vcdp->chgBus  (c+3,(vlTOPp->v__DOT__verilog_module__DOT__op2_sel_D),2);
	vcdp->chgBus  (c+35,(((IData)(vlTOPp->v__DOT__verilog_module__DOT__op1_sel_D)
			       ? ((IData)(vlTOPp->v__DOT__verilog_module__DOT__op1_sel_D)
				   ? ((0U == (0x1fU 
					      & (vlTOPp->v__DOT__verilog_module__DOT__inst_D 
						 >> 0xfU)))
				       ? 0U : vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rf_read_data0)
				   : 0U) : vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__pc_D)),32);
	vcdp->chgBit  (c+5,(vlTOPp->v__DOT__verilog_module__DOT__br_cond_eq_X));
	vcdp->chgBit  (c+6,(vlTOPp->v__DOT__verilog_module__DOT__br_cond_ltu_X));
	vcdp->chgBit  (c+40,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__ctrl__DOT__do_add_shift));
	vcdp->chgBit  (c+41,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__ctrl__DOT__do_shift));
	vcdp->chgBus  (c+43,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__shift_count),8);
	vcdp->chgBus  (c+42,((0xffU & ((IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__shift_count) 
				       + (IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__ctrl__DOT__count)))),8);
	vcdp->chgBit  (c+44,((1U & (((IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__shift_count) 
				     + (IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__ctrl__DOT__count)) 
				    >> 8U))));
	vcdp->chgBus  (c+39,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__shift_count),4);
	vcdp->chgBus  (c+45,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__vc_trace__DOT__cycles),32);
	vcdp->chgBus  (c+1,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__alu_result_X),32);
	vcdp->chgBus  (c+36,(((0U == (IData)(vlTOPp->v__DOT__verilog_module__DOT__ex_result_sel_X))
			       ? ((IData)(4U) + vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__pc_X)
			       : ((1U == (IData)(vlTOPp->v__DOT__verilog_module__DOT__ex_result_sel_X))
				   ? vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__alu_result_X
				   : ((2U == (IData)(vlTOPp->v__DOT__verilog_module__DOT__ex_result_sel_X))
				       ? vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__result_reg_out
				       : 0U)))),32);
	vcdp->chgBus  (c+46,(vlTOPp->v__DOT__verilog_module__DOT__vc_trace__DOT__cycles),32);
	vcdp->chgBus  (c+47,(vlTOPp->v__DOT__verilog_module__DOT__imemreq_trace__DOT__vc_trace__DOT__cycles),32);
	vcdp->chgBus  (c+48,(vlTOPp->v__DOT__verilog_module__DOT__dmemreq_trace__DOT__vc_trace__DOT__cycles),32);
	vcdp->chgBus  (c+49,(vlTOPp->v__DOT__verilog_module__DOT__imemresp_trace__DOT__vc_trace__DOT__cycles),32);
	vcdp->chgBus  (c+50,(vlTOPp->v__DOT__verilog_module__DOT__dmemresp_trace__DOT__vc_trace__DOT__cycles),32);
    }
}

void VProcBaseVRTL_0x18fc04dae4e29ba::traceChgThis__3(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VProcBaseVRTL_0x18fc04dae4e29ba* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+51,((1U & ((IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_drop_unit__DOT__state)
				     ? (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_drop_unit__DOT__in_go))
				     : ((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__squash_F) 
					& (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_drop_unit__DOT__in_go)))))));
	vcdp->chgBit  (c+52,(((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_F) 
			      & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__imemresp_val_drop)))));
	vcdp->chgBit  (c+53,((((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_F) 
			       & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stall_F))) 
			      & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__squash_F)))));
	vcdp->chgBit  (c+54,((((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_D) 
			       & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stall_D))) 
			      & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__squash_D)))));
	vcdp->chgBit  (c+55,(((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_X) 
			      & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stall_X)))));
	vcdp->chgBit  (c+56,(((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_M) 
			      & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stall_M)))));
	vcdp->chgBus  (c+57,((((IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_enq) 
			       & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_bypass)))
			       ? (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr_inc)
			       : (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr))),1);
	vcdp->chgBus  (c+58,((((IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_deq) 
			       & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_bypass)))
			       ? ((2U != (1U & ((IData)(1U) 
						+ (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr)))) 
				  & ((IData)(1U) + (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr)))
			       : (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr))),1);
	vcdp->chgBit  (c+59,(((((IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_enq) 
				& (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_deq))) 
			       & ((IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr_inc) 
				  == (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr))) 
			      | ((~ ((IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_deq) 
				     & (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full))) 
				 & (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full)))));
	vcdp->chgBit  (c+60,(((~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
			      & (((IData)(vlTOPp->v__DOT__verilog_module__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
				  & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass))) 
				 | (IData)(vlTOPp->v__DOT__verilog_module__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
    }
}

void VProcBaseVRTL_0x18fc04dae4e29ba::traceChgThis__4(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VProcBaseVRTL_0x18fc04dae4e29ba* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+61,(((~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
			      & (((IData)(vlTOPp->v__DOT__verilog_module__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
				  & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass))) 
				 | (IData)(vlTOPp->v__DOT__verilog_module__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
    }
}

void VProcBaseVRTL_0x18fc04dae4e29ba::traceChgThis__5(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VProcBaseVRTL_0x18fc04dae4e29ba* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+62,((1U & (IData)((VL_ULL(1) 
					    & (((QData)((IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__pc_D)) 
						+ (QData)((IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__imm_D))) 
					       >> 0x20U))))));
	vcdp->chgBus  (c+63,(((IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__add_mux_sel)
			       ? ((IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__add_mux_sel)
				   ? vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__result_reg_out
				   : 0U) : (vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__a_reg_out 
					    + vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__result_reg_out))),32);
    }
}

void VProcBaseVRTL_0x18fc04dae4e29ba::traceChgThis__6(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VProcBaseVRTL_0x18fc04dae4e29ba* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+75,(vlTOPp->v__DOT__verilog_module__DOT__imem_drop_unit__DOT__in_go));
	vcdp->chgBit  (c+76,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__ostall_D));
	vcdp->chgBit  (c+77,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__ostall_M));
	vcdp->chgBit  (c+78,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stall_F));
	vcdp->chgBit  (c+79,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stall_D));
	vcdp->chgBit  (c+80,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stall_X));
	vcdp->chgBit  (c+81,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stall_M));
	vcdp->chgBit  (c+82,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__osquash_X));
	vcdp->chgBit  (c+83,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__squash_D));
	vcdp->chgBit  (c+64,(vlTOPp->v__DOT__verilog_module__DOT__imemreq_enq_val));
	vcdp->chgBit  (c+85,(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_enq));
	vcdp->chgBit  (c+86,(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_deq));
	vcdp->chgBit  (c+87,(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_bypass));
	vcdp->chgBit  (c+84,(((IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_enq) 
			      & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_bypass)))));
	vcdp->chgBit  (c+65,(vlTOPp->v__DOT__verilog_module__DOT__dmemreq_enq_val));
	vcdp->chgBit  (c+89,(vlTOPp->v__DOT__verilog_module__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
	vcdp->chgBit  (c+90,(vlTOPp->v__DOT__verilog_module__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
	vcdp->chgBit  (c+91,(vlTOPp->v__DOT__verilog_module__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
	vcdp->chgBit  (c+88,(((IData)(vlTOPp->v__DOT__verilog_module__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
			      & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)))));
	vcdp->chgBit  (c+92,(vlTOPp->v__DOT__verilog_module__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
	vcdp->chgBit  (c+93,(vlTOPp->v__DOT__verilog_module__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
	vcdp->chgBit  (c+66,(vlTOPp->v__DOT__verilog_module__DOT__imemresp_val_drop));
	vcdp->chgBit  (c+67,((1U & ((~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stall_F)) 
				    | (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__squash_F)))));
	vcdp->chgBit  (c+68,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__squash_F));
	vcdp->chgBit  (c+69,(vlTOPp->v__DOT__verilog_module__DOT__reg_en_F));
	vcdp->chgBit  (c+70,(vlTOPp->v__DOT__verilog_module__DOT__reg_en_D));
	vcdp->chgBit  (c+73,((1U & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stall_X)))));
	vcdp->chgBit  (c+71,(vlTOPp->v__DOT__verilog_module__DOT__imul_req_val_D));
	vcdp->chgBit  (c+72,(vlTOPp->v__DOT__verilog_module__DOT__imul_resp_rdy_X));
	vcdp->chgBus  (c+94,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__ctrl__DOT__next_state),2);
	vcdp->chgBit  (c+74,((1U & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stall_M)))));
    }
}

void VProcBaseVRTL_0x18fc04dae4e29ba::traceChgThis__7(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VProcBaseVRTL_0x18fc04dae4e29ba* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+95,(((IData)(vlTOPp->v__DOT__verilog_module__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
			      & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)))));
    }
}

void VProcBaseVRTL_0x18fc04dae4e29ba::traceChgThis__8(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VProcBaseVRTL_0x18fc04dae4e29ba* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+105,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__ostall_X));
	vcdp->chgBit  (c+106,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stall_W));
	vcdp->chgBit  (c+107,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__pc_redirect_D));
	vcdp->chgBit  (c+108,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__pc_redirect_X));
	vcdp->chgBus  (c+109,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__pc_sel_D),2);
	vcdp->chgBus  (c+110,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__pc_sel_X),2);
	vcdp->chgBit  (c+111,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__proc2mngr_val_D));
	vcdp->chgBit  (c+112,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__mngr2proc_rdy_D));
	vcdp->chgBit  (c+113,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stats_en_wen_D));
	vcdp->chgArray(c+96,(vlTOPp->v__DOT__verilog_module__DOT__dmemreq_enq_msg),77);
	vcdp->chgBit  (c+99,(vlTOPp->v__DOT__verilog_module__DOT__proc2mngr_enq_val));
	vcdp->chgBus  (c+100,(vlTOPp->v__DOT__verilog_module__DOT__pc_sel_F),2);
	vcdp->chgBus  (c+101,(vlTOPp->v__DOT__verilog_module__DOT__csrr_sel_D),2);
	vcdp->chgBus  (c+115,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__imm_D),32);
	vcdp->chgBus  (c+114,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__jal_target_D),32);
	vcdp->chgBus  (c+116,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf_rdata1_D),32);
	vcdp->chgBit  (c+103,(vlTOPp->v__DOT__verilog_module__DOT__imul_req_rdy_D));
	vcdp->chgBit  (c+104,(vlTOPp->v__DOT__verilog_module__DOT__imul_resp_val_X));
	vcdp->chgBus  (c+124,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_shift_out),32);
	vcdp->chgBit  (c+118,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__a_mux_sel));
	vcdp->chgBus  (c+123,(((IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__a_mux_sel)
			        ? ((IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__a_mux_sel)
				    ? (IData)((vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__imul_req_msg 
					       >> 0x20U))
				    : 0U) : vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__a_shift_out)),32);
	vcdp->chgBit  (c+119,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__b_mux_sel));
	vcdp->chgBus  (c+125,(((IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__b_mux_sel)
			        ? ((IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__b_mux_sel)
				    ? (IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__imul_req_msg)
				    : 0U) : vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_shift_out)),32);
	vcdp->chgBus  (c+122,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__a_shift_out),32);
	vcdp->chgBit  (c+121,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__add_mux_sel));
	vcdp->chgBit  (c+120,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__result_mux_sel));
	vcdp->chgBus  (c+126,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__result_mux_out),32);
	vcdp->chgBit  (c+117,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__result_en));
	vcdp->chgBit  (c+102,((1U & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stall_W)))));
    }
}

void VProcBaseVRTL_0x18fc04dae4e29ba::traceChgThis__9(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VProcBaseVRTL_0x18fc04dae4e29ba* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgArray(c+128,(vlTOPp->v__DOT__verilog_module__DOT__imemreq_enq_msg),77);
	vcdp->chgBit  (c+131,(vlTOPp->v__DOT__verilog_module__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
	vcdp->chgBus  (c+127,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__pc_next_F),32);
    }
}

void VProcBaseVRTL_0x18fc04dae4e29ba::traceChgThis__10(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VProcBaseVRTL_0x18fc04dae4e29ba* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgArray(c+132,(vlTOPp->v__DOT__verilog_module__DOT__str),4096);
	vcdp->chgBus  (c+260,(vlTOPp->v__DOT__verilog_module__DOT__rv2isa__DOT__rs1_str),24);
	vcdp->chgBus  (c+261,(vlTOPp->v__DOT__verilog_module__DOT__rv2isa__DOT__rs2_str),24);
	vcdp->chgBus  (c+262,(vlTOPp->v__DOT__verilog_module__DOT__rv2isa__DOT__rd_str),24);
	vcdp->chgArray(c+263,(vlTOPp->v__DOT__verilog_module__DOT__rv2isa__DOT__csr_str),72);
	vcdp->chgBus  (c+266,(vlTOPp->v__DOT__verilog_module__DOT__rv2isa__DOT__rs1),5);
	vcdp->chgBus  (c+267,(vlTOPp->v__DOT__verilog_module__DOT__rv2isa__DOT__rs2),5);
	vcdp->chgBus  (c+268,(vlTOPp->v__DOT__verilog_module__DOT__rv2isa__DOT__rd),5);
	vcdp->chgBus  (c+269,(vlTOPp->v__DOT__verilog_module__DOT__rv2isa__DOT__csr),12);
	vcdp->chgBus  (c+270,(vlTOPp->v__DOT__verilog_module__DOT__vc_trace__DOT__len0),32);
	vcdp->chgBus  (c+271,(vlTOPp->v__DOT__verilog_module__DOT__vc_trace__DOT__idx0),32);
	vcdp->chgBus  (c+272,(vlTOPp->v__DOT__verilog_module__DOT__vc_trace__DOT__idx1),32);
    }
}

void VProcBaseVRTL_0x18fc04dae4e29ba::traceChgThis__11(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VProcBaseVRTL_0x18fc04dae4e29ba* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgArray(c+273,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__str),4096);
	vcdp->chgBus  (c+401,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__vc_trace__DOT__len0),32);
	vcdp->chgBus  (c+402,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__vc_trace__DOT__len1),32);
	vcdp->chgBus  (c+403,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__vc_trace__DOT__idx0),32);
	vcdp->chgBus  (c+404,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__vc_trace__DOT__idx1),32);
    }
}

void VProcBaseVRTL_0x18fc04dae4e29ba::traceChgThis__12(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VProcBaseVRTL_0x18fc04dae4e29ba* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+405,(vlTOPp->v__DOT__verilog_module__DOT__imemreq_trace__DOT__type_str),16);
	vcdp->chgArray(c+406,(vlTOPp->v__DOT__verilog_module__DOT__imemreq_trace__DOT__str),4096);
	vcdp->chgBus  (c+534,(vlTOPp->v__DOT__verilog_module__DOT__imemreq_trace__DOT__vc_trace__DOT__len0),32);
	vcdp->chgBus  (c+535,(vlTOPp->v__DOT__verilog_module__DOT__imemreq_trace__DOT__vc_trace__DOT__len1),32);
	vcdp->chgBus  (c+536,(vlTOPp->v__DOT__verilog_module__DOT__imemreq_trace__DOT__vc_trace__DOT__idx0),32);
	vcdp->chgBus  (c+537,(vlTOPp->v__DOT__verilog_module__DOT__imemreq_trace__DOT__vc_trace__DOT__idx1),32);
    }
}

void VProcBaseVRTL_0x18fc04dae4e29ba::traceChgThis__13(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VProcBaseVRTL_0x18fc04dae4e29ba* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+538,(vlTOPp->v__DOT__verilog_module__DOT__dmemreq_trace__DOT__type_str),16);
	vcdp->chgArray(c+539,(vlTOPp->v__DOT__verilog_module__DOT__dmemreq_trace__DOT__str),4096);
	vcdp->chgBus  (c+667,(vlTOPp->v__DOT__verilog_module__DOT__dmemreq_trace__DOT__vc_trace__DOT__len0),32);
	vcdp->chgBus  (c+668,(vlTOPp->v__DOT__verilog_module__DOT__dmemreq_trace__DOT__vc_trace__DOT__len1),32);
	vcdp->chgBus  (c+669,(vlTOPp->v__DOT__verilog_module__DOT__dmemreq_trace__DOT__vc_trace__DOT__idx0),32);
	vcdp->chgBus  (c+670,(vlTOPp->v__DOT__verilog_module__DOT__dmemreq_trace__DOT__vc_trace__DOT__idx1),32);
    }
}

void VProcBaseVRTL_0x18fc04dae4e29ba::traceChgThis__14(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VProcBaseVRTL_0x18fc04dae4e29ba* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+671,(vlTOPp->v__DOT__verilog_module__DOT__imemresp_trace__DOT__type_str),16);
	vcdp->chgArray(c+672,(vlTOPp->v__DOT__verilog_module__DOT__imemresp_trace__DOT__str),4096);
	vcdp->chgBus  (c+800,(vlTOPp->v__DOT__verilog_module__DOT__imemresp_trace__DOT__vc_trace__DOT__len0),32);
	vcdp->chgBus  (c+801,(vlTOPp->v__DOT__verilog_module__DOT__imemresp_trace__DOT__vc_trace__DOT__len1),32);
	vcdp->chgBus  (c+802,(vlTOPp->v__DOT__verilog_module__DOT__imemresp_trace__DOT__vc_trace__DOT__idx0),32);
	vcdp->chgBus  (c+803,(vlTOPp->v__DOT__verilog_module__DOT__imemresp_trace__DOT__vc_trace__DOT__idx1),32);
    }
}

void VProcBaseVRTL_0x18fc04dae4e29ba::traceChgThis__15(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VProcBaseVRTL_0x18fc04dae4e29ba* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+804,(vlTOPp->v__DOT__verilog_module__DOT__dmemresp_trace__DOT__type_str),16);
	vcdp->chgArray(c+805,(vlTOPp->v__DOT__verilog_module__DOT__dmemresp_trace__DOT__str),4096);
	vcdp->chgBus  (c+933,(vlTOPp->v__DOT__verilog_module__DOT__dmemresp_trace__DOT__vc_trace__DOT__len0),32);
	vcdp->chgBus  (c+934,(vlTOPp->v__DOT__verilog_module__DOT__dmemresp_trace__DOT__vc_trace__DOT__len1),32);
	vcdp->chgBus  (c+935,(vlTOPp->v__DOT__verilog_module__DOT__dmemresp_trace__DOT__vc_trace__DOT__idx0),32);
	vcdp->chgBus  (c+936,(vlTOPp->v__DOT__verilog_module__DOT__dmemresp_trace__DOT__vc_trace__DOT__idx1),32);
    }
}

void VProcBaseVRTL_0x18fc04dae4e29ba::traceChgThis__16(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VProcBaseVRTL_0x18fc04dae4e29ba* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+939,(((2U == (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__dmemreq_type_X))
			        ? 1U : 0U)),3);
	vcdp->chgBit  (c+945,((2U == (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__dmemreq_type_X))));
	vcdp->chgBit  (c+954,(vlTOPp->v__DOT__verilog_module__DOT__imem_drop_unit__DOT__state));
	vcdp->chgBit  (c+955,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_F));
	vcdp->chgBit  (c+956,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_D));
	vcdp->chgBit  (c+957,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_X));
	vcdp->chgBit  (c+958,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_M));
	vcdp->chgBit  (c+959,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_W));
	vcdp->chgBus  (c+964,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__inst_X),32);
	vcdp->chgBus  (c+965,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__dmemreq_type_X),2);
	vcdp->chgBit  (c+966,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__wb_result_sel_X));
	vcdp->chgBit  (c+967,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_wen_pending_X));
	vcdp->chgBus  (c+968,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_waddr_X),5);
	vcdp->chgBit  (c+969,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__proc2mngr_val_X));
	vcdp->chgBit  (c+970,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stats_en_wen_X));
	vcdp->chgBus  (c+971,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__br_type_X),3);
	vcdp->chgBus  (c+972,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__j_type_X),2);
	vcdp->chgBus  (c+973,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__inst_M),32);
	vcdp->chgBus  (c+974,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__dmemreq_type_M),2);
	vcdp->chgBit  (c+975,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_wen_pending_M));
	vcdp->chgBus  (c+976,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_waddr_M),5);
	vcdp->chgBit  (c+977,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__proc2mngr_val_M));
	vcdp->chgBit  (c+978,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stats_en_wen_M));
	vcdp->chgBus  (c+979,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__inst_W),32);
	vcdp->chgBit  (c+980,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__proc2mngr_val_W));
	vcdp->chgBit  (c+981,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_wen_pending_W));
	vcdp->chgBit  (c+982,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stats_en_wen_pending_W));
	vcdp->chgBus  (c+983,((0x7fU & vlTOPp->v__DOT__verilog_module__DOT__inst_D)),7);
	vcdp->chgBus  (c+984,((7U & (vlTOPp->v__DOT__verilog_module__DOT__inst_D 
				     >> 0xcU))),3);
	vcdp->chgBit  (c+937,((1U & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full)))));
	vcdp->chgBit  (c+987,(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full));
	vcdp->chgBus  (c+988,((1U & ((IData)(1U) + (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr)))),1);
	vcdp->chgBus  (c+989,(((2U != (1U & ((IData)(1U) 
					     + (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr)))) 
			       & ((IData)(1U) + (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr)))),1);
	vcdp->chgBus  (c+990,((1U & ((IData)(1U) + (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr)))),1);
	vcdp->chgBus  (c+986,(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr),1);
	vcdp->chgBus  (c+985,(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr),1);
	vcdp->chgArray(c+991,(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile[0]),77);
	vcdp->chgArray(c+994,(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile[1]),77);
	vcdp->chgBit  (c+952,((1U & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
	vcdp->chgBit  (c+997,(vlTOPp->v__DOT__verilog_module__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full));
	vcdp->chgArray(c+998,(vlTOPp->v__DOT__verilog_module__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore),77);
	vcdp->chgBit  (c+940,((1U & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
	vcdp->chgBit  (c+953,((1U & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
	vcdp->chgBit  (c+1001,(vlTOPp->v__DOT__verilog_module__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full));
	vcdp->chgBus  (c+1002,(vlTOPp->v__DOT__verilog_module__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore),32);
	vcdp->chgBit  (c+942,((1U & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
	vcdp->chgBus  (c+1013,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__stats_en_W),32);
	vcdp->chgBus  (c+1004,(((IData)(4U) + vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__pc_F)),32);
	vcdp->chgBus  (c+1003,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__pc_F),32);
	vcdp->chgBus  (c+960,((0x1fU & (vlTOPp->v__DOT__verilog_module__DOT__inst_D 
					>> 7U))),5);
	vcdp->chgBus  (c+963,((0xfffU & (vlTOPp->v__DOT__verilog_module__DOT__inst_D 
					 >> 0x14U))),12);
	vcdp->chgBus  (c+950,(vlTOPp->v__DOT__verilog_module__DOT__inst_D),32);
	vcdp->chgBus  (c+961,((0x1fU & (vlTOPp->v__DOT__verilog_module__DOT__inst_D 
					>> 0xfU))),5);
	vcdp->chgBus  (c+962,((0x1fU & (vlTOPp->v__DOT__verilog_module__DOT__inst_D 
					>> 0x14U))),5);
	vcdp->chgBit  (c+948,(((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_W) 
			       & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_wen_pending_W))));
	vcdp->chgBus  (c+947,(vlTOPp->v__DOT__verilog_module__DOT__rf_waddr_W),5);
	vcdp->chgBus  (c+1014,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[0]),32);
	vcdp->chgBus  (c+1015,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[1]),32);
	vcdp->chgBus  (c+1016,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[2]),32);
	vcdp->chgBus  (c+1017,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[3]),32);
	vcdp->chgBus  (c+1018,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[4]),32);
	vcdp->chgBus  (c+1019,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[5]),32);
	vcdp->chgBus  (c+1020,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[6]),32);
	vcdp->chgBus  (c+1021,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[7]),32);
	vcdp->chgBus  (c+1022,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[8]),32);
	vcdp->chgBus  (c+1023,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[9]),32);
	vcdp->chgBus  (c+1024,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[10]),32);
	vcdp->chgBus  (c+1025,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[11]),32);
	vcdp->chgBus  (c+1026,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[12]),32);
	vcdp->chgBus  (c+1027,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[13]),32);
	vcdp->chgBus  (c+1028,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[14]),32);
	vcdp->chgBus  (c+1029,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[15]),32);
	vcdp->chgBus  (c+1030,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[16]),32);
	vcdp->chgBus  (c+1031,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[17]),32);
	vcdp->chgBus  (c+1032,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[18]),32);
	vcdp->chgBus  (c+1033,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[19]),32);
	vcdp->chgBus  (c+1034,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[20]),32);
	vcdp->chgBus  (c+1035,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[21]),32);
	vcdp->chgBus  (c+1036,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[22]),32);
	vcdp->chgBus  (c+1037,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[23]),32);
	vcdp->chgBus  (c+1038,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[24]),32);
	vcdp->chgBus  (c+1039,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[25]),32);
	vcdp->chgBus  (c+1040,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[26]),32);
	vcdp->chgBus  (c+1041,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[27]),32);
	vcdp->chgBus  (c+1042,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[28]),32);
	vcdp->chgBus  (c+1043,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[29]),32);
	vcdp->chgBus  (c+1044,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[30]),32);
	vcdp->chgBus  (c+1045,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[31]),32);
	vcdp->chgBus  (c+1006,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__pc_D),32);
	vcdp->chgBus  (c+1009,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__pc_X),32);
	vcdp->chgBus  (c+1005,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__br_target_X),32);
	vcdp->chgBus  (c+938,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__dmemreq_msg_data_reg_X_out),32);
	vcdp->chgBus  (c+944,(vlTOPp->v__DOT__verilog_module__DOT__alu_fn_X),4);
	vcdp->chgBit  (c+951,((1U & (IData)((VL_ULL(1) 
					     & (((((QData)((IData)(
								   (1U 
								    & (vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__op1_X 
								       >> 0x1fU)))) 
						   << 0x20U) 
						  | (QData)((IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__op1_X))) 
						 - 
						 (((QData)((IData)(
								   (1U 
								    & (vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__op2_X 
								       >> 0x1fU)))) 
						   << 0x20U) 
						  | (QData)((IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__op2_X)))) 
						>> 0x20U))))));
	vcdp->chgQuad (c+1046,((VL_ULL(0x1ffffffff) 
				& ((((QData)((IData)(
						     (1U 
						      & (vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__op1_X 
							 >> 0x1fU)))) 
				     << 0x20U) | (QData)((IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__op1_X))) 
				   - (((QData)((IData)(
						       (1U 
							& (vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__op2_X 
							   >> 0x1fU)))) 
				       << 0x20U) | (QData)((IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__op2_X)))))),33);
	vcdp->chgBus  (c+1007,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__op1_X),32);
	vcdp->chgBus  (c+1008,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__op2_X),32);
	vcdp->chgBus  (c+1049,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__ctrl__DOT__state),2);
	vcdp->chgBit  (c+1050,((0x20U <= (IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__ctrl__DOT__count))));
	vcdp->chgBit  (c+1051,((1U == (IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__ctrl__DOT__state))));
	vcdp->chgBit  (c+1052,((1U != (IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__ctrl__DOT__state))));
	vcdp->chgBit  (c+1054,((0U == (IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__ctrl__DOT__count))));
	vcdp->chgBus  (c+1053,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__ctrl__DOT__count),8);
	vcdp->chgBit  (c+1048,((1U & vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_reg_out)));
	vcdp->chgBus  (c+1056,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_reg_out),32);
	vcdp->chgBit  (c+1058,((1U & (IData)((VL_ULL(1) 
					      & (((QData)((IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__a_reg_out)) 
						  + (QData)((IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__result_reg_out))) 
						 >> 0x20U))))));
	vcdp->chgBus  (c+1055,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__a_reg_out),32);
	vcdp->chgBus  (c+1057,((vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__a_reg_out 
				+ vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__result_reg_out)),32);
	vcdp->chgBus  (c+1010,(((IData)(4U) + vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__pc_X)),32);
	vcdp->chgBus  (c+1011,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__result_reg_out),32);
	vcdp->chgBus  (c+943,(vlTOPp->v__DOT__verilog_module__DOT__ex_result_sel_X),2);
	vcdp->chgBus  (c+1012,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__ex_result_M),32);
	vcdp->chgBit  (c+946,(vlTOPp->v__DOT__verilog_module__DOT__wb_result_sel_M));
	vcdp->chgBus  (c+941,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__wb_result_W),32);
	vcdp->chgBit  (c+949,(((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_W) 
			       & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stats_en_wen_pending_W))));
    }
}

void VProcBaseVRTL_0x18fc04dae4e29ba::traceChgThis__17(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VProcBaseVRTL_0x18fc04dae4e29ba* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1082,(vlTOPp->mngr2proc_val));
	vcdp->chgBit  (c+1081,(vlTOPp->mngr2proc_rdy));
	vcdp->chgBit  (c+1060,(vlTOPp->commit_inst));
	vcdp->chgBit  (c+1088,((((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_D) 
				 & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__mngr2proc_rdy_D)) 
				& (~ (IData)(vlTOPp->mngr2proc_val)))));
	vcdp->chgBit  (c+1085,(vlTOPp->proc2mngr_val));
	vcdp->chgBit  (c+1084,(vlTOPp->proc2mngr_rdy));
	vcdp->chgBus  (c+1083,(vlTOPp->proc2mngr_msg),32);
	vcdp->chgBit  (c+1087,(vlTOPp->stats_en));
	vcdp->chgBus  (c+1093,((IData)(vlTOPp->imemresp_msg)),32);
	vcdp->chgBus  (c+1080,(vlTOPp->mngr2proc_msg),32);
	vcdp->chgBus  (c+1061,(vlTOPp->core_id),32);
	vcdp->chgBus  (c+1091,(((0U == (IData)(vlTOPp->v__DOT__verilog_module__DOT__csrr_sel_D))
				 ? vlTOPp->mngr2proc_msg
				 : ((1U == (IData)(vlTOPp->v__DOT__verilog_module__DOT__csrr_sel_D))
				     ? 1U : ((2U == (IData)(vlTOPp->v__DOT__verilog_module__DOT__csrr_sel_D))
					      ? vlTOPp->core_id
					      : 0U)))),32);
	vcdp->chgBus  (c+1090,(((0U == (IData)(vlTOPp->v__DOT__verilog_module__DOT__op2_sel_D))
				 ? vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf_rdata1_D
				 : ((1U == (IData)(vlTOPp->v__DOT__verilog_module__DOT__op2_sel_D))
				     ? vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__imm_D
				     : ((2U == (IData)(vlTOPp->v__DOT__verilog_module__DOT__op2_sel_D))
					 ? ((0U == (IData)(vlTOPp->v__DOT__verilog_module__DOT__csrr_sel_D))
					     ? vlTOPp->mngr2proc_msg
					     : ((1U 
						 == (IData)(vlTOPp->v__DOT__verilog_module__DOT__csrr_sel_D))
						 ? 1U
						 : 
						((2U 
						  == (IData)(vlTOPp->v__DOT__verilog_module__DOT__csrr_sel_D))
						  ? vlTOPp->core_id
						  : 0U)))
					 : 0U)))),32);
	vcdp->chgBit  (c+1094,(((IData)(vlTOPp->reset) 
				| (1U != (IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__ctrl__DOT__state)))));
	vcdp->chgBus  (c+1089,((IData)(vlTOPp->dmemresp_msg)),32);
	vcdp->chgBus  (c+1092,(((IData)(vlTOPp->v__DOT__verilog_module__DOT__wb_result_sel_M)
				 ? ((IData)(vlTOPp->v__DOT__verilog_module__DOT__wb_result_sel_M)
				     ? (IData)(vlTOPp->dmemresp_msg)
				     : 0U) : vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__ex_result_M)),32);
	vcdp->chgBit  (c+1075,(vlTOPp->imemreq_val));
	vcdp->chgBit  (c+1074,(vlTOPp->imemreq_rdy));
	vcdp->chgArray(c+1071,(vlTOPp->imemreq_msg),77);
	vcdp->chgBus  (c+1095,((7U & (vlTOPp->imemreq_msg[2U] 
				      >> 0xaU))),3);
	vcdp->chgBus  (c+1096,((0xffU & (vlTOPp->imemreq_msg[2U] 
					 >> 2U))),8);
	vcdp->chgBus  (c+1097,(((vlTOPp->imemreq_msg[2U] 
				 << 0x1eU) | (vlTOPp->imemreq_msg[1U] 
					      >> 2U))),32);
	vcdp->chgBus  (c+1098,((3U & vlTOPp->imemreq_msg[1U])),2);
	vcdp->chgBus  (c+1099,(vlTOPp->imemreq_msg[0U]),32);
	vcdp->chgBit  (c+1066,(vlTOPp->dmemreq_val));
	vcdp->chgBit  (c+1065,(vlTOPp->dmemreq_rdy));
	vcdp->chgArray(c+1062,(vlTOPp->dmemreq_msg),77);
	vcdp->chgBus  (c+1100,((7U & (vlTOPp->dmemreq_msg[2U] 
				      >> 0xaU))),3);
	vcdp->chgBus  (c+1101,((0xffU & (vlTOPp->dmemreq_msg[2U] 
					 >> 2U))),8);
	vcdp->chgBus  (c+1102,(((vlTOPp->dmemreq_msg[2U] 
				 << 0x1eU) | (vlTOPp->dmemreq_msg[1U] 
					      >> 2U))),32);
	vcdp->chgBus  (c+1103,((3U & vlTOPp->dmemreq_msg[1U])),2);
	vcdp->chgBus  (c+1104,(vlTOPp->dmemreq_msg[0U]),32);
	vcdp->chgBit  (c+1079,(vlTOPp->imemresp_val));
	vcdp->chgBit  (c+1078,(vlTOPp->imemresp_rdy));
	vcdp->chgQuad (c+1076,(vlTOPp->imemresp_msg),47);
	vcdp->chgBus  (c+1105,((7U & (IData)((vlTOPp->imemresp_msg 
					      >> 0x2cU)))),3);
	vcdp->chgBus  (c+1106,((0xffU & (IData)((vlTOPp->imemresp_msg 
						 >> 0x24U)))),8);
	vcdp->chgBus  (c+1107,((3U & (IData)((vlTOPp->imemresp_msg 
					      >> 0x22U)))),2);
	vcdp->chgBus  (c+1108,((3U & (IData)((vlTOPp->imemresp_msg 
					      >> 0x20U)))),2);
	vcdp->chgBus  (c+1109,((IData)(vlTOPp->imemresp_msg)),32);
	vcdp->chgBit  (c+1070,(vlTOPp->dmemresp_val));
	vcdp->chgBit  (c+1069,(vlTOPp->dmemresp_rdy));
	vcdp->chgQuad (c+1067,(vlTOPp->dmemresp_msg),47);
	vcdp->chgBus  (c+1110,((7U & (IData)((vlTOPp->dmemresp_msg 
					      >> 0x2cU)))),3);
	vcdp->chgBus  (c+1111,((0xffU & (IData)((vlTOPp->dmemresp_msg 
						 >> 0x24U)))),8);
	vcdp->chgBus  (c+1112,((3U & (IData)((vlTOPp->dmemresp_msg 
					      >> 0x22U)))),2);
	vcdp->chgBus  (c+1113,((3U & (IData)((vlTOPp->dmemresp_msg 
					      >> 0x20U)))),2);
	vcdp->chgBus  (c+1114,((IData)(vlTOPp->dmemresp_msg)),32);
	vcdp->chgBit  (c+1059,(vlTOPp->clk));
	vcdp->chgBit  (c+1086,(vlTOPp->reset));
    }
}
