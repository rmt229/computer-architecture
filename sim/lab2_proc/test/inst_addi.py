#=========================================================================
# addi
#=========================================================================

import random

from pymtl                import *
from inst_utils import *

#-------------------------------------------------------------------------
# gen_basic_test
#-------------------------------------------------------------------------

def gen_basic_test():
  return """

    csrr x1, mngr2proc, < 5
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    addi x3, x1, 0x0004
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    csrw proc2mngr, x3 > 9
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
#-------------------------------------------------------------------------
# gen_dest_dep_test
#-------------------------------------------------------------------------

def gen_dest_dep_test():
  return [
    gen_rimm_dest_dep_test( 5, "addi", 10,  5, 0x0f ),
    gen_rimm_dest_dep_test( 4, "addi",  1,  1, 0x02 ),
    gen_rimm_dest_dep_test( 3, "addi",  0,  0, 0x00 ),
    gen_rimm_dest_dep_test( 2, "addi", 37, 45, 0x52 ),
    gen_rimm_dest_dep_test( 1, "addi",  5, 1,  0x06 ),
    gen_rimm_dest_dep_test( 0, "addi",  6, 1,  0x07 ),
  ]

#-------------------------------------------------------------------------
# gen_src_dep_test
#-------------------------------------------------------------------------
def gen_src_dep_test():
  return [
    gen_rimm_src_dep_test( 5, "addi",  7,  0,   7 ),
    gen_rimm_src_dep_test( 4, "addi",  8,  6,  14 ),
    gen_rimm_src_dep_test( 3, "addi",  9, 20,  29 ),
    gen_rimm_src_dep_test( 2, "addi", 10, 14,  24 ),
    gen_rimm_src_dep_test( 1, "addi", 11,  1,  12 ),
    gen_rimm_src_dep_test( 0, "addi", 12, 37,  49 ),
  ]

#-------------------------------------------------------------------------
# gen_src_eq_dest_test
#-------------------------------------------------------------------------
def gen_src_eq_dest_test():
  return [
    gen_rimm_src_eq_dest_test( "addi",    0,     0,    0 ),
    gen_rimm_src_eq_dest_test( "addi",    1,  2047, 2048 ),
    gen_rimm_src_eq_dest_test( "addi", 2047, -2047,    0 ),
    gen_rimm_src_eq_dest_test( "addi",  405,   380,  785 ),
    gen_rimm_src_eq_dest_test( "addi",   40,   -57,  -17 ),
  ]

#-------------------------------------------------------------------------
# gen_random_test
#-------------------------------------------------------------------------

def gen_rdm_pos_test():
  asm_code = []
  for i in xrange(100):
    src = Bits( 32, random.randint(0,0xffffffff) )
    imm = Bits( 12, random.randint(0,2047))
    res = src.int() + imm.int()
    asm_code.append( gen_rimm_value_test( "addi", src.int(), imm.int() , res ) )
  return asm_code

def gen_rdm_neg_test():
  asm_code = []
  for i in xrange(100):
    src = Bits( 32, random.randint(    0, 0xffffffff) )
    imm = Bits( 12, random.randint(-2047, 0 ))
    res = src.int() + imm.int()
    asm_code.append( gen_rimm_value_test( "addi", src.int(), imm.int() , res ) )
  return asm_code
