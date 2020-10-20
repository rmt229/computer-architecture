#=========================================================================
# lui
#=========================================================================

import random

from pymtl import *
from inst_utils import *

#-------------------------------------------------------------------------
# gen_basic_test
#-------------------------------------------------------------------------

def gen_basic_test():
  return """
    lui x1, 0x0001
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    csrw proc2mngr, x1 > 0x00001000
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
    gen_imm_dest_dep_test( 5, "lui", 0x00001, 0x00001000 ),
    gen_imm_dest_dep_test( 4, "lui", 0x00001, 0x00001000 ),
    gen_imm_dest_dep_test( 3, "lui", 0x00001, 0x00001000 ),
    gen_imm_dest_dep_test( 2, "lui", 0x00001, 0x00001000 ),
    gen_imm_dest_dep_test( 1, "lui", 0x00001, 0x00001000 ),
    gen_imm_dest_dep_test( 0, "lui", 0x00001, 0x00001000 ),
  ]

def gen_value_test():
  return [
    gen_imm_value_test( "lui", 0xfffff, 0xfffff000 ),
    gen_imm_value_test( "lui", 0xf0f0f, 0xf0f0f000 ),
    gen_imm_value_test( "lui", 0x00000, 0x00000000 ), 
  ]


def gen_random_test():
  asm_code = []
  for i in xrange(100):
    imm = Bits( 20, random.randint(0,0xfffff)).uint()
    dest = (imm << 12)
    asm_code.append( gen_imm_value_test( "lui", imm, dest))
  return asm_code
