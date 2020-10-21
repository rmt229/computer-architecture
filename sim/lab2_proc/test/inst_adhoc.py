#=========================================================================
# adhoc
#=========================================================================

import random

from pymtl import *
from inst_utils import *


#-------------------------------------------------------------------------
# test_0
#-------------------------------------------------------------------------

def test_0() :
  return """
    csrr x1, mngr2proc, < 5
    csrr x2, mngr2proc, < 6
    
    addi x3, x1, 1
    addi x3, x2, 1
    add  x5, x3, x3
    
    csrw proc2mngr, x5 > 0x0000000e
  """

#-------------------------------------------------------------------------
# test_1
#-------------------------------------------------------------------------

def test_1() :
  return """
    csrr x1, mngr2proc, < 0x00002000
    
    lw x2, 0(x1)
    addi  x2, x2, 0x00000001
    
    csrw proc2mngr, x2 > 0x00000002
    .data
    .word 0x00000001
  """

def gen_raw_data_haz_addi() :
  return """
    csrr x1, mngr2proc, < 5
    csrr x2, mngr2proc, < 6
    
    addi x3, x1, 1
    addi x3, x2, 1
    add  x5, x3, x3
    
    csrw proc2mngr, x5 > 0x0000000e
  """

def gen_raw_data_haz_lw() :
  return """
    csrr x1, mngr2proc, < 0x00002000
    
    lw x2, 0(x1)
    addi  x2, x2, 0x00000001
    
    csrw proc2mngr, x2 > 0x00000002

    .data
    .word 0x00000001
  """

def gen_struct_haz_simple():
  return '''
    addi x1, x0, 1
    jal  x0, label_a
 
  label_a:
    addi x2, x2, 1
    bne  x0, x1, label_b
    addi x2, x2, 1
    addi x2, x2, 1

  label_b:
    addi x3, x3, 5
    
    csrw proc2mngr, x3 > 5
    csrw proc2mngr, x2 > 1
  '''

def gen_raw_haz_loop_test():
  return """
    csrr x2, mngr2proc < 0x00002000
    csrr x4, mngr2proc < 0x00002010

    addi x1, x0, 4
  loop:
    lw   x3, 0(x2)
    addi x3, x3, 1
    sw   x3, 0(x4)
    addi x2, x2, 4
    addi x4, x4, 4
    addi x1, x1, -1
    bne  x1, x0, loop

    lui  x1, 0x00002
    addi x1, x1, 0x010
    lw   x2, 0(x1)
    csrw proc2mngr, x2 > 2
    
    lui  x1, 0x00002
    addi x1, x1, 0x014
    lw   x2, 0(x1)
    csrw proc2mngr, x2 > 3
   
    lui  x1, 0x00002
    addi x1, x1, 0x018
    lw   x2, 0(x1)
    csrw proc2mngr, x2 > 4

    lui  x1, 0x00002
    addi x1, x1, 0x01c
    lw   x2, 0(x1) 
    csrw proc2mngr, x2 > 5
  
    # Memory
    .data

    # src array
    .word 0x00000001
    .word 0x00000002
    .word 0x00000003
    .word 0x00000004

    # dest array
    .word 0x00000000
    .word 0x00000000
    .word 0x00000000
    .word 0x00000000
  """

def gen_find_elem_test( l ):
  data_list = ([0] * (l - 1))
  data_list.append(1)
  return '''
    csrr x12, mngr2proc < 0x00002000
    csrr x14, mngr2proc < 0x00000001
    nop
    nop
    addi x5,  x0, 0

  loop:
    lw   x6,  0(x12)
    bne  x6,  x14, find
    addi x10, x5, 0
    jal  x1,  done

  find:
    addi x12, x12, 4
    addi x5,  x5,  1
    bne  x5,  x13, loop
    addi x10, x0,  -1
    
  done:
    csrw proc2mngr, x10 > {result}

    {memory}
  
  '''.format(
    result = (l-1),
    memory = gen_word_data(data_list)
  )

def gen_find_elem_test_100():
  return gen_find_elem_test(100)