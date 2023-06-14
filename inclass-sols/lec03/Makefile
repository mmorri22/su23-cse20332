# Author: [Your Names]
# E-mail: [Your Email]
#
# This is the Makefile for the Lecture 3 Example.

# gcc is for the compiler for C
CC := gcc

# CFLAGS are the compiler flages for when we compile C code in this course
FLAGS := -O2 -g -Wall -Wextra -Wconversion -Wshadow -Werror -lm
CFLAGS := -std=c11 $(FLAGS)

# Create the Singly Linked List Object
hello.o: hello.c
	$(CC) $(CFLAGS) -c hello.c

# hello Objects
hello_objs := hello.o

# Singly Linked List Executable and Run
hello: $(hello_objs)
	$(CC) $(CFLAGS) -o hello $(hello_objs)

# Create the Hello, World Object
int_print.o: int_print.c
		$(CC) $(CFLAGS) -c int_print.c

# int_print Objects
int_print_objs := int_print.o

# Int Print Executable and Run
int_print: $(int_print_objs)
		$(CC) $(CFLAGS) -o int_print $(int_print_objs)

# Executable Names
executable_names := hello int_print

# Make all
all: $(executable_names)

# Make clean
clean:
	rm -rf *.o *.swp $(executable_names)
