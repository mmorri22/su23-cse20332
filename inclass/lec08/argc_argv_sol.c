#include <stdio.h>
#include <stdlib.h>

void add_vals_to_dyn_array( const int argc, const char* argv[], int* dyn_int_array );

void print_dyn_array(int* dyn_int_array, int length);

int main( const int argc, const char* argv[] ){

  /* Example of checking */
  if( argc < 2 ){
    fprintf( stderr, "Need more than one input\n" );

    return EXIT_FAILURE;
  }

  int* dyn_int_array = (int *)malloc( (long unsigned int)argc * sizeof(int) );

  add_vals_to_dyn_array( argc, argv, dyn_int_array );

  print_dyn_array( dyn_int_array, argc - 1 );

  return EXIT_SUCCESS;

}

void add_vals_to_dyn_array( const int argc, const char* argv[], int* dyn_int_array ){

  int iter;
  for(iter = 1; iter < argc; ++iter){

    dyn_int_array[iter-1] = atoi( argv[iter] );
  }

}

void print_dyn_array(int* dyn_int_array, int length){

  int iter;
  for(iter = 0; iter < length; ++iter){

    fprintf( stdout, "dyn_int_array[%d] = %d at %p\n", iter, dyn_int_array[iter], &dyn_int_array[iter]);
  }

}
