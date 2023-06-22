#include <stdio.h>
#include <stdlib.h>

/* Step 3a - Writing a function add_vals_to_dyn_array to save the inputs */
/* Step 4b - Revisiting the file with security */
void add_vals_to_dyn_array( const int argc, const char* argv[], int* dyn_arr_ptr );

void print_dyn_array(int* dyn_int_array, int length);

/* Step 1 - Change the input */
/* Step 4a - Revisiting the file with security */
int main( const int argc, const char* argv[] ){

  /* Step 2 - Example of checking */
  if( argc < 2 ){
    fprintf( stderr, "Need more than one input\n" );

    return EXIT_FAILURE;
  }

  int* dyn_int_array = (int *)malloc( (long unsigned int)(argc - 1) * sizeof(int) );

  /* 3c - Make the call in main */
add_vals_to_dyn_array( argc, argv, dyn_int_array );

  print_dyn_array( dyn_int_array, argc - 1 );

  free( dyn_int_array );

  return EXIT_SUCCESS;

}

/* Step 3b - Writing a function add_vals_to_dyn_array to save the inputs */
/* Step 4c - Revisiting the file with security */
void add_vals_to_dyn_array( const int argc, const char* argv[], int* dyn_arr_ptr ){

  int iter;
  for( iter = 1; iter < argc; ++iter ){

    dyn_arr_ptr[ iter - 1 ] = atoi( argv[iter] );
  }

}

void print_dyn_array(int* dyn_int_array, int length){

  int iter;
  for(iter = 0; iter < length; ++iter){

    fprintf( stdout, "dyn_int_array[%d] = %d at %p\n", iter, dyn_int_array[iter], &dyn_int_array[iter]);
  }

}
