#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Step 1:
// Define a type with the name new_struct
// Internals should be an int, a float, and a double
typedef struct new_struct{

  int the_int;
  float the_float;
  double the_double;

}NEW_STRUCT;

int main( const int argc, const char* argv[] ){

  if( argc != 7 ){
    fprintf( stderr, "Need exactly 7 inputs\n" );
    fprintf( stderr, "./structs [int] [double] [float] [int] [double] [float]\n" );
    fprintf( stderr, "UNIX will not count valgrind --leak-check=full as inputs");
    return EXIT_FAILURE;
  }

  // Step 2: Statically Allocate a new_struct
  // 1) Statically create the struct
  // 1) Create an int using atoi
  // 2) Create a float using atof
  // 3) Create a double using atof
  NEW_STRUCT static_struct;
  static_struct.the_int = atoi(argv[1]);
  static_struct.the_float = (float)atof(argv[2]);
  static_struct.the_double = atof(argv[3]);

  // Step 2: Print use fprintf
  // 1) The address of the address of the static struct on the stack
  // 2) The value and address of the dynamic struct's long unsigned int
	// 3) The value and address of the dynamic struct's long unsigned int
	// 4) The value and address of the dynamic struct's double
  fprintf(stdout, "%p\n", &static_struct);
  fprintf(stdout, "%d at %p\n", static_struct.the_int, &(static_struct.the_int) );
  fprintf(stdout, "%f at %p\n", static_struct.the_float, &(static_struct.the_float) );
  fprintf(stdout, "%lf at %p\n", static_struct.the_double, &(static_struct.the_double) );

	// Step 3: Dynamically Allocate a new_struct
  NEW_STRUCT* dynamic_struct = (NEW_STRUCT*)malloc( sizeof(NEW_STRUCT) );

	// Step 4: De-reference and set values for the int, long unsigned int, and float
  dynamic_struct->the_int = atoi(argv[4]);
  dynamic_struct->the_float = (float)atof(argv[5]);
  dynamic_struct->the_double = atof(argv[6]);

	// Step 4: Print use fprintf
	// 1) The address of the register containing the dynamic struct pointer
  // 2) The address of the address of the dynamic struct pointer on the heap
  // 3) The value and address of the dynamic struct's int
	// 4) The value and address of the dynamic struct's float
	// 5) The value and address of the dynamic struct's double
  fprintf(stdout, "%p at %p\n", dynamic_struct, &dynamic_struct);
  fprintf(stdout, "%d at %p\n", dynamic_struct->the_int, &(dynamic_struct->the_int) );
  fprintf(stdout, "%f at %p\n", dynamic_struct->the_float, &(dynamic_struct->the_float) );
  fprintf(stdout, "%lf at %p\n", dynamic_struct->the_double, &(dynamic_struct->the_double) );

	// Step 5: Free the Dynamically Allocated Memory
  free(dynamic_struct);

	return EXIT_SUCCESS;

};
