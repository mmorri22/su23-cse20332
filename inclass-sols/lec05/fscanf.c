#include <stdio.h>
#include "util.h"

int main(){

  int first_int;
  float first_float;
  double first_double;
  char first_str[BUFFER];

  /* Step 1 - Write fscanf to read in the values */
  fprintf( stdout, "Enter an integer, float, double, and a string: ");
  fscanf( stdin, "%d %f %lf %s",
          &first_int, &first_float, &first_double, first_str);

  /* Step 2 - Write fprintf to print all the values */
  fprintf( stdout, "%d %f %lf %s\n",
            first_int, first_float, first_double, first_str );

  /* Step 5 - Uncomment these data, and then call fscanf_pbr and fprintf_pbv */
  int second_int;
  float second_float;
  double second_double;
  char second_str[BUFFER];

  fscanf_pbr( &second_int, &second_float, &second_double, second_str );
  fprint_pbv( second_int, second_float, second_double, second_str );

  return 0;
}
