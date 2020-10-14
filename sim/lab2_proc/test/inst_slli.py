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

#-------------------------------------------------------------------------
# gen_dest_dep_test
#-------------------------------------------------------------------------

def gen_dest_dep_test():
  return [
    gen_rimm_dest_dep_test( 10, "slli", 1, 1, 2 ),
    gen_rimm_dest_dep_test(  5, "slli", 1, 1, 2 ),
    gen_rimm_dest_dep_test(  4, "slli", 2, 1, 4 ),
    gen_rimm_dest_dep_test(  3, "slli", 4, 1, 8 ),
    gen_rimm_dest_dep_test(  2, "slli", 8, 1, 16 ),
    gen_rimm_dest_dep_test(  1, "slli", 16, 1, 32 ),
    gen_rimm_dest_dep_test(  0, "slli", 32, 1, 64 ),
  ]


#-------------------------------------------------------------------------
# gen_srcs_dep_test
#-------------------------------------------------------------------------

def gen_src_dep_test():
  return [
    gen_rimm_src_dep_test( 5, "slli", 12, 2, 48 ),
    gen_rimm_src_dep_test( 4, "slli", 13, 3, 104 ),
    gen_rimm_src_dep_test( 3, "slli", 14, 4, 224 ),
    gen_rimm_src_dep_test( 2, "slli", 15, 5, 480 ),
    gen_rimm_src_dep_test( 1, "slli", 16, 6, 1024 ),
    gen_rimm_src_dep_test( 0, "slli", 17, 7, 2176 ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dest_test
#-------------------------------------------------------------------------

def gen_src_eq_dest_test():
  return [
    gen_rimm_src_eq_dest_test( "slli", 25, 2, 100 ),
    gen_rimm_src_eq_dest_test( "slli", 26, 3, 208 ),
    gen_rimm_src_eq_dest_test( "slli", 27, 1, 54 ),
    gen_rimm_src_eq_dest_test( "slli", 28, 1, 56 ),
  ]

#-------------------------------------------------------------------------
# gen_value_test
#-------------------------------------------------------------------------

def gen_value_test():
  return [

    gen_rimm_value_test( "slli", 0x00000000, 0x0, 0x00000000 ),
    gen_rimm_value_test( "slli", 0x00000001, 0x1, 0x00000002 ),
    gen_rimm_value_test( "slli", 0x00000003, 0x7, 0x00000180 ),

    gen_rimm_value_test( "slli", 0xf0000000, 0x4, 0x00000000 ),
    gen_rimm_value_test( "slli", 0x80000000, 0x0, 0x80000000 ),
    gen_rimm_value_test( "slli", 0xffffffff, 0xf, 0xffff8000 ),

  ]

#-------------------------------------------------------------------------
# gen_random_test
#-------------------------------------------------------------------------

def gen_random_test():
  asm_code = []
  for i in xrange(100):
    src = Bits( 32, random.randint(0,0xffffffff) )
    imm = Bits( 4, random.randint(0,0xf) )
    dest = src << imm
    asm_code.append( gen_rimm_value_test( "slli", src.uint(), imm.uint(), dest.uint() ) )
  return asm_code
