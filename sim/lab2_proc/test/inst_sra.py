#=========================================================================
# sra
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
    sra x3, x1, x2
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

#-------------------------------------------------------------------------
# gen_dest_dep_test
#-------------------------------------------------------------------------

def gen_dest_dep_test():
  return [
    gen_rr_dest_dep_test( 2, "sra", 0x0b001000, 2, 0x02c00400),
    gen_rr_dest_dep_test( 1, "sra", 0xf0030000, 2, 0xfc00c000 ),
    gen_rr_dest_dep_test( 0, "sra", 0xffffffff, 2, 0xffffffff ),
  ]

#-------------------------------------------------------------------------
# gen_src0_dep_test
#-------------------------------------------------------------------------

def gen_src0_dep_test():
  return [
    gen_rr_src0_dep_test( 5, "sra", 0x0b001000, 1, 0x05800800 ),
    gen_rr_src0_dep_test( 4, "sra", 0xf0030000, 1, 0xf8018000 ),
    gen_rr_src0_dep_test( 3, "sra", 0xffffffff, 1, 0xffffffff ),
  ]

#-------------------------------------------------------------------------
# gen_src1_dep_test
#-------------------------------------------------------------------------

def gen_src1_dep_test():
  return [
    gen_rr_src1_dep_test( 1, "sra", 0xf0000000, 1, 0xf8000000 ),
    gen_rr_src1_dep_test( 0, "sra", 0xf0000000, 2, 0xfc000000 ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dep_test
#-------------------------------------------------------------------------

def gen_srcs_dep_test():
  return [
    gen_rr_srcs_dep_test( 2, "sra", 0xf0000000, 3, 0xfe000000 ),
    gen_rr_srcs_dep_test( 1, "sra", 0xf0000000, 4, 0xff000000 ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dest_test
#-------------------------------------------------------------------------

def gen_srcs_dest_test():
  return [
    gen_rr_src0_eq_dest_test( "sra", 0x0f000000, 1, 0x07800000 ),
    gen_rr_src1_eq_dest_test( "sra", 0xf0000000, 1, 0xf8000000 ),
    gen_rr_src0_eq_src1_test( "sra", 2, 0 ),
    gen_rr_srcs_eq_dest_test( "sra", 1, 0 ),
  ]

#-------------------------------------------------------------------------
# gen_value_test
#-------------------------------------------------------------------------

def gen_value_test():
  return [
    gen_rr_value_test( "sra", 0x00000000, 0x00000000, 0x00000000 ),
    gen_rr_value_test( "sra", 0x00000001, 0x00000000, 0x00000001 ),
    gen_rr_value_test( "sra", 0x00000250, 0x00000004, 0x00000025 ),

    gen_rr_value_test( "sra", -1000, 3, -125 ),
    gen_rr_value_test( "sra",  1000, 3,  125 ),
    gen_rr_value_test( "sra", 0xffffffff, 0xf,                -1 ),
    gen_rr_value_test( "sra", 0x7fffffff, 0xf,        0x0000ffff ),
    gen_rr_value_test( "sra", 0xf0000000, 0x00000004, 0xff000000 ),
  ]

#-------------------------------------------------------------------------
# gen_random_test
#-------------------------------------------------------------------------

def gen_random_test():
  asm_code = []
  for i in xrange(100):
    src0 = Bits( 32, random.randint(0,0xffffffff))
    src1 = Bits( 5, random.randint(0,0x1f))
    dest = src0.int() >> src1.uint()
    asm_code.append( gen_rr_value_test( "sra", src0.int(), src1.uint(), dest))
  return asm_code
