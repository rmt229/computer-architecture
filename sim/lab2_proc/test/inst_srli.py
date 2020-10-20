#=========================================================================
# srli
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
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    srli x3, x1, 0x03
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
    gen_rimm_dest_dep_test( 5, "srli",  2,  1,  1 ),
    gen_rimm_dest_dep_test( 4, "srli",  4,  1,  2 ),
    gen_rimm_dest_dep_test( 3, "srli",  8,  1,  4 ),
    gen_rimm_dest_dep_test( 2, "srli", 16,  1,  8 ),
    gen_rimm_dest_dep_test( 1, "srli", 32,  1, 16 ),
    gen_rimm_dest_dep_test( 0, "srli", 64,  1, 32 ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dep_test
#-------------------------------------------------------------------------

def gen_src_dep_test():
  return [
    gen_rimm_src_dep_test( 5, "srli",  2, 2,  0 ),
    gen_rimm_src_dep_test( 4, "srli",  4, 2,  1 ),
    gen_rimm_src_dep_test( 3, "srli",  8, 2,  2 ),
    gen_rimm_src_dep_test( 2, "srli", 16, 2,  4 ),
    gen_rimm_src_dep_test( 1, "srli", 32, 2,  8 ),
    gen_rimm_src_dep_test( 0, "srli", 64, 2, 16 ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dest_test
#-------------------------------------------------------------------------

def gen_src_eq_dest_test():
  return [
    gen_rimm_src_eq_dest_test( "srli", 2, 2, 0 ),
    gen_rimm_src_eq_dest_test( "srli", 2, 1, 1 ),
    gen_rimm_src_eq_dest_test( "srli", 1, 2, 0 ),
  ]

#-------------------------------------------------------------------------
# gen_value_test
#-------------------------------------------------------------------------

def gen_value_test():
  return [

    gen_rimm_value_test( "srli", 0x00000000, 0x00000000, 0x00000000 ),
    gen_rimm_value_test( "srli", 0x00000001, 0x00000001, 0x00000000 ),

    gen_rimm_value_test( "srli", 0x00000010, 0x00000004, 0x00000001 ),
    gen_rimm_value_test( "srli", 0xff000000, 0x00000008, 0x00ff0000 ),
   
    gen_rimm_value_test( "srli", 0xffffffff, 0x0000000f, 0x0001ffff ),
  ]

#-------------------------------------------------------------------------
# gen_random_test
#-------------------------------------------------------------------------

def gen_random_test():
  asm_code = []
  for i in xrange(100):
    src = Bits( 32, random.randint(0,0xffffffff) )
    imm = Bits( 5, random.randint(0,0x1f) )
    dest = src >> imm
    asm_code.append( gen_rimm_value_test( "srli", src.uint(), imm.uint(), dest.uint() ) )
  return asm_code
