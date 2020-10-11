#=======================================================================
# VImmGenVRTL_0x1e74d35e4f1f6285_v.py
#=======================================================================
# This wrapper makes a Verilator-generated C++ model appear as if it
# were a normal PyMTL model.

import os

from pymtl import *
from cffi  import FFI

#-----------------------------------------------------------------------
# ImmGenVRTL_0x1e74d35e4f1f6285
#-----------------------------------------------------------------------
class ImmGenVRTL_0x1e74d35e4f1f6285( Model ):
  id_ = 0

  def __init__( s ):

    # initialize FFI, define the exposed interface
    s.ffi = FFI()
    s.ffi.cdef('''
      typedef struct {

        // Exposed port interface
        unsigned int * inst;
      unsigned char * imm_type;
      unsigned char * reset;
      unsigned char * clk;
      unsigned int * imm;

        // Verilator model
        void * model;

        // VCD state
        int _vcd_en;

      } VImmGenVRTL_0x1e74d35e4f1f6285_t;

      VImmGenVRTL_0x1e74d35e4f1f6285_t * create_model( const char * );
      void destroy_model( VImmGenVRTL_0x1e74d35e4f1f6285_t *);
      void eval( VImmGenVRTL_0x1e74d35e4f1f6285_t * );
      void trace( VImmGenVRTL_0x1e74d35e4f1f6285_t *, char * );

    ''')

    # Import the shared library containing the model. We defer
    # construction to the elaborate_logic function to allow the user to
    # set the vcd_file.

    s._ffi = s.ffi.dlopen('./libImmGenVRTL_0x1e74d35e4f1f6285_v.so')

    # dummy class to emulate PortBundles
    class BundleProxy( PortBundle ):
      flip = False

    # define the port interface
    s.imm = OutPort( 32 )
    s.inst = InPort( 32 )
    s.imm_type = InPort( 3 )
    s.reset = InPort( 1 )
    s.clk = InPort( 1 )

    # increment instance count
    ImmGenVRTL_0x1e74d35e4f1f6285.id_ += 1

    # Defer vcd dumping until later
    s.vcd_file = None

    # Buffer for line tracing
    s._line_trace_str = s.ffi.new("char[512]")
    s._convert_string = s.ffi.string

  def __del__( s ):
    s._ffi.destroy_model( s._m )

  def elaborate_logic( s ):

    # Give verilator_vcd_file a slightly different name so PyMTL .vcd and
    # Verilator .vcd can coexist

    verilator_vcd_file = ""
    if s.vcd_file:
      filen, ext         = os.path.splitext( s.vcd_file )
      verilator_vcd_file = '{}.verilator{}{}'.format(filen, s.id_, ext)

    # Construct the model.

    s._m = s._ffi.create_model( s.ffi.new("char[]", verilator_vcd_file) )

    @s.combinational
    def logic():

      # set inputs
      s._m.inst[0] = s.inst
      s._m.imm_type[0] = s.imm_type
      s._m.reset[0] = s.reset

      # execute combinational logic
      s._ffi.eval( s._m )

      # set outputs
      # FIXME: currently write all outputs, not just combinational outs
      s.imm.value = s._m.imm[0]

    @s.posedge_clk
    def tick():

      s._m.clk[0] = 0
      s._ffi.eval( s._m )
      s._m.clk[0] = 1
      s._ffi.eval( s._m )

      # double buffer register outputs
      # FIXME: currently write all outputs, not just registered outs
      s.imm.next = s._m.imm[0]

  def line_trace( s ):
    if 0:
      s._ffi.trace( s._m, s._line_trace_str )
      return s._convert_string( s._line_trace_str )
    else:
      return ""

