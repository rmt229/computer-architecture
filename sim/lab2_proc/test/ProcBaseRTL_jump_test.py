#=========================================================================
# ProcBaseRTL_test.py
#=========================================================================

import pytest
import random

from pymtl   import *
from harness import *
from lab2_proc.ProcBaseRTL import ProcBaseRTL

#-------------------------------------------------------------------------
# jal
#-------------------------------------------------------------------------

import inst_jal

@pytest.mark.parametrize( "name,test", [
  asm_test( inst_jal.gen_basic_test        ) ,
  asm_test( inst_jal.gen_dest_dep_test     ) ,
  asm_test( inst_jal.gen_base_dep_test     ) ,

  # ''' LAB TASK '''''''''''''''''''''''''''''''''''''''''''''''''''''''''
  # Add more rows to the test case table to test more complicated
  # scenarios.
  # ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
  asm_test( inst_jal.gen_dest_max_test ),
  asm_test( inst_jal.gen_multi_jal_test ),
])

def test_jal( name, test, dump_vcd ):
  run_test( ProcBaseRTL, test, dump_vcd )

# ''' LAB TASK '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
# random stall and delay
# ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
#-------------------------------------------------------------------------
# jalr
#-------------------------------------------------------------------------

import inst_jalr

@pytest.mark.parametrize( "name,test", [
  asm_test( inst_jalr.gen_basic_test    ),
  asm_test( inst_jalr.gen_dest_dep_test ),
  asm_test( inst_jalr.gen_base_dep_test ),
  # ''' LAB TASK '''''''''''''''''''''''''''''''''''''''''''''''''''''''''
  # Add more rows to the test case table to test more complicated
  # scenarios.
  # ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
  asm_test( inst_jalr.gen_multi_jalr_test ),
])
def test_jalr( name, test, dump_vcd ):
  run_test( ProcBaseRTL, test, dump_vcd )

# ''' LAB TASK '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
# random stall and delay
# ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
