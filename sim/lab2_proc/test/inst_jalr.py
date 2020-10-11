#=========================================================================
# jalr
#=========================================================================

import random

from pymtl import *
from inst_utils import *

#-------------------------------------------------------------------------
# gen_basic_test
#-------------------------------------------------------------------------

def gen_basic_test():
  return """

    # Use r3 to track the control flow pattern
    addi  x3, x0, 0           # 0x0200
                              #
    lui x1,      %hi[label_a] # 0x0204
    addi x1, x1, %lo[label_a] # 0x0208
                              #
    nop                       # 0x020c
    nop                       # 0x0210
    nop                       # 0x0214
    nop                       # 0x0218
    nop                       # 0x021c
    nop                       # 0x0220
    nop                       # 0x0224
    nop                       # 0x0228
                              #
    jalr  x31, x1, 0          # 0x022c
    addi  x3, x3, 0b01        # 0x0230

    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop

  label_a:
    addi  x3, x3, 0b10

    # Check the link address
    csrw  proc2mngr, x31 > 0x0230

    # Only the second bit should be set if jump was taken
    csrw  proc2mngr, x3  > 0b10

  """

def gen_multi_jalr_test():
  return '''
    # Use r3 to trakc the control flow
    addi x3, x0, 0 # 0x0200

    lui  x1,      %hi[label_a] # 0x0204
    addi x1,  x1, %lo[label_a] # 0x0208
    jalr x31, x1, 0            # 0x020C
    addi x3,  x3, 0b000001     # 0x0210
  
  label_b:
    addi x3, x3, 0b000010      # 0x0214
    addi x5, x1, 0             # 0x0218
    lui x1,      %hi[label_c]  # 0x021C
    addi x1, x1, %lo[label_c]  # 0x0220
    jalr x30, x1, 0            # 0x0224
    addi x1, x3,  0b000100     # 0x0228
    
  label_a:
    addi x3, x3, 0b001000      # 0x022C
    addi x4, x1, 0             # 0x0230
    lui x1, %hi[label_b]       # 0x0234
    addi x1, x1, %lo[label_b]  # 0x0238
    jalr x29, x1, 0            # 0x023C
    addi x3, x3, 0b010000      # 0x0240

  label_c:
    addi x3, x3, 0b100000      # 0x0244
    addi x6, x1, 0             # 0x0248

  csrw proc2mngr, x3 > 0b101010

  csrw proc2mngr, x4 > 0x022C
  csrw proc2mngr, x5 > 0x0214
  csrw proc2mngr, x6 > 0x0244 

  csrw proc2mngr, x31 > 0x0210
  csrw proc2mngr, x30 > 0x0228
  csrw proc2mngr, x29 > 0x0240

  '''

def gen_dest_dep_test():

  return [

    gen_jalr_dest_dep_test(5, "0x00000230")
    # TODO: why two or more tests in this array will crash? 

  ]

def gen_base_dep_test():

  return [

    gen_jalr_base_dep_test(5, "0x00000224")
    # TODO: why two or more tests in this array will crash? 

  ]
