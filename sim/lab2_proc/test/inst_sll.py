#=========================================================================
# sll
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
    csrr x2, mngr2proc < 0x00000003
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sll x3, x1, x2
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

#-------------------------------------------------------------------------
# gen_dest_dep_test
#-------------------------------------------------------------------------

def gen_dest_dep_test():
  return [
    gen_rr_dest_dep_test( 5, "sll", 1, 1, 2 ),
    gen_rr_dest_dep_test( 4, "sll", 2, 1, 4 ),
    gen_rr_dest_dep_test( 3, "sll", 4, 1, 8 ),
    gen_rr_dest_dep_test( 2, "sll", 8, 1, 16 ),
    gen_rr_dest_dep_test( 1, "sll", 16, 1, 32 ),
    gen_rr_dest_dep_test( 0, "sll", 32, 1, 64 ),
  ]

#-------------------------------------------------------------------------
# gen_src0_dep_test
#-------------------------------------------------------------------------

def gen_src0_dep_test():
  return [
    gen_rr_src0_dep_test( 5, "sll",  7, 1, 14 ),
    gen_rr_src0_dep_test( 4, "sll",  8, 1, 16 ),
    gen_rr_src0_dep_test( 3, "sll",  9, 1, 18 ),
    gen_rr_src0_dep_test( 2, "sll", 10, 1, 20 ),
    gen_rr_src0_dep_test( 1, "sll", 11, 1, 22 ),
    gen_rr_src0_dep_test( 0, "sll", 12, 1, 24 ),
  ]

#-------------------------------------------------------------------------
# gen_src1_dep_test
#-------------------------------------------------------------------------

def gen_src1_dep_test():
  return [
    gen_rr_src1_dep_test( 5, "sll", 13, 1, 26 ),
    gen_rr_src1_dep_test( 4, "sll", 14, 1, 28 ),
    gen_rr_src1_dep_test( 3, "sll", 15, 1, 30 ),
    gen_rr_src1_dep_test( 2, "sll", 16, 1, 32 ),
    gen_rr_src1_dep_test( 1, "sll", 17, 1, 34 ),
    gen_rr_src1_dep_test( 0, "sll", 18, 1, 36 ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dep_test
#-------------------------------------------------------------------------

def gen_srcs_dep_test():
  return [
    gen_rr_srcs_dep_test( 5, "sll", 12, 2,   48 ),
    gen_rr_srcs_dep_test( 4, "sll", 13, 3,  104 ),
    gen_rr_srcs_dep_test( 3, "sll", 14, 4,  224 ),
    gen_rr_srcs_dep_test( 2, "sll", 15, 5,  480 ),
    gen_rr_srcs_dep_test( 1, "sll", 16, 6, 1024 ),
    gen_rr_srcs_dep_test( 0, "sll", 17, 7, 2176 ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dest_test
#-------------------------------------------------------------------------

def gen_srcs_dest_test():
  return [
    gen_rr_src0_eq_dest_test( "sll", 25, 1, 50 ),
    gen_rr_src1_eq_dest_test( "sll", 26, 1, 52 ),
    gen_rr_src0_eq_src1_test( "sll", 1, 2 ),
    gen_rr_srcs_eq_dest_test( "sll", 2, 8 ),
  ]

#-------------------------------------------------------------------------
# gen_value_test
#-------------------------------------------------------------------------

def gen_value_test():
  return [
    gen_rr_value_test( "sll", 0x00000000, 0x00000000, 0x00000000 ),
    gen_rr_value_test( "sll", 0x00000001, 0x00000001, 0x00000002 ),
    gen_rr_value_test( "sll", 0x00000003, 0x00000007, 0x00000180 ),

    gen_rr_value_test( "sll", 0xffffffff, 0x0000001f, 0x80000000 ),
    gen_rr_value_test( "sll", 0x0000000f, 0x00000004, 0x000000f0 ),
    gen_rr_value_test( "sll", 0xffffffff, 0x00000008, 0xffffff00 ),
  ]

#-------------------------------------------------------------------------
# gen_random_test
#-------------------------------------------------------------------------

def gen_random_test():
  asm_code = []
  for i in xrange(100):
    src0 = Bits( 32, random.randint(0,0xffffffff) )
    src1 = Bits( 5, random.randint(0,0x1f) )
    dest = src0 << src1
    asm_code.append( gen_rr_value_test( "sll", src0.uint(), src1.uint(), dest.uint() ) )
  return asm_code
