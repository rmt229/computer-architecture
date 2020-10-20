// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VProcBaseVRTL_0x18fc04dae4e29ba_H_
#define _VProcBaseVRTL_0x18fc04dae4e29ba_H_

#include "verilated.h"
#include "VProcBaseVRTL_0x18fc04dae4e29ba__Inlines.h"
#include "VProcBaseVRTL_0x18fc04dae4e29ba__Dpi.h"

class VProcBaseVRTL_0x18fc04dae4e29ba__Syms;
class VProcBaseVRTL_0x18fc04dae4e29ba___024unit;
class VerilatedVcd;

//----------

VL_MODULE(VProcBaseVRTL_0x18fc04dae4e29ba) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    VProcBaseVRTL_0x18fc04dae4e29ba___024unit*	__PVT____024unit;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_OUT8(commit_inst,0,0);
    VL_IN8(dmemreq_rdy,0,0);
    VL_OUT8(dmemreq_val,0,0);
    VL_OUT8(dmemresp_rdy,0,0);
    VL_IN8(dmemresp_val,0,0);
    VL_IN8(imemreq_rdy,0,0);
    VL_OUT8(imemreq_val,0,0);
    VL_OUT8(imemresp_rdy,0,0);
    VL_IN8(imemresp_val,0,0);
    VL_OUT8(mngr2proc_rdy,0,0);
    VL_IN8(mngr2proc_val,0,0);
    VL_IN8(proc2mngr_rdy,0,0);
    VL_OUT8(proc2mngr_val,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(stats_en,0,0);
    VL_IN(core_id,31,0);
    //char	__VpadToAlign20[4];
    VL_OUTW(dmemreq_msg,76,0,3);
    //char	__VpadToAlign36[4];
    VL_OUTW(imemreq_msg,76,0,3);
    VL_IN(mngr2proc_msg,31,0);
    VL_OUT(proc2mngr_msg,31,0);
    //char	__VpadToAlign60[4];
    VL_IN64(dmemresp_msg,46,0);
    VL_IN64(imemresp_msg,46,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(v__DOT__verilog_module__DOT__imemreq_enq_val,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__dmemreq_enq_val,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__proc2mngr_enq_val,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__imemresp_val_drop,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__reg_en_F,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__pc_sel_F,1,0);
    VL_SIG8(v__DOT__verilog_module__DOT__reg_en_D,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__op1_sel_D,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__op2_sel_D,1,0);
    VL_SIG8(v__DOT__verilog_module__DOT__csrr_sel_D,1,0);
    VL_SIG8(v__DOT__verilog_module__DOT__imm_type_D,2,0);
    VL_SIG8(v__DOT__verilog_module__DOT__imul_req_val_D,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__imul_resp_rdy_X,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ex_result_sel_X,1,0);
    VL_SIG8(v__DOT__verilog_module__DOT__alu_fn_X,3,0);
    VL_SIG8(v__DOT__verilog_module__DOT__wb_result_sel_M,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__rf_waddr_W,4,0);
    VL_SIG8(v__DOT__verilog_module__DOT__imul_req_rdy_D,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__imul_resp_val_X,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__br_cond_eq_X,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__br_cond_ltu_X,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__imem_drop_unit__DOT__state,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__imem_drop_unit__DOT__next_state,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__imem_drop_unit__DOT__in_go,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__val_F,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__val_D,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__val_X,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__val_M,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__val_W,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__ostall_D,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__ostall_X,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__ostall_M,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__ostall_W,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__stall_F,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__stall_D,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__stall_X,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__stall_M,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__stall_W,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__osquash_X,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__squash_F,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__squash_D,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__pc_redirect_D,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__pc_redirect_X,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__pc_sel_D,1,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__pc_sel_X,1,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__inst_val_D,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__j_type_D,1,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__br_type_D,2,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__rs1_en_D,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__rs2_en_D,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__alu_fn_D,3,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__ex_result_sel_D,1,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__dmemreq_type_D,1,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__wb_result_sel_D,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__rf_wen_pending_D,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__csrr_D,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__csrw_D,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__proc2mngr_val_D,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__mngr2proc_rdy_D,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__stats_en_wen_D,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__dmemreq_type_X,1,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__wb_result_sel_X,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__rf_wen_pending_X,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__rf_waddr_X,4,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__proc2mngr_val_X,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__stats_en_wen_X,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__br_type_X,2,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__r_w,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__j_type_X,1,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__dmemreq_type_M,1,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__rf_wen_pending_M,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__rf_waddr_M,4,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__proc2mngr_val_M,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__stats_en_wen_M,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__proc2mngr_val_W,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__rf_wen_pending_W,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__stats_en_wen_pending_W,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__ctrl__DOT__inst_unpack__DOT__funct7,6,0);
    VL_SIG8(v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr_next,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr_next,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full_next,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_enq,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_deq,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_bypass,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr_inc,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__dpath__DOT__inst_unpack__DOT__funct7,6,0);
    VL_SIG8(v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__result_en,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__a_mux_sel,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__b_mux_sel,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__result_mux_sel,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__add_mux_sel,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__shift_count,3,0);
    VL_SIG8(v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__count_is_max,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__ctrl__DOT__state,1,0);
    VL_SIG8(v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__ctrl__DOT__next_state,1,0);
    VL_SIG8(v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__ctrl__DOT__count,7,0);
    VL_SIG8(v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__ctrl__DOT__do_add_shift,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__ctrl__DOT__do_shift,0,0);
    VL_SIG8(v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__ctrl__DOT__cycle_counter__DOT__count_next,7,0);
    VL_SIG8(v__DOT__verilog_module__DOT__rv2isa__DOT__rs1,4,0);
    VL_SIG8(v__DOT__verilog_module__DOT__rv2isa__DOT__rs2,4,0);
    VL_SIG8(v__DOT__verilog_module__DOT__rv2isa__DOT__rd,4,0);
    VL_SIG16(v__DOT__verilog_module__DOT__rv2isa__DOT__csr,11,0);
    VL_SIG16(v__DOT__verilog_module__DOT__imemreq_trace__DOT__type_str,15,0);
    VL_SIG16(v__DOT__verilog_module__DOT__dmemreq_trace__DOT__type_str,15,0);
    VL_SIG16(v__DOT__verilog_module__DOT__imemresp_trace__DOT__type_str,15,0);
    VL_SIG16(v__DOT__verilog_module__DOT__dmemresp_trace__DOT__type_str,15,0);
    //char	__VpadToAlign210[2];
    VL_SIG(v__DOT__verilog_module__DOT__inst_D,31,0);
    VL_SIGW(v__DOT__verilog_module__DOT__str,4095,0,128);
    VL_SIG(v__DOT__verilog_module__DOT__ctrl__DOT__inst_X,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__ctrl__DOT__inst_M,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__ctrl__DOT__inst_W,31,0);
    //char	__VpadToAlign740[4];
    VL_SIGW(v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__read_data,76,0,3);
    //char	__VpadToAlign756[4];
    VL_SIGW(v__DOT__verilog_module__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore,76,0,3);
    VL_SIG(v__DOT__verilog_module__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__dpath__DOT__pc_F,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__dpath__DOT__pc_next_F,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__dpath__DOT__br_target_X,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__dpath__DOT__jal_target_D,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__dpath__DOT__pc_D,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__dpath__DOT__imm_D,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__dpath__DOT__rf_rdata1_D,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__dpath__DOT__op1_X,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__dpath__DOT__op2_X,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__dpath__DOT__pc_X,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__dpath__DOT__dmemreq_msg_data_reg_X_out,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__dpath__DOT__alu_result_X,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__dpath__DOT__ex_result_M,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__dpath__DOT__wb_result_W,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__dpath__DOT__stats_en_W,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rf_read_data0,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rf_read_data1,31,0);
    //char	__VpadToAlign844[4];
    VL_SIGW(v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__str,4095,0,128);
    VL_SIG(v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__a_shift_out,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__a_reg_out,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_shift_out,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_reg_out,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__result_reg_out,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__result_mux_out,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__vc_trace__DOT__len0,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__vc_trace__DOT__len1,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__vc_trace__DOT__idx0,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__vc_trace__DOT__idx1,31,0);
    VL_SIGW(v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__vc_trace__DOT__storage,4095,0,128);
    VL_SIG(v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__vc_trace__DOT__cycles,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__rv2isa__DOT__rs1_str,23,0);
    VL_SIG(v__DOT__verilog_module__DOT__rv2isa__DOT__rs2_str,23,0);
    VL_SIG(v__DOT__verilog_module__DOT__rv2isa__DOT__rd_str,23,0);
    VL_SIGW(v__DOT__verilog_module__DOT__rv2isa__DOT__csr_str,71,0,3);
    VL_SIG(v__DOT__verilog_module__DOT__vc_trace__DOT__len0,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__vc_trace__DOT__len1,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__vc_trace__DOT__idx0,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__vc_trace__DOT__idx1,31,0);
    //char	__VpadToAlign1956[4];
    VL_SIGW(v__DOT__verilog_module__DOT__vc_trace__DOT__storage,4095,0,128);
    VL_SIG(v__DOT__verilog_module__DOT__vc_trace__DOT__cycles,31,0);
    //char	__VpadToAlign2476[4];
    VL_SIGW(v__DOT__verilog_module__DOT__imemreq_trace__DOT__str,4095,0,128);
    VL_SIG(v__DOT__verilog_module__DOT__imemreq_trace__DOT__vc_trace__DOT__len0,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__imemreq_trace__DOT__vc_trace__DOT__len1,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__imemreq_trace__DOT__vc_trace__DOT__idx0,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__imemreq_trace__DOT__vc_trace__DOT__idx1,31,0);
    VL_SIGW(v__DOT__verilog_module__DOT__imemreq_trace__DOT__vc_trace__DOT__storage,4095,0,128);
    VL_SIG(v__DOT__verilog_module__DOT__imemreq_trace__DOT__vc_trace__DOT__cycles,31,0);
    //char	__VpadToAlign3524[4];
    VL_SIGW(v__DOT__verilog_module__DOT__dmemreq_trace__DOT__str,4095,0,128);
    VL_SIG(v__DOT__verilog_module__DOT__dmemreq_trace__DOT__vc_trace__DOT__len0,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__dmemreq_trace__DOT__vc_trace__DOT__len1,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__dmemreq_trace__DOT__vc_trace__DOT__idx0,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__dmemreq_trace__DOT__vc_trace__DOT__idx1,31,0);
    VL_SIGW(v__DOT__verilog_module__DOT__dmemreq_trace__DOT__vc_trace__DOT__storage,4095,0,128);
    VL_SIG(v__DOT__verilog_module__DOT__dmemreq_trace__DOT__vc_trace__DOT__cycles,31,0);
    //char	__VpadToAlign4572[4];
    VL_SIGW(v__DOT__verilog_module__DOT__imemresp_trace__DOT__str,4095,0,128);
    VL_SIG(v__DOT__verilog_module__DOT__imemresp_trace__DOT__vc_trace__DOT__len0,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__imemresp_trace__DOT__vc_trace__DOT__len1,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__imemresp_trace__DOT__vc_trace__DOT__idx0,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__imemresp_trace__DOT__vc_trace__DOT__idx1,31,0);
    VL_SIGW(v__DOT__verilog_module__DOT__imemresp_trace__DOT__vc_trace__DOT__storage,4095,0,128);
    VL_SIG(v__DOT__verilog_module__DOT__imemresp_trace__DOT__vc_trace__DOT__cycles,31,0);
    //char	__VpadToAlign5620[4];
    VL_SIGW(v__DOT__verilog_module__DOT__dmemresp_trace__DOT__str,4095,0,128);
    VL_SIG(v__DOT__verilog_module__DOT__dmemresp_trace__DOT__vc_trace__DOT__len0,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__dmemresp_trace__DOT__vc_trace__DOT__len1,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__dmemresp_trace__DOT__vc_trace__DOT__idx0,31,0);
    VL_SIG(v__DOT__verilog_module__DOT__dmemresp_trace__DOT__vc_trace__DOT__idx1,31,0);
    VL_SIGW(v__DOT__verilog_module__DOT__dmemresp_trace__DOT__vc_trace__DOT__storage,4095,0,128);
    VL_SIG(v__DOT__verilog_module__DOT__dmemresp_trace__DOT__vc_trace__DOT__cycles,31,0);
    //char	__VpadToAlign6668[4];
    VL_SIGW(v__DOT__verilog_module__DOT__imemreq_enq_msg,76,0,3);
    //char	__VpadToAlign6684[4];
    VL_SIGW(v__DOT__verilog_module__DOT__dmemreq_enq_msg,76,0,3);
    //char	__VpadToAlign6700[4];
    VL_SIG64(v__DOT__verilog_module__DOT__dpath__DOT__imul_req_msg,63,0);
    VL_SIGW(v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile[2],76,0,3);
    VL_SIG(v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[32],31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    static VL_ST_SIG8(__Vtable1_v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__ctrl__DOT__next_state[128],1,0);
    static VL_ST_SIG8(__Vtable2_v__DOT__verilog_module__DOT__imul_req_rdy_D[16],0,0);
    static VL_ST_SIG8(__Vtable2_v__DOT__verilog_module__DOT__imul_resp_val_X[16],0,0);
    static VL_ST_SIG8(__Vtable2_v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__result_en[16],0,0);
    static VL_ST_SIG8(__Vtable2_v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__a_mux_sel[16],0,0);
    static VL_ST_SIG8(__Vtable2_v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__b_mux_sel[16],0,0);
    static VL_ST_SIG8(__Vtable2_v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__add_mux_sel[16],0,0);
    static VL_ST_SIG8(__Vtable2_v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__result_mux_sel[16],0,0);
    VL_SIG8(__Vtableidx1,6,0);
    VL_SIG8(__Vtableidx2,3,0);
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vchglast__TOP__v__DOT__verilog_module__DOT__ctrl__DOT__stall_F,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VProcBaseVRTL_0x18fc04dae4e29ba__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VProcBaseVRTL_0x18fc04dae4e29ba& operator= (const VProcBaseVRTL_0x18fc04dae4e29ba&);	///< Copying not allowed
    VProcBaseVRTL_0x18fc04dae4e29ba(const VProcBaseVRTL_0x18fc04dae4e29ba&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VProcBaseVRTL_0x18fc04dae4e29ba(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VProcBaseVRTL_0x18fc04dae4e29ba();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* symsp, bool first);
    static void	__Vdpiexp_v__DOT__verilog_module__DOT__dmemreq_trace__DOT__line_trace_TOP(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, WData (& trace_str)[128]);
    static void	__Vdpiexp_v__DOT__verilog_module__DOT__dmemresp_trace__DOT__line_trace_TOP(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, WData (& trace_str)[128]);
    static void	__Vdpiexp_v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__line_trace_TOP(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, WData (& trace_str)[128]);
    static void	__Vdpiexp_v__DOT__verilog_module__DOT__imemreq_trace__DOT__line_trace_TOP(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, WData (& trace_str)[128]);
    static void	__Vdpiexp_v__DOT__verilog_module__DOT__imemresp_trace__DOT__line_trace_TOP(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, WData (& trace_str)[128]);
    static void	__Vdpiexp_v__DOT__verilog_module__DOT__line_trace_TOP(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, WData (& trace_str)[128]);
  private:
    static QData	_change_request(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__10(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp);
    static void	_combo__TOP__13(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp);
    static void	_combo__TOP__15(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp);
    static void	_combo__TOP__4(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp);
    static void	_combo__TOP__7(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp);
    static void	_eval(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp);
    static void	_eval_initial(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp);
    static void	_eval_settle(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp);
    static void	_initial__TOP__1(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__11(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__2(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__5(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__8(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp);
    static void	_settle__TOP__12(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp);
    static void	_settle__TOP__14(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp);
    static void	_settle__TOP__16(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp);
    static void	_settle__TOP__3(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp);
    static void	_settle__TOP__6(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp);
    static void	_settle__TOP__9(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp);
    static void	line_trace(svBitVecVal* trace_str);
    static void	traceChgThis(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__10(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__11(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__12(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__13(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__14(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__15(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__16(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__17(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__5(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__6(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__7(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__8(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__9(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
