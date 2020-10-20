// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VProcBaseVRTL_0x18fc04dae4e29ba__Syms.h"


//======================

void VProcBaseVRTL_0x18fc04dae4e29ba::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VProcBaseVRTL_0x18fc04dae4e29ba::traceInit, &VProcBaseVRTL_0x18fc04dae4e29ba::traceFull, &VProcBaseVRTL_0x18fc04dae4e29ba::traceChg, this);
}
void VProcBaseVRTL_0x18fc04dae4e29ba::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VProcBaseVRTL_0x18fc04dae4e29ba* t=(VProcBaseVRTL_0x18fc04dae4e29ba*)userthis;
    VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VProcBaseVRTL_0x18fc04dae4e29ba::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VProcBaseVRTL_0x18fc04dae4e29ba* t=(VProcBaseVRTL_0x18fc04dae4e29ba*)userthis;
    VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VProcBaseVRTL_0x18fc04dae4e29ba::traceInitThis(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VProcBaseVRTL_0x18fc04dae4e29ba* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VProcBaseVRTL_0x18fc04dae4e29ba::traceFullThis(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VProcBaseVRTL_0x18fc04dae4e29ba* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VProcBaseVRTL_0x18fc04dae4e29ba::traceInitThis__1(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VProcBaseVRTL_0x18fc04dae4e29ba* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBus  (c+1059,"clk",-1,0,0);
	vcdp->declBus  (c+1060,"commit_inst",-1,0,0);
	vcdp->declBus  (c+1061,"core_id",-1,31,0);
	vcdp->declArray(c+1062,"dmemreq_msg",-1,76,0);
	vcdp->declBus  (c+1065,"dmemreq_rdy",-1,0,0);
	vcdp->declBus  (c+1066,"dmemreq_val",-1,0,0);
	vcdp->declQuad (c+1067,"dmemresp_msg",-1,46,0);
	vcdp->declBus  (c+1069,"dmemresp_rdy",-1,0,0);
	vcdp->declBus  (c+1070,"dmemresp_val",-1,0,0);
	vcdp->declArray(c+1071,"imemreq_msg",-1,76,0);
	vcdp->declBus  (c+1074,"imemreq_rdy",-1,0,0);
	vcdp->declBus  (c+1075,"imemreq_val",-1,0,0);
	vcdp->declQuad (c+1076,"imemresp_msg",-1,46,0);
	vcdp->declBus  (c+1078,"imemresp_rdy",-1,0,0);
	vcdp->declBus  (c+1079,"imemresp_val",-1,0,0);
	vcdp->declBus  (c+1080,"mngr2proc_msg",-1,31,0);
	vcdp->declBus  (c+1081,"mngr2proc_rdy",-1,0,0);
	vcdp->declBus  (c+1082,"mngr2proc_val",-1,0,0);
	vcdp->declBus  (c+1083,"proc2mngr_msg",-1,31,0);
	vcdp->declBus  (c+1084,"proc2mngr_rdy",-1,0,0);
	vcdp->declBus  (c+1085,"proc2mngr_val",-1,0,0);
	vcdp->declBus  (c+1086,"reset",-1,0,0);
	vcdp->declBus  (c+1087,"stats_en",-1,0,0);
	vcdp->declBus  (c+1059,"v clk",-1,0,0);
	vcdp->declBus  (c+1060,"v commit_inst",-1,0,0);
	vcdp->declBus  (c+1061,"v core_id",-1,31,0);
	vcdp->declArray(c+1062,"v dmemreq_msg",-1,76,0);
	vcdp->declBus  (c+1065,"v dmemreq_rdy",-1,0,0);
	vcdp->declBus  (c+1066,"v dmemreq_val",-1,0,0);
	vcdp->declQuad (c+1067,"v dmemresp_msg",-1,46,0);
	vcdp->declBus  (c+1069,"v dmemresp_rdy",-1,0,0);
	vcdp->declBus  (c+1070,"v dmemresp_val",-1,0,0);
	vcdp->declArray(c+1071,"v imemreq_msg",-1,76,0);
	vcdp->declBus  (c+1074,"v imemreq_rdy",-1,0,0);
	vcdp->declBus  (c+1075,"v imemreq_val",-1,0,0);
	vcdp->declQuad (c+1076,"v imemresp_msg",-1,46,0);
	vcdp->declBus  (c+1078,"v imemresp_rdy",-1,0,0);
	vcdp->declBus  (c+1079,"v imemresp_val",-1,0,0);
	vcdp->declBus  (c+1080,"v mngr2proc_msg",-1,31,0);
	vcdp->declBus  (c+1081,"v mngr2proc_rdy",-1,0,0);
	vcdp->declBus  (c+1082,"v mngr2proc_val",-1,0,0);
	vcdp->declBus  (c+1083,"v proc2mngr_msg",-1,31,0);
	vcdp->declBus  (c+1084,"v proc2mngr_rdy",-1,0,0);
	vcdp->declBus  (c+1085,"v proc2mngr_val",-1,0,0);
	vcdp->declBus  (c+1086,"v reset",-1,0,0);
	vcdp->declBus  (c+1087,"v stats_en",-1,0,0);
	vcdp->declBus  (c+1115,"v verilog_module p_num_cores",-1,31,0);
	vcdp->declBit  (c+1059,"v verilog_module clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module reset",-1);
	vcdp->declBus  (c+1061,"v verilog_module core_id",-1,31,0);
	vcdp->declBus  (c+1080,"v verilog_module mngr2proc_msg",-1,31,0);
	vcdp->declBit  (c+1082,"v verilog_module mngr2proc_val",-1);
	vcdp->declBit  (c+1081,"v verilog_module mngr2proc_rdy",-1);
	vcdp->declBus  (c+1083,"v verilog_module proc2mngr_msg",-1,31,0);
	vcdp->declBit  (c+1085,"v verilog_module proc2mngr_val",-1);
	vcdp->declBit  (c+1084,"v verilog_module proc2mngr_rdy",-1);
	vcdp->declArray(c+1071,"v verilog_module imemreq_msg",-1,76,0);
	vcdp->declBit  (c+1075,"v verilog_module imemreq_val",-1);
	vcdp->declBit  (c+1074,"v verilog_module imemreq_rdy",-1);
	vcdp->declQuad (c+1076,"v verilog_module imemresp_msg",-1,46,0);
	vcdp->declBit  (c+1079,"v verilog_module imemresp_val",-1);
	vcdp->declBit  (c+1078,"v verilog_module imemresp_rdy",-1);
	vcdp->declArray(c+1062,"v verilog_module dmemreq_msg",-1,76,0);
	vcdp->declBit  (c+1066,"v verilog_module dmemreq_val",-1);
	vcdp->declBit  (c+1065,"v verilog_module dmemreq_rdy",-1);
	vcdp->declQuad (c+1067,"v verilog_module dmemresp_msg",-1,46,0);
	vcdp->declBit  (c+1070,"v verilog_module dmemresp_val",-1);
	vcdp->declBit  (c+1069,"v verilog_module dmemresp_rdy",-1);
	vcdp->declBit  (c+1060,"v verilog_module commit_inst",-1);
	vcdp->declBit  (c+1087,"v verilog_module stats_en",-1);
	vcdp->declBus  (c+127,"v verilog_module imemreq_msg_addr",-1,31,0);
	vcdp->declArray(c+128,"v verilog_module imemreq_enq_msg",-1,76,0);
	vcdp->declBit  (c+64,"v verilog_module imemreq_enq_val",-1);
	vcdp->declBit  (c+937,"v verilog_module imemreq_enq_rdy",-1);
	vcdp->declBus  (c+1,"v verilog_module dmemreq_msg_addr",-1,31,0);
	vcdp->declBus  (c+938,"v verilog_module dmemreq_msg_data",-1,31,0);
	vcdp->declBus  (c+939,"v verilog_module dmemreq_msg_type",-1,2,0);
	vcdp->declArray(c+96,"v verilog_module dmemreq_enq_msg",-1,76,0);
	vcdp->declBit  (c+65,"v verilog_module dmemreq_enq_val",-1);
	vcdp->declBit  (c+940,"v verilog_module dmemreq_enq_rdy",-1);
	vcdp->declBus  (c+941,"v verilog_module proc2mngr_enq_msg",-1,31,0);
	vcdp->declBit  (c+99,"v verilog_module proc2mngr_enq_val",-1);
	vcdp->declBit  (c+942,"v verilog_module proc2mngr_enq_rdy",-1);
	vcdp->declBit  (c+66,"v verilog_module imemresp_val_drop",-1);
	vcdp->declBit  (c+67,"v verilog_module imemresp_rdy_drop",-1);
	vcdp->declBit  (c+68,"v verilog_module imemresp_drop",-1);
	vcdp->declBit  (c+69,"v verilog_module reg_en_F",-1);
	vcdp->declBus  (c+100,"v verilog_module pc_sel_F",-1,1,0);
	vcdp->declBit  (c+70,"v verilog_module reg_en_D",-1);
	vcdp->declBit  (c+2,"v verilog_module op1_sel_D",-1);
	vcdp->declBus  (c+3,"v verilog_module op2_sel_D",-1,1,0);
	vcdp->declBus  (c+101,"v verilog_module csrr_sel_D",-1,1,0);
	vcdp->declBus  (c+4,"v verilog_module imm_type_D",-1,2,0);
	vcdp->declBit  (c+71,"v verilog_module imul_req_val_D",-1);
	vcdp->declBit  (c+72,"v verilog_module imul_resp_rdy_X",-1);
	vcdp->declBit  (c+73,"v verilog_module reg_en_X",-1);
	vcdp->declBus  (c+943,"v verilog_module ex_result_sel_X",-1,1,0);
	vcdp->declBus  (c+944,"v verilog_module alu_fn_X",-1,3,0);
	vcdp->declBit  (c+945,"v verilog_module mem_wen",-1);
	vcdp->declBit  (c+74,"v verilog_module reg_en_M",-1);
	vcdp->declBit  (c+946,"v verilog_module wb_result_sel_M",-1);
	vcdp->declBit  (c+102,"v verilog_module reg_en_W",-1);
	vcdp->declBus  (c+947,"v verilog_module rf_waddr_W",-1,4,0);
	vcdp->declBit  (c+948,"v verilog_module rf_wen_W",-1);
	vcdp->declBit  (c+949,"v verilog_module stats_en_wen_W",-1);
	vcdp->declBus  (c+950,"v verilog_module inst_D",-1,31,0);
	vcdp->declBit  (c+103,"v verilog_module imul_req_rdy_D",-1);
	vcdp->declBit  (c+104,"v verilog_module imul_resp_val_X",-1);
	vcdp->declBit  (c+5,"v verilog_module br_cond_eq_X",-1);
	vcdp->declBit  (c+951,"v verilog_module br_cond_lt_X",-1);
	vcdp->declBit  (c+6,"v verilog_module br_cond_ltu_X",-1);
	vcdp->declQuad (c+1076,"v verilog_module imemresp_msg_drop",-1,46,0);
	vcdp->declBus  (c+7,"v verilog_module imem_queue_num_free_entries",-1,1,0);
	vcdp->declBit  (c+952,"v verilog_module dmem_queue_num_free_entries",-1);
	vcdp->declBit  (c+953,"v verilog_module proc2mngr_queue_num_free_entries",-1);
	vcdp->declArray(c+132,"v verilog_module str",-1,4095,0);
	vcdp->declBus  (c+1116,"v verilog_module imem_drop_unit p_msg_nbits",-1,31,0);
	vcdp->declBit  (c+1059,"v verilog_module imem_drop_unit clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module imem_drop_unit reset",-1);
	vcdp->declBit  (c+68,"v verilog_module imem_drop_unit drop",-1);
	vcdp->declQuad (c+1076,"v verilog_module imem_drop_unit in_msg",-1,46,0);
	vcdp->declBit  (c+1079,"v verilog_module imem_drop_unit in_val",-1);
	vcdp->declBit  (c+1078,"v verilog_module imem_drop_unit in_rdy",-1);
	vcdp->declQuad (c+1076,"v verilog_module imem_drop_unit out_msg",-1,46,0);
	vcdp->declBit  (c+66,"v verilog_module imem_drop_unit out_val",-1);
	vcdp->declBit  (c+67,"v verilog_module imem_drop_unit out_rdy",-1);
	vcdp->declBus  (c+1117,"v verilog_module imem_drop_unit c_state_pass",-1,0,0);
	vcdp->declBus  (c+1118,"v verilog_module imem_drop_unit c_state_drop",-1,0,0);
	vcdp->declBit  (c+954,"v verilog_module imem_drop_unit state",-1);
	vcdp->declBit  (c+51,"v verilog_module imem_drop_unit next_state",-1);
	vcdp->declBit  (c+75,"v verilog_module imem_drop_unit in_go",-1);
	vcdp->declBit  (c+1059,"v verilog_module ctrl clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module ctrl reset",-1);
	vcdp->declBit  (c+64,"v verilog_module ctrl imemreq_val",-1);
	vcdp->declBit  (c+937,"v verilog_module ctrl imemreq_rdy",-1);
	vcdp->declBit  (c+66,"v verilog_module ctrl imemresp_val",-1);
	vcdp->declBit  (c+67,"v verilog_module ctrl imemresp_rdy",-1);
	vcdp->declBit  (c+68,"v verilog_module ctrl imemresp_drop",-1);
	vcdp->declBit  (c+65,"v verilog_module ctrl dmemreq_val",-1);
	vcdp->declBit  (c+940,"v verilog_module ctrl dmemreq_rdy",-1);
	vcdp->declBit  (c+945,"v verilog_module ctrl mem_wen",-1);
	vcdp->declBit  (c+1070,"v verilog_module ctrl dmemresp_val",-1);
	vcdp->declBit  (c+1069,"v verilog_module ctrl dmemresp_rdy",-1);
	vcdp->declBit  (c+1082,"v verilog_module ctrl mngr2proc_val",-1);
	vcdp->declBit  (c+1081,"v verilog_module ctrl mngr2proc_rdy",-1);
	vcdp->declBit  (c+99,"v verilog_module ctrl proc2mngr_val",-1);
	vcdp->declBit  (c+942,"v verilog_module ctrl proc2mngr_rdy",-1);
	vcdp->declBit  (c+69,"v verilog_module ctrl reg_en_F",-1);
	vcdp->declBus  (c+100,"v verilog_module ctrl pc_sel_F",-1,1,0);
	vcdp->declBit  (c+70,"v verilog_module ctrl reg_en_D",-1);
	vcdp->declBit  (c+2,"v verilog_module ctrl op1_sel_D",-1);
	vcdp->declBus  (c+3,"v verilog_module ctrl op2_sel_D",-1,1,0);
	vcdp->declBus  (c+101,"v verilog_module ctrl csrr_sel_D",-1,1,0);
	vcdp->declBus  (c+4,"v verilog_module ctrl imm_type_D",-1,2,0);
	vcdp->declBit  (c+71,"v verilog_module ctrl imul_req_val_D",-1);
	vcdp->declBit  (c+73,"v verilog_module ctrl reg_en_X",-1);
	vcdp->declBus  (c+943,"v verilog_module ctrl ex_result_sel_X",-1,1,0);
	vcdp->declBus  (c+944,"v verilog_module ctrl alu_fn_X",-1,3,0);
	vcdp->declBit  (c+72,"v verilog_module ctrl imul_resp_rdy_X",-1);
	vcdp->declBit  (c+74,"v verilog_module ctrl reg_en_M",-1);
	vcdp->declBit  (c+946,"v verilog_module ctrl wb_result_sel_M",-1);
	vcdp->declBit  (c+102,"v verilog_module ctrl reg_en_W",-1);
	vcdp->declBus  (c+947,"v verilog_module ctrl rf_waddr_W",-1,4,0);
	vcdp->declBit  (c+948,"v verilog_module ctrl rf_wen_W",-1);
	vcdp->declBus  (c+950,"v verilog_module ctrl inst_D",-1,31,0);
	vcdp->declBit  (c+103,"v verilog_module ctrl imul_req_rdy_D",-1);
	vcdp->declBit  (c+104,"v verilog_module ctrl imul_resp_val_X",-1);
	vcdp->declBit  (c+5,"v verilog_module ctrl br_cond_eq_X",-1);
	vcdp->declBit  (c+951,"v verilog_module ctrl br_cond_lt_X",-1);
	vcdp->declBit  (c+6,"v verilog_module ctrl br_cond_ltu_X",-1);
	vcdp->declBit  (c+949,"v verilog_module ctrl stats_en_wen_W",-1);
	vcdp->declBit  (c+1060,"v verilog_module ctrl commit_inst",-1);
	vcdp->declBit  (c+955,"v verilog_module ctrl val_F",-1);
	vcdp->declBit  (c+956,"v verilog_module ctrl val_D",-1);
	vcdp->declBit  (c+957,"v verilog_module ctrl val_X",-1);
	vcdp->declBit  (c+958,"v verilog_module ctrl val_M",-1);
	vcdp->declBit  (c+959,"v verilog_module ctrl val_W",-1);
	vcdp->declBit  (c+52,"v verilog_module ctrl ostall_F",-1);
	vcdp->declBit  (c+76,"v verilog_module ctrl ostall_D",-1);
	vcdp->declBit  (c+105,"v verilog_module ctrl ostall_X",-1);
	vcdp->declBit  (c+77,"v verilog_module ctrl ostall_M",-1);
	vcdp->declBit  (c+8,"v verilog_module ctrl ostall_W",-1);
	vcdp->declBit  (c+78,"v verilog_module ctrl stall_F",-1);
	vcdp->declBit  (c+79,"v verilog_module ctrl stall_D",-1);
	vcdp->declBit  (c+80,"v verilog_module ctrl stall_X",-1);
	vcdp->declBit  (c+81,"v verilog_module ctrl stall_M",-1);
	vcdp->declBit  (c+106,"v verilog_module ctrl stall_W",-1);
	vcdp->declBit  (c+9,"v verilog_module ctrl osquash_D",-1);
	vcdp->declBit  (c+82,"v verilog_module ctrl osquash_X",-1);
	vcdp->declBit  (c+68,"v verilog_module ctrl squash_F",-1);
	vcdp->declBit  (c+83,"v verilog_module ctrl squash_D",-1);
	vcdp->declBit  (c+107,"v verilog_module ctrl pc_redirect_D",-1);
	vcdp->declBit  (c+108,"v verilog_module ctrl pc_redirect_X",-1);
	vcdp->declBus  (c+109,"v verilog_module ctrl pc_sel_D",-1,1,0);
	vcdp->declBus  (c+110,"v verilog_module ctrl pc_sel_X",-1,1,0);
	vcdp->declBus  (c+1119,"v verilog_module ctrl pm_pc",-1,1,0);
	vcdp->declBus  (c+1120,"v verilog_module ctrl pm_jal",-1,1,0);
	vcdp->declBus  (c+1121,"v verilog_module ctrl pm_br",-1,1,0);
	vcdp->declBus  (c+1122,"v verilog_module ctrl pm_jalr",-1,1,0);
	vcdp->declBit  (c+53,"v verilog_module ctrl next_val_F",-1);
	vcdp->declBus  (c+960,"v verilog_module ctrl inst_rd_D",-1,4,0);
	vcdp->declBus  (c+961,"v verilog_module ctrl inst_rs1_D",-1,4,0);
	vcdp->declBus  (c+962,"v verilog_module ctrl inst_rs2_D",-1,4,0);
	vcdp->declBus  (c+963,"v verilog_module ctrl inst_csr_D",-1,11,0);
	vcdp->declBus  (c+1117,"v verilog_module ctrl n",-1,0,0);
	vcdp->declBus  (c+1118,"v verilog_module ctrl y",-1,0,0);
	vcdp->declBus  (c+1119,"v verilog_module ctrl j_n",-1,1,0);
	vcdp->declBus  (c+1120,"v verilog_module ctrl jal",-1,1,0);
	vcdp->declBus  (c+1121,"v verilog_module ctrl jalr",-1,1,0);
	vcdp->declBus  (c+1123,"v verilog_module ctrl br_x",-1,2,0);
	vcdp->declBus  (c+1123,"v verilog_module ctrl br_na",-1,2,0);
	vcdp->declBus  (c+1124,"v verilog_module ctrl br_bne",-1,2,0);
	vcdp->declBus  (c+1125,"v verilog_module ctrl br_beq",-1,2,0);
	vcdp->declBus  (c+1126,"v verilog_module ctrl br_blt",-1,2,0);
	vcdp->declBus  (c+1127,"v verilog_module ctrl br_bltu",-1,2,0);
	vcdp->declBus  (c+1128,"v verilog_module ctrl br_bge",-1,2,0);
	vcdp->declBus  (c+1129,"v verilog_module ctrl br_bgeu",-1,2,0);
	vcdp->declBus  (c+1117,"v verilog_module ctrl am_x",-1,0,0);
	vcdp->declBus  (c+1117,"v verilog_module ctrl am_pc",-1,0,0);
	vcdp->declBus  (c+1118,"v verilog_module ctrl am_rf",-1,0,0);
	vcdp->declBus  (c+1119,"v verilog_module ctrl bm_x",-1,1,0);
	vcdp->declBus  (c+1119,"v verilog_module ctrl bm_rf",-1,1,0);
	vcdp->declBus  (c+1120,"v verilog_module ctrl bm_imm",-1,1,0);
	vcdp->declBus  (c+1121,"v verilog_module ctrl bm_csr",-1,1,0);
	vcdp->declBus  (c+1130,"v verilog_module ctrl alu_x",-1,3,0);
	vcdp->declBus  (c+1130,"v verilog_module ctrl alu_add",-1,3,0);
	vcdp->declBus  (c+1131,"v verilog_module ctrl alu_sub",-1,3,0);
	vcdp->declBus  (c+1132,"v verilog_module ctrl alu_mul",-1,3,0);
	vcdp->declBus  (c+1133,"v verilog_module ctrl alu_and",-1,3,0);
	vcdp->declBus  (c+1134,"v verilog_module ctrl alu_or",-1,3,0);
	vcdp->declBus  (c+1135,"v verilog_module ctrl alu_xor",-1,3,0);
	vcdp->declBus  (c+1136,"v verilog_module ctrl alu_slt",-1,3,0);
	vcdp->declBus  (c+1137,"v verilog_module ctrl alu_sltu",-1,3,0);
	vcdp->declBus  (c+1138,"v verilog_module ctrl alu_sra",-1,3,0);
	vcdp->declBus  (c+1139,"v verilog_module ctrl alu_srl",-1,3,0);
	vcdp->declBus  (c+1140,"v verilog_module ctrl alu_sll",-1,3,0);
	vcdp->declBus  (c+1141,"v verilog_module ctrl alu_cp0",-1,3,0);
	vcdp->declBus  (c+1142,"v verilog_module ctrl alu_cp1",-1,3,0);
	vcdp->declBus  (c+1143,"v verilog_module ctrl alu_aaa",-1,3,0);
	vcdp->declBus  (c+1123,"v verilog_module ctrl imm_x",-1,2,0);
	vcdp->declBus  (c+1123,"v verilog_module ctrl imm_i",-1,2,0);
	vcdp->declBus  (c+1124,"v verilog_module ctrl imm_s",-1,2,0);
	vcdp->declBus  (c+1125,"v verilog_module ctrl imm_b",-1,2,0);
	vcdp->declBus  (c+1126,"v verilog_module ctrl imm_u",-1,2,0);
	vcdp->declBus  (c+1127,"v verilog_module ctrl imm_j",-1,2,0);
	vcdp->declBus  (c+1119,"v verilog_module ctrl em_x",-1,1,0);
	vcdp->declBus  (c+1119,"v verilog_module ctrl em_p",-1,1,0);
	vcdp->declBus  (c+1120,"v verilog_module ctrl em_a",-1,1,0);
	vcdp->declBus  (c+1121,"v verilog_module ctrl em_m",-1,1,0);
	vcdp->declBus  (c+1119,"v verilog_module ctrl nr",-1,1,0);
	vcdp->declBus  (c+1120,"v verilog_module ctrl ld",-1,1,0);
	vcdp->declBus  (c+1121,"v verilog_module ctrl st",-1,1,0);
	vcdp->declBus  (c+1117,"v verilog_module ctrl wm_x",-1,0,0);
	vcdp->declBus  (c+1117,"v verilog_module ctrl wm_r",-1,0,0);
	vcdp->declBus  (c+1118,"v verilog_module ctrl wm_m",-1,0,0);
	vcdp->declBit  (c+10,"v verilog_module ctrl inst_val_D",-1);
	vcdp->declBus  (c+11,"v verilog_module ctrl j_type_D",-1,1,0);
	vcdp->declBus  (c+12,"v verilog_module ctrl br_type_D",-1,2,0);
	vcdp->declBit  (c+13,"v verilog_module ctrl rs1_en_D",-1);
	vcdp->declBit  (c+14,"v verilog_module ctrl rs2_en_D",-1);
	vcdp->declBus  (c+15,"v verilog_module ctrl alu_fn_D",-1,3,0);
	vcdp->declBus  (c+16,"v verilog_module ctrl ex_result_sel_D",-1,1,0);
	vcdp->declBus  (c+17,"v verilog_module ctrl dmemreq_type_D",-1,1,0);
	vcdp->declBit  (c+18,"v verilog_module ctrl wb_result_sel_D",-1);
	vcdp->declBit  (c+19,"v verilog_module ctrl rf_wen_pending_D",-1);
	vcdp->declBit  (c+20,"v verilog_module ctrl csrr_D",-1);
	vcdp->declBit  (c+21,"v verilog_module ctrl csrw_D",-1);
	vcdp->declBit  (c+111,"v verilog_module ctrl proc2mngr_val_D",-1);
	vcdp->declBit  (c+112,"v verilog_module ctrl mngr2proc_rdy_D",-1);
	vcdp->declBit  (c+113,"v verilog_module ctrl stats_en_wen_D",-1);
	vcdp->declBus  (c+960,"v verilog_module ctrl rf_waddr_D",-1,4,0);
	vcdp->declBit  (c+1088,"v verilog_module ctrl ostall_mngr2proc_D",-1);
	vcdp->declBit  (c+22,"v verilog_module ctrl ostall_waddr_X_rs1_D",-1);
	vcdp->declBit  (c+23,"v verilog_module ctrl ostall_waddr_M_rs1_D",-1);
	vcdp->declBit  (c+24,"v verilog_module ctrl ostall_waddr_W_rs1_D",-1);
	vcdp->declBit  (c+25,"v verilog_module ctrl ostall_waddr_X_rs2_D",-1);
	vcdp->declBit  (c+26,"v verilog_module ctrl ostall_waddr_M_rs2_D",-1);
	vcdp->declBit  (c+27,"v verilog_module ctrl ostall_waddr_W_rs2_D",-1);
	vcdp->declBit  (c+28,"v verilog_module ctrl ostall_hazard_D",-1);
	vcdp->declBit  (c+54,"v verilog_module ctrl next_val_D",-1);
	vcdp->declBus  (c+964,"v verilog_module ctrl inst_X",-1,31,0);
	vcdp->declBus  (c+965,"v verilog_module ctrl dmemreq_type_X",-1,1,0);
	vcdp->declBit  (c+966,"v verilog_module ctrl wb_result_sel_X",-1);
	vcdp->declBit  (c+967,"v verilog_module ctrl rf_wen_pending_X",-1);
	vcdp->declBus  (c+968,"v verilog_module ctrl rf_waddr_X",-1,4,0);
	vcdp->declBit  (c+969,"v verilog_module ctrl proc2mngr_val_X",-1);
	vcdp->declBit  (c+970,"v verilog_module ctrl stats_en_wen_X",-1);
	vcdp->declBus  (c+971,"v verilog_module ctrl br_type_X",-1,2,0);
	vcdp->declBit  (c+1144,"v verilog_module ctrl r_w",-1);
	vcdp->declBus  (c+972,"v verilog_module ctrl j_type_X",-1,1,0);
	vcdp->declBit  (c+55,"v verilog_module ctrl next_val_X",-1);
	vcdp->declBus  (c+973,"v verilog_module ctrl inst_M",-1,31,0);
	vcdp->declBus  (c+974,"v verilog_module ctrl dmemreq_type_M",-1,1,0);
	vcdp->declBit  (c+975,"v verilog_module ctrl rf_wen_pending_M",-1);
	vcdp->declBus  (c+976,"v verilog_module ctrl rf_waddr_M",-1,4,0);
	vcdp->declBit  (c+977,"v verilog_module ctrl proc2mngr_val_M",-1);
	vcdp->declBit  (c+978,"v verilog_module ctrl stats_en_wen_M",-1);
	vcdp->declBit  (c+56,"v verilog_module ctrl next_val_M",-1);
	vcdp->declBus  (c+979,"v verilog_module ctrl inst_W",-1,31,0);
	vcdp->declBit  (c+980,"v verilog_module ctrl proc2mngr_val_W",-1);
	vcdp->declBit  (c+981,"v verilog_module ctrl rf_wen_pending_W",-1);
	vcdp->declBit  (c+982,"v verilog_module ctrl stats_en_wen_pending_W",-1);
	vcdp->declBus  (c+950,"v verilog_module ctrl inst_unpack inst",-1,31,0);
	vcdp->declBus  (c+983,"v verilog_module ctrl inst_unpack opcode",-1,6,0);
	vcdp->declBus  (c+960,"v verilog_module ctrl inst_unpack rd",-1,4,0);
	vcdp->declBus  (c+961,"v verilog_module ctrl inst_unpack rs1",-1,4,0);
	vcdp->declBus  (c+962,"v verilog_module ctrl inst_unpack rs2",-1,4,0);
	vcdp->declBus  (c+984,"v verilog_module ctrl inst_unpack funct3",-1,2,0);
	vcdp->declBus  (c+1145,"v verilog_module ctrl inst_unpack funct7",-1,6,0);
	vcdp->declBus  (c+963,"v verilog_module ctrl inst_unpack csr",-1,11,0);
	vcdp->declBus  (c+1132,"v verilog_module imem_queue p_type",-1,3,0);
	vcdp->declBus  (c+1146,"v verilog_module imem_queue p_msg_nbits",-1,31,0);
	vcdp->declBus  (c+1147,"v verilog_module imem_queue p_num_msgs",-1,31,0);
	vcdp->declBus  (c+1115,"v verilog_module imem_queue c_addr_nbits",-1,31,0);
	vcdp->declBit  (c+1059,"v verilog_module imem_queue clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module imem_queue reset",-1);
	vcdp->declBit  (c+64,"v verilog_module imem_queue enq_val",-1);
	vcdp->declBit  (c+937,"v verilog_module imem_queue enq_rdy",-1);
	vcdp->declArray(c+128,"v verilog_module imem_queue enq_msg",-1,76,0);
	vcdp->declBit  (c+1075,"v verilog_module imem_queue deq_val",-1);
	vcdp->declBit  (c+1074,"v verilog_module imem_queue deq_rdy",-1);
	vcdp->declArray(c+1071,"v verilog_module imem_queue deq_msg",-1,76,0);
	vcdp->declBus  (c+7,"v verilog_module imem_queue num_free_entries",-1,1,0);
	vcdp->declBit  (c+84,"v verilog_module imem_queue genblk2 write_en",-1);
	vcdp->declBit  (c+29,"v verilog_module imem_queue genblk2 bypass_mux_sel",-1);
	vcdp->declBus  (c+985,"v verilog_module imem_queue genblk2 write_addr",-1,0,0);
	vcdp->declBus  (c+986,"v verilog_module imem_queue genblk2 read_addr",-1,0,0);
	vcdp->declBus  (c+1132,"v verilog_module imem_queue genblk2 ctrl p_type",-1,3,0);
	vcdp->declBus  (c+1147,"v verilog_module imem_queue genblk2 ctrl p_num_msgs",-1,31,0);
	vcdp->declBus  (c+1115,"v verilog_module imem_queue genblk2 ctrl c_addr_nbits",-1,31,0);
	vcdp->declBit  (c+1059,"v verilog_module imem_queue genblk2 ctrl clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module imem_queue genblk2 ctrl reset",-1);
	vcdp->declBit  (c+64,"v verilog_module imem_queue genblk2 ctrl enq_val",-1);
	vcdp->declBit  (c+937,"v verilog_module imem_queue genblk2 ctrl enq_rdy",-1);
	vcdp->declBit  (c+1075,"v verilog_module imem_queue genblk2 ctrl deq_val",-1);
	vcdp->declBit  (c+1074,"v verilog_module imem_queue genblk2 ctrl deq_rdy",-1);
	vcdp->declBit  (c+84,"v verilog_module imem_queue genblk2 ctrl write_en",-1);
	vcdp->declBus  (c+985,"v verilog_module imem_queue genblk2 ctrl write_addr",-1,0,0);
	vcdp->declBus  (c+986,"v verilog_module imem_queue genblk2 ctrl read_addr",-1,0,0);
	vcdp->declBit  (c+29,"v verilog_module imem_queue genblk2 ctrl bypass_mux_sel",-1);
	vcdp->declBus  (c+7,"v verilog_module imem_queue genblk2 ctrl num_free_entries",-1,1,0);
	vcdp->declBus  (c+985,"v verilog_module imem_queue genblk2 ctrl enq_ptr",-1,0,0);
	vcdp->declBus  (c+57,"v verilog_module imem_queue genblk2 ctrl enq_ptr_next",-1,0,0);
	vcdp->declBus  (c+986,"v verilog_module imem_queue genblk2 ctrl deq_ptr",-1,0,0);
	vcdp->declBus  (c+58,"v verilog_module imem_queue genblk2 ctrl deq_ptr_next",-1,0,0);
	vcdp->declBit  (c+987,"v verilog_module imem_queue genblk2 ctrl full",-1);
	vcdp->declBit  (c+59,"v verilog_module imem_queue genblk2 ctrl full_next",-1);
	vcdp->declBus  (c+1117,"v verilog_module imem_queue genblk2 ctrl c_pipe_en",-1,0,0);
	vcdp->declBus  (c+1118,"v verilog_module imem_queue genblk2 ctrl c_bypass_en",-1,0,0);
	vcdp->declBit  (c+85,"v verilog_module imem_queue genblk2 ctrl do_enq",-1);
	vcdp->declBit  (c+86,"v verilog_module imem_queue genblk2 ctrl do_deq",-1);
	vcdp->declBit  (c+29,"v verilog_module imem_queue genblk2 ctrl empty",-1);
	vcdp->declBit  (c+1148,"v verilog_module imem_queue genblk2 ctrl do_pipe",-1);
	vcdp->declBit  (c+87,"v verilog_module imem_queue genblk2 ctrl do_bypass",-1);
	vcdp->declBus  (c+988,"v verilog_module imem_queue genblk2 ctrl deq_ptr_plus1",-1,0,0);
	vcdp->declBus  (c+989,"v verilog_module imem_queue genblk2 ctrl deq_ptr_inc",-1,0,0);
	vcdp->declBus  (c+990,"v verilog_module imem_queue genblk2 ctrl enq_ptr_plus1",-1,0,0);
	vcdp->declBus  (c+30,"v verilog_module imem_queue genblk2 ctrl enq_ptr_inc",-1,0,0);
	vcdp->declBus  (c+1115,"v verilog_module imem_queue genblk2 ctrl enq_ptr_reg p_nbits",-1,31,0);
	vcdp->declBus  (c+1149,"v verilog_module imem_queue genblk2 ctrl enq_ptr_reg p_reset_value",-1,31,0);
	vcdp->declBit  (c+1059,"v verilog_module imem_queue genblk2 ctrl enq_ptr_reg clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module imem_queue genblk2 ctrl enq_ptr_reg reset",-1);
	vcdp->declBus  (c+985,"v verilog_module imem_queue genblk2 ctrl enq_ptr_reg q",-1,0,0);
	vcdp->declBus  (c+57,"v verilog_module imem_queue genblk2 ctrl enq_ptr_reg d",-1,0,0);
	vcdp->declBus  (c+1115,"v verilog_module imem_queue genblk2 ctrl deq_ptr_reg p_nbits",-1,31,0);
	vcdp->declBus  (c+1149,"v verilog_module imem_queue genblk2 ctrl deq_ptr_reg p_reset_value",-1,31,0);
	vcdp->declBit  (c+1059,"v verilog_module imem_queue genblk2 ctrl deq_ptr_reg clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module imem_queue genblk2 ctrl deq_ptr_reg reset",-1);
	vcdp->declBus  (c+986,"v verilog_module imem_queue genblk2 ctrl deq_ptr_reg q",-1,0,0);
	vcdp->declBus  (c+58,"v verilog_module imem_queue genblk2 ctrl deq_ptr_reg d",-1,0,0);
	vcdp->declBus  (c+1115,"v verilog_module imem_queue genblk2 ctrl full_reg p_nbits",-1,31,0);
	vcdp->declBus  (c+1149,"v verilog_module imem_queue genblk2 ctrl full_reg p_reset_value",-1,31,0);
	vcdp->declBit  (c+1059,"v verilog_module imem_queue genblk2 ctrl full_reg clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module imem_queue genblk2 ctrl full_reg reset",-1);
	vcdp->declBus  (c+987,"v verilog_module imem_queue genblk2 ctrl full_reg q",-1,0,0);
	vcdp->declBus  (c+59,"v verilog_module imem_queue genblk2 ctrl full_reg d",-1,0,0);
	vcdp->declBus  (c+1132,"v verilog_module imem_queue genblk2 dpath p_type",-1,3,0);
	vcdp->declBus  (c+1146,"v verilog_module imem_queue genblk2 dpath p_msg_nbits",-1,31,0);
	vcdp->declBus  (c+1147,"v verilog_module imem_queue genblk2 dpath p_num_msgs",-1,31,0);
	vcdp->declBus  (c+1115,"v verilog_module imem_queue genblk2 dpath c_addr_nbits",-1,31,0);
	vcdp->declBit  (c+1059,"v verilog_module imem_queue genblk2 dpath clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module imem_queue genblk2 dpath reset",-1);
	vcdp->declBit  (c+84,"v verilog_module imem_queue genblk2 dpath write_en",-1);
	vcdp->declBit  (c+29,"v verilog_module imem_queue genblk2 dpath bypass_mux_sel",-1);
	vcdp->declBus  (c+985,"v verilog_module imem_queue genblk2 dpath write_addr",-1,0,0);
	vcdp->declBus  (c+986,"v verilog_module imem_queue genblk2 dpath read_addr",-1,0,0);
	vcdp->declArray(c+128,"v verilog_module imem_queue genblk2 dpath enq_msg",-1,76,0);
	vcdp->declArray(c+1071,"v verilog_module imem_queue genblk2 dpath deq_msg",-1,76,0);
	vcdp->declArray(c+31,"v verilog_module imem_queue genblk2 dpath read_data",-1,76,0);
	vcdp->declBus  (c+1146,"v verilog_module imem_queue genblk2 dpath qstore p_data_nbits",-1,31,0);
	vcdp->declBus  (c+1147,"v verilog_module imem_queue genblk2 dpath qstore p_num_entries",-1,31,0);
	vcdp->declBus  (c+1115,"v verilog_module imem_queue genblk2 dpath qstore c_addr_nbits",-1,31,0);
	vcdp->declBit  (c+1059,"v verilog_module imem_queue genblk2 dpath qstore clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module imem_queue genblk2 dpath qstore reset",-1);
	vcdp->declBus  (c+986,"v verilog_module imem_queue genblk2 dpath qstore read_addr",-1,0,0);
	vcdp->declArray(c+31,"v verilog_module imem_queue genblk2 dpath qstore read_data",-1,76,0);
	vcdp->declBit  (c+84,"v verilog_module imem_queue genblk2 dpath qstore write_en",-1);
	vcdp->declBus  (c+985,"v verilog_module imem_queue genblk2 dpath qstore write_addr",-1,0,0);
	vcdp->declArray(c+128,"v verilog_module imem_queue genblk2 dpath qstore write_data",-1,76,0);
	{int i; for (i=0; i<2; i++) {
		vcdp->declArray(c+991+i*3,"v verilog_module imem_queue genblk2 dpath qstore rfile",(i+0),76,0);}}
	vcdp->declBus  (c+1146,"v verilog_module imem_queue genblk2 dpath genblk1 bypass_mux p_nbits",-1,31,0);
	vcdp->declArray(c+31,"v verilog_module imem_queue genblk2 dpath genblk1 bypass_mux in0",-1,76,0);
	vcdp->declArray(c+128,"v verilog_module imem_queue genblk2 dpath genblk1 bypass_mux in1",-1,76,0);
	vcdp->declBit  (c+29,"v verilog_module imem_queue genblk2 dpath genblk1 bypass_mux sel",-1);
	vcdp->declArray(c+1071,"v verilog_module imem_queue genblk2 dpath genblk1 bypass_mux out",-1,76,0);
	vcdp->declBus  (c+1132,"v verilog_module dmem_queue p_type",-1,3,0);
	vcdp->declBus  (c+1146,"v verilog_module dmem_queue p_msg_nbits",-1,31,0);
	vcdp->declBus  (c+1115,"v verilog_module dmem_queue p_num_msgs",-1,31,0);
	vcdp->declBus  (c+1149,"v verilog_module dmem_queue c_addr_nbits",-1,31,0);
	vcdp->declBit  (c+1059,"v verilog_module dmem_queue clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module dmem_queue reset",-1);
	vcdp->declBit  (c+65,"v verilog_module dmem_queue enq_val",-1);
	vcdp->declBit  (c+940,"v verilog_module dmem_queue enq_rdy",-1);
	vcdp->declArray(c+96,"v verilog_module dmem_queue enq_msg",-1,76,0);
	vcdp->declBit  (c+1066,"v verilog_module dmem_queue deq_val",-1);
	vcdp->declBit  (c+1065,"v verilog_module dmem_queue deq_rdy",-1);
	vcdp->declArray(c+1062,"v verilog_module dmem_queue deq_msg",-1,76,0);
	vcdp->declBus  (c+952,"v verilog_module dmem_queue num_free_entries",-1,0,0);
	vcdp->declBit  (c+88,"v verilog_module dmem_queue genblk1 write_en",-1);
	vcdp->declBit  (c+940,"v verilog_module dmem_queue genblk1 bypass_mux_sel",-1);
	vcdp->declBus  (c+1132,"v verilog_module dmem_queue genblk1 ctrl p_type",-1,3,0);
	vcdp->declBit  (c+1059,"v verilog_module dmem_queue genblk1 ctrl clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module dmem_queue genblk1 ctrl reset",-1);
	vcdp->declBit  (c+65,"v verilog_module dmem_queue genblk1 ctrl enq_val",-1);
	vcdp->declBit  (c+940,"v verilog_module dmem_queue genblk1 ctrl enq_rdy",-1);
	vcdp->declBit  (c+1066,"v verilog_module dmem_queue genblk1 ctrl deq_val",-1);
	vcdp->declBit  (c+1065,"v verilog_module dmem_queue genblk1 ctrl deq_rdy",-1);
	vcdp->declBit  (c+88,"v verilog_module dmem_queue genblk1 ctrl write_en",-1);
	vcdp->declBit  (c+940,"v verilog_module dmem_queue genblk1 ctrl bypass_mux_sel",-1);
	vcdp->declBit  (c+952,"v verilog_module dmem_queue genblk1 ctrl num_free_entries",-1);
	vcdp->declBit  (c+997,"v verilog_module dmem_queue genblk1 ctrl full",-1);
	vcdp->declBit  (c+60,"v verilog_module dmem_queue genblk1 ctrl full_next",-1);
	vcdp->declBus  (c+1117,"v verilog_module dmem_queue genblk1 ctrl c_pipe_en",-1,0,0);
	vcdp->declBus  (c+1118,"v verilog_module dmem_queue genblk1 ctrl c_bypass_en",-1,0,0);
	vcdp->declBit  (c+89,"v verilog_module dmem_queue genblk1 ctrl do_enq",-1);
	vcdp->declBit  (c+90,"v verilog_module dmem_queue genblk1 ctrl do_deq",-1);
	vcdp->declBit  (c+940,"v verilog_module dmem_queue genblk1 ctrl empty",-1);
	vcdp->declBit  (c+1148,"v verilog_module dmem_queue genblk1 ctrl do_pipe",-1);
	vcdp->declBit  (c+91,"v verilog_module dmem_queue genblk1 ctrl do_bypass",-1);
	vcdp->declBus  (c+1132,"v verilog_module dmem_queue genblk1 dpath p_type",-1,3,0);
	vcdp->declBus  (c+1146,"v verilog_module dmem_queue genblk1 dpath p_msg_nbits",-1,31,0);
	vcdp->declBit  (c+1059,"v verilog_module dmem_queue genblk1 dpath clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module dmem_queue genblk1 dpath reset",-1);
	vcdp->declBit  (c+88,"v verilog_module dmem_queue genblk1 dpath write_en",-1);
	vcdp->declBit  (c+940,"v verilog_module dmem_queue genblk1 dpath bypass_mux_sel",-1);
	vcdp->declArray(c+96,"v verilog_module dmem_queue genblk1 dpath enq_msg",-1,76,0);
	vcdp->declArray(c+1062,"v verilog_module dmem_queue genblk1 dpath deq_msg",-1,76,0);
	vcdp->declArray(c+998,"v verilog_module dmem_queue genblk1 dpath qstore",-1,76,0);
	vcdp->declBus  (c+1146,"v verilog_module dmem_queue genblk1 dpath qstore_reg p_nbits",-1,31,0);
	vcdp->declBit  (c+1059,"v verilog_module dmem_queue genblk1 dpath qstore_reg clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module dmem_queue genblk1 dpath qstore_reg reset",-1);
	vcdp->declArray(c+998,"v verilog_module dmem_queue genblk1 dpath qstore_reg q",-1,76,0);
	vcdp->declArray(c+96,"v verilog_module dmem_queue genblk1 dpath qstore_reg d",-1,76,0);
	vcdp->declBit  (c+88,"v verilog_module dmem_queue genblk1 dpath qstore_reg en",-1);
	vcdp->declBus  (c+1146,"v verilog_module dmem_queue genblk1 dpath genblk1 bypass_mux p_nbits",-1,31,0);
	vcdp->declArray(c+998,"v verilog_module dmem_queue genblk1 dpath genblk1 bypass_mux in0",-1,76,0);
	vcdp->declArray(c+96,"v verilog_module dmem_queue genblk1 dpath genblk1 bypass_mux in1",-1,76,0);
	vcdp->declBit  (c+940,"v verilog_module dmem_queue genblk1 dpath genblk1 bypass_mux sel",-1);
	vcdp->declArray(c+1062,"v verilog_module dmem_queue genblk1 dpath genblk1 bypass_mux out",-1,76,0);
	vcdp->declBus  (c+1132,"v verilog_module proc2mngr_queue p_type",-1,3,0);
	vcdp->declBus  (c+1150,"v verilog_module proc2mngr_queue p_msg_nbits",-1,31,0);
	vcdp->declBus  (c+1115,"v verilog_module proc2mngr_queue p_num_msgs",-1,31,0);
	vcdp->declBus  (c+1149,"v verilog_module proc2mngr_queue c_addr_nbits",-1,31,0);
	vcdp->declBit  (c+1059,"v verilog_module proc2mngr_queue clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module proc2mngr_queue reset",-1);
	vcdp->declBit  (c+99,"v verilog_module proc2mngr_queue enq_val",-1);
	vcdp->declBit  (c+942,"v verilog_module proc2mngr_queue enq_rdy",-1);
	vcdp->declBus  (c+941,"v verilog_module proc2mngr_queue enq_msg",-1,31,0);
	vcdp->declBit  (c+1085,"v verilog_module proc2mngr_queue deq_val",-1);
	vcdp->declBit  (c+1084,"v verilog_module proc2mngr_queue deq_rdy",-1);
	vcdp->declBus  (c+1083,"v verilog_module proc2mngr_queue deq_msg",-1,31,0);
	vcdp->declBus  (c+953,"v verilog_module proc2mngr_queue num_free_entries",-1,0,0);
	vcdp->declBit  (c+95,"v verilog_module proc2mngr_queue genblk1 write_en",-1);
	vcdp->declBit  (c+942,"v verilog_module proc2mngr_queue genblk1 bypass_mux_sel",-1);
	vcdp->declBus  (c+1132,"v verilog_module proc2mngr_queue genblk1 ctrl p_type",-1,3,0);
	vcdp->declBit  (c+1059,"v verilog_module proc2mngr_queue genblk1 ctrl clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module proc2mngr_queue genblk1 ctrl reset",-1);
	vcdp->declBit  (c+99,"v verilog_module proc2mngr_queue genblk1 ctrl enq_val",-1);
	vcdp->declBit  (c+942,"v verilog_module proc2mngr_queue genblk1 ctrl enq_rdy",-1);
	vcdp->declBit  (c+1085,"v verilog_module proc2mngr_queue genblk1 ctrl deq_val",-1);
	vcdp->declBit  (c+1084,"v verilog_module proc2mngr_queue genblk1 ctrl deq_rdy",-1);
	vcdp->declBit  (c+95,"v verilog_module proc2mngr_queue genblk1 ctrl write_en",-1);
	vcdp->declBit  (c+942,"v verilog_module proc2mngr_queue genblk1 ctrl bypass_mux_sel",-1);
	vcdp->declBit  (c+953,"v verilog_module proc2mngr_queue genblk1 ctrl num_free_entries",-1);
	vcdp->declBit  (c+1001,"v verilog_module proc2mngr_queue genblk1 ctrl full",-1);
	vcdp->declBit  (c+61,"v verilog_module proc2mngr_queue genblk1 ctrl full_next",-1);
	vcdp->declBus  (c+1117,"v verilog_module proc2mngr_queue genblk1 ctrl c_pipe_en",-1,0,0);
	vcdp->declBus  (c+1118,"v verilog_module proc2mngr_queue genblk1 ctrl c_bypass_en",-1,0,0);
	vcdp->declBit  (c+131,"v verilog_module proc2mngr_queue genblk1 ctrl do_enq",-1);
	vcdp->declBit  (c+92,"v verilog_module proc2mngr_queue genblk1 ctrl do_deq",-1);
	vcdp->declBit  (c+942,"v verilog_module proc2mngr_queue genblk1 ctrl empty",-1);
	vcdp->declBit  (c+1148,"v verilog_module proc2mngr_queue genblk1 ctrl do_pipe",-1);
	vcdp->declBit  (c+93,"v verilog_module proc2mngr_queue genblk1 ctrl do_bypass",-1);
	vcdp->declBus  (c+1132,"v verilog_module proc2mngr_queue genblk1 dpath p_type",-1,3,0);
	vcdp->declBus  (c+1150,"v verilog_module proc2mngr_queue genblk1 dpath p_msg_nbits",-1,31,0);
	vcdp->declBit  (c+1059,"v verilog_module proc2mngr_queue genblk1 dpath clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module proc2mngr_queue genblk1 dpath reset",-1);
	vcdp->declBit  (c+95,"v verilog_module proc2mngr_queue genblk1 dpath write_en",-1);
	vcdp->declBit  (c+942,"v verilog_module proc2mngr_queue genblk1 dpath bypass_mux_sel",-1);
	vcdp->declBus  (c+941,"v verilog_module proc2mngr_queue genblk1 dpath enq_msg",-1,31,0);
	vcdp->declBus  (c+1083,"v verilog_module proc2mngr_queue genblk1 dpath deq_msg",-1,31,0);
	vcdp->declBus  (c+1002,"v verilog_module proc2mngr_queue genblk1 dpath qstore",-1,31,0);
	vcdp->declBus  (c+1150,"v verilog_module proc2mngr_queue genblk1 dpath qstore_reg p_nbits",-1,31,0);
	vcdp->declBit  (c+1059,"v verilog_module proc2mngr_queue genblk1 dpath qstore_reg clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module proc2mngr_queue genblk1 dpath qstore_reg reset",-1);
	vcdp->declBus  (c+1002,"v verilog_module proc2mngr_queue genblk1 dpath qstore_reg q",-1,31,0);
	vcdp->declBus  (c+941,"v verilog_module proc2mngr_queue genblk1 dpath qstore_reg d",-1,31,0);
	vcdp->declBit  (c+95,"v verilog_module proc2mngr_queue genblk1 dpath qstore_reg en",-1);
	vcdp->declBus  (c+1150,"v verilog_module proc2mngr_queue genblk1 dpath genblk1 bypass_mux p_nbits",-1,31,0);
	vcdp->declBus  (c+1002,"v verilog_module proc2mngr_queue genblk1 dpath genblk1 bypass_mux in0",-1,31,0);
	vcdp->declBus  (c+941,"v verilog_module proc2mngr_queue genblk1 dpath genblk1 bypass_mux in1",-1,31,0);
	vcdp->declBit  (c+942,"v verilog_module proc2mngr_queue genblk1 dpath genblk1 bypass_mux sel",-1);
	vcdp->declBus  (c+1083,"v verilog_module proc2mngr_queue genblk1 dpath genblk1 bypass_mux out",-1,31,0);
	vcdp->declBus  (c+1115,"v verilog_module dpath p_num_cores",-1,31,0);
	vcdp->declBit  (c+1059,"v verilog_module dpath clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module dpath reset",-1);
	vcdp->declBus  (c+1061,"v verilog_module dpath core_id",-1,31,0);
	vcdp->declBus  (c+127,"v verilog_module dpath imemreq_msg_addr",-1,31,0);
	vcdp->declQuad (c+1076,"v verilog_module dpath imemresp_msg",-1,46,0);
	vcdp->declBus  (c+1,"v verilog_module dpath dmemreq_msg_addr",-1,31,0);
	vcdp->declBus  (c+938,"v verilog_module dpath dmemreq_msg_data",-1,31,0);
	vcdp->declBus  (c+1089,"v verilog_module dpath dmemresp_msg_data",-1,31,0);
	vcdp->declBus  (c+1080,"v verilog_module dpath mngr2proc_data",-1,31,0);
	vcdp->declBus  (c+941,"v verilog_module dpath proc2mngr_data",-1,31,0);
	vcdp->declBit  (c+66,"v verilog_module dpath imemresp_val_drop",-1);
	vcdp->declBit  (c+67,"v verilog_module dpath imemresp_rdy_drop",-1);
	vcdp->declBit  (c+68,"v verilog_module dpath imemresp_drop",-1);
	vcdp->declBit  (c+69,"v verilog_module dpath reg_en_F",-1);
	vcdp->declBus  (c+100,"v verilog_module dpath pc_sel_F",-1,1,0);
	vcdp->declBit  (c+70,"v verilog_module dpath reg_en_D",-1);
	vcdp->declBit  (c+2,"v verilog_module dpath op1_sel_D",-1);
	vcdp->declBus  (c+3,"v verilog_module dpath op2_sel_D",-1,1,0);
	vcdp->declBus  (c+101,"v verilog_module dpath csrr_sel_D",-1,1,0);
	vcdp->declBus  (c+4,"v verilog_module dpath imm_type_D",-1,2,0);
	vcdp->declBit  (c+71,"v verilog_module dpath imul_req_val_D",-1);
	vcdp->declBit  (c+73,"v verilog_module dpath reg_en_X",-1);
	vcdp->declBus  (c+943,"v verilog_module dpath ex_result_sel_X",-1,1,0);
	vcdp->declBus  (c+944,"v verilog_module dpath alu_fn_X",-1,3,0);
	vcdp->declBit  (c+72,"v verilog_module dpath imul_resp_rdy_X",-1);
	vcdp->declBit  (c+74,"v verilog_module dpath reg_en_M",-1);
	vcdp->declBit  (c+946,"v verilog_module dpath wb_result_sel_M",-1);
	vcdp->declBit  (c+102,"v verilog_module dpath reg_en_W",-1);
	vcdp->declBus  (c+947,"v verilog_module dpath rf_waddr_W",-1,4,0);
	vcdp->declBit  (c+948,"v verilog_module dpath rf_wen_W",-1);
	vcdp->declBit  (c+949,"v verilog_module dpath stats_en_wen_W",-1);
	vcdp->declBus  (c+950,"v verilog_module dpath inst_D",-1,31,0);
	vcdp->declBit  (c+103,"v verilog_module dpath imul_req_rdy_D",-1);
	vcdp->declBit  (c+5,"v verilog_module dpath br_cond_eq_X",-1);
	vcdp->declBit  (c+951,"v verilog_module dpath br_cond_lt_X",-1);
	vcdp->declBit  (c+6,"v verilog_module dpath br_cond_ltu_X",-1);
	vcdp->declBit  (c+104,"v verilog_module dpath imul_resp_val_X",-1);
	vcdp->declBit  (c+1087,"v verilog_module dpath stats_en",-1);
	vcdp->declBus  (c+1151,"v verilog_module dpath c_reset_vector",-1,31,0);
	vcdp->declBus  (c+1152,"v verilog_module dpath c_reset_inst",-1,31,0);
	vcdp->declBus  (c+1003,"v verilog_module dpath pc_F",-1,31,0);
	vcdp->declBus  (c+127,"v verilog_module dpath pc_next_F",-1,31,0);
	vcdp->declBus  (c+1004,"v verilog_module dpath pc_plus4_F",-1,31,0);
	vcdp->declBus  (c+1005,"v verilog_module dpath br_target_X",-1,31,0);
	vcdp->declBus  (c+114,"v verilog_module dpath jal_target_D",-1,31,0);
	vcdp->declBus  (c+1,"v verilog_module dpath jalr_target_X",-1,31,0);
	vcdp->declBus  (c+1006,"v verilog_module dpath pc_D",-1,31,0);
	vcdp->declBus  (c+960,"v verilog_module dpath inst_rd_D",-1,4,0);
	vcdp->declBus  (c+961,"v verilog_module dpath inst_rs1_D",-1,4,0);
	vcdp->declBus  (c+962,"v verilog_module dpath inst_rs2_D",-1,4,0);
	vcdp->declBus  (c+115,"v verilog_module dpath imm_D",-1,31,0);
	vcdp->declBus  (c+34,"v verilog_module dpath rf_rdata0_D",-1,31,0);
	vcdp->declBus  (c+116,"v verilog_module dpath rf_rdata1_D",-1,31,0);
	vcdp->declBus  (c+941,"v verilog_module dpath rf_wdata_W",-1,31,0);
	vcdp->declBus  (c+35,"v verilog_module dpath op1_D",-1,31,0);
	vcdp->declBus  (c+1090,"v verilog_module dpath op2_D",-1,31,0);
	vcdp->declBus  (c+1091,"v verilog_module dpath csrr_data_D",-1,31,0);
	vcdp->declBus  (c+1115,"v verilog_module dpath num_cores",-1,31,0);
	vcdp->declBus  (c+1007,"v verilog_module dpath op1_X",-1,31,0);
	vcdp->declBus  (c+1008,"v verilog_module dpath op2_X",-1,31,0);
	vcdp->declBus  (c+1009,"v verilog_module dpath pc_X",-1,31,0);
	vcdp->declBus  (c+1010,"v verilog_module dpath pc_plus4_X",-1,31,0);
	vcdp->declBus  (c+938,"v verilog_module dpath dmemreq_msg_data_reg_X_out",-1,31,0);
	vcdp->declBus  (c+1,"v verilog_module dpath alu_result_X",-1,31,0);
	vcdp->declQuad (c+1153,"v verilog_module dpath imul_req_msg",-1,63,0);
	vcdp->declBus  (c+1011,"v verilog_module dpath imul_resp_msg",-1,31,0);
	vcdp->declBus  (c+36,"v verilog_module dpath ex_result_X",-1,31,0);
	vcdp->declBus  (c+1012,"v verilog_module dpath ex_result_M",-1,31,0);
	vcdp->declBus  (c+1089,"v verilog_module dpath dmem_result_M",-1,31,0);
	vcdp->declBus  (c+1092,"v verilog_module dpath wb_result_M",-1,31,0);
	vcdp->declBus  (c+941,"v verilog_module dpath wb_result_W",-1,31,0);
	vcdp->declBus  (c+1013,"v verilog_module dpath stats_en_W",-1,31,0);
	vcdp->declBus  (c+1150,"v verilog_module dpath pc_reg_F p_nbits",-1,31,0);
	vcdp->declBus  (c+1155,"v verilog_module dpath pc_reg_F p_reset_value",-1,31,0);
	vcdp->declBit  (c+1059,"v verilog_module dpath pc_reg_F clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module dpath pc_reg_F reset",-1);
	vcdp->declBus  (c+1003,"v verilog_module dpath pc_reg_F q",-1,31,0);
	vcdp->declBus  (c+127,"v verilog_module dpath pc_reg_F d",-1,31,0);
	vcdp->declBit  (c+69,"v verilog_module dpath pc_reg_F en",-1);
	vcdp->declBus  (c+1150,"v verilog_module dpath pc_incr_F p_nbits",-1,31,0);
	vcdp->declBus  (c+1156,"v verilog_module dpath pc_incr_F p_inc_value",-1,31,0);
	vcdp->declBus  (c+1003,"v verilog_module dpath pc_incr_F in",-1,31,0);
	vcdp->declBus  (c+1004,"v verilog_module dpath pc_incr_F out",-1,31,0);
	vcdp->declBus  (c+1150,"v verilog_module dpath pc_sel_mux_F p_nbits",-1,31,0);
	vcdp->declBus  (c+1004,"v verilog_module dpath pc_sel_mux_F in0",-1,31,0);
	vcdp->declBus  (c+114,"v verilog_module dpath pc_sel_mux_F in1",-1,31,0);
	vcdp->declBus  (c+1005,"v verilog_module dpath pc_sel_mux_F in2",-1,31,0);
	vcdp->declBus  (c+1,"v verilog_module dpath pc_sel_mux_F in3",-1,31,0);
	vcdp->declBus  (c+100,"v verilog_module dpath pc_sel_mux_F sel",-1,1,0);
	vcdp->declBus  (c+127,"v verilog_module dpath pc_sel_mux_F out",-1,31,0);
	vcdp->declBus  (c+1150,"v verilog_module dpath pc_reg_D p_nbits",-1,31,0);
	vcdp->declBus  (c+1149,"v verilog_module dpath pc_reg_D p_reset_value",-1,31,0);
	vcdp->declBit  (c+1059,"v verilog_module dpath pc_reg_D clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module dpath pc_reg_D reset",-1);
	vcdp->declBus  (c+1006,"v verilog_module dpath pc_reg_D q",-1,31,0);
	vcdp->declBus  (c+1003,"v verilog_module dpath pc_reg_D d",-1,31,0);
	vcdp->declBit  (c+70,"v verilog_module dpath pc_reg_D en",-1);
	vcdp->declBus  (c+1150,"v verilog_module dpath inst_D_reg p_nbits",-1,31,0);
	vcdp->declBus  (c+1152,"v verilog_module dpath inst_D_reg p_reset_value",-1,31,0);
	vcdp->declBit  (c+1059,"v verilog_module dpath inst_D_reg clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module dpath inst_D_reg reset",-1);
	vcdp->declBus  (c+950,"v verilog_module dpath inst_D_reg q",-1,31,0);
	vcdp->declBus  (c+1093,"v verilog_module dpath inst_D_reg d",-1,31,0);
	vcdp->declBit  (c+70,"v verilog_module dpath inst_D_reg en",-1);
	vcdp->declBus  (c+950,"v verilog_module dpath inst_unpack inst",-1,31,0);
	vcdp->declBus  (c+983,"v verilog_module dpath inst_unpack opcode",-1,6,0);
	vcdp->declBus  (c+960,"v verilog_module dpath inst_unpack rd",-1,4,0);
	vcdp->declBus  (c+961,"v verilog_module dpath inst_unpack rs1",-1,4,0);
	vcdp->declBus  (c+962,"v verilog_module dpath inst_unpack rs2",-1,4,0);
	vcdp->declBus  (c+984,"v verilog_module dpath inst_unpack funct3",-1,2,0);
	vcdp->declBus  (c+1157,"v verilog_module dpath inst_unpack funct7",-1,6,0);
	vcdp->declBus  (c+963,"v verilog_module dpath inst_unpack csr",-1,11,0);
	vcdp->declBus  (c+4,"v verilog_module dpath imm_gen_D imm_type",-1,2,0);
	vcdp->declBus  (c+950,"v verilog_module dpath imm_gen_D inst",-1,31,0);
	vcdp->declBus  (c+115,"v verilog_module dpath imm_gen_D imm",-1,31,0);
	vcdp->declBit  (c+1059,"v verilog_module dpath rf clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module dpath rf reset",-1);
	vcdp->declBus  (c+961,"v verilog_module dpath rf rd_addr0",-1,4,0);
	vcdp->declBus  (c+34,"v verilog_module dpath rf rd_data0",-1,31,0);
	vcdp->declBus  (c+962,"v verilog_module dpath rf rd_addr1",-1,4,0);
	vcdp->declBus  (c+116,"v verilog_module dpath rf rd_data1",-1,31,0);
	vcdp->declBit  (c+948,"v verilog_module dpath rf wr_en",-1);
	vcdp->declBus  (c+947,"v verilog_module dpath rf wr_addr",-1,4,0);
	vcdp->declBus  (c+941,"v verilog_module dpath rf wr_data",-1,31,0);
	vcdp->declBus  (c+37,"v verilog_module dpath rf rf_read_data0",-1,31,0);
	vcdp->declBus  (c+38,"v verilog_module dpath rf rf_read_data1",-1,31,0);
	vcdp->declBus  (c+1150,"v verilog_module dpath rf rfile p_data_nbits",-1,31,0);
	vcdp->declBus  (c+1150,"v verilog_module dpath rf rfile p_num_entries",-1,31,0);
	vcdp->declBus  (c+1158,"v verilog_module dpath rf rfile c_addr_nbits",-1,31,0);
	vcdp->declBit  (c+1059,"v verilog_module dpath rf rfile clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module dpath rf rfile reset",-1);
	vcdp->declBus  (c+961,"v verilog_module dpath rf rfile read_addr0",-1,4,0);
	vcdp->declBus  (c+37,"v verilog_module dpath rf rfile read_data0",-1,31,0);
	vcdp->declBus  (c+962,"v verilog_module dpath rf rfile read_addr1",-1,4,0);
	vcdp->declBus  (c+38,"v verilog_module dpath rf rfile read_data1",-1,31,0);
	vcdp->declBit  (c+948,"v verilog_module dpath rf rfile write_en",-1);
	vcdp->declBus  (c+947,"v verilog_module dpath rf rfile write_addr",-1,4,0);
	vcdp->declBus  (c+941,"v verilog_module dpath rf rfile write_data",-1,31,0);
	{int i; for (i=0; i<32; i++) {
		vcdp->declBus  (c+1014+i*1,"v verilog_module dpath rf rfile rfile",(i+0),31,0);}}
	vcdp->declBus  (c+1150,"v verilog_module dpath op1_sel_mux_D p_nbits",-1,31,0);
	vcdp->declBus  (c+1006,"v verilog_module dpath op1_sel_mux_D in0",-1,31,0);
	vcdp->declBus  (c+34,"v verilog_module dpath op1_sel_mux_D in1",-1,31,0);
	vcdp->declBit  (c+2,"v verilog_module dpath op1_sel_mux_D sel",-1);
	vcdp->declBus  (c+35,"v verilog_module dpath op1_sel_mux_D out",-1,31,0);
	vcdp->declBus  (c+1150,"v verilog_module dpath csrr_sel_mux_D p_nbits",-1,31,0);
	vcdp->declBus  (c+1080,"v verilog_module dpath csrr_sel_mux_D in0",-1,31,0);
	vcdp->declBus  (c+1159,"v verilog_module dpath csrr_sel_mux_D in1",-1,31,0);
	vcdp->declBus  (c+1061,"v verilog_module dpath csrr_sel_mux_D in2",-1,31,0);
	vcdp->declBus  (c+101,"v verilog_module dpath csrr_sel_mux_D sel",-1,1,0);
	vcdp->declBus  (c+1091,"v verilog_module dpath csrr_sel_mux_D out",-1,31,0);
	vcdp->declBus  (c+1150,"v verilog_module dpath op2_sel_mux_D p_nbits",-1,31,0);
	vcdp->declBus  (c+116,"v verilog_module dpath op2_sel_mux_D in0",-1,31,0);
	vcdp->declBus  (c+115,"v verilog_module dpath op2_sel_mux_D in1",-1,31,0);
	vcdp->declBus  (c+1091,"v verilog_module dpath op2_sel_mux_D in2",-1,31,0);
	vcdp->declBus  (c+3,"v verilog_module dpath op2_sel_mux_D sel",-1,1,0);
	vcdp->declBus  (c+1090,"v verilog_module dpath op2_sel_mux_D out",-1,31,0);
	vcdp->declBus  (c+1150,"v verilog_module dpath pc_plus_imm_D p_nbits",-1,31,0);
	vcdp->declBus  (c+1006,"v verilog_module dpath pc_plus_imm_D in0",-1,31,0);
	vcdp->declBus  (c+115,"v verilog_module dpath pc_plus_imm_D in1",-1,31,0);
	vcdp->declBit  (c+1148,"v verilog_module dpath pc_plus_imm_D cin",-1);
	vcdp->declBus  (c+114,"v verilog_module dpath pc_plus_imm_D out",-1,31,0);
	vcdp->declBit  (c+62,"v verilog_module dpath pc_plus_imm_D cout",-1);
	vcdp->declBus  (c+1150,"v verilog_module dpath op1_reg_X p_nbits",-1,31,0);
	vcdp->declBus  (c+1149,"v verilog_module dpath op1_reg_X p_reset_value",-1,31,0);
	vcdp->declBit  (c+1059,"v verilog_module dpath op1_reg_X clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module dpath op1_reg_X reset",-1);
	vcdp->declBus  (c+1007,"v verilog_module dpath op1_reg_X q",-1,31,0);
	vcdp->declBus  (c+35,"v verilog_module dpath op1_reg_X d",-1,31,0);
	vcdp->declBit  (c+73,"v verilog_module dpath op1_reg_X en",-1);
	vcdp->declBus  (c+1150,"v verilog_module dpath op2_reg_X p_nbits",-1,31,0);
	vcdp->declBus  (c+1149,"v verilog_module dpath op2_reg_X p_reset_value",-1,31,0);
	vcdp->declBit  (c+1059,"v verilog_module dpath op2_reg_X clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module dpath op2_reg_X reset",-1);
	vcdp->declBus  (c+1008,"v verilog_module dpath op2_reg_X q",-1,31,0);
	vcdp->declBus  (c+1090,"v verilog_module dpath op2_reg_X d",-1,31,0);
	vcdp->declBit  (c+73,"v verilog_module dpath op2_reg_X en",-1);
	vcdp->declBus  (c+1150,"v verilog_module dpath pc_reg_X p_nbits",-1,31,0);
	vcdp->declBus  (c+1149,"v verilog_module dpath pc_reg_X p_reset_value",-1,31,0);
	vcdp->declBit  (c+1059,"v verilog_module dpath pc_reg_X clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module dpath pc_reg_X reset",-1);
	vcdp->declBus  (c+1009,"v verilog_module dpath pc_reg_X q",-1,31,0);
	vcdp->declBus  (c+1006,"v verilog_module dpath pc_reg_X d",-1,31,0);
	vcdp->declBit  (c+73,"v verilog_module dpath pc_reg_X en",-1);
	vcdp->declBus  (c+1150,"v verilog_module dpath pc_incr_X p_nbits",-1,31,0);
	vcdp->declBus  (c+1156,"v verilog_module dpath pc_incr_X p_inc_value",-1,31,0);
	vcdp->declBus  (c+1009,"v verilog_module dpath pc_incr_X in",-1,31,0);
	vcdp->declBus  (c+1010,"v verilog_module dpath pc_incr_X out",-1,31,0);
	vcdp->declBus  (c+1150,"v verilog_module dpath br_target_reg_X p_nbits",-1,31,0);
	vcdp->declBus  (c+1149,"v verilog_module dpath br_target_reg_X p_reset_value",-1,31,0);
	vcdp->declBit  (c+1059,"v verilog_module dpath br_target_reg_X clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module dpath br_target_reg_X reset",-1);
	vcdp->declBus  (c+1005,"v verilog_module dpath br_target_reg_X q",-1,31,0);
	vcdp->declBus  (c+114,"v verilog_module dpath br_target_reg_X d",-1,31,0);
	vcdp->declBit  (c+73,"v verilog_module dpath br_target_reg_X en",-1);
	vcdp->declBus  (c+1150,"v verilog_module dpath dmem_write_data_reg_X p_nbits",-1,31,0);
	vcdp->declBus  (c+1149,"v verilog_module dpath dmem_write_data_reg_X p_reset_value",-1,31,0);
	vcdp->declBit  (c+1059,"v verilog_module dpath dmem_write_data_reg_X clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module dpath dmem_write_data_reg_X reset",-1);
	vcdp->declBus  (c+938,"v verilog_module dpath dmem_write_data_reg_X q",-1,31,0);
	vcdp->declBus  (c+116,"v verilog_module dpath dmem_write_data_reg_X d",-1,31,0);
	vcdp->declBit  (c+73,"v verilog_module dpath dmem_write_data_reg_X en",-1);
	vcdp->declBus  (c+1007,"v verilog_module dpath alu in0",-1,31,0);
	vcdp->declBus  (c+1008,"v verilog_module dpath alu in1",-1,31,0);
	vcdp->declBus  (c+944,"v verilog_module dpath alu fn",-1,3,0);
	vcdp->declBus  (c+1,"v verilog_module dpath alu out",-1,31,0);
	vcdp->declBit  (c+5,"v verilog_module dpath alu ops_eq",-1);
	vcdp->declBit  (c+951,"v verilog_module dpath alu ops_lt",-1);
	vcdp->declBit  (c+6,"v verilog_module dpath alu ops_ltu",-1);
	vcdp->declQuad (c+1046,"v verilog_module dpath alu diff",-1,32,0);
	vcdp->declBus  (c+1150,"v verilog_module dpath alu cond_eq_comp p_nbits",-1,31,0);
	vcdp->declBus  (c+1007,"v verilog_module dpath alu cond_eq_comp in0",-1,31,0);
	vcdp->declBus  (c+1008,"v verilog_module dpath alu cond_eq_comp in1",-1,31,0);
	vcdp->declBit  (c+5,"v verilog_module dpath alu cond_eq_comp out",-1);
	vcdp->declBus  (c+1150,"v verilog_module dpath alu cond_ltu_comp p_nbits",-1,31,0);
	vcdp->declBus  (c+1007,"v verilog_module dpath alu cond_ltu_comp in0",-1,31,0);
	vcdp->declBus  (c+1008,"v verilog_module dpath alu cond_ltu_comp in1",-1,31,0);
	vcdp->declBit  (c+6,"v verilog_module dpath alu cond_ltu_comp out",-1);
	vcdp->declBit  (c+1059,"v verilog_module dpath mul clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module dpath mul reset",-1);
	vcdp->declBit  (c+71,"v verilog_module dpath mul req_val",-1);
	vcdp->declBit  (c+103,"v verilog_module dpath mul req_rdy",-1);
	vcdp->declQuad (c+1153,"v verilog_module dpath mul req_msg",-1,63,0);
	vcdp->declBit  (c+104,"v verilog_module dpath mul resp_val",-1);
	vcdp->declBit  (c+72,"v verilog_module dpath mul resp_rdy",-1);
	vcdp->declBus  (c+1011,"v verilog_module dpath mul resp_msg",-1,31,0);
	vcdp->declBit  (c+117,"v verilog_module dpath mul result_en",-1);
	vcdp->declBit  (c+118,"v verilog_module dpath mul a_mux_sel",-1);
	vcdp->declBit  (c+119,"v verilog_module dpath mul b_mux_sel",-1);
	vcdp->declBit  (c+120,"v verilog_module dpath mul result_mux_sel",-1);
	vcdp->declBit  (c+121,"v verilog_module dpath mul add_mux_sel",-1);
	vcdp->declBus  (c+39,"v verilog_module dpath mul shift_count",-1,3,0);
	vcdp->declBit  (c+1048,"v verilog_module dpath mul b_lsb",-1);
	vcdp->declBit  (c+1160,"v verilog_module dpath mul count_is_max",-1);
	vcdp->declArray(c+273,"v verilog_module dpath mul str",-1,4095,0);
	vcdp->declBit  (c+1059,"v verilog_module dpath mul ctrl clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module dpath mul ctrl reset",-1);
	vcdp->declBit  (c+71,"v verilog_module dpath mul ctrl req_val",-1);
	vcdp->declBit  (c+103,"v verilog_module dpath mul ctrl req_rdy",-1);
	vcdp->declBit  (c+104,"v verilog_module dpath mul ctrl resp_val",-1);
	vcdp->declBit  (c+72,"v verilog_module dpath mul ctrl resp_rdy",-1);
	vcdp->declBit  (c+117,"v verilog_module dpath mul ctrl result_en",-1);
	vcdp->declBit  (c+118,"v verilog_module dpath mul ctrl a_mux_sel",-1);
	vcdp->declBit  (c+119,"v verilog_module dpath mul ctrl b_mux_sel",-1);
	vcdp->declBit  (c+121,"v verilog_module dpath mul ctrl add_mux_sel",-1);
	vcdp->declBit  (c+120,"v verilog_module dpath mul ctrl result_mux_sel",-1);
	vcdp->declBit  (c+1048,"v verilog_module dpath mul ctrl b_lsb",-1);
	vcdp->declBus  (c+39,"v verilog_module dpath mul ctrl shift_count",-1,3,0);
	vcdp->declBus  (c+1049,"v verilog_module dpath mul ctrl state",-1,1,0);
	vcdp->declBus  (c+94,"v verilog_module dpath mul ctrl next_state",-1,1,0);
	vcdp->declBit  (c+1050,"v verilog_module dpath mul ctrl count_is_max",-1);
	vcdp->declBit  (c+1051,"v verilog_module dpath mul ctrl incr",-1);
	vcdp->declBit  (c+1052,"v verilog_module dpath mul ctrl clr",-1);
	vcdp->declBus  (c+1053,"v verilog_module dpath mul ctrl count",-1,7,0);
	vcdp->declBit  (c+1054,"v verilog_module dpath mul ctrl count_is_zero",-1);
	vcdp->declBus  (c+1117,"v verilog_module dpath mul ctrl a_x",-1,0,0);
	vcdp->declBus  (c+1117,"v verilog_module dpath mul ctrl a_shift",-1,0,0);
	vcdp->declBus  (c+1118,"v verilog_module dpath mul ctrl a_ld",-1,0,0);
	vcdp->declBus  (c+1117,"v verilog_module dpath mul ctrl b_x",-1,0,0);
	vcdp->declBus  (c+1117,"v verilog_module dpath mul ctrl b_shift",-1,0,0);
	vcdp->declBus  (c+1118,"v verilog_module dpath mul ctrl b_ld",-1,0,0);
	vcdp->declBus  (c+1117,"v verilog_module dpath mul ctrl add_x",-1,0,0);
	vcdp->declBus  (c+1117,"v verilog_module dpath mul ctrl add_add",-1,0,0);
	vcdp->declBus  (c+1118,"v verilog_module dpath mul ctrl add_res",-1,0,0);
	vcdp->declBus  (c+1117,"v verilog_module dpath mul ctrl result_x",-1,0,0);
	vcdp->declBus  (c+1117,"v verilog_module dpath mul ctrl result_add",-1,0,0);
	vcdp->declBus  (c+1118,"v verilog_module dpath mul ctrl result_0",-1,0,0);
	vcdp->declBit  (c+40,"v verilog_module dpath mul ctrl do_add_shift",-1);
	vcdp->declBit  (c+41,"v verilog_module dpath mul ctrl do_shift",-1);
	vcdp->declBit  (c+1059,"v verilog_module dpath mul ctrl cycle_counter clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module dpath mul ctrl cycle_counter reset",-1);
	vcdp->declBus  (c+39,"v verilog_module dpath mul ctrl cycle_counter increment",-1,3,0);
	vcdp->declBit  (c+1052,"v verilog_module dpath mul ctrl cycle_counter clear",-1);
	vcdp->declBus  (c+1053,"v verilog_module dpath mul ctrl cycle_counter count",-1,7,0);
	vcdp->declBit  (c+1054,"v verilog_module dpath mul ctrl cycle_counter count_is_zero",-1);
	vcdp->declBit  (c+1050,"v verilog_module dpath mul ctrl cycle_counter count_is_max",-1);
	vcdp->declBus  (c+42,"v verilog_module dpath mul ctrl cycle_counter count_next",-1,7,0);
	vcdp->declBus  (c+43,"v verilog_module dpath mul ctrl cycle_counter count_incr",-1,7,0);
	vcdp->declBus  (c+1161,"v verilog_module dpath mul ctrl cycle_counter count_reg p_nbits",-1,31,0);
	vcdp->declBus  (c+1149,"v verilog_module dpath mul ctrl cycle_counter count_reg p_reset_value",-1,31,0);
	vcdp->declBit  (c+1059,"v verilog_module dpath mul ctrl cycle_counter count_reg clk",-1);
	vcdp->declBit  (c+1094,"v verilog_module dpath mul ctrl cycle_counter count_reg reset",-1);
	vcdp->declBus  (c+1053,"v verilog_module dpath mul ctrl cycle_counter count_reg q",-1,7,0);
	vcdp->declBus  (c+42,"v verilog_module dpath mul ctrl cycle_counter count_reg d",-1,7,0);
	vcdp->declBus  (c+1161,"v verilog_module dpath mul ctrl cycle_counter count_addr p_nbits",-1,31,0);
	vcdp->declBus  (c+43,"v verilog_module dpath mul ctrl cycle_counter count_addr in0",-1,7,0);
	vcdp->declBus  (c+1053,"v verilog_module dpath mul ctrl cycle_counter count_addr in1",-1,7,0);
	vcdp->declBit  (c+1148,"v verilog_module dpath mul ctrl cycle_counter count_addr cin",-1);
	vcdp->declBus  (c+42,"v verilog_module dpath mul ctrl cycle_counter count_addr out",-1,7,0);
	vcdp->declBit  (c+44,"v verilog_module dpath mul ctrl cycle_counter count_addr cout",-1);
	vcdp->declBit  (c+1059,"v verilog_module dpath mul dpath clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module dpath mul dpath reset",-1);
	vcdp->declQuad (c+1153,"v verilog_module dpath mul dpath req_msg",-1,63,0);
	vcdp->declBus  (c+1011,"v verilog_module dpath mul dpath resp_msg",-1,31,0);
	vcdp->declBit  (c+118,"v verilog_module dpath mul dpath a_mux_sel",-1);
	vcdp->declBit  (c+119,"v verilog_module dpath mul dpath b_mux_sel",-1);
	vcdp->declBit  (c+120,"v verilog_module dpath mul dpath result_mux_sel",-1);
	vcdp->declBit  (c+117,"v verilog_module dpath mul dpath result_en",-1);
	vcdp->declBit  (c+121,"v verilog_module dpath mul dpath add_mux_sel",-1);
	vcdp->declBus  (c+39,"v verilog_module dpath mul dpath shift_count",-1,3,0);
	vcdp->declBit  (c+1048,"v verilog_module dpath mul dpath b_lsb",-1);
	vcdp->declBus  (c+1162,"v verilog_module dpath mul dpath req_msg_a",-1,31,0);
	vcdp->declBus  (c+1163,"v verilog_module dpath mul dpath req_msg_b",-1,31,0);
	vcdp->declBus  (c+122,"v verilog_module dpath mul dpath a_shift_out",-1,31,0);
	vcdp->declBus  (c+123,"v verilog_module dpath mul dpath a_mux_out",-1,31,0);
	vcdp->declBus  (c+1055,"v verilog_module dpath mul dpath a_reg_out",-1,31,0);
	vcdp->declBus  (c+124,"v verilog_module dpath mul dpath b_shift_out",-1,31,0);
	vcdp->declBus  (c+125,"v verilog_module dpath mul dpath b_mux_out",-1,31,0);
	vcdp->declBus  (c+1056,"v verilog_module dpath mul dpath b_reg_out",-1,31,0);
	vcdp->declBus  (c+1057,"v verilog_module dpath mul dpath add_out",-1,31,0);
	vcdp->declBit  (c+1058,"v verilog_module dpath mul dpath add_cout",-1);
	vcdp->declBus  (c+1011,"v verilog_module dpath mul dpath result_reg_out",-1,31,0);
	vcdp->declBus  (c+63,"v verilog_module dpath mul dpath add_mux_out",-1,31,0);
	vcdp->declBus  (c+126,"v verilog_module dpath mul dpath result_mux_out",-1,31,0);
	vcdp->declBus  (c+1150,"v verilog_module dpath mul dpath a_mux p_nbits",-1,31,0);
	vcdp->declBus  (c+122,"v verilog_module dpath mul dpath a_mux in0",-1,31,0);
	vcdp->declBus  (c+1162,"v verilog_module dpath mul dpath a_mux in1",-1,31,0);
	vcdp->declBit  (c+118,"v verilog_module dpath mul dpath a_mux sel",-1);
	vcdp->declBus  (c+123,"v verilog_module dpath mul dpath a_mux out",-1,31,0);
	vcdp->declBus  (c+1150,"v verilog_module dpath mul dpath a_reg p_nbits",-1,31,0);
	vcdp->declBit  (c+1059,"v verilog_module dpath mul dpath a_reg clk",-1);
	vcdp->declBus  (c+1055,"v verilog_module dpath mul dpath a_reg q",-1,31,0);
	vcdp->declBus  (c+123,"v verilog_module dpath mul dpath a_reg d",-1,31,0);
	vcdp->declBus  (c+1150,"v verilog_module dpath mul dpath b_mux p_nbits",-1,31,0);
	vcdp->declBus  (c+124,"v verilog_module dpath mul dpath b_mux in0",-1,31,0);
	vcdp->declBus  (c+1163,"v verilog_module dpath mul dpath b_mux in1",-1,31,0);
	vcdp->declBit  (c+119,"v verilog_module dpath mul dpath b_mux sel",-1);
	vcdp->declBus  (c+125,"v verilog_module dpath mul dpath b_mux out",-1,31,0);
	vcdp->declBus  (c+1150,"v verilog_module dpath mul dpath b_reg p_nbits",-1,31,0);
	vcdp->declBit  (c+1059,"v verilog_module dpath mul dpath b_reg clk",-1);
	vcdp->declBus  (c+1056,"v verilog_module dpath mul dpath b_reg q",-1,31,0);
	vcdp->declBus  (c+125,"v verilog_module dpath mul dpath b_reg d",-1,31,0);
	vcdp->declBus  (c+1150,"v verilog_module dpath mul dpath a_left_shifter p_nbits",-1,31,0);
	vcdp->declBus  (c+1156,"v verilog_module dpath mul dpath a_left_shifter p_shamt_nbits",-1,31,0);
	vcdp->declBus  (c+1055,"v verilog_module dpath mul dpath a_left_shifter in",-1,31,0);
	vcdp->declBus  (c+39,"v verilog_module dpath mul dpath a_left_shifter shamt",-1,3,0);
	vcdp->declBus  (c+122,"v verilog_module dpath mul dpath a_left_shifter out",-1,31,0);
	vcdp->declBus  (c+1150,"v verilog_module dpath mul dpath add p_nbits",-1,31,0);
	vcdp->declBus  (c+1055,"v verilog_module dpath mul dpath add in0",-1,31,0);
	vcdp->declBus  (c+1011,"v verilog_module dpath mul dpath add in1",-1,31,0);
	vcdp->declBit  (c+1148,"v verilog_module dpath mul dpath add cin",-1);
	vcdp->declBus  (c+1057,"v verilog_module dpath mul dpath add out",-1,31,0);
	vcdp->declBit  (c+1058,"v verilog_module dpath mul dpath add cout",-1);
	vcdp->declBus  (c+1150,"v verilog_module dpath mul dpath add_mux p_nbits",-1,31,0);
	vcdp->declBus  (c+1057,"v verilog_module dpath mul dpath add_mux in0",-1,31,0);
	vcdp->declBus  (c+1011,"v verilog_module dpath mul dpath add_mux in1",-1,31,0);
	vcdp->declBit  (c+121,"v verilog_module dpath mul dpath add_mux sel",-1);
	vcdp->declBus  (c+63,"v verilog_module dpath mul dpath add_mux out",-1,31,0);
	vcdp->declBus  (c+1150,"v verilog_module dpath mul dpath result_mux p_nbits",-1,31,0);
	vcdp->declBus  (c+63,"v verilog_module dpath mul dpath result_mux in0",-1,31,0);
	vcdp->declBus  (c+1149,"v verilog_module dpath mul dpath result_mux in1",-1,31,0);
	vcdp->declBit  (c+120,"v verilog_module dpath mul dpath result_mux sel",-1);
	vcdp->declBus  (c+126,"v verilog_module dpath mul dpath result_mux out",-1,31,0);
	vcdp->declBus  (c+1150,"v verilog_module dpath mul dpath result_reg p_nbits",-1,31,0);
	vcdp->declBit  (c+1059,"v verilog_module dpath mul dpath result_reg clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module dpath mul dpath result_reg reset",-1);
	vcdp->declBus  (c+1011,"v verilog_module dpath mul dpath result_reg q",-1,31,0);
	vcdp->declBus  (c+126,"v verilog_module dpath mul dpath result_reg d",-1,31,0);
	vcdp->declBit  (c+117,"v verilog_module dpath mul dpath result_reg en",-1);
	vcdp->declBit  (c+1059,"v verilog_module dpath mul vc_trace clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module dpath mul vc_trace reset",-1);
	vcdp->declBus  (c+401,"v verilog_module dpath mul vc_trace len0",-1,31,0);
	vcdp->declBus  (c+402,"v verilog_module dpath mul vc_trace len1",-1,31,0);
	vcdp->declBus  (c+403,"v verilog_module dpath mul vc_trace idx0",-1,31,0);
	vcdp->declBus  (c+404,"v verilog_module dpath mul vc_trace idx1",-1,31,0);
	vcdp->declBus  (c+1164,"v verilog_module dpath mul vc_trace nchars",-1,31,0);
	vcdp->declBus  (c+1165,"v verilog_module dpath mul vc_trace nbits",-1,31,0);
	vcdp->declArray(c+1166,"v verilog_module dpath mul vc_trace storage",-1,4095,0);
	vcdp->declBus  (c+1149,"v verilog_module dpath mul vc_trace cycles_next",-1,31,0);
	vcdp->declBus  (c+45,"v verilog_module dpath mul vc_trace cycles",-1,31,0);
	vcdp->declBus  (c+1131,"v verilog_module dpath mul vc_trace level",-1,3,0);
	vcdp->declBus  (c+1150,"v verilog_module dpath ex_result_sel_mux_X p_nbits",-1,31,0);
	vcdp->declBus  (c+1010,"v verilog_module dpath ex_result_sel_mux_X in0",-1,31,0);
	vcdp->declBus  (c+1,"v verilog_module dpath ex_result_sel_mux_X in1",-1,31,0);
	vcdp->declBus  (c+1011,"v verilog_module dpath ex_result_sel_mux_X in2",-1,31,0);
	vcdp->declBus  (c+943,"v verilog_module dpath ex_result_sel_mux_X sel",-1,1,0);
	vcdp->declBus  (c+36,"v verilog_module dpath ex_result_sel_mux_X out",-1,31,0);
	vcdp->declBus  (c+1150,"v verilog_module dpath ex_result_reg_M p_nbits",-1,31,0);
	vcdp->declBus  (c+1149,"v verilog_module dpath ex_result_reg_M p_reset_value",-1,31,0);
	vcdp->declBit  (c+1059,"v verilog_module dpath ex_result_reg_M clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module dpath ex_result_reg_M reset",-1);
	vcdp->declBus  (c+1012,"v verilog_module dpath ex_result_reg_M q",-1,31,0);
	vcdp->declBus  (c+36,"v verilog_module dpath ex_result_reg_M d",-1,31,0);
	vcdp->declBit  (c+74,"v verilog_module dpath ex_result_reg_M en",-1);
	vcdp->declBus  (c+1150,"v verilog_module dpath wb_result_sel_mux_M p_nbits",-1,31,0);
	vcdp->declBus  (c+1012,"v verilog_module dpath wb_result_sel_mux_M in0",-1,31,0);
	vcdp->declBus  (c+1089,"v verilog_module dpath wb_result_sel_mux_M in1",-1,31,0);
	vcdp->declBit  (c+946,"v verilog_module dpath wb_result_sel_mux_M sel",-1);
	vcdp->declBus  (c+1092,"v verilog_module dpath wb_result_sel_mux_M out",-1,31,0);
	vcdp->declBus  (c+1150,"v verilog_module dpath wb_result_reg_W p_nbits",-1,31,0);
	vcdp->declBus  (c+1149,"v verilog_module dpath wb_result_reg_W p_reset_value",-1,31,0);
	vcdp->declBit  (c+1059,"v verilog_module dpath wb_result_reg_W clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module dpath wb_result_reg_W reset",-1);
	vcdp->declBus  (c+941,"v verilog_module dpath wb_result_reg_W q",-1,31,0);
	vcdp->declBus  (c+1092,"v verilog_module dpath wb_result_reg_W d",-1,31,0);
	vcdp->declBit  (c+102,"v verilog_module dpath wb_result_reg_W en",-1);
	vcdp->declBus  (c+1150,"v verilog_module dpath stats_en_reg_W p_nbits",-1,31,0);
	vcdp->declBus  (c+1149,"v verilog_module dpath stats_en_reg_W p_reset_value",-1,31,0);
	vcdp->declBit  (c+1059,"v verilog_module dpath stats_en_reg_W clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module dpath stats_en_reg_W reset",-1);
	vcdp->declBus  (c+1013,"v verilog_module dpath stats_en_reg_W q",-1,31,0);
	vcdp->declBus  (c+941,"v verilog_module dpath stats_en_reg_W d",-1,31,0);
	vcdp->declBit  (c+949,"v verilog_module dpath stats_en_reg_W en",-1);
	vcdp->declBus  (c+260,"v verilog_module rv2isa rs1_str",-1,23,0);
	vcdp->declBus  (c+261,"v verilog_module rv2isa rs2_str",-1,23,0);
	vcdp->declBus  (c+262,"v verilog_module rv2isa rd_str",-1,23,0);
	vcdp->declArray(c+263,"v verilog_module rv2isa csr_str",-1,71,0);
	vcdp->declBus  (c+266,"v verilog_module rv2isa rs1",-1,4,0);
	vcdp->declBus  (c+267,"v verilog_module rv2isa rs2",-1,4,0);
	vcdp->declBus  (c+268,"v verilog_module rv2isa rd",-1,4,0);
	vcdp->declBus  (c+269,"v verilog_module rv2isa csr",-1,11,0);
	vcdp->declBit  (c+1059,"v verilog_module vc_trace clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module vc_trace reset",-1);
	vcdp->declBus  (c+270,"v verilog_module vc_trace len0",-1,31,0);
	vcdp->declBus  (c+1294,"v verilog_module vc_trace len1",-1,31,0);
	vcdp->declBus  (c+271,"v verilog_module vc_trace idx0",-1,31,0);
	vcdp->declBus  (c+272,"v verilog_module vc_trace idx1",-1,31,0);
	vcdp->declBus  (c+1164,"v verilog_module vc_trace nchars",-1,31,0);
	vcdp->declBus  (c+1165,"v verilog_module vc_trace nbits",-1,31,0);
	vcdp->declArray(c+1295,"v verilog_module vc_trace storage",-1,4095,0);
	vcdp->declBus  (c+1149,"v verilog_module vc_trace cycles_next",-1,31,0);
	vcdp->declBus  (c+46,"v verilog_module vc_trace cycles",-1,31,0);
	vcdp->declBus  (c+1131,"v verilog_module vc_trace level",-1,3,0);
	vcdp->declBit  (c+1059,"v verilog_module imemreq_trace clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module imemreq_trace reset",-1);
	vcdp->declBit  (c+1075,"v verilog_module imemreq_trace val",-1);
	vcdp->declBit  (c+1074,"v verilog_module imemreq_trace rdy",-1);
	vcdp->declArray(c+1071,"v verilog_module imemreq_trace msg",-1,76,0);
	vcdp->declBus  (c+1095,"v verilog_module imemreq_trace type_",-1,2,0);
	vcdp->declBus  (c+1096,"v verilog_module imemreq_trace opaque",-1,7,0);
	vcdp->declBus  (c+1097,"v verilog_module imemreq_trace addr",-1,31,0);
	vcdp->declBus  (c+1098,"v verilog_module imemreq_trace len",-1,1,0);
	vcdp->declBus  (c+1099,"v verilog_module imemreq_trace data",-1,31,0);
	vcdp->declBus  (c+1146,"v verilog_module imemreq_trace c_msg_nbits",-1,31,0);
	vcdp->declBus  (c+1123,"v verilog_module imemreq_trace c_read",-1,2,0);
	vcdp->declBus  (c+1124,"v verilog_module imemreq_trace c_write",-1,2,0);
	vcdp->declBus  (c+1125,"v verilog_module imemreq_trace c_write_init",-1,2,0);
	vcdp->declBus  (c+405,"v verilog_module imemreq_trace type_str",-1,15,0);
	vcdp->declArray(c+406,"v verilog_module imemreq_trace str",-1,4095,0);
	vcdp->declBit  (c+1059,"v verilog_module imemreq_trace vc_trace clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module imemreq_trace vc_trace reset",-1);
	vcdp->declBus  (c+534,"v verilog_module imemreq_trace vc_trace len0",-1,31,0);
	vcdp->declBus  (c+535,"v verilog_module imemreq_trace vc_trace len1",-1,31,0);
	vcdp->declBus  (c+536,"v verilog_module imemreq_trace vc_trace idx0",-1,31,0);
	vcdp->declBus  (c+537,"v verilog_module imemreq_trace vc_trace idx1",-1,31,0);
	vcdp->declBus  (c+1164,"v verilog_module imemreq_trace vc_trace nchars",-1,31,0);
	vcdp->declBus  (c+1165,"v verilog_module imemreq_trace vc_trace nbits",-1,31,0);
	vcdp->declArray(c+1423,"v verilog_module imemreq_trace vc_trace storage",-1,4095,0);
	vcdp->declBus  (c+1149,"v verilog_module imemreq_trace vc_trace cycles_next",-1,31,0);
	vcdp->declBus  (c+47,"v verilog_module imemreq_trace vc_trace cycles",-1,31,0);
	vcdp->declBus  (c+1131,"v verilog_module imemreq_trace vc_trace level",-1,3,0);
	vcdp->declBit  (c+1059,"v verilog_module dmemreq_trace clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module dmemreq_trace reset",-1);
	vcdp->declBit  (c+1066,"v verilog_module dmemreq_trace val",-1);
	vcdp->declBit  (c+1065,"v verilog_module dmemreq_trace rdy",-1);
	vcdp->declArray(c+1062,"v verilog_module dmemreq_trace msg",-1,76,0);
	vcdp->declBus  (c+1100,"v verilog_module dmemreq_trace type_",-1,2,0);
	vcdp->declBus  (c+1101,"v verilog_module dmemreq_trace opaque",-1,7,0);
	vcdp->declBus  (c+1102,"v verilog_module dmemreq_trace addr",-1,31,0);
	vcdp->declBus  (c+1103,"v verilog_module dmemreq_trace len",-1,1,0);
	vcdp->declBus  (c+1104,"v verilog_module dmemreq_trace data",-1,31,0);
	vcdp->declBus  (c+1146,"v verilog_module dmemreq_trace c_msg_nbits",-1,31,0);
	vcdp->declBus  (c+1123,"v verilog_module dmemreq_trace c_read",-1,2,0);
	vcdp->declBus  (c+1124,"v verilog_module dmemreq_trace c_write",-1,2,0);
	vcdp->declBus  (c+1125,"v verilog_module dmemreq_trace c_write_init",-1,2,0);
	vcdp->declBus  (c+538,"v verilog_module dmemreq_trace type_str",-1,15,0);
	vcdp->declArray(c+539,"v verilog_module dmemreq_trace str",-1,4095,0);
	vcdp->declBit  (c+1059,"v verilog_module dmemreq_trace vc_trace clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module dmemreq_trace vc_trace reset",-1);
	vcdp->declBus  (c+667,"v verilog_module dmemreq_trace vc_trace len0",-1,31,0);
	vcdp->declBus  (c+668,"v verilog_module dmemreq_trace vc_trace len1",-1,31,0);
	vcdp->declBus  (c+669,"v verilog_module dmemreq_trace vc_trace idx0",-1,31,0);
	vcdp->declBus  (c+670,"v verilog_module dmemreq_trace vc_trace idx1",-1,31,0);
	vcdp->declBus  (c+1164,"v verilog_module dmemreq_trace vc_trace nchars",-1,31,0);
	vcdp->declBus  (c+1165,"v verilog_module dmemreq_trace vc_trace nbits",-1,31,0);
	vcdp->declArray(c+1551,"v verilog_module dmemreq_trace vc_trace storage",-1,4095,0);
	vcdp->declBus  (c+1149,"v verilog_module dmemreq_trace vc_trace cycles_next",-1,31,0);
	vcdp->declBus  (c+48,"v verilog_module dmemreq_trace vc_trace cycles",-1,31,0);
	vcdp->declBus  (c+1131,"v verilog_module dmemreq_trace vc_trace level",-1,3,0);
	vcdp->declBit  (c+1059,"v verilog_module imemresp_trace clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module imemresp_trace reset",-1);
	vcdp->declBit  (c+1079,"v verilog_module imemresp_trace val",-1);
	vcdp->declBit  (c+1078,"v verilog_module imemresp_trace rdy",-1);
	vcdp->declQuad (c+1076,"v verilog_module imemresp_trace msg",-1,46,0);
	vcdp->declBus  (c+1105,"v verilog_module imemresp_trace type_",-1,2,0);
	vcdp->declBus  (c+1106,"v verilog_module imemresp_trace opaque",-1,7,0);
	vcdp->declBus  (c+1107,"v verilog_module imemresp_trace test",-1,1,0);
	vcdp->declBus  (c+1108,"v verilog_module imemresp_trace len",-1,1,0);
	vcdp->declBus  (c+1109,"v verilog_module imemresp_trace data",-1,31,0);
	vcdp->declBus  (c+1116,"v verilog_module imemresp_trace c_msg_nbits",-1,31,0);
	vcdp->declBus  (c+1123,"v verilog_module imemresp_trace c_read",-1,2,0);
	vcdp->declBus  (c+1124,"v verilog_module imemresp_trace c_write",-1,2,0);
	vcdp->declBus  (c+1125,"v verilog_module imemresp_trace c_write_init",-1,2,0);
	vcdp->declBus  (c+671,"v verilog_module imemresp_trace type_str",-1,15,0);
	vcdp->declArray(c+672,"v verilog_module imemresp_trace str",-1,4095,0);
	vcdp->declBit  (c+1059,"v verilog_module imemresp_trace vc_trace clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module imemresp_trace vc_trace reset",-1);
	vcdp->declBus  (c+800,"v verilog_module imemresp_trace vc_trace len0",-1,31,0);
	vcdp->declBus  (c+801,"v verilog_module imemresp_trace vc_trace len1",-1,31,0);
	vcdp->declBus  (c+802,"v verilog_module imemresp_trace vc_trace idx0",-1,31,0);
	vcdp->declBus  (c+803,"v verilog_module imemresp_trace vc_trace idx1",-1,31,0);
	vcdp->declBus  (c+1164,"v verilog_module imemresp_trace vc_trace nchars",-1,31,0);
	vcdp->declBus  (c+1165,"v verilog_module imemresp_trace vc_trace nbits",-1,31,0);
	vcdp->declArray(c+1679,"v verilog_module imemresp_trace vc_trace storage",-1,4095,0);
	vcdp->declBus  (c+1149,"v verilog_module imemresp_trace vc_trace cycles_next",-1,31,0);
	vcdp->declBus  (c+49,"v verilog_module imemresp_trace vc_trace cycles",-1,31,0);
	vcdp->declBus  (c+1131,"v verilog_module imemresp_trace vc_trace level",-1,3,0);
	vcdp->declBit  (c+1059,"v verilog_module dmemresp_trace clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module dmemresp_trace reset",-1);
	vcdp->declBit  (c+1070,"v verilog_module dmemresp_trace val",-1);
	vcdp->declBit  (c+1069,"v verilog_module dmemresp_trace rdy",-1);
	vcdp->declQuad (c+1067,"v verilog_module dmemresp_trace msg",-1,46,0);
	vcdp->declBus  (c+1110,"v verilog_module dmemresp_trace type_",-1,2,0);
	vcdp->declBus  (c+1111,"v verilog_module dmemresp_trace opaque",-1,7,0);
	vcdp->declBus  (c+1112,"v verilog_module dmemresp_trace test",-1,1,0);
	vcdp->declBus  (c+1113,"v verilog_module dmemresp_trace len",-1,1,0);
	vcdp->declBus  (c+1114,"v verilog_module dmemresp_trace data",-1,31,0);
	vcdp->declBus  (c+1116,"v verilog_module dmemresp_trace c_msg_nbits",-1,31,0);
	vcdp->declBus  (c+1123,"v verilog_module dmemresp_trace c_read",-1,2,0);
	vcdp->declBus  (c+1124,"v verilog_module dmemresp_trace c_write",-1,2,0);
	vcdp->declBus  (c+1125,"v verilog_module dmemresp_trace c_write_init",-1,2,0);
	vcdp->declBus  (c+804,"v verilog_module dmemresp_trace type_str",-1,15,0);
	vcdp->declArray(c+805,"v verilog_module dmemresp_trace str",-1,4095,0);
	vcdp->declBit  (c+1059,"v verilog_module dmemresp_trace vc_trace clk",-1);
	vcdp->declBit  (c+1086,"v verilog_module dmemresp_trace vc_trace reset",-1);
	vcdp->declBus  (c+933,"v verilog_module dmemresp_trace vc_trace len0",-1,31,0);
	vcdp->declBus  (c+934,"v verilog_module dmemresp_trace vc_trace len1",-1,31,0);
	vcdp->declBus  (c+935,"v verilog_module dmemresp_trace vc_trace idx0",-1,31,0);
	vcdp->declBus  (c+936,"v verilog_module dmemresp_trace vc_trace idx1",-1,31,0);
	vcdp->declBus  (c+1164,"v verilog_module dmemresp_trace vc_trace nchars",-1,31,0);
	vcdp->declBus  (c+1165,"v verilog_module dmemresp_trace vc_trace nbits",-1,31,0);
	vcdp->declArray(c+1807,"v verilog_module dmemresp_trace vc_trace storage",-1,4095,0);
	vcdp->declBus  (c+1149,"v verilog_module dmemresp_trace vc_trace cycles_next",-1,31,0);
	vcdp->declBus  (c+50,"v verilog_module dmemresp_trace vc_trace cycles",-1,31,0);
	vcdp->declBus  (c+1131,"v verilog_module dmemresp_trace vc_trace level",-1,3,0);
    }
}

void VProcBaseVRTL_0x18fc04dae4e29ba::traceFullThis__1(VProcBaseVRTL_0x18fc04dae4e29ba__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VProcBaseVRTL_0x18fc04dae4e29ba* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+8,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__ostall_W));
	vcdp->fullBit  (c+9,((1U == (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__j_type_D))));
	vcdp->fullBit  (c+10,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__inst_val_D));
	vcdp->fullBus  (c+11,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__j_type_D),2);
	vcdp->fullBus  (c+12,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__br_type_D),3);
	vcdp->fullBit  (c+13,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rs1_en_D));
	vcdp->fullBit  (c+14,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rs2_en_D));
	vcdp->fullBus  (c+15,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__alu_fn_D),4);
	vcdp->fullBus  (c+16,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__ex_result_sel_D),2);
	vcdp->fullBus  (c+17,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__dmemreq_type_D),2);
	vcdp->fullBit  (c+18,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__wb_result_sel_D));
	vcdp->fullBit  (c+19,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_wen_pending_D));
	vcdp->fullBit  (c+20,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__csrr_D));
	vcdp->fullBit  (c+21,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__csrw_D));
	vcdp->fullBit  (c+22,((((((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rs1_en_D) 
				  & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_X)) 
				 & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_wen_pending_X)) 
				& ((0x1fU & (vlTOPp->v__DOT__verilog_module__DOT__inst_D 
					     >> 0xfU)) 
				   == (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_waddr_X))) 
			       & (0U != (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_waddr_X)))));
	vcdp->fullBit  (c+23,((((((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rs1_en_D) 
				  & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_M)) 
				 & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_wen_pending_M)) 
				& ((0x1fU & (vlTOPp->v__DOT__verilog_module__DOT__inst_D 
					     >> 0xfU)) 
				   == (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_waddr_M))) 
			       & (0U != (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_waddr_M)))));
	vcdp->fullBit  (c+24,((((((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rs1_en_D) 
				  & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_W)) 
				 & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_wen_pending_W)) 
				& ((0x1fU & (vlTOPp->v__DOT__verilog_module__DOT__inst_D 
					     >> 0xfU)) 
				   == (IData)(vlTOPp->v__DOT__verilog_module__DOT__rf_waddr_W))) 
			       & (0U != (IData)(vlTOPp->v__DOT__verilog_module__DOT__rf_waddr_W)))));
	vcdp->fullBit  (c+25,((((((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rs2_en_D) 
				  & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_X)) 
				 & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_wen_pending_X)) 
				& ((0x1fU & (vlTOPp->v__DOT__verilog_module__DOT__inst_D 
					     >> 0x14U)) 
				   == (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_waddr_X))) 
			       & (0U != (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_waddr_X)))));
	vcdp->fullBit  (c+26,((((((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rs2_en_D) 
				  & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_M)) 
				 & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_wen_pending_M)) 
				& ((0x1fU & (vlTOPp->v__DOT__verilog_module__DOT__inst_D 
					     >> 0x14U)) 
				   == (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_waddr_M))) 
			       & (0U != (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_waddr_M)))));
	vcdp->fullBit  (c+27,((((((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rs2_en_D) 
				  & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_W)) 
				 & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_wen_pending_W)) 
				& ((0x1fU & (vlTOPp->v__DOT__verilog_module__DOT__inst_D 
					     >> 0x14U)) 
				   == (IData)(vlTOPp->v__DOT__verilog_module__DOT__rf_waddr_W))) 
			       & (0U != (IData)(vlTOPp->v__DOT__verilog_module__DOT__rf_waddr_W)))));
	vcdp->fullBit  (c+28,(((((((((((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rs1_en_D) 
				       & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_X)) 
				      & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_wen_pending_X)) 
				     & ((0x1fU & (vlTOPp->v__DOT__verilog_module__DOT__inst_D 
						  >> 0xfU)) 
					== (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_waddr_X))) 
				    & (0U != (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_waddr_X))) 
				   | (((((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rs1_en_D) 
					 & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_M)) 
					& (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_wen_pending_M)) 
				       & ((0x1fU & 
					   (vlTOPp->v__DOT__verilog_module__DOT__inst_D 
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
	vcdp->fullBus  (c+7,((3U & ((IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full)
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
	vcdp->fullBus  (c+30,(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr_inc),1);
	vcdp->fullArray(c+31,(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__read_data),77);
	vcdp->fullBit  (c+29,(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty));
	vcdp->fullBus  (c+4,(vlTOPp->v__DOT__verilog_module__DOT__imm_type_D),3);
	vcdp->fullBus  (c+37,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rf_read_data0),32);
	vcdp->fullBus  (c+38,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rf_read_data1),32);
	vcdp->fullBus  (c+34,(((0U == (0x1fU & (vlTOPp->v__DOT__verilog_module__DOT__inst_D 
						>> 0xfU)))
			        ? 0U : vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rf_read_data0)),32);
	vcdp->fullBit  (c+2,(vlTOPp->v__DOT__verilog_module__DOT__op1_sel_D));
	vcdp->fullBus  (c+3,(vlTOPp->v__DOT__verilog_module__DOT__op2_sel_D),2);
	vcdp->fullBus  (c+35,(((IData)(vlTOPp->v__DOT__verilog_module__DOT__op1_sel_D)
			        ? ((IData)(vlTOPp->v__DOT__verilog_module__DOT__op1_sel_D)
				    ? ((0U == (0x1fU 
					       & (vlTOPp->v__DOT__verilog_module__DOT__inst_D 
						  >> 0xfU)))
				        ? 0U : vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rf_read_data0)
				    : 0U) : vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__pc_D)),32);
	vcdp->fullBit  (c+5,(vlTOPp->v__DOT__verilog_module__DOT__br_cond_eq_X));
	vcdp->fullBit  (c+6,(vlTOPp->v__DOT__verilog_module__DOT__br_cond_ltu_X));
	vcdp->fullBit  (c+40,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__ctrl__DOT__do_add_shift));
	vcdp->fullBit  (c+41,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__ctrl__DOT__do_shift));
	vcdp->fullBus  (c+43,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__shift_count),8);
	vcdp->fullBus  (c+42,((0xffU & ((IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__shift_count) 
					+ (IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__ctrl__DOT__count)))),8);
	vcdp->fullBit  (c+44,((1U & (((IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__shift_count) 
				      + (IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__ctrl__DOT__count)) 
				     >> 8U))));
	vcdp->fullBus  (c+39,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__shift_count),4);
	vcdp->fullBus  (c+45,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__vc_trace__DOT__cycles),32);
	vcdp->fullBus  (c+1,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__alu_result_X),32);
	vcdp->fullBus  (c+36,(((0U == (IData)(vlTOPp->v__DOT__verilog_module__DOT__ex_result_sel_X))
			        ? ((IData)(4U) + vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__pc_X)
			        : ((1U == (IData)(vlTOPp->v__DOT__verilog_module__DOT__ex_result_sel_X))
				    ? vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__alu_result_X
				    : ((2U == (IData)(vlTOPp->v__DOT__verilog_module__DOT__ex_result_sel_X))
				        ? vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__result_reg_out
				        : 0U)))),32);
	vcdp->fullBus  (c+46,(vlTOPp->v__DOT__verilog_module__DOT__vc_trace__DOT__cycles),32);
	vcdp->fullBus  (c+47,(vlTOPp->v__DOT__verilog_module__DOT__imemreq_trace__DOT__vc_trace__DOT__cycles),32);
	vcdp->fullBus  (c+48,(vlTOPp->v__DOT__verilog_module__DOT__dmemreq_trace__DOT__vc_trace__DOT__cycles),32);
	vcdp->fullBus  (c+49,(vlTOPp->v__DOT__verilog_module__DOT__imemresp_trace__DOT__vc_trace__DOT__cycles),32);
	vcdp->fullBus  (c+50,(vlTOPp->v__DOT__verilog_module__DOT__dmemresp_trace__DOT__vc_trace__DOT__cycles),32);
	vcdp->fullBit  (c+51,((1U & ((IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_drop_unit__DOT__state)
				      ? (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_drop_unit__DOT__in_go))
				      : ((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__squash_F) 
					 & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_drop_unit__DOT__in_go)))))));
	vcdp->fullBit  (c+52,(((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_F) 
			       & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__imemresp_val_drop)))));
	vcdp->fullBit  (c+53,((((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_F) 
				& (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stall_F))) 
			       & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__squash_F)))));
	vcdp->fullBit  (c+54,((((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_D) 
				& (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stall_D))) 
			       & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__squash_D)))));
	vcdp->fullBit  (c+55,(((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_X) 
			       & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stall_X)))));
	vcdp->fullBit  (c+56,(((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_M) 
			       & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stall_M)))));
	vcdp->fullBus  (c+57,((((IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_enq) 
				& (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_bypass)))
			        ? (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr_inc)
			        : (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr))),1);
	vcdp->fullBus  (c+58,((((IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_deq) 
				& (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_bypass)))
			        ? ((2U != (1U & ((IData)(1U) 
						 + (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr)))) 
				   & ((IData)(1U) + (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr)))
			        : (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr))),1);
	vcdp->fullBit  (c+59,(((((IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_enq) 
				 & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_deq))) 
				& ((IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr_inc) 
				   == (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr))) 
			       | ((~ ((IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_deq) 
				      & (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full))) 
				  & (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full)))));
	vcdp->fullBit  (c+60,(((~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
			       & (((IData)(vlTOPp->v__DOT__verilog_module__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
				   & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass))) 
				  | (IData)(vlTOPp->v__DOT__verilog_module__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
	vcdp->fullBit  (c+61,(((~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
			       & (((IData)(vlTOPp->v__DOT__verilog_module__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
				   & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass))) 
				  | (IData)(vlTOPp->v__DOT__verilog_module__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
	vcdp->fullBit  (c+62,((1U & (IData)((VL_ULL(1) 
					     & (((QData)((IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__pc_D)) 
						 + (QData)((IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__imm_D))) 
						>> 0x20U))))));
	vcdp->fullBus  (c+63,(((IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__add_mux_sel)
			        ? ((IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__add_mux_sel)
				    ? vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__result_reg_out
				    : 0U) : (vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__a_reg_out 
					     + vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__result_reg_out))),32);
	vcdp->fullBit  (c+75,(vlTOPp->v__DOT__verilog_module__DOT__imem_drop_unit__DOT__in_go));
	vcdp->fullBit  (c+76,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__ostall_D));
	vcdp->fullBit  (c+77,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__ostall_M));
	vcdp->fullBit  (c+78,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stall_F));
	vcdp->fullBit  (c+79,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stall_D));
	vcdp->fullBit  (c+80,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stall_X));
	vcdp->fullBit  (c+81,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stall_M));
	vcdp->fullBit  (c+82,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__osquash_X));
	vcdp->fullBit  (c+83,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__squash_D));
	vcdp->fullBit  (c+64,(vlTOPp->v__DOT__verilog_module__DOT__imemreq_enq_val));
	vcdp->fullBit  (c+85,(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_enq));
	vcdp->fullBit  (c+86,(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_deq));
	vcdp->fullBit  (c+87,(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_bypass));
	vcdp->fullBit  (c+84,(((IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_enq) 
			       & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_bypass)))));
	vcdp->fullBit  (c+65,(vlTOPp->v__DOT__verilog_module__DOT__dmemreq_enq_val));
	vcdp->fullBit  (c+89,(vlTOPp->v__DOT__verilog_module__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
	vcdp->fullBit  (c+90,(vlTOPp->v__DOT__verilog_module__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
	vcdp->fullBit  (c+91,(vlTOPp->v__DOT__verilog_module__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
	vcdp->fullBit  (c+88,(((IData)(vlTOPp->v__DOT__verilog_module__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
			       & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)))));
	vcdp->fullBit  (c+92,(vlTOPp->v__DOT__verilog_module__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
	vcdp->fullBit  (c+93,(vlTOPp->v__DOT__verilog_module__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
	vcdp->fullBit  (c+66,(vlTOPp->v__DOT__verilog_module__DOT__imemresp_val_drop));
	vcdp->fullBit  (c+67,((1U & ((~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stall_F)) 
				     | (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__squash_F)))));
	vcdp->fullBit  (c+68,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__squash_F));
	vcdp->fullBit  (c+69,(vlTOPp->v__DOT__verilog_module__DOT__reg_en_F));
	vcdp->fullBit  (c+70,(vlTOPp->v__DOT__verilog_module__DOT__reg_en_D));
	vcdp->fullBit  (c+73,((1U & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stall_X)))));
	vcdp->fullBit  (c+71,(vlTOPp->v__DOT__verilog_module__DOT__imul_req_val_D));
	vcdp->fullBit  (c+72,(vlTOPp->v__DOT__verilog_module__DOT__imul_resp_rdy_X));
	vcdp->fullBus  (c+94,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__ctrl__DOT__next_state),2);
	vcdp->fullBit  (c+74,((1U & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stall_M)))));
	vcdp->fullBit  (c+95,(((IData)(vlTOPp->v__DOT__verilog_module__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
			       & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)))));
	vcdp->fullBit  (c+105,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__ostall_X));
	vcdp->fullBit  (c+106,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stall_W));
	vcdp->fullBit  (c+107,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__pc_redirect_D));
	vcdp->fullBit  (c+108,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__pc_redirect_X));
	vcdp->fullBus  (c+109,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__pc_sel_D),2);
	vcdp->fullBus  (c+110,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__pc_sel_X),2);
	vcdp->fullBit  (c+111,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__proc2mngr_val_D));
	vcdp->fullBit  (c+112,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__mngr2proc_rdy_D));
	vcdp->fullBit  (c+113,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stats_en_wen_D));
	vcdp->fullArray(c+96,(vlTOPp->v__DOT__verilog_module__DOT__dmemreq_enq_msg),77);
	vcdp->fullBit  (c+99,(vlTOPp->v__DOT__verilog_module__DOT__proc2mngr_enq_val));
	vcdp->fullBus  (c+100,(vlTOPp->v__DOT__verilog_module__DOT__pc_sel_F),2);
	vcdp->fullBus  (c+101,(vlTOPp->v__DOT__verilog_module__DOT__csrr_sel_D),2);
	vcdp->fullBus  (c+115,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__imm_D),32);
	vcdp->fullBus  (c+114,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__jal_target_D),32);
	vcdp->fullBus  (c+116,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf_rdata1_D),32);
	vcdp->fullBit  (c+103,(vlTOPp->v__DOT__verilog_module__DOT__imul_req_rdy_D));
	vcdp->fullBit  (c+104,(vlTOPp->v__DOT__verilog_module__DOT__imul_resp_val_X));
	vcdp->fullBus  (c+124,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_shift_out),32);
	vcdp->fullBit  (c+118,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__a_mux_sel));
	vcdp->fullBus  (c+123,(((IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__a_mux_sel)
				 ? ((IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__a_mux_sel)
				     ? (IData)((vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__imul_req_msg 
						>> 0x20U))
				     : 0U) : vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__a_shift_out)),32);
	vcdp->fullBit  (c+119,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__b_mux_sel));
	vcdp->fullBus  (c+125,(((IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__b_mux_sel)
				 ? ((IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__b_mux_sel)
				     ? (IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__imul_req_msg)
				     : 0U) : vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_shift_out)),32);
	vcdp->fullBus  (c+122,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__a_shift_out),32);
	vcdp->fullBit  (c+121,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__add_mux_sel));
	vcdp->fullBit  (c+120,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__result_mux_sel));
	vcdp->fullBus  (c+126,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__result_mux_out),32);
	vcdp->fullBit  (c+117,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__result_en));
	vcdp->fullBit  (c+102,((1U & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stall_W)))));
	vcdp->fullArray(c+128,(vlTOPp->v__DOT__verilog_module__DOT__imemreq_enq_msg),77);
	vcdp->fullBit  (c+131,(vlTOPp->v__DOT__verilog_module__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
	vcdp->fullBus  (c+127,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__pc_next_F),32);
	vcdp->fullArray(c+132,(vlTOPp->v__DOT__verilog_module__DOT__str),4096);
	vcdp->fullBus  (c+260,(vlTOPp->v__DOT__verilog_module__DOT__rv2isa__DOT__rs1_str),24);
	vcdp->fullBus  (c+261,(vlTOPp->v__DOT__verilog_module__DOT__rv2isa__DOT__rs2_str),24);
	vcdp->fullBus  (c+262,(vlTOPp->v__DOT__verilog_module__DOT__rv2isa__DOT__rd_str),24);
	vcdp->fullArray(c+263,(vlTOPp->v__DOT__verilog_module__DOT__rv2isa__DOT__csr_str),72);
	vcdp->fullBus  (c+266,(vlTOPp->v__DOT__verilog_module__DOT__rv2isa__DOT__rs1),5);
	vcdp->fullBus  (c+267,(vlTOPp->v__DOT__verilog_module__DOT__rv2isa__DOT__rs2),5);
	vcdp->fullBus  (c+268,(vlTOPp->v__DOT__verilog_module__DOT__rv2isa__DOT__rd),5);
	vcdp->fullBus  (c+269,(vlTOPp->v__DOT__verilog_module__DOT__rv2isa__DOT__csr),12);
	vcdp->fullBus  (c+270,(vlTOPp->v__DOT__verilog_module__DOT__vc_trace__DOT__len0),32);
	vcdp->fullBus  (c+271,(vlTOPp->v__DOT__verilog_module__DOT__vc_trace__DOT__idx0),32);
	vcdp->fullBus  (c+272,(vlTOPp->v__DOT__verilog_module__DOT__vc_trace__DOT__idx1),32);
	vcdp->fullArray(c+273,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__str),4096);
	vcdp->fullBus  (c+401,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__vc_trace__DOT__len0),32);
	vcdp->fullBus  (c+402,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__vc_trace__DOT__len1),32);
	vcdp->fullBus  (c+403,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__vc_trace__DOT__idx0),32);
	vcdp->fullBus  (c+404,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__vc_trace__DOT__idx1),32);
	vcdp->fullBus  (c+405,(vlTOPp->v__DOT__verilog_module__DOT__imemreq_trace__DOT__type_str),16);
	vcdp->fullArray(c+406,(vlTOPp->v__DOT__verilog_module__DOT__imemreq_trace__DOT__str),4096);
	vcdp->fullBus  (c+534,(vlTOPp->v__DOT__verilog_module__DOT__imemreq_trace__DOT__vc_trace__DOT__len0),32);
	vcdp->fullBus  (c+535,(vlTOPp->v__DOT__verilog_module__DOT__imemreq_trace__DOT__vc_trace__DOT__len1),32);
	vcdp->fullBus  (c+536,(vlTOPp->v__DOT__verilog_module__DOT__imemreq_trace__DOT__vc_trace__DOT__idx0),32);
	vcdp->fullBus  (c+537,(vlTOPp->v__DOT__verilog_module__DOT__imemreq_trace__DOT__vc_trace__DOT__idx1),32);
	vcdp->fullBus  (c+538,(vlTOPp->v__DOT__verilog_module__DOT__dmemreq_trace__DOT__type_str),16);
	vcdp->fullArray(c+539,(vlTOPp->v__DOT__verilog_module__DOT__dmemreq_trace__DOT__str),4096);
	vcdp->fullBus  (c+667,(vlTOPp->v__DOT__verilog_module__DOT__dmemreq_trace__DOT__vc_trace__DOT__len0),32);
	vcdp->fullBus  (c+668,(vlTOPp->v__DOT__verilog_module__DOT__dmemreq_trace__DOT__vc_trace__DOT__len1),32);
	vcdp->fullBus  (c+669,(vlTOPp->v__DOT__verilog_module__DOT__dmemreq_trace__DOT__vc_trace__DOT__idx0),32);
	vcdp->fullBus  (c+670,(vlTOPp->v__DOT__verilog_module__DOT__dmemreq_trace__DOT__vc_trace__DOT__idx1),32);
	vcdp->fullBus  (c+671,(vlTOPp->v__DOT__verilog_module__DOT__imemresp_trace__DOT__type_str),16);
	vcdp->fullArray(c+672,(vlTOPp->v__DOT__verilog_module__DOT__imemresp_trace__DOT__str),4096);
	vcdp->fullBus  (c+800,(vlTOPp->v__DOT__verilog_module__DOT__imemresp_trace__DOT__vc_trace__DOT__len0),32);
	vcdp->fullBus  (c+801,(vlTOPp->v__DOT__verilog_module__DOT__imemresp_trace__DOT__vc_trace__DOT__len1),32);
	vcdp->fullBus  (c+802,(vlTOPp->v__DOT__verilog_module__DOT__imemresp_trace__DOT__vc_trace__DOT__idx0),32);
	vcdp->fullBus  (c+803,(vlTOPp->v__DOT__verilog_module__DOT__imemresp_trace__DOT__vc_trace__DOT__idx1),32);
	vcdp->fullBus  (c+804,(vlTOPp->v__DOT__verilog_module__DOT__dmemresp_trace__DOT__type_str),16);
	vcdp->fullArray(c+805,(vlTOPp->v__DOT__verilog_module__DOT__dmemresp_trace__DOT__str),4096);
	vcdp->fullBus  (c+933,(vlTOPp->v__DOT__verilog_module__DOT__dmemresp_trace__DOT__vc_trace__DOT__len0),32);
	vcdp->fullBus  (c+934,(vlTOPp->v__DOT__verilog_module__DOT__dmemresp_trace__DOT__vc_trace__DOT__len1),32);
	vcdp->fullBus  (c+935,(vlTOPp->v__DOT__verilog_module__DOT__dmemresp_trace__DOT__vc_trace__DOT__idx0),32);
	vcdp->fullBus  (c+936,(vlTOPp->v__DOT__verilog_module__DOT__dmemresp_trace__DOT__vc_trace__DOT__idx1),32);
	vcdp->fullBus  (c+939,(((2U == (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__dmemreq_type_X))
				 ? 1U : 0U)),3);
	vcdp->fullBit  (c+945,((2U == (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__dmemreq_type_X))));
	vcdp->fullBit  (c+954,(vlTOPp->v__DOT__verilog_module__DOT__imem_drop_unit__DOT__state));
	vcdp->fullBit  (c+955,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_F));
	vcdp->fullBit  (c+956,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_D));
	vcdp->fullBit  (c+957,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_X));
	vcdp->fullBit  (c+958,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_M));
	vcdp->fullBit  (c+959,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_W));
	vcdp->fullBus  (c+964,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__inst_X),32);
	vcdp->fullBus  (c+965,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__dmemreq_type_X),2);
	vcdp->fullBit  (c+966,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__wb_result_sel_X));
	vcdp->fullBit  (c+967,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_wen_pending_X));
	vcdp->fullBus  (c+968,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_waddr_X),5);
	vcdp->fullBit  (c+969,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__proc2mngr_val_X));
	vcdp->fullBit  (c+970,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stats_en_wen_X));
	vcdp->fullBus  (c+971,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__br_type_X),3);
	vcdp->fullBus  (c+972,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__j_type_X),2);
	vcdp->fullBus  (c+973,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__inst_M),32);
	vcdp->fullBus  (c+974,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__dmemreq_type_M),2);
	vcdp->fullBit  (c+975,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_wen_pending_M));
	vcdp->fullBus  (c+976,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_waddr_M),5);
	vcdp->fullBit  (c+977,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__proc2mngr_val_M));
	vcdp->fullBit  (c+978,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stats_en_wen_M));
	vcdp->fullBus  (c+979,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__inst_W),32);
	vcdp->fullBit  (c+980,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__proc2mngr_val_W));
	vcdp->fullBit  (c+981,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_wen_pending_W));
	vcdp->fullBit  (c+982,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stats_en_wen_pending_W));
	vcdp->fullBus  (c+983,((0x7fU & vlTOPp->v__DOT__verilog_module__DOT__inst_D)),7);
	vcdp->fullBus  (c+984,((7U & (vlTOPp->v__DOT__verilog_module__DOT__inst_D 
				      >> 0xcU))),3);
	vcdp->fullBit  (c+937,((1U & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full)))));
	vcdp->fullBit  (c+987,(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full));
	vcdp->fullBus  (c+988,((1U & ((IData)(1U) + (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr)))),1);
	vcdp->fullBus  (c+989,(((2U != (1U & ((IData)(1U) 
					      + (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr)))) 
				& ((IData)(1U) + (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr)))),1);
	vcdp->fullBus  (c+990,((1U & ((IData)(1U) + (IData)(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr)))),1);
	vcdp->fullBus  (c+986,(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr),1);
	vcdp->fullBus  (c+985,(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr),1);
	vcdp->fullArray(c+991,(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile[0]),77);
	vcdp->fullArray(c+994,(vlTOPp->v__DOT__verilog_module__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile[1]),77);
	vcdp->fullBit  (c+952,((1U & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
	vcdp->fullBit  (c+997,(vlTOPp->v__DOT__verilog_module__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full));
	vcdp->fullArray(c+998,(vlTOPp->v__DOT__verilog_module__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore),77);
	vcdp->fullBit  (c+940,((1U & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
	vcdp->fullBit  (c+953,((1U & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
	vcdp->fullBit  (c+1001,(vlTOPp->v__DOT__verilog_module__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full));
	vcdp->fullBus  (c+1002,(vlTOPp->v__DOT__verilog_module__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore),32);
	vcdp->fullBit  (c+942,((1U & (~ (IData)(vlTOPp->v__DOT__verilog_module__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
	vcdp->fullBus  (c+1013,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__stats_en_W),32);
	vcdp->fullBus  (c+1004,(((IData)(4U) + vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__pc_F)),32);
	vcdp->fullBus  (c+1003,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__pc_F),32);
	vcdp->fullBus  (c+960,((0x1fU & (vlTOPp->v__DOT__verilog_module__DOT__inst_D 
					 >> 7U))),5);
	vcdp->fullBus  (c+963,((0xfffU & (vlTOPp->v__DOT__verilog_module__DOT__inst_D 
					  >> 0x14U))),12);
	vcdp->fullBus  (c+950,(vlTOPp->v__DOT__verilog_module__DOT__inst_D),32);
	vcdp->fullBus  (c+961,((0x1fU & (vlTOPp->v__DOT__verilog_module__DOT__inst_D 
					 >> 0xfU))),5);
	vcdp->fullBus  (c+962,((0x1fU & (vlTOPp->v__DOT__verilog_module__DOT__inst_D 
					 >> 0x14U))),5);
	vcdp->fullBit  (c+948,(((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_W) 
				& (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__rf_wen_pending_W))));
	vcdp->fullBus  (c+947,(vlTOPp->v__DOT__verilog_module__DOT__rf_waddr_W),5);
	vcdp->fullBus  (c+1014,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[0]),32);
	vcdp->fullBus  (c+1015,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[1]),32);
	vcdp->fullBus  (c+1016,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[2]),32);
	vcdp->fullBus  (c+1017,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[3]),32);
	vcdp->fullBus  (c+1018,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[4]),32);
	vcdp->fullBus  (c+1019,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[5]),32);
	vcdp->fullBus  (c+1020,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[6]),32);
	vcdp->fullBus  (c+1021,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[7]),32);
	vcdp->fullBus  (c+1022,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[8]),32);
	vcdp->fullBus  (c+1023,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[9]),32);
	vcdp->fullBus  (c+1024,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[10]),32);
	vcdp->fullBus  (c+1025,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[11]),32);
	vcdp->fullBus  (c+1026,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[12]),32);
	vcdp->fullBus  (c+1027,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[13]),32);
	vcdp->fullBus  (c+1028,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[14]),32);
	vcdp->fullBus  (c+1029,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[15]),32);
	vcdp->fullBus  (c+1030,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[16]),32);
	vcdp->fullBus  (c+1031,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[17]),32);
	vcdp->fullBus  (c+1032,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[18]),32);
	vcdp->fullBus  (c+1033,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[19]),32);
	vcdp->fullBus  (c+1034,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[20]),32);
	vcdp->fullBus  (c+1035,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[21]),32);
	vcdp->fullBus  (c+1036,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[22]),32);
	vcdp->fullBus  (c+1037,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[23]),32);
	vcdp->fullBus  (c+1038,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[24]),32);
	vcdp->fullBus  (c+1039,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[25]),32);
	vcdp->fullBus  (c+1040,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[26]),32);
	vcdp->fullBus  (c+1041,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[27]),32);
	vcdp->fullBus  (c+1042,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[28]),32);
	vcdp->fullBus  (c+1043,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[29]),32);
	vcdp->fullBus  (c+1044,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[30]),32);
	vcdp->fullBus  (c+1045,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[31]),32);
	vcdp->fullBus  (c+1006,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__pc_D),32);
	vcdp->fullBus  (c+1009,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__pc_X),32);
	vcdp->fullBus  (c+1005,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__br_target_X),32);
	vcdp->fullBus  (c+938,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__dmemreq_msg_data_reg_X_out),32);
	vcdp->fullBus  (c+944,(vlTOPp->v__DOT__verilog_module__DOT__alu_fn_X),4);
	vcdp->fullBit  (c+951,((1U & (IData)((VL_ULL(1) 
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
	vcdp->fullQuad (c+1046,((VL_ULL(0x1ffffffff) 
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
	vcdp->fullBus  (c+1007,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__op1_X),32);
	vcdp->fullBus  (c+1008,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__op2_X),32);
	vcdp->fullBus  (c+1049,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__ctrl__DOT__state),2);
	vcdp->fullBit  (c+1050,((0x20U <= (IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__ctrl__DOT__count))));
	vcdp->fullBit  (c+1051,((1U == (IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__ctrl__DOT__state))));
	vcdp->fullBit  (c+1052,((1U != (IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__ctrl__DOT__state))));
	vcdp->fullBit  (c+1054,((0U == (IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__ctrl__DOT__count))));
	vcdp->fullBus  (c+1053,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__ctrl__DOT__count),8);
	vcdp->fullBit  (c+1048,((1U & vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_reg_out)));
	vcdp->fullBus  (c+1056,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_reg_out),32);
	vcdp->fullBit  (c+1058,((1U & (IData)((VL_ULL(1) 
					       & (((QData)((IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__a_reg_out)) 
						   + (QData)((IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__result_reg_out))) 
						  >> 0x20U))))));
	vcdp->fullBus  (c+1055,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__a_reg_out),32);
	vcdp->fullBus  (c+1057,((vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__a_reg_out 
				 + vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__result_reg_out)),32);
	vcdp->fullBus  (c+1010,(((IData)(4U) + vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__pc_X)),32);
	vcdp->fullBus  (c+1011,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__dpath__DOT__result_reg_out),32);
	vcdp->fullBus  (c+943,(vlTOPp->v__DOT__verilog_module__DOT__ex_result_sel_X),2);
	vcdp->fullBus  (c+1012,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__ex_result_M),32);
	vcdp->fullBit  (c+946,(vlTOPp->v__DOT__verilog_module__DOT__wb_result_sel_M));
	vcdp->fullBus  (c+941,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__wb_result_W),32);
	vcdp->fullBit  (c+949,(((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_W) 
				& (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__stats_en_wen_pending_W))));
	vcdp->fullBit  (c+1082,(vlTOPp->mngr2proc_val));
	vcdp->fullBit  (c+1081,(vlTOPp->mngr2proc_rdy));
	vcdp->fullBit  (c+1060,(vlTOPp->commit_inst));
	vcdp->fullBit  (c+1088,((((IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__val_D) 
				  & (IData)(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__mngr2proc_rdy_D)) 
				 & (~ (IData)(vlTOPp->mngr2proc_val)))));
	vcdp->fullBit  (c+1085,(vlTOPp->proc2mngr_val));
	vcdp->fullBit  (c+1084,(vlTOPp->proc2mngr_rdy));
	vcdp->fullBus  (c+1083,(vlTOPp->proc2mngr_msg),32);
	vcdp->fullBit  (c+1087,(vlTOPp->stats_en));
	vcdp->fullBus  (c+1093,((IData)(vlTOPp->imemresp_msg)),32);
	vcdp->fullBus  (c+1080,(vlTOPp->mngr2proc_msg),32);
	vcdp->fullBus  (c+1061,(vlTOPp->core_id),32);
	vcdp->fullBus  (c+1091,(((0U == (IData)(vlTOPp->v__DOT__verilog_module__DOT__csrr_sel_D))
				  ? vlTOPp->mngr2proc_msg
				  : ((1U == (IData)(vlTOPp->v__DOT__verilog_module__DOT__csrr_sel_D))
				      ? 1U : ((2U == (IData)(vlTOPp->v__DOT__verilog_module__DOT__csrr_sel_D))
					       ? vlTOPp->core_id
					       : 0U)))),32);
	vcdp->fullBus  (c+1090,(((0U == (IData)(vlTOPp->v__DOT__verilog_module__DOT__op2_sel_D))
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
	vcdp->fullBit  (c+1094,(((IData)(vlTOPp->reset) 
				 | (1U != (IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__ctrl__DOT__state)))));
	vcdp->fullBus  (c+1089,((IData)(vlTOPp->dmemresp_msg)),32);
	vcdp->fullBus  (c+1092,(((IData)(vlTOPp->v__DOT__verilog_module__DOT__wb_result_sel_M)
				  ? ((IData)(vlTOPp->v__DOT__verilog_module__DOT__wb_result_sel_M)
				      ? (IData)(vlTOPp->dmemresp_msg)
				      : 0U) : vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__ex_result_M)),32);
	vcdp->fullBit  (c+1075,(vlTOPp->imemreq_val));
	vcdp->fullBit  (c+1074,(vlTOPp->imemreq_rdy));
	vcdp->fullArray(c+1071,(vlTOPp->imemreq_msg),77);
	vcdp->fullBus  (c+1095,((7U & (vlTOPp->imemreq_msg[2U] 
				       >> 0xaU))),3);
	vcdp->fullBus  (c+1096,((0xffU & (vlTOPp->imemreq_msg[2U] 
					  >> 2U))),8);
	vcdp->fullBus  (c+1097,(((vlTOPp->imemreq_msg[2U] 
				  << 0x1eU) | (vlTOPp->imemreq_msg[1U] 
					       >> 2U))),32);
	vcdp->fullBus  (c+1098,((3U & vlTOPp->imemreq_msg[1U])),2);
	vcdp->fullBus  (c+1099,(vlTOPp->imemreq_msg[0U]),32);
	vcdp->fullBit  (c+1066,(vlTOPp->dmemreq_val));
	vcdp->fullBit  (c+1065,(vlTOPp->dmemreq_rdy));
	vcdp->fullArray(c+1062,(vlTOPp->dmemreq_msg),77);
	vcdp->fullBus  (c+1100,((7U & (vlTOPp->dmemreq_msg[2U] 
				       >> 0xaU))),3);
	vcdp->fullBus  (c+1101,((0xffU & (vlTOPp->dmemreq_msg[2U] 
					  >> 2U))),8);
	vcdp->fullBus  (c+1102,(((vlTOPp->dmemreq_msg[2U] 
				  << 0x1eU) | (vlTOPp->dmemreq_msg[1U] 
					       >> 2U))),32);
	vcdp->fullBus  (c+1103,((3U & vlTOPp->dmemreq_msg[1U])),2);
	vcdp->fullBus  (c+1104,(vlTOPp->dmemreq_msg[0U]),32);
	vcdp->fullBit  (c+1079,(vlTOPp->imemresp_val));
	vcdp->fullBit  (c+1078,(vlTOPp->imemresp_rdy));
	vcdp->fullQuad (c+1076,(vlTOPp->imemresp_msg),47);
	vcdp->fullBus  (c+1105,((7U & (IData)((vlTOPp->imemresp_msg 
					       >> 0x2cU)))),3);
	vcdp->fullBus  (c+1106,((0xffU & (IData)((vlTOPp->imemresp_msg 
						  >> 0x24U)))),8);
	vcdp->fullBus  (c+1107,((3U & (IData)((vlTOPp->imemresp_msg 
					       >> 0x22U)))),2);
	vcdp->fullBus  (c+1108,((3U & (IData)((vlTOPp->imemresp_msg 
					       >> 0x20U)))),2);
	vcdp->fullBus  (c+1109,((IData)(vlTOPp->imemresp_msg)),32);
	vcdp->fullBit  (c+1070,(vlTOPp->dmemresp_val));
	vcdp->fullBit  (c+1069,(vlTOPp->dmemresp_rdy));
	vcdp->fullQuad (c+1067,(vlTOPp->dmemresp_msg),47);
	vcdp->fullBus  (c+1110,((7U & (IData)((vlTOPp->dmemresp_msg 
					       >> 0x2cU)))),3);
	vcdp->fullBus  (c+1111,((0xffU & (IData)((vlTOPp->dmemresp_msg 
						  >> 0x24U)))),8);
	vcdp->fullBus  (c+1112,((3U & (IData)((vlTOPp->dmemresp_msg 
					       >> 0x22U)))),2);
	vcdp->fullBus  (c+1113,((3U & (IData)((vlTOPp->dmemresp_msg 
					       >> 0x20U)))),2);
	vcdp->fullBus  (c+1114,((IData)(vlTOPp->dmemresp_msg)),32);
	vcdp->fullBit  (c+1059,(vlTOPp->clk));
	vcdp->fullBit  (c+1086,(vlTOPp->reset));
	vcdp->fullBus  (c+1122,(3U),2);
	vcdp->fullBus  (c+1126,(3U),3);
	vcdp->fullBus  (c+1127,(4U),3);
	vcdp->fullBus  (c+1128,(5U),3);
	vcdp->fullBus  (c+1129,(6U),3);
	vcdp->fullBus  (c+1130,(0U),4);
	vcdp->fullBus  (c+1133,(3U),4);
	vcdp->fullBus  (c+1134,(4U),4);
	vcdp->fullBus  (c+1135,(5U),4);
	vcdp->fullBus  (c+1136,(6U),4);
	vcdp->fullBus  (c+1137,(7U),4);
	vcdp->fullBus  (c+1138,(8U),4);
	vcdp->fullBus  (c+1139,(9U),4);
	vcdp->fullBus  (c+1140,(0xaU),4);
	vcdp->fullBus  (c+1141,(0xbU),4);
	vcdp->fullBus  (c+1142,(0xcU),4);
	vcdp->fullBus  (c+1143,(0xdU),4);
	vcdp->fullBus  (c+1119,(0U),2);
	vcdp->fullBus  (c+1120,(1U),2);
	vcdp->fullBus  (c+1121,(2U),2);
	vcdp->fullBit  (c+1144,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__r_w));
	vcdp->fullBus  (c+1145,(vlTOPp->v__DOT__verilog_module__DOT__ctrl__DOT__inst_unpack__DOT__funct7),7);
	vcdp->fullBus  (c+1147,(2U),32);
	vcdp->fullBus  (c+1132,(2U),4);
	vcdp->fullBus  (c+1151,(0x200U),32);
	vcdp->fullBus  (c+1152,(0U),32);
	vcdp->fullBus  (c+1115,(1U),32);
	vcdp->fullBus  (c+1155,(0x1fcU),32);
	vcdp->fullBus  (c+1157,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__inst_unpack__DOT__funct7),7);
	vcdp->fullBus  (c+1158,(5U),32);
	vcdp->fullBus  (c+1159,(1U),32);
	vcdp->fullBit  (c+1160,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__count_is_max));
	vcdp->fullBus  (c+1117,(0U),1);
	vcdp->fullBus  (c+1118,(1U),1);
	vcdp->fullBus  (c+1161,(8U),32);
	vcdp->fullQuad (c+1153,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__imul_req_msg),64);
	vcdp->fullBus  (c+1162,((IData)((vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__imul_req_msg 
					 >> 0x20U))),32);
	vcdp->fullBus  (c+1163,((IData)(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__imul_req_msg)),32);
	vcdp->fullBus  (c+1156,(4U),32);
	vcdp->fullBit  (c+1148,(0U));
	vcdp->fullArray(c+1166,(vlTOPp->v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__vc_trace__DOT__storage),4096);
	vcdp->fullBus  (c+1150,(0x20U),32);
	vcdp->fullBus  (c+1294,(vlTOPp->v__DOT__verilog_module__DOT__vc_trace__DOT__len1),32);
	vcdp->fullArray(c+1295,(vlTOPp->v__DOT__verilog_module__DOT__vc_trace__DOT__storage),4096);
	vcdp->fullArray(c+1423,(vlTOPp->v__DOT__verilog_module__DOT__imemreq_trace__DOT__vc_trace__DOT__storage),4096);
	vcdp->fullBus  (c+1146,(0x4dU),32);
	vcdp->fullArray(c+1551,(vlTOPp->v__DOT__verilog_module__DOT__dmemreq_trace__DOT__vc_trace__DOT__storage),4096);
	vcdp->fullArray(c+1679,(vlTOPp->v__DOT__verilog_module__DOT__imemresp_trace__DOT__vc_trace__DOT__storage),4096);
	vcdp->fullBus  (c+1116,(0x2fU),32);
	vcdp->fullBus  (c+1123,(0U),3);
	vcdp->fullBus  (c+1124,(1U),3);
	vcdp->fullBus  (c+1125,(2U),3);
	vcdp->fullBus  (c+1164,(0x200U),32);
	vcdp->fullBus  (c+1165,(0x1000U),32);
	vcdp->fullArray(c+1807,(vlTOPp->v__DOT__verilog_module__DOT__dmemresp_trace__DOT__vc_trace__DOT__storage),4096);
	vcdp->fullBus  (c+1149,(0U),32);
	vcdp->fullBus  (c+1131,(1U),4);
    }
}
