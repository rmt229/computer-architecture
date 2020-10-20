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

def gen_random_test():
  asm_code = []
  for i in xrange(100):
    src0 = Bits( 32, random.randint(0,0xffffffff))
    src1 = Bits( 5, random.randint(0,0x1f))
    dest = src0.int() >> src1.uint()
    asm_code.append( gen_rr_value_test( "sra", src0.int(), src1.uint(), dest))
  return asm_code
