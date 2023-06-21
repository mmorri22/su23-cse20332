# Author: Prof. Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the Lecture 8 Example.

# gcc is for the compiler for C
CC := gcc

# CFLAGS are the compiler flages for when we compile C code in this course
FLAGS := -O2 -g -Wall -Wextra -Wconversion -Wshadow -Werror -lm
CFLAGS := -std=c11 $(FLAGS)

# Create the Better Malloc Object
better_malloc.o: better_malloc.c
	$(CC) $(CFLAGS) -c better_malloc.c

# Better Malloc Objects
better_malloc_objs := better_malloc.o

# Better Malloc Executable
better_malloc: $(better_malloc_objs)
	$(CC) $(CFLAGS) -o better_malloc $(better_malloc_objs)
	valgrind --leak-check=full ./better_malloc


# Create the Better Malloc Long Int Object
better_malloc_li.o: better_malloc_li.c
	$(CC) $(CFLAGS) -c better_malloc_li.c

# Better Malloc Long Objects
better_malloc_li_objs := better_malloc_li.o

# Better Malloc Executable
better_malloc_li: $(better_malloc_li_objs)
	$(CC) $(CFLAGS) -o better_malloc_li $(better_malloc_li_objs)
	valgrind --leak-check=full ./better_malloc_li


# Create the Better Malloc Float Object
better_malloc_float.o: better_malloc_float.c
	$(CC) $(CFLAGS) -c better_malloc_float.c

# Better Malloc Float Objects
better_malloc_float_objs := better_malloc_float.o

# Better Malloc Executable
better_malloc_float: $(better_malloc_float_objs)
	$(CC) $(CFLAGS) -o better_malloc_float $(better_malloc_float_objs)
	valgrind --leak-check=full ./better_malloc_float


# Create the Better Malloc Double Object
better_malloc_double.o: better_malloc_double.c
	$(CC) $(CFLAGS) -c better_malloc_double.c

# Better Malloc Double Objects
better_malloc_double_objs := better_malloc_double.o

# Better Malloc Executable
better_malloc_double: $(better_malloc_double_objs)
	$(CC) $(CFLAGS) -o better_malloc_double $(better_malloc_double_objs)
	valgrind --leak-check=full ./better_malloc_double


# Executable Names
executable_names := better_malloc better_malloc_li better_malloc_float better_malloc_double

# Make all
all: $(executable_names)

# Make clean
clean:
	rm -rf *.o *.swp $(executable_names)
