#=========================================================================
# srai
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
    srai x3, x1, 0x03
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

def gen_dep_test():
  asm_code = [
    gen_rimm_dest_dep_test( 0, "srai", 2, 1, 1 ),
    gen_rimm_src_dep_test( 0, "srai", 2, 1, 1  ),
  ]
  for i in xrange(10):
    if bool(random.getrandbits(1)):
      asm_code.append( 
        gen_rimm_dest_dep_test( random.randint(0,100), "srai", 2, 1, 1),
      )
    else:
      asm_code.append(
        gen_rimm_src_dep_test( random.randint(0,100), "srai", 2, 1, 1),
      )
  return asm_code

def gen_value_test():
  return [
    gen_rimm_value_test( "srai", 0x00000000, 0x0, 0x00000000 ),
    gen_rimm_value_test( "srai", 0x00000001, 0x1, 0x00000000 ),
    gen_rimm_value_test( "srai", 0x00000010, 0x4, 0x00000001 ),
    gen_rimm_value_test( "srai", 0x7fffffff, 0x4, 0x07ffffff ),
    gen_rimm_value_test( "srai", 0x7fffffff, 0xf, 0x0000ffff ),

    gen_rimm_value_test( "srai", 0xffffffff, 0x0, 0xffffffff ),
    gen_rimm_value_test( "srai",        -16,   2,         -4 ),
    gen_rimm_value_test( "srai",-2147483648, 0xf, 0xffff0000 ),
  ]

def gen_random_test():
  asm_code = []
  for i in xrange(100):
    src = Bits( 32, random.randint(0,0xffffffff)).int()
    imm = Bits(  5, random.randint(0,0x1f)).uint()
    dest = src >> imm
    asm_code.append(
      gen_rimm_value_test( "srai", src, imm, dest)
    )
  return asm_code
