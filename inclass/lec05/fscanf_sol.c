#include <stdio.h>

#define BUFFER 50

int main(){

  int first_int;
  float first_float;
  double first_double;
  char first_str[BUFFER];

  /* Step 1 - Write fscanf to read in the values */
  fscanf( stdin, "%d %f %lf %s", &first_int, &first_float, &first_double, first_str );

  /* Step 2 - Write fprintf to print all the values */
  fprintf( stdout, "%d %f %lf %s\n", first_int, first_float, first_double, first_str );

  /* int second_int;
  float second_float;
  double second_double;
  char* second_str; */

  return 0;
}
