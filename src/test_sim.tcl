open_project -reset incr_project
add_files -tb test_tb.cc
add_files -tb test.h
add_files test.cc
set_top inc
open_solution -reset solution1
set_part {xc7z020clg484-1}
create_clock -period 6.66
csynth_design
cosim_design -trace_level all
exit
