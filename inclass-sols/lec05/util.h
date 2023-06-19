#ifndef UTIL_H
#define UTIL_H

#include <stdio.h>

/* Step 1 - Compiler Directive MINUTES */
#define MINUTES 60
#define BUFFER 50

/* Step 3 - Function prototypes */
void convert_time_to_hm( unsigned int time,
    unsigned int* hours, unsigned int* minutes );

void function (int a, int * b);

/* Step 3a - Write a function declaration for
 * fscanf_pbr that passes an integer, a float, a double,
 * and a character string by reference, and then calls fscanf in that function */
void fscanf_pbr( int* the_int, float* the_float, double* the_double, char str_array[] );

/* Step 4a - Write a function declaration and definition for
 * fprintf_pbv that passes an integer, a float, a double,
 * and a character string by reference, and then calls fprintf in that function */
void fprint_pbv( int the_int, float the_float, double the_double, char str_array[] );


#endif
