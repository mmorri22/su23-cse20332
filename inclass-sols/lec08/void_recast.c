#include <stdio.h>
#include <stdlib.h>

int main(){

  /* Step 1 - Allocate a length of four */
  long unsigned int array_len = 4;

  /* Step 2 - Allocate a void pointer array */
  void* void_array = malloc( array_len * sizeof(char) );

  /* Using pointer arithmetic and ASCII hex, save values A, B, C, D */
  *( (char *)( void_array + 0*sizeof(char) ) ) = 0x41;
  *( (char *)( void_array + 1*sizeof(char) ) ) = 0x42;
  *( (char *)( void_array + 2*sizeof(char) ) ) = 0x43;
  *( (char *)( void_array + 3*sizeof(char) ) ) = 0x44;

  long unsigned int iter;
  for( iter = 0; iter < array_len; ++iter ){
      fprintf( stdout, "address of void_array[%ld] = %p\n", iter, void_array + iter*sizeof(char) );
  }

  for( iter = 0; iter < array_len; ++iter ){
      fprintf( stdout, "value of void_array[%ld] = %c\n", iter, *( (char *)( void_array + iter*sizeof(char) ) ) );
  }


  fprintf(stdout, "%d %x\n", *( (int *)(void_array) ), *( (int *)(void_array) ) );

  free(void_array);

  return 0;
}
