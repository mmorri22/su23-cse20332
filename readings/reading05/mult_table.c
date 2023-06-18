#include <stdio.h>

void fill_array( int array_len, int mult_matrix[][array_len] );

void print_array( int array_len, int mult_matrix[][array_len] );

int main( void ){

  int array_len = 11;

  int mult_matrix[array_len][array_len];

  fill_array( array_len, mult_matrix );

  print_array( array_len, mult_matrix );

  return 0;

}

void fill_array( int array_len, int matrix[][array_len] ){

  int y_iter;
  for( y_iter = 0; y_iter < array_len; ++y_iter ){

    int x_iter;
    for( x_iter = 0; x_iter < array_len; ++x_iter ){
      /* Update the array passed by reference */
      matrix[y_iter][x_iter] = y_iter * x_iter;
    }
  }

}

void print_array( int array_len, int matrix[][array_len] ){

  int y_iter;
  for( y_iter = 0; y_iter < array_len; ++y_iter ){

    int x_iter;
    for( x_iter = 0; x_iter < array_len; ++x_iter ){
      /* Print the integer with 4 character space */
      fprintf( stdout, "%4d", matrix[y_iter][x_iter]);
    }
    fprintf( stdout, "\n" );
  }

}
