#=========================================================================
# auipc
#=========================================================================

import random

from pymtl import *
from inst_utils import *

#-------------------------------------------------------------------------
# gen_basic_test
#-------------------------------------------------------------------------

def gen_basic_test():
  return """
    auipc x1, 0x00010                       # PC=0x200
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    csrw  proc2mngr, x1 > 0x00010200
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

    gen_auipc_dest_dep_test(5, "0x00010", "0x00010200"),
    gen_auipc_dest_dep_test(4, "0x00342", "0x0034221c"),
    gen_auipc_dest_dep_test(3, "0x00658", "0x00658234"),
    gen_auipc_dest_dep_test(2, "0x05636", "0x05636248"),
    gen_auipc_dest_dep_test(1, "0x00670", "0x00670258"),
    gen_auipc_dest_dep_test(0, "0x00012", "0x00012264"),

  ]

#-------------------------------------------------------------------------
# gen_base_dep_test
#-------------------------------------------------------------------------

def gen_base_dep_test():
  return [

    gen_auipc_base_dep_test(5, "0x00010", "0x00010214"),
    gen_auipc_base_dep_test(4, "0x00342", "0x0034222c"),
    gen_auipc_base_dep_test(3, "0x00658", "0x00658240"),
    gen_auipc_base_dep_test(2, "0x05636", "0x05636250"),
    gen_auipc_base_dep_test(1, "0x00670", "0x0067025c"),
    gen_auipc_base_dep_test(0, "0x00012", "0x00012264"),

  ]

#-------------------------------------------------------------------------
# gen_value_test
#-------------------------------------------------------------------------

def gen_value_test():
  return [

    # positive immediate

    gen_auipc_value_test("0x00000", "0x00000200"),
    gen_auipc_value_test("0x00342", "0x00342208"),
    gen_auipc_value_test("0x00658", "0x00658210"),
    gen_auipc_value_test("0x05636", "0x05636218"),
    gen_auipc_value_test("0x00670", "0x00670220"),
    gen_auipc_value_test("0x00012", "0x00012228"),

    # negative immediate

    gen_auipc_value_test("0x00000", "0x00000230"),
    gen_auipc_value_test("0x80342", "0x80342238"),
    gen_auipc_value_test("0x80658", "0x80658240"),
    gen_auipc_value_test("0x85636", "0x85636248"),
    gen_auipc_value_test("0x80670", "0x80670250"),
    gen_auipc_value_test("0x80012", "0x80012258"),

  ]

#-------------------------------------------------------------------------
# gen_random_test
#-------------------------------------------------------------------------

def gen_random_test():
  asm_code = []
  accum_offset = 0
  for i in xrange(100):
    imm = random.randint(0,0xfffff)
    result = (imm<<12) + 0x200 + accum_offset
    accum_offset += 8
    asm_code.append( gen_auipc_value_test( imm, result ) )
  return asm_code
