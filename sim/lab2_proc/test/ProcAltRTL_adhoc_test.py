#=========================================================================
# ProcAltRTL_adhoc_test.py
#=========================================================================

import pytest
import random

from pymtl   import *
from harness import *
from lab2_proc.ProcAltRTL import ProcAltRTL

#-------------------------------------------------------------------------
# adhoc
#-------------------------------------------------------------------------

import inst_adhoc

@pytest.mark.parametrize( "name,test", [
  asm_test( inst_adhoc.test_0 ) ,
  asm_test( inst_adhoc.test_1 ) ,
])
def test_beq( name, test, dump_vcd ):
  run_test( ProcAltRTL, test, dump_vcd )
