#=========================================================================
# bge
#=========================================================================

import random

from pymtl import *
from inst_utils import *

#-------------------------------------------------------------------------
# gen_basic_test
#-------------------------------------------------------------------------

def gen_basic_test():
  return """

    # Use x3 to track the control flow pattern
    addi  x3, x0, 0

    csrr  x1, mngr2proc < 2
    csrr  x2, mngr2proc < 2

    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop

    # This branch should be taken
    bge   x1, x2, label_a
    addi  x3, x3, 0b01

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

    # Only the second bit should be set if branch was taken
    csrw proc2mngr, x3 > 0b10

  """

# ''' LAB TASK ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
# Define additional directed and random test cases.
# '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

#-------------------------------------------------------------------------
# gen_src0_dep_taken_test
#-------------------------------------------------------------------------

def gen_src0_dep_taken_test():
  return [
    gen_br2_src0_dep_test( 6, "bge", 7, 7,  True ),
    gen_br2_src0_dep_test( 5, "bge", 8,  7, True ),
    gen_br2_src0_dep_test( 4, "bge", 9,  7, True ),
    gen_br2_src0_dep_test( 3, "bge", 10, 7, True ),
    gen_br2_src0_dep_test( 2, "bge", 11, 7, True ),
    gen_br2_src0_dep_test( 1, "bge", 12, 7, True ),
    gen_br2_src0_dep_test( 0, "bge", 13, 7, True ),
  ]

#-------------------------------------------------------------------------
# gen_src0_dep_nottaken_test
#-------------------------------------------------------------------------

def gen_src0_dep_nottaken_test():
  return [
    gen_br2_src0_dep_test( 5, "bge", 1, 2, False ),
    gen_br2_src0_dep_test( 4, "bge", 2, 3, False ),
    gen_br2_src0_dep_test( 3, "bge", 3, 4, False ),
    gen_br2_src0_dep_test( 2, "bge", 4, 5, False ),
    gen_br2_src0_dep_test( 1, "bge", 5, 6, False ),
    gen_br2_src0_dep_test( 0, "bge", 6, 7, False ),
  ]

#-------------------------------------------------------------------------
# gen_src1_dep_taken_test
#-------------------------------------------------------------------------

def gen_src1_dep_taken_test():
  return [
    gen_br2_src1_dep_test( 5, "bge", 7, 1, True ),
    gen_br2_src1_dep_test( 4, "bge", 7, 2, True ),
    gen_br2_src1_dep_test( 3, "bge", 7, 3, True ),
    gen_br2_src1_dep_test( 2, "bge", 7, 4, True ),
    gen_br2_src1_dep_test( 1, "bge", 7, 5, True ),
    gen_br2_src1_dep_test( 0, "bge", 7, 6, True ),
  ]

#-------------------------------------------------------------------------
# gen_src1_dep_nottaken_test
#-------------------------------------------------------------------------

def gen_src1_dep_nottaken_test():
  return [
    gen_br2_src1_dep_test( 5, "bge", 1, 2, False ),
    gen_br2_src1_dep_test( 4, "bge", 2, 3, False ),
    gen_br2_src1_dep_test( 3, "bge", 3, 4, False ),
    gen_br2_src1_dep_test( 2, "bge", 4, 5, False ),
    gen_br2_src1_dep_test( 1, "bge", 5, 6, False ),
    gen_br2_src1_dep_test( 0, "bge", 6, 7, False ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dep_taken_test
#-------------------------------------------------------------------------

def gen_srcs_dep_taken_test():
  return [
    gen_br2_srcs_dep_test( 5, "bge", 2, 1, True ),
    gen_br2_srcs_dep_test( 4, "bge", 3, 2, True ),
    gen_br2_srcs_dep_test( 3, "bge", 4, 3, True ),
    gen_br2_srcs_dep_test( 2, "bge", 5, 4, True ),
    gen_br2_srcs_dep_test( 1, "bge", 6, 5, True ),
    gen_br2_srcs_dep_test( 0, "bge", 7, 6, True ),
  ]

#-------------------------------------------------------------------------
# gen_srcs_dep_nottaken_test
#-------------------------------------------------------------------------

def gen_srcs_dep_nottaken_test():
  return [
    gen_br2_srcs_dep_test( 5, "bge", 0, 1, False ),
    gen_br2_srcs_dep_test( 4, "bge", 1, 2, False ),
    gen_br2_srcs_dep_test( 3, "bge", 2, 3, False ),
    gen_br2_srcs_dep_test( 2, "bge", 3, 4, False ),
    gen_br2_srcs_dep_test( 1, "bge", 4, 5, False ),
    gen_br2_srcs_dep_test( 0, "bge", 5, 6, False ),
  ]

#-------------------------------------------------------------------------
# gen_src0_eq_src1_nottaken_test
#-------------------------------------------------------------------------

def gen_src0_eq_src1_test():
  return [
    gen_br2_src0_eq_src1_test( "bge", 1, True ),
  ]

#-------------------------------------------------------------------------
# gen_value_test
#-------------------------------------------------------------------------

def gen_value_test():
  return [

    gen_br2_value_test( "bge", -1, -1, True  ),
    gen_br2_value_test( "bge", -1,  0, False ),
    gen_br2_value_test( "bge", -1,  1, False ),

    gen_br2_value_test( "bge",  0, -1, True  ),
    gen_br2_value_test( "bge",  0,  0, True  ),
    gen_br2_value_test( "bge",  0,  1, False ),

    gen_br2_value_test( "bge",  1, -1, True  ),
    gen_br2_value_test( "bge",  1,  0, True  ),
    gen_br2_value_test( "bge",  1,  1, True  ),

    gen_br2_value_test( "bge", 0xfffffff7, 0xfffffff7, True  ),
    gen_br2_value_test( "bge", 0x7fffffff, 0x7fffffff, True  ),
    gen_br2_value_test( "bge", 0xfffffff7, 0x7fffffff, False ),
    gen_br2_value_test( "bge", 0x7fffffff, 0xfffffff7, True  ),

  ]

#-------------------------------------------------------------------------
# gen_random_test
#-------------------------------------------------------------------------

def gen_random_test():
  asm_code = []
  for i in xrange(25):
    taken = random.choice([True, False])
    src0  = Bits( 32, random.randint(0,0xffffffff) )
    if taken:
      # Branch taken, op1 >= op2
      src1 = Bits( 32, random.randint(0,0xffffffff) )
      if src0.int() < src1.int():
       src1 = src0 - 1
    else:
      # Branch not taken, op1 < op2
      src1 = src0 + 1
    asm_code.append( gen_br2_value_test( "bge", src0.uint(), src1.uint(), taken ) )
  return asm_code
 
#-------------------------------------------------------------------------
# gen_back_to_back_test
#-------------------------------------------------------------------------

def gen_back_to_back_test():
  return """
     # Test backwards walk (back to back branch taken)

     csrr x3, mngr2proc < 1
     csrr x1, mngr2proc < 1

     bne  x3, x0, X0
     csrw proc2mngr, x0
     nop
     a0:
     csrw proc2mngr, x1 > 1
     bne  x3, x0, y0
     b0:
     bne  x3, x0, a0
     c0:
     bne  x3, x0, b0
     d0:
     bne  x3, x0, c0
     e0:
     bne  x3, x0, d0
     f0:
     bne  x3, x0, e0
     g0:
     bne  x3, x0, f0
     h0:
     bne  x3, x0, g0
     i0:
     bne  x3, x0, h0
     X0:
     bne  x3, x0, i0
     y0:

     bne  x3, x0, X1
     csrw x0, proc2mngr
     nop
     a1:
     csrw proc2mngr, x1 > 1
     bne  x3, x0, y1
     b1:
     bne  x3, x0, a1
     c1:
     bne  x3, x0, b1
     d1:
     bne  x3, x0, c1
     e1:
     bne  x3, x0, d1
     f1:
     bne  x3, x0, e1
     g1:
     bne  x3, x0, f1
     h1:
     bne  x3, x0, g1
     i1:
     bne  x3, x0, h1
     X1:
     bne  x3, x0, i1
     y1:

     bne  x3, x0, X2
     csrw proc2mngr, x0
     nop
     a2:
     csrw proc2mngr, x1 > 1
     bne  x3, x0, y2
     b2:
     bne  x3, x0, a2
     c2:
     bne  x3, x0, b2
     d2:
     bne  x3, x0, c2
     e2:
     bne  x3, x0, d2
     f2:
     bne  x3, x0, e2
     g2:
     bne  x3, x0, f2
     h2:
     bne  x3, x0, g2
     i2:
     bne  x3, x0, h2
     X2:
     bne  x3, x0, i2
     y2:

     bne  x3, x0, X3
     csrw proc2mngr, x0
     nop
     a3:
     csrw proc2mngr, x1 > 1
     bne  x3, x0, y3
     b3:
     bne  x3, x0, a3
     c3:
     bne  x3, x0, b3
     d3:
     bne  x3, x0, c3
     e3:
     bne  x3, x0, d3
     f3:
     bne  x3, x0, e3
     g3:
     bne  x3, x0, f3
     h3:
     bne  x3, x0, g3
     i3:
     bne  x3, x0, h3
     X3:
     bne  x3, x0, i3
     y3:
     nop
     nop
     nop
     nop
     nop
     nop
     nop
  """