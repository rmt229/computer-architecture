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
  
# ''' LAB TASK ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
# Define additional directed and random test cases.
# '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

def gen_dest_dep_test():
  return [

    gen_imm_dest_dep_test(5, "auipc", "0x00010", "0x00010200"),
    gen_imm_dest_dep_test(4, "auipc", "0x00342", "0x0034221c"),
    gen_imm_dest_dep_test(3, "auipc", "0x00658", "0x00658234"),
    gen_imm_dest_dep_test(2, "auipc", "0x05636", "0x05636248"),
    gen_imm_dest_dep_test(1, "auipc", "0x00670", "0x00670258"),
    gen_imm_dest_dep_test(0, "auipc", "0x00012", "0x00012264"),

  ]