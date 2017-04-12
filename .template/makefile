# To build the program (which is called simulator by default), simply type:
#   make
#
# To clean up and remove the compiled binary and other generated files, type:
#   make clean
#
# To build AND run the program, type:
#   make run
#

# The name of your binary.
NAME = Solution

# Compiler options
CXX = g++
CPPFLAGS = -std=c++11

# Default target, which builds your binary.
$(NAME): main.o
	$(CXX) $(CPP_FLAGS) $^ -o $(NAME)

# Build and run the program.
run: $(NAME)
	cat "./in.txt" | "./$(NAME)"

# Remove all generated files.
clean:
	rm -rf $(NAME) *.o

main.o: main.cpp
	$(CXX) $(CPPFLAGS) $< -c -o $@

# Special targets.
.PHONY: run clean
