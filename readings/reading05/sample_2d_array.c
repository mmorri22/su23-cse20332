#include <stdio.h>

/* Compiler directives */
#define ROWS 3
#define COLS 3

/* Function declarations */
void print_array_info( int sample_array[][COLS] );

int main( void ){

  int sample_array[ROWS][COLS] = { {1, 2, 3},
                                   {4, 5, 6},
                                   {7, 8, 9 } };

  /* First, we will print the base address of the array */
  fprintf( stdout, "Base address in main = %p\n", sample_array );

  print_array_info( sample_array );

  return 0;

}

void print_array_info( int sample_array[][COLS] ){

  /* First, we will print the base address of the array */
  fprintf( stdout, "Base address in func = %p\n", sample_array );

  /* First, we will print the base array information */
  int iter;
  for( iter = 0; iter < ROWS; ++iter ){
    fprintf( stdout, "sample_array[%d] = %p\n", iter, &sample_array[iter] );
  }

  /* Now, we will print the address and data */
  for( iter = 0; iter < ROWS; ++iter ){

    int jter;
    for( jter = 0; jter < ROWS; ++jter ){
      fprintf( stdout, "sample_array[%d][%d] = %d at %p\n",
                        iter, jter, sample_array[iter][jter], &sample_array[iter][jter] );
    }

  }
}
