# This is a collection of some things worked during CSCE 221 Data Structures and Algorithms.

# CSCE 221 Test 2 Question 1
## Video
https://youtu.be/688ToitCVcU
Duration 20 minutes

## Contents
### `main.cpp`
Entry point to the program, includes the ability to print the list in a pretty manner. The code for that is annotated for anyone curious.

### `solution.cpp`
The correct solution to the question. You can put your own solution in this file and try `make run` to see how it goes. Remember to try `make gdb` if things aren't quite right.

### `solution_a.cpp`
A student's solution. This is a very good attempt and approach, especially during an exam.

### `solution_b.cpp`
A student's solution. This is a good attempt, but it is lacking. Do not feel bad if your solution was similar to this, it was not uncommon.

### `solution_c.cpp`
A student's solution. This is an interesting recursive solution. If your solution was like this, very well done!

### `node.h`
The header file the declares the struct and the function.

### `Makefile`
Usable makefile to run the solutions. You can run your own solution with `make run` if it is in the `solution.cpp` file. You can debug with `make gdb` or `make lldb` on Mac (you will need to change the `DEBUG` variable at the top of the makefile to `lldb`).
