#include <stdio.h>
#include <stdlib.h>

#define LENGTH 15

int main( void ){

  /* Create a static array that stores and prints characters using '' notation */
  char line1[LENGTH];

  /* Create the line */
  line1[0] = 'T';
  line1[1] = 'h';
  line1[2] = 'i';
  line1[3] = 's';
  line1[4] = ' ';
  line1[5] = 'e';
  line1[6] = 'p';
  line1[7] = 'i';
  line1[8] = 'c';
  line1[9] = ' ';
  line1[10] = 'H';
  line1[11] = 'a';
  line1[12] = 'i';
  line1[13] = 'k';
  line1[14] = 'u';

  /* Print using an iterator */
  long unsigned int iter;
  for(iter = 0; iter < LENGTH; ++iter ){
    fprintf(stdout, "%c", line1[iter] );
  }
  fprintf( stdout, "\n" );

  return 0;
}
