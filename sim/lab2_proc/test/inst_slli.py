#=========================================================================
# slli
#=========================================================================

import random

from pymtl import *
from inst_utils import *

#-------------------------------------------------------------------------
# gen_basic_test
#-------------------------------------------------------------------------

def gen_basic_test():
  return """
    csrr x1, mngr2proc < 0x80008000
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    slli x3, x1, 0x03
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    csrw proc2mngr, x3 > 0x00040000
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
  """

# ''' LAB TASK ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
# Define additional directed and random test cases.
# '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
#-------------------------------------------------------------------------
# gen_dest_dep_test
#-------------------------------------------------------------------------

def gen_dest_dep_test():
  return [
    gen_rimm_dest_dep_test( 5, "slli", 1, 1, 2 ),
    gen_rimm_dest_dep_test( 4, "slli", 2, 1, 4 ),
    gen_rimm_dest_dep_test( 3, "slli", 4, 1, 8 ),
    gen_rimm_dest_dep_test( 2, "slli", 8, 1, 16 ),
    gen_rimm_dest_dep_test( 1, "slli", 16, 1, 32 ),
    gen_rimm_dest_dep_test( 0, "slli", 32, 1, 64 ),
  ]

#-------------------------------------------------------------------------
# gen_src0_dep_test
#-------------------------------------------------------------------------

def gen_src0_dep_test():
  return [
    gen_rimm_src0_dep_test( 5, "slli",  7, 1,  8 ),
    gen_rimm_src0_dep_test( 4, "slli",  8, 1,  9 ),
    gen_rimm_src0_dep_test( 3, "slli",  9, 1, 10 ),
    gen_rimm_src0_dep_test( 2, "slli", 10, 1, 11 ),
    gen_rimm_src0_dep_test( 1, "slli", 11, 1, 12 ),
    gen_rimm_src0_dep_test( 0, "slli", 12, 1, 13 ),
  ]

#-------------------------------------------------------------------------
# gen_src1_dep_test
#-------------------------------------------------------------------------

def gen_src1_dep_test():
  return [
    gen_rimm_src1_dep_test( 5, "slli", 1, 13, 14 ),
    gen_rimm_src1_dep_test( 4, "slli", 1, 14, 15 ),
    gen_rimm_src1_dep_test( 3, "slli", 1, 15, 16 ),
    gen_rimm_src1_dep_test( 2, "slli", 1, 16, 17 ),
    gen_rimm_src1_dep_test( 1, "slli", 1, 17, 18 ),
    gen_rimm_src1_dep_test( 0, "slli", 1, 18, 19 ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dep_test
#-------------------------------------------------------------------------

def gen_srcs_dep_test():
  return [
    gen_rimm_srcs_dep_test( 5, "slli", 12, 2, 14 ),
    gen_rimm_srcs_dep_test( 4, "slli", 13, 3, 16 ),
    gen_rimm_srcs_dep_test( 3, "slli", 14, 4, 18 ),
    gen_rimm_srcs_dep_test( 2, "slli", 15, 5, 20 ),
    gen_rimm_srcs_dep_test( 1, "slli", 16, 6, 22 ),
    gen_rimm_srcs_dep_test( 0, "slli", 17, 7, 24 ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dest_test
#-------------------------------------------------------------------------

def gen_srcs_dest_test():
  return [
    gen_rimm_src0_eq_dest_test( "slli", 25, 1, 26 ),
    gen_rimm_src1_eq_dest_test( "slli", 26, 1, 27 ),
    gen_rimm_src0_eq_src1_test( "slli", 27, 54 ),
    gen_rimm_srcs_eq_dest_test( "slli", 28, 56 ),
  ]

#-------------------------------------------------------------------------
# gen_value_test
#-------------------------------------------------------------------------

def gen_value_test():
  return [

    gen_rimm_value_test( "slli", 0x00000000, 0x00000000, 0x00000000 ),
    gen_rimm_value_test( "slli", 0x00000001, 0x00000001, 0x00000002 ),
    gen_rimm_value_test( "slli", 0x00000003, 0x00000007, 0x0000000a ),

    gen_rimm_value_test( "slli", 0x00000000, 0xffff8000, 0xffff8000 ),
    gen_rimm_value_test( "slli", 0x80000000, 0x00000000, 0x80000000 ),
    gen_rimm_value_test( "slli", 0x80000000, 0xffff8000, 0x7fff8000 ),

    gen_rimm_value_test( "slli", 0x00000000, 0x00007fff, 0x00007fff ),
    gen_rimm_value_test( "slli", 0x7fffffff, 0x00000000, 0x7fffffff ),
    gen_rimm_value_test( "slli", 0x7fffffff, 0x00007fff, 0x80007ffe ),

    gen_rimm_value_test( "slli", 0x80000000, 0x00007fff, 0x80007fff ),
    gen_rimm_value_test( "slli", 0x7fffffff, 0xffff8000, 0x7fff7fff ),

    gen_rimm_value_test( "slli", 0x00000000, 0xffffffff, 0xffffffff ),
    gen_rimm_value_test( "slli", 0xffffffff, 0x00000001, 0x00000000 ),
    gen_rimm_value_test( "slli", 0xffffffff, 0xffffffff, 0xfffffffe ),

  ]

#-------------------------------------------------------------------------
# gen_random_test
#-------------------------------------------------------------------------

def gen_random_test():
  asm_code = []
  for i in xrange(100):
    src0 = Bits( 32, random.randint(0,0xffffffff) )
    src1 = Bits( 32, random.randint(0,0xffffffff) )
    dest = src0 << src1
    asm_code.append( gen_rr_value_test( "slli", src0.uint(), src1.uint(), dest.uint() ) )
  return asm_code
