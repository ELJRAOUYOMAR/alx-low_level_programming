#!/bin/bash

# Compile all .c files in the current directory into corresponding .o files
gcc -c *.c

# Create a static library named liball.a from all the generated .o files
ar -rcs liball.a *.o
