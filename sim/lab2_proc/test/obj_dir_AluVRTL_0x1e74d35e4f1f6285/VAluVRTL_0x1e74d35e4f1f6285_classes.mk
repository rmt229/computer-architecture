# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VAluVRTL_0x1e74d35e4f1f6285.mk for the caller.

### Switches...
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Tracing output mode?  0/1 (from --trace)
VM_TRACE = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VAluVRTL_0x1e74d35e4f1f6285 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VAluVRTL_0x1e74d35e4f1f6285__Dpi \
	VAluVRTL_0x1e74d35e4f1f6285__Trace \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VAluVRTL_0x1e74d35e4f1f6285__Syms \
	VAluVRTL_0x1e74d35e4f1f6285__Trace__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
