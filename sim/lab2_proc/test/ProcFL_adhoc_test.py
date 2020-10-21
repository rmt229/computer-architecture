#=========================================================================
# ProcFL_adhoc_test.py
#=========================================================================

import pytest
import random

from pymtl   import *
from harness import *
from lab2_proc.ProcFL import ProcFL

#-------------------------------------------------------------------------
# adhoc
#-------------------------------------------------------------------------

import inst_adhoc

@pytest.mark.parametrize( "name,test", [
  asm_test( inst_adhoc.gen_raw_data_haz_addi ) ,
  asm_test( inst_adhoc.gen_raw_data_haz_lw   ) ,
  asm_test( inst_adhoc.gen_struct_haz_simple ) ,
])
def test_adhoc( name, test, dump_vcd ):
  run_test( ProcFL, test, dump_vcd )
