#=======================================================================
# VAluVRTL_0x1e74d35e4f1f6285_v.py
#=======================================================================
# This wrapper makes a Verilator-generated C++ model appear as if it
# were a normal PyMTL model.

import os

from pymtl import *
from cffi  import FFI

#-----------------------------------------------------------------------
# AluVRTL_0x1e74d35e4f1f6285
#-----------------------------------------------------------------------
class AluVRTL_0x1e74d35e4f1f6285( Model ):
  id_ = 0

  def __init__( s ):

    # initialize FFI, define the exposed interface
    s.ffi = FFI()
    s.ffi.cdef('''
      typedef struct {

        // Exposed port interface
        unsigned char * fn;
      unsigned int * in1;
      unsigned int * in0;
      unsigned char * reset;
      unsigned char * clk;
      unsigned char * ops_ltu;
      unsigned char * ops_lt;
      unsigned char * ops_eq;
      unsigned int * out;

        // Verilator model
        void * model;

        // VCD state
        int _vcd_en;

      } VAluVRTL_0x1e74d35e4f1f6285_t;

      VAluVRTL_0x1e74d35e4f1f6285_t * create_model( const char * );
      void destroy_model( VAluVRTL_0x1e74d35e4f1f6285_t *);
      void eval( VAluVRTL_0x1e74d35e4f1f6285_t * );
      void trace( VAluVRTL_0x1e74d35e4f1f6285_t *, char * );

    ''')

    # Import the shared library containing the model. We defer
    # construction to the elaborate_logic function to allow the user to
    # set the vcd_file.

    s._ffi = s.ffi.dlopen('./libAluVRTL_0x1e74d35e4f1f6285_v.so')

    # dummy class to emulate PortBundles
    class BundleProxy( PortBundle ):
      flip = False

    # define the port interface
    s.ops_ltu = OutPort( 1 )
    s.ops_lt = OutPort( 1 )
    s.ops_eq = OutPort( 1 )
    s.out = OutPort( 32 )
    s.fn = InPort( 4 )
    s.in1 = InPort( 32 )
    s.in0 = InPort( 32 )
    s.reset = InPort( 1 )
    s.clk = InPort( 1 )

    # increment instance count
    AluVRTL_0x1e74d35e4f1f6285.id_ += 1

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
      s._m.fn[0] = s.fn
      s._m.in1[0] = s.in1
      s._m.in0[0] = s.in0
      s._m.reset[0] = s.reset

      # execute combinational logic
      s._ffi.eval( s._m )

      # set outputs
      # FIXME: currently write all outputs, not just combinational outs
      s.ops_ltu.value = s._m.ops_ltu[0]
      s.ops_lt.value = s._m.ops_lt[0]
      s.ops_eq.value = s._m.ops_eq[0]
      s.out.value = s._m.out[0]

    @s.posedge_clk
    def tick():

      s._m.clk[0] = 0
      s._ffi.eval( s._m )
      s._m.clk[0] = 1
      s._ffi.eval( s._m )

      # double buffer register outputs
      # FIXME: currently write all outputs, not just registered outs
      s.ops_ltu.next = s._m.ops_ltu[0]
      s.ops_lt.next = s._m.ops_lt[0]
      s.ops_eq.next = s._m.ops_eq[0]
      s.out.next = s._m.out[0]

  def line_trace( s ):
    if 0:
      s._ffi.trace( s._m, s._line_trace_str )
      return s._convert_string( s._line_trace_str )
    else:
      return ""

