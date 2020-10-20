// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VProcBaseVRTL_0x18fc04dae4e29ba__Syms.h"
#include "VProcBaseVRTL_0x18fc04dae4e29ba.h"
#include "VProcBaseVRTL_0x18fc04dae4e29ba___024unit.h"

// FUNCTIONS
VProcBaseVRTL_0x18fc04dae4e29ba__Syms::VProcBaseVRTL_0x18fc04dae4e29ba__Syms(VProcBaseVRTL_0x18fc04dae4e29ba* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_activity(false)
	, __Vm_didInit(false)
	// Setup submodule names
	, TOP____024unit                 (Verilated::catName(topp->name(),"$unit"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT____024unit          = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP____024unit.__Vconfigure(this, true);
    // Setup scope names
    __Vscope_v__verilog_module.configure(this,name(),"v.verilog_module");
    __Vscope_v__verilog_module__dmemreq_trace.configure(this,name(),"v.verilog_module.dmemreq_trace");
    __Vscope_v__verilog_module__dmemresp_trace.configure(this,name(),"v.verilog_module.dmemresp_trace");
    __Vscope_v__verilog_module__dpath__mul.configure(this,name(),"v.verilog_module.dpath.mul");
    __Vscope_v__verilog_module__imemreq_trace.configure(this,name(),"v.verilog_module.imemreq_trace");
    __Vscope_v__verilog_module__imemresp_trace.configure(this,name(),"v.verilog_module.imemresp_trace");
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
	__Vscope_v__verilog_module.exportInsert(__Vfinal,"line_trace", (void*)(&VProcBaseVRTL_0x18fc04dae4e29ba::__Vdpiexp_v__DOT__verilog_module__DOT__line_trace_TOP));
	__Vscope_v__verilog_module__dmemreq_trace.exportInsert(__Vfinal,"line_trace", (void*)(&VProcBaseVRTL_0x18fc04dae4e29ba::__Vdpiexp_v__DOT__verilog_module__DOT__dmemreq_trace__DOT__line_trace_TOP));
	__Vscope_v__verilog_module__dmemresp_trace.exportInsert(__Vfinal,"line_trace", (void*)(&VProcBaseVRTL_0x18fc04dae4e29ba::__Vdpiexp_v__DOT__verilog_module__DOT__dmemresp_trace__DOT__line_trace_TOP));
	__Vscope_v__verilog_module__dpath__mul.exportInsert(__Vfinal,"line_trace", (void*)(&VProcBaseVRTL_0x18fc04dae4e29ba::__Vdpiexp_v__DOT__verilog_module__DOT__dpath__DOT__mul__DOT__line_trace_TOP));
	__Vscope_v__verilog_module__imemreq_trace.exportInsert(__Vfinal,"line_trace", (void*)(&VProcBaseVRTL_0x18fc04dae4e29ba::__Vdpiexp_v__DOT__verilog_module__DOT__imemreq_trace__DOT__line_trace_TOP));
	__Vscope_v__verilog_module__imemresp_trace.exportInsert(__Vfinal,"line_trace", (void*)(&VProcBaseVRTL_0x18fc04dae4e29ba::__Vdpiexp_v__DOT__verilog_module__DOT__imemresp_trace__DOT__line_trace_TOP));
    }
}
