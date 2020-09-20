#=========================================================================
# IntMulFL_test
#=========================================================================

import pytest
import random

random.seed(0xdeadbeef)

from pymtl      import *
from pclib.test import mk_test_case_table, run_sim
from pclib.test import TestSource, TestSink

from lab1_imul.IntMulFL   import IntMulFL

#-------------------------------------------------------------------------
# TestHarness
#-------------------------------------------------------------------------

class TestHarness (Model):

  def __init__( s, imul, src_msgs, sink_msgs,
                src_delay, sink_delay,
                dump_vcd=False, test_verilog=False ):

    # Instantiate models

    s.src  = TestSource ( Bits(64), src_msgs,  src_delay  )
    s.imul = imul
    s.sink = TestSink   ( Bits(32), sink_msgs, sink_delay )

    # Dump VCD

    if dump_vcd:
      s.imul.vcd_file = dump_vcd

    # Translation

    if test_verilog:
      s.imul = TranslationTool( s.imul )

    # Connect

    s.connect( s.src.out,  s.imul.req  )
    s.connect( s.imul.resp, s.sink.in_ )

  def done( s ):
    return s.src.done and s.sink.done

  def line_trace( s ):
    return s.src.line_trace()  + " > " + \
           s.imul.line_trace()  + " > " + \
           s.sink.line_trace()

#-------------------------------------------------------------------------
# mk_req_msg
#-------------------------------------------------------------------------

def req( a, b ):
  msg = Bits( 64 )
  msg[32:64] = Bits( 32, a, trunc=True )
  msg[ 0:32] = Bits( 32, b, trunc=True )
  return msg

def resp( a ):
  return Bits( 32, a, trunc=True )

#----------------------------------------------------------------------
# Test Case: small positive * positive
#----------------------------------------------------------------------

small_pos_pos_msgs = [
  req(  2,  3 ), resp(   6 ),
  req(  4,  5 ), resp(  20 ),
  req(  3,  4 ), resp(  12 ),
  req( 10, 13 ), resp( 130 ),
  req(  8,  7 ), resp(  56 ),
]

# ''' LAB TASK '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
# Define additional lists of request/response messages to create
# additional directed and random test cases.
# ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

random_msgs = [
  req(  273, 9821 ), resp( 2681133 ),
]

zero_msgs = [
  req(  0,  1 ), resp(  0  ),
  req( -1,  0 ), resp(  0  ),
]

small_neg_pos_msgs = [
  req( -1,  7 ), resp(  -7 ),
]

small_neg_neg_msgs = [
  req( -1,  -7 ), resp(  7 ),
]

large_pos_pos_msgs = [
  req( 14271,  65275 ), resp(  931539525 ),
]

large_pos_neg_msgs = [
  req( -14271,  65275 ), resp(  -931539525 ),
]

large_neg_neg_msgs = [
  req( -14271,  -65275 ), resp(  931539525 ),
]

random_large_pp_msgs = []
for i in xrange(100):
  a = random.randint(0,2147483648)
  b = random.randint(0,2147483648)
  random_large_pp_msgs.extend([req( a, b ),resp( a * b )])

random_large_pn_msgs = []
for i in xrange(100):
  a = random.randint(0, 2147483648)
  b = random.randint(-2147483647,0)
  random_large_pn_msgs.extend([req( a, b ), resp( a * b )])

random_large_np_msgs = []
for i in xrange(100):
  a = random.randint(-2147483647,0)
  b = random.randint(0, 2147483648)
  random_large_np_msgs.extend([req( a, b ), resp( a * b )])

random_large_nn_msgs = []
for i in xrange(100):
  a = random.randint(-2147483647,0)
  b = random.randint(-2147483647,0)
  random_large_nn_msgs.extend([req( a, b ), resp( a * b )])

#-------------------------------------------------------------------------
# Test Case Table
#-------------------------------------------------------------------------

test_case_table = mk_test_case_table([
  (                      "msgs                 src_delay sink_delay"),
  [ "small_pos_pos",     small_pos_pos_msgs,   0,        0          ],
  [ "random"       ,     random_msgs,          0,        0          ],
  [ "zero"         ,     zero_msgs,            0,        0          ],
  [ "small_neg_pos",     small_neg_pos_msgs,   0,        0          ],
  [ "small_neg_neg",     small_neg_neg_msgs,   0,        0          ],
  [ "large_pos_pos",     large_pos_pos_msgs,   0,        0          ],
  [ "large_pos_neg",     large_pos_neg_msgs,   0,        0          ],
  [ "large_neg_neg",     large_neg_neg_msgs,   0,        0          ],
  [ "rand_large_pp",     random_large_pp_msgs, 0,        0          ],
  [ "rand_large_np",     random_large_np_msgs, 0,        0          ],
  [ "rand_large_pn",     random_large_pn_msgs, 0,        0          ],
  [ "rand_large_nn",     random_large_nn_msgs, 0,        0          ],
])

rand_delay_case_table = mk_test_case_table([
  (                "msgs                 src_delay              sink_delay"),
  [ "rand_delay_0", small_pos_pos_msgs,   random.randint(0,1000), random.randint(0,1000)],
  [ "rand_delay_1", small_pos_pos_msgs,   random.randint(0,1000), random.randint(0,1000)],
  [ "rand_delay_2", small_pos_pos_msgs,   random.randint(0,1000), random.randint(0,1000)],
  [ "rand_delay_3", small_pos_pos_msgs,   random.randint(0,1000), random.randint(0,1000)],
  [ "rand_delay_4", small_pos_pos_msgs,   random.randint(0,1000), random.randint(0,1000)],
  [ "rand_delay_5", small_pos_pos_msgs,   random.randint(0,500), random.randint(500,1000)],
  [ "rand_delay_6", small_pos_pos_msgs,   random.randint(0,500), random.randint(500,1000)],
  [ "rand_delay_7", small_pos_pos_msgs,   random.randint(0,500), random.randint(500,1000)],
  [ "rand_delay_8", small_pos_pos_msgs,   random.randint(0,500), random.randint(500,1000)],
  [ "rand_delay_9", small_pos_pos_msgs,   random.randint(0,500), random.randint(500,1000)]
])

#-------------------------------------------------------------------------
# Test cases
#-------------------------------------------------------------------------

@pytest.mark.parametrize( **test_case_table )
def test_mul_logic( test_params, dump_vcd ):
  run_sim( TestHarness( IntMulFL(),
                        test_params.msgs[::2], test_params.msgs[1::2],
                        test_params.src_delay, test_params.sink_delay ),
           dump_vcd )

@pytest.mark.parametrize( **rand_delay_case_table )
def test_rand_delay( test_params, dump_vcd ):
  run_sim( TestHarness( IntMulFL(),
                        test_params.msgs[::2], test_params.msgs[1::2],
                        test_params.src_delay, test_params.sink_delay ),
           dump_vcd )
