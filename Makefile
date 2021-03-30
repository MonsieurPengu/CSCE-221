# Compiler: use clang++ on Mac
GXX=g++
# Options: standard 17; Warnings: all, extra; Pedantic (errors and warnings); Include Debug Symbols; Optimize for Debugging 
GXX_OPTIONS=-std=c++17 -Wall -Wextra -pedantic -g -Og
# Debugger: gdb or lldb
DEBUG=gdb

all: solution solution_a solution_b solution_c

solution: main.cpp solution.cpp node.h
	$(GXX) $(GXX_OPTIONS) main.cpp solution.cpp -o solution

solution_a: main.cpp solution_a.cpp node.h
	$(GXX) $(GXX_OPTIONS) main.cpp solution_a.cpp -o solution_a

solution_b: main.cpp solution_b.cpp node.h
	$(GXX) $(GXX_OPTIONS) main.cpp solution_b.cpp -o solution_b

solution_c: main.cpp solution_c.cpp node.h
	$(GXX) $(GXX_OPTIONS) main.cpp solution_c.cpp -o solution_c

clean:
	rm -f solution solution_a solution_b solution_c

run: solution
	./solution

run_a: solution_a
	./solution_a

run_b: solution_b
	./solution_b

run_c: solution_c
	./solution_c

gdb: solution
	$(DEBUG) solution

gdb_a: solution_a
	$(DEBUG) solution_a

gdb_b: solution_b
	$(DEBUG) solution_b

gdb_c: solution_c
	$(DEBUG) solution_c
