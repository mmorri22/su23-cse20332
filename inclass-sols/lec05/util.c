#include "util.h"

/* Step 4 - Write the function definition of convert_time_to_hm */
void convert_time_to_hm( unsigned int time,
    unsigned int* hours, unsigned int* minutes ){

      *hours = time / MINUTES;
      *minutes = time % MINUTES;

}

void function (int a, int * b){

  fprintf( stdout, "before function - int a = %d at %p\n", a, &a);

  /* Step 1 - How would we print the address and value of what b is pointing at? */
  fprintf( stdout, "before function - int*b = %d in main %p copy %p", *b, b, &b );

   a = 7 ;
   *b = a ;
   b = &a ;
   *b = 4 ;

   fprintf( stdout, "after function - int a = %d at %p\n", a, &a);

   /* Step 1b - How would we print the address and value of what b is pointing at? */
   fprintf( stdout, "after function - int*b = %d in main %p copy %p", *b, b, &b );
}


/* Step 3b - Write a function definition for
 * fscanf_pbr that passes an integer, a float, a double,
 * and a character string by reference, and then calls fscanf in that function */
void fscanf_pbr( int* the_int, float* the_float, double* the_double, char str_array[] ){

  fscanf( stdin, "%d %f %lf %s", the_int, the_float, the_double, str_array );

}

 /* Step 4a - Write a function definition and definition for
  * fprintf_pbv that passes an integer, a float, a double,
  * and a character string by reference, and then calls fprintf in that function */
void fprint_pbv( int the_int, float the_float, double the_double, char str_array[] ){

  fprintf( stdout, "%d %f %lf %s\n", the_int, the_float, the_double, str_array );
}
