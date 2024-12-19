
#This TCL script sets up the project and initial solution
#then runs synthesis that solution

open_project -reset conv2D.prj
add_files conv2D.c
add_files -tb conv2D_test.c

set_top conv2D

open_solution "solution1"
set_part  {xc7z020clg484-1}
create_clock -period 10

csynth_design
exit