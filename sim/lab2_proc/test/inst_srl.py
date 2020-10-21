#=========================================================================
# srl
#=========================================================================

import random

from pymtl import *
from inst_utils import *

#-------------------------------------------------------------------------
# gen_basic_test
#-------------------------------------------------------------------------

def gen_basic_test():
  return """
    csrr x1, mngr2proc < 0x00008000
    csrr x2, mngr2proc < 0x00000003
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    srl x3, x1, x2
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    csrw proc2mngr, x3 > 0x00001000
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
  """

def gen_dest_dep_test():
  return [
    gen_rr_dest_dep_test( 5, "srl",  2,  1,  1 ),
    gen_rr_dest_dep_test( 4, "srl",  4,  1,  2 ),
    gen_rr_dest_dep_test( 3, "srl",  8,  1,  4 ),
    gen_rr_dest_dep_test( 2, "srl", 16,  1,  8 ),
    gen_rr_dest_dep_test( 1, "srl", 32,  1, 16 ),
    gen_rr_dest_dep_test( 0, "srl", 64,  1, 32 ),
  ]

#-------------------------------------------------------------------------
# gen_src0_dep_test
#-------------------------------------------------------------------------

def gen_src0_dep_test():
  return [
    gen_rr_src0_dep_test( 5, "srl",  7, 1, 3 ),
    gen_rr_src0_dep_test( 4, "srl",  8, 1, 4 ),
    gen_rr_src0_dep_test( 3, "srl",  9, 1, 4 ),
    gen_rr_src0_dep_test( 2, "srl", 10, 1, 5 ),
    gen_rr_src0_dep_test( 1, "srl", 11, 1, 5 ),
    gen_rr_src0_dep_test( 0, "srl", 12, 1, 6 ),
  ]

#-------------------------------------------------------------------------
# gen_src1_dep_test
#-------------------------------------------------------------------------

def gen_src1_dep_test():
  return [
    gen_rr_src1_dep_test( 5, "srl", 32, 1, 16 ),
    gen_rr_src1_dep_test( 4, "srl", 32, 2, 8 ),
    gen_rr_src1_dep_test( 3, "srl", 32, 3, 4 ),
    gen_rr_src1_dep_test( 2, "srl", 32, 4, 2 ),
    gen_rr_src1_dep_test( 1, "srl", 32, 5, 1 ),
    gen_rr_src1_dep_test( 0, "srl", 32, 6, 0 ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dep_test
#-------------------------------------------------------------------------

def gen_srcs_dep_test():
  return [
    gen_rr_srcs_dep_test( 5, "srl", 12, 2, 3 ),
    gen_rr_srcs_dep_test( 4, "srl", 13, 3, 1 ),
    gen_rr_srcs_dep_test( 3, "srl", 14, 4, 0 ),
    gen_rr_srcs_dep_test( 2, "srl", 15, 5, 0 ),
    gen_rr_srcs_dep_test( 1, "srl", 16, 6, 0 ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dest_test
#-------------------------------------------------------------------------

def gen_srcs_dest_test():
  return [
    gen_rr_src0_eq_dest_test( "srl", 25, 1, 12 ),
    gen_rr_src1_eq_dest_test( "srl", 26, 1, 13 ),
    gen_rr_src0_eq_src1_test( "srl", 2, 0 ),
    gen_rr_srcs_eq_dest_test( "srl", 1, 0 ),
  ]

#-------------------------------------------------------------------------
# gen_value_test
#-------------------------------------------------------------------------

def gen_value_test():
  return [
    gen_rr_value_test( "srl", 0x00000000, 0x00000000, 0x00000000),
    gen_rr_value_test( "srl", 0x00000001, 0x00000000, 0x00000001),
    gen_rr_value_test( "srl", 0x00000250, 0x00000004, 0x00000025),
    
    gen_rr_value_test( "srl", 0x80000000, 0x00000004, 0x08000000),
    gen_rr_value_test( "srl", 0xffffffff, 0x00000004, 0x0fffffff),
]

#-------------------------------------------------------------------------
# gen_random_test
#-------------------------------------------------------------------------

def gen_random_test():
  asm_code = []
  for i in xrange(100):
    src0 = Bits( 32, random.randint(0,0xffffffff) )
    src1 = Bits( 4, random.randint(0,0xf) )
    dest = src0.uint() >> src1.uint()
    asm_code.append( gen_rr_value_test( "srl", src0.int(), src1.uint(), dest) )
  return asm_code
