#=========================================================================
# sw
#=========================================================================

import random

from pymtl import *
from inst_utils import *

#-------------------------------------------------------------------------
# gen_basic_test
#-------------------------------------------------------------------------

def gen_basic_test():
  return """
    csrr x1, mngr2proc < 0x00002000
    csrr x2, mngr2proc < 0xdeadbeef
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sw   x2, 0(x1)
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    lw   x3, 0(x1)
    csrw proc2mngr, x3 > 0xdeadbeef

    .data
    .word 0x01020304
  """

# ''' LAB TASK ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
# Define additional directed and random test cases.
# '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

def gen_mid_dep_test():
  return [

    gen_sw_mid_dep_test( 5, 0x2000, 0x00010203 ), 
    gen_sw_mid_dep_test( 4, 0x2004, 0x04050607 ), 
    gen_sw_mid_dep_test( 3, 0x2008, 0x08090a0b ), 
    gen_sw_mid_dep_test( 2, 0x200c, 0x0c0d0e0f ), 
    gen_sw_mid_dep_test( 1, 0x2010, 0x10111213 ), 
    gen_sw_mid_dep_test( 0, 0x2014, 0x14151617 ), 

  ]

def gen_base_dep_test():
  return [

    gen_sw_base_dep_test( 5, 0x2000, 0x00010203 ), 
    gen_sw_base_dep_test( 4, 0x2004, 0x04050607 ), 
    gen_sw_base_dep_test( 3, 0x2008, 0x08090a0b ), 
    gen_sw_base_dep_test( 2, 0x200c, 0x0c0d0e0f ), 
    gen_sw_base_dep_test( 1, 0x2010, 0x10111213 ), 
    gen_sw_base_dep_test( 0, 0x2014, 0x14151617 ), 

  ]
  