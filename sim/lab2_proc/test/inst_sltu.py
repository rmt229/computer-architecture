#=========================================================================
# sltu
#=========================================================================

import random

from pymtl import *
from inst_utils import *

#-------------------------------------------------------------------------
# gen_basic_test
#-------------------------------------------------------------------------

def gen_basic_test():
  return """
    csrr x1, mngr2proc < 4
    csrr x2, mngr2proc < 5
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sltu x3, x1, x2
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    csrw proc2mngr, x3 > 1
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
    gen_rr_dest_dep_test( 5, "sltu", 1, 1, 0),
    gen_rr_dest_dep_test( 4, "sltu", 1, 2, 1),
    gen_rr_dest_dep_test( 3, "sltu", 1, 3, 1),
    gen_rr_dest_dep_test( 2, "sltu", 4, 1, 0),
    gen_rr_dest_dep_test( 1, "sltu", 1, 7, 1),
    gen_rr_dest_dep_test( 0, "sltu", 0, 0, 0),
  ]

#-------------------------------------------------------------------------
# gen_src0_dep_test
#-------------------------------------------------------------------------

def gen_src0_dep_test():
  return [
    gen_rr_src0_dep_test( 5, "sltu",  7, 1,  0 ),
    gen_rr_src0_dep_test( 4, "sltu",  8, 1,  0 ),
    gen_rr_src0_dep_test( 3, "sltu",  9, 1,  0 ),
    gen_rr_src0_dep_test( 2, "sltu", 10, 1,  0 ),
    gen_rr_src0_dep_test( 1, "sltu", 11, 1,  0 ),
    gen_rr_src0_dep_test( 0, "sltu", 12, 1,  0 ),
  ]

#-------------------------------------------------------------------------
# gen_src1_dep_test
#-------------------------------------------------------------------------

def gen_src1_dep_test():
  return [
    gen_rr_src1_dep_test( 5, "sltu", 1, 13, 1 ),
    gen_rr_src1_dep_test( 4, "sltu", 1, 14, 1 ),
    gen_rr_src1_dep_test( 3, "sltu", 1, 15, 1 ),
    gen_rr_src1_dep_test( 2, "sltu", 1, 16, 1 ),
    gen_rr_src1_dep_test( 1, "sltu", 1, 17, 1 ),
    gen_rr_src1_dep_test( 0, "sltu", 1, 18, 1 ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dep_test
#-------------------------------------------------------------------------

def gen_srcs_dep_test():
  return [
    gen_rr_srcs_dep_test( 5, "sltu", 12, 2, 0 ),
    gen_rr_srcs_dep_test( 4, "sltu", 13, 3, 0 ),
    gen_rr_srcs_dep_test( 3, "sltu", 14, 4, 0 ),
    gen_rr_srcs_dep_test( 2, "sltu", 15, 5, 0 ),
    gen_rr_srcs_dep_test( 1, "sltu", 16, 6, 0 ),
    gen_rr_srcs_dep_test( 0, "sltu", 17, 7, 0 ),
  ]

#-------------------------------------------------------------------------
# gen_value_test
#-------------------------------------------------------------------------

def gen_value_test():
  return [

    gen_rr_value_test( "sltu", 0x00000000, 0x00000000, 0x00000000 ),
    gen_rr_value_test( "sltu", 0x00000001, 0x00000000, 0x00000000 ),
    gen_rr_value_test( "sltu", 0x00000000, 0x00000001, 0x00000001 ),

    gen_rr_value_test( "sltu", 0xffffffff, 0xffffffff, 0x00000000 ),
    gen_rr_value_test( "sltu", 0x7fff0000, 0xffffffff, 0x00000001 ),
    gen_rr_value_test( "sltu", 0xffffffff, 0x00000000, 0x00000000 ),
    gen_rr_value_test( "sltu", 0x80000000, 0xffffffff, 0x00000001 ), 
  ]

#-------------------------------------------------------------------------
# gen_random_test
#-------------------------------------------------------------------------

def gen_random_test():
  asm_code = []
  for i in xrange(100):
    src0 = Bits( 32, random.randint(0,0xffffffff) ).uint()
    src1 = Bits( 32, random.randint(0,0xffffffff) ).uint()
    dest = src0 < src1
    asm_code.append( gen_rr_value_test( "sltu", src0, src1, int(dest) ) )
  return asm_code

