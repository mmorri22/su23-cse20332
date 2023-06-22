#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Step 1:
// Define a type with the name new_struct
// Internals should be an int, a float, and a double


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



  // Step 2: Print use fprintf
  // 1) The address of the address of the static struct on the stack
  // 2) The value and address of the dynamic struct's long unsigned int
	// 3) The value and address of the dynamic struct's long unsigned int
	// 4) The value and address of the dynamic struct's double


	// Step 3: Dynamically Allocate a new_struct


	// Step 4: De-reference and set values for the int, long unsigned int, and float


	// Step 4: Print use fprintf
	// 1) The address of the register containing the dynamic struct pointer
  // 2) The address of the address of the dynamic struct pointer on the heap
  // 3) The value and address of the dynamic struct's int
	// 4) The value and address of the dynamic struct's float
	// 5) The value and address of the dynamic struct's double


	// Step 5: Free the Dynamically Allocated Memory


	return EXIT_SUCCESS;

};
