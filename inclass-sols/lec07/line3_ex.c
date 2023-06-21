#include <stdio.h>
#include <stdlib.h>

int main( void ){

  /* Initialize the size of the dynamic array */
  long unsigned int array_len = 13;

  /* Allocate the array */
  void* line3 = malloc( array_len * sizeof(char) );

  /* Use ASCII Hex to update the values */
  *( (char *)(line3 + 0*sizeof(char)) ) = 0x56;
  *( (char *)(line3 + 1*sizeof(char)) ) = 0x65;
  *( (char *)(line3 + 2*sizeof(char)) ) = 0x6c;
  *( (char *)(line3 + 3*sizeof(char)) ) = 0x6f;
  *( (char *)(line3 + 4*sizeof(char)) ) = 0x63;
  *( (char *)(line3 + 5*sizeof(char)) ) = 0x69;
  *( (char *)(line3 + 6*sizeof(char)) ) = 0x72;
  *( (char *)(line3 + 7*sizeof(char)) ) = 0x61;
  *( (char *)(line3 + 8*sizeof(char)) ) = 0x70;
  *( (char *)(line3 + 9*sizeof(char)) ) = 0x74;
  *( (char *)(line3 + 10*sizeof(char)) ) = 0x6f;
  *( (char *)(line3 + 11*sizeof(char)) ) = 0x72;
  *( (char *)(line3 + 12*sizeof(char)) ) = 0x21;


  /* Print the line */
  long unsigned int iter;
  for( iter = 0; iter < array_len; ++iter ){

    fprintf( stdout, "%c", *( (int *)(line3 + iter) ) );

  }

  fprintf( stdout, "\n" );

  /* Free the array */
  free( line3 );

  return 0;


}
