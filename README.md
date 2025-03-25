# CS303-Assignment2
# Sam Safly
# 16351484

singleLL.h & singleLL.cpp contain all of the function declarations and function definitions respectively for the single linked list.
stack.h & stack.cpp contain all of the function declarations and definitions for stack respectively.
To check whether all code works, integers can be updated in main.

To recompile code once changes are made to main, enter this command in terminal:
rm -f main

Next, run code with debugging which may produce a linker error.

Then, enter this command in terminal next:
g++ main.cpp singleLL.cpp stack.cpp -o main

To run code, enter this command in terminal:
./main