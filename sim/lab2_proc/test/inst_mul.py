#=========================================================================
# mul
#=========================================================================

import random

from pymtl import *
from inst_utils import *

#-------------------------------------------------------------------------
# gen_basic_test
#-------------------------------------------------------------------------

def gen_basic_test():
  return """
    csrr x1, mngr2proc < 5
    csrr x2, mngr2proc < 4
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    mul x3, x1, x2
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    csrw proc2mngr, x3 > 20
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
  """

def gen_multiple_mul():
  return '''
    csrr x1, mngr2proc < 5
    csrr x2, mngr2proc < 4
    csrr x3, mngr2proc < 3
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    mul x28, x1, x2
    mul x29, x1, x3
    mul x30, x1, x1
    mul x31, x2, x3
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    csrw proc2mngr, x28 > 20
    csrw proc2mngr, x29 > 15
    csrw proc2mngr, x30 > 25
    csrw proc2mngr, x31 > 12
    nop
    nop
    nop
    nop 
    nop
    nop
    nop
'''

#-------------------------------------------------------------------------
# gen_dest_dep_test
#-------------------------------------------------------------------------

def gen_dest_dep_test():
  return [
    gen_rr_dest_dep_test( 5, "mul", 1, 1, 1 ),
    gen_rr_dest_dep_test( 4, "mul", 2, 1, 2 ),
    gen_rr_dest_dep_test( 3, "mul", 3, 1, 3 ),
    gen_rr_dest_dep_test( 2, "mul", 4, 1, 4 ),
    gen_rr_dest_dep_test( 1, "mul", 5, 1, 5 ),
    gen_rr_dest_dep_test( 0, "mul", 6, 1, 6 ),
  ]

#-------------------------------------------------------------------------
# gen_src0_dep_test
#-------------------------------------------------------------------------

def gen_src0_dep_test():
  return [
    gen_rr_src0_dep_test( 5, "mul",  7, 2, 14 ),
    gen_rr_src0_dep_test( 4, "mul",  8, 2, 16 ),
    gen_rr_src0_dep_test( 3, "mul",  9, 2, 18 ),
    gen_rr_src0_dep_test( 2, "mul", 10, 2, 20 ),
    gen_rr_src0_dep_test( 1, "mul", 11, 2, 22 ),
    gen_rr_src0_dep_test( 0, "mul", 12, 2, 24 ),
  ]

#-------------------------------------------------------------------------
# gen_src1_dep_test
#-------------------------------------------------------------------------

def gen_src1_dep_test():
  return [
    gen_rr_src1_dep_test( 5, "mul", 3, 13, 39 ),
    gen_rr_src1_dep_test( 4, "mul", 3, 14, 42 ),
    gen_rr_src1_dep_test( 3, "mul", 3, 15, 45 ),
    gen_rr_src1_dep_test( 2, "mul", 3, 16, 48 ),
    gen_rr_src1_dep_test( 1, "mul", 3, 17, 51 ),
    gen_rr_src1_dep_test( 0, "mul", 3, 18, 54 ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dep_test
#-------------------------------------------------------------------------

def gen_srcs_dep_test():
  return [
    gen_rr_srcs_dep_test( 5, "mul", 12, 2,  24 ),
    gen_rr_srcs_dep_test( 4, "mul", 13, 3,  39 ),
    gen_rr_srcs_dep_test( 3, "mul", 14, 4,  56 ),
    gen_rr_srcs_dep_test( 2, "mul", 15, 5,  75 ),
    gen_rr_srcs_dep_test( 1, "mul", 16, 6,  96 ),
    gen_rr_srcs_dep_test( 0, "mul", 17, 7, 119 ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dest_test
#-------------------------------------------------------------------------

def gen_srcs_dest_test():
  return [
    gen_rr_src0_eq_dest_test( "mul", 25, 1, 25 ),
    gen_rr_src1_eq_dest_test( "mul", 26, 1, 26 ),
    gen_rr_src0_eq_src1_test( "mul", 7, 49 ),
    gen_rr_srcs_eq_dest_test( "mul", 8, 64 ),
  ]

#-------------------------------------------------------------------------
# gen_value_test
#-------------------------------------------------------------------------

def gen_value_test():
  return [
    # Test basic Functionality
    gen_rr_value_test( "mul", 0x00000000, 0x00000000, 0x00000000 ),
    gen_rr_value_test( "mul", 0x00000001, 0x00000001, 0x00000001 ),
    gen_rr_value_test( "mul", 0x00000003, 0x00000007, 0x00000015 ),
    gen_rr_value_test( "mul", 0x00000001, 0x00000000, 0x00000000 ),
    gen_rr_value_test( "mul", 0xffffffff, 0xffffffff, 0x00000001 ),
    gen_rr_value_test( "mul", 0x00000001, 0xffffffff, 0xffffffff ),
    gen_rr_value_test( "mul", 0xffffffff, 0x00000001, 0xffffffff ),

  ]

#-------------------------------------------------------------------------
# gen_random_test
#-------------------------------------------------------------------------

def gen_random_test():
  asm_code = []
  for i in xrange(100):
    src0 = Bits( 32, random.randint(0,0xffffffff) )
    src1 = Bits( 32, random.randint(0,0xffffffff) )
    dest = (src0 * src1) & 0xffffffff
    asm_code.append( gen_rr_value_test( "mul", src0.uint(), src1.uint(), dest.uint() ) )
  return asm_code


