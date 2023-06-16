# Author: Prof. Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the Lecture 4 Example.

# gcc is for the compiler for C
CC := gcc

# CFLAGS are the compiler flages for when we compile C code in this course
FLAGS := -O2 -g -Wall -Wextra -Wconversion -Wshadow -Werror -lm
CFLAGS := -std=c11 $(FLAGS)

# Create the If-Else Object
if_else.o: if_else.c
	$(CC) $(CFLAGS) -c if_else.c

# If/Else Objects
if_else_objs := if_else.o

# If/Else Executable and Run
if_else: $(if_else_objs)
	$(CC) $(CFLAGS) -o if_else $(if_else_objs)
	./if_else


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
executable_names := if_else double_comp float_compile

# Make all
all: $(executable_names)

# Make clean
clean:
	rm -rf *.o *.swp $(executable_names)
