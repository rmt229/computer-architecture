#=========================================================================
# jal
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
    addi  x3, x0, 0     # 0x0200
                        #
    nop                 # 0x0204
    nop                 # 0x0208
    nop                 # 0x020c
    nop                 # 0x0210
    nop                 # 0x0214
    nop                 # 0x0218
    nop                 # 0x021c
    nop                 # 0x0220
                        #
    jal   x1, label_a   # 0x0224
    addi  x3, x3, 0b01  # 0x0228

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
    csrw  proc2mngr, x1 > 0x0228 

    # Only the second bit should be set if jump was taken
    csrw  proc2mngr, x3 > 0b10

  """

def gen_b2b_jal_test():
  return """

    # Use r3 to track the control flow pattern
    addi  x3, x0, 0     # 0x0200
                        #
    nop                 # 0x0204
    nop                 # 0x0208
    nop                 # 0x020c
    nop                 # 0x0210
    nop                 # 0x0214
    nop                 # 0x0218
    nop                 # 0x021c
    nop                 # 0x0220
                        #
    jal   x1, label_a   # 0x0224
    jal   x1, label_b   # 0x0228

    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
  label_b:
    addi  x3, x3, 0b01

  label_a:
    addi  x3, x3, 0b10

    # Check the link address
    csrw  proc2mngr, x1 > 0x0228 

    # Only the second bit should be set if jump was taken
    csrw  proc2mngr, x3 > 0b10

  """

def gen_multi_jal_test():
  return '''
    # Use x3 to track the control flow
    addi x3, x0, 0
    
    jal  x1, label_a
    addi x3, x3, 0b000001

  label_b:
    addi x3, x3, 0b000010
    addi x5, x1, 0
    jal  x1, label_c
    addi x1, x3, 0b000100

  label_a:
    addi x3, x3, 0b001000
    addi x4, x1, 0
    jal  x1, label_b
    addi x3, x3, 0b010000

  label_c:
    addi x3, x3, 0b100000
    addi x6, x1, 0


  csrw proc2mngr, x3 > 0b101010
  
  csrw proc2mngr, x4 > 0x000208
  csrw proc2mngr, x5 > 0x000228
  csrw proc2mngr, x6 > 0x000218

'''

def gen_dest_dep_test():
  return [
    gen_jal_dest_dep_test( 5, "0x00000228"),
  ]

def gen_dest_max_test():
  return [
    # Check max immediate value
    gen_jal_dest_dep_test(0xFFFF, "0x00000228")
]

def gen_base_dep_test():
  return [
    # Check base nops
    gen_jal_base_dep_test(5, "0x0000021c"),
  ]

def gen_base_dep_test():
  return [
    # Check base nops: 15 * 4 -> 0x40 + 0x204
    gen_jal_base_dep_test(15, "0x00000244"),
  ]
