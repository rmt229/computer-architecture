#=========================================================================
# sltiu
#=========================================================================

import random

from pymtl import *
from inst_utils import *

#-------------------------------------------------------------------------
# gen_basic_test
#-------------------------------------------------------------------------

def gen_basic_test():
  return """
    csrr x1, mngr2proc < 5
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sltiu x3, x1, 6
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    csrw proc2mngr, x3 > 1
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
    gen_rimm_dest_dep_test( 5, "sltiu", 2, 1, 0 ),
    gen_rimm_dest_dep_test( 4, "sltiu", 2, 1, 0 ),
    gen_rimm_dest_dep_test( 3, "sltiu", 2, 1, 0 ),
    gen_rimm_dest_dep_test( 2, "sltiu", 2, 1, 0 ),
    gen_rimm_dest_dep_test( 1, "sltiu", 2, 1, 0 ),
    gen_rimm_dest_dep_test( 0, "sltiu", 2, 1, 0 ),
  ]

def gen_src_dep_test():
  return [
    gen_rimm_src_dep_test( 5, "sltiu", 2, 1, 0 ),
    gen_rimm_src_dep_test( 4, "sltiu", 2, 1, 0 ),
    gen_rimm_src_dep_test( 3, "sltiu", 2, 1, 0 ),
    gen_rimm_src_dep_test( 2, "sltiu", 2, 1, 0 ),
    gen_rimm_src_dep_test( 1, "sltiu", 2, 1, 0 ),
    gen_rimm_src_dep_test( 0, "sltiu", 2, 1, 0 ),
  ]

def gen_src_eq_dep_test():
  return [
    gen_rimm_src_eq_dest_test( "sltiu", 2, 1, 0),
    gen_rimm_src_eq_dest_test( "sltiu", 1, 2, 1),
  ]

def gen_value_test():
  return [
    gen_rimm_value_test( "sltiu", 0x00000000, 0x000, 0 ),
    gen_rimm_value_test( "sltiu", 0x00000001, 0x001, 0 ),
    gen_rimm_value_test( "sltiu", 0x00000001, 0x002, 1 ),
    
    gen_rimm_value_test( "sltiu", 0x000006ff, 0x7ff, 1 ),
    gen_rimm_value_test( "sltiu", 0x00000fff, 0x8ff, 0 ),
  ]
