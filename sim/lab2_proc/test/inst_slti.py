#=========================================================================
# slti
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
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    slti x3, x1, 6
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

#-------------------------------------------------------------------------
# gen_dest_dep_test
#-------------------------------------------------------------------------

def gen_dest_dep_test():
  return [
    gen_rimm_dest_dep_test( 10, "slti", 1, 1, 0 ),
    gen_rimm_dest_dep_test(  5, "slti", 1, 1, 0 ),
    gen_rimm_dest_dep_test(  4, "slti", 2, 1, 0 ),
    gen_rimm_dest_dep_test(  3, "slti", 4, 1, 0 ),
    gen_rimm_dest_dep_test(  2, "slti", 8, 1, 0 ),
    gen_rimm_dest_dep_test(  1, "slti", 16, 1, 0 ),
    gen_rimm_dest_dep_test(  0, "slti", 32, 1, 0),
  ]


#-------------------------------------------------------------------------
# gen_srcs_dep_test
#-------------------------------------------------------------------------

def gen_src_dep_test():
  return [
    gen_rimm_src_dep_test( 5, "slti", 12, 2, 0 ),
    gen_rimm_src_dep_test( 4, "slti", 13, 3, 0 ),
    gen_rimm_src_dep_test( 3, "slti", 14, 4, 0 ),
    gen_rimm_src_dep_test( 2, "slti", 15, 5, 0 ),
    gen_rimm_src_dep_test( 1, "slti", 16, 6, 0 ),
    gen_rimm_src_dep_test( 0, "slti", 17, 7, 0 ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dest_test
#-------------------------------------------------------------------------

def gen_src_eq_dest_test():
  return [
    gen_rimm_src_eq_dest_test( "slti", 25, 28, 1 ),
    gen_rimm_src_eq_dest_test( "slti", 26, 3, 0 ),
    gen_rimm_src_eq_dest_test( "slti", 0, 1, 1 ),
    gen_rimm_src_eq_dest_test( "slti", 4, 1, 0 ),
  ]

#-------------------------------------------------------------------------
# gen_value_test
#-------------------------------------------------------------------------

def gen_value_test():
  return [

    gen_rimm_value_test( "slti", 0x00000000, 0x0, 0 ),
    gen_rimm_value_test( "slti", 0x00000001, 0x1, 0 ),
    gen_rimm_value_test( "slti", 0x00000003, 0x7, 1 ),
    
    # Test Negative
    gen_rimm_value_test( "slti", 0xf0000000, 0xff0, 1 ),
    gen_rimm_value_test( "slti", 0x80000000, 0x0, 1 ),
    gen_rimm_value_test( "slti", 0xffffffff, 0xfff, 0 ),

  ]

#-------------------------------------------------------------------------
# gen_random_test
#-------------------------------------------------------------------------

def gen_random_test():
  asm_code = []
  for i in xrange(100):
    src = Bits( 32, random.randint(0,0xffffffff))
    imm = Bits( 12, random.randint(0,0xfff))
    dest = (src.int() < imm.int())
    asm_code.append( gen_rimm_value_test( "slti", src.int(), imm.int(), int(dest) ) )
  return asm_code

