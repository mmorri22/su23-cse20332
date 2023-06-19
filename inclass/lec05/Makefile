# Author: Prof. Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the Lecture 5 Example.

# gcc is for the compiler for C
CC := gcc

# CFLAGS are the compiler flages for when we compile C code in this course
FLAGS := -O2 -g -Wall -Wextra -Wconversion -Wshadow -Werror -lm
CFLAGS := -std=c11 $(FLAGS)

# Create the Hours Object
hours.o: hours.c
	$(CC) $(CFLAGS) -c hours.c

# If/Else Objects
hours_objs := hours.o

# If/Else Executable and Run
hours: $(hours_objs)
	$(CC) $(CFLAGS) -o hours $(hours_objs)
	./hours


# Create the Double Comp Object
double_comp.o: double_comp.c
	$(CC) $(CFLAGS) -c double_comp.c

# Double Comp Objects
double_comp_objs := double_comp.o

# If/Else Executable and Run
double_comp: $(double_comp_objs)
	$(CC) $(CFLAGS) -o double_comp $(double_comp_objs)
	./double_comp


# Create the Float Compile Object
float_compile.o: float_compile.c
	$(CC) $(CFLAGS) -c float_compile.c

# Float Compile Objects
float_compile_objs := float_compile.o

# Float Compile Executable
float_compile: $(float_compile_objs)
	$(CC) $(CFLAGS) -o float_compile $(float_compile_objs)
	./float_compile


# Executable Names
executable_names := hours

# Make all
all: $(executable_names)

# Make clean
clean:
	rm -rf *.o *.swp $(executable_names)
