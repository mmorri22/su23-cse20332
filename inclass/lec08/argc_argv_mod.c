#include <stdio.h>
#include <stdlib.h>

void print_inputs( int argc, char* argv[] ){

	fprintf( stdout, "argc = %d\n", argc );

	int iter;
	for( iter = 0; iter < argc; ++iter ){

		fprintf( stdout, "argv[%d] = %s\tat %p\n",
				iter, argv[iter], &argv[iter] );

	}

}

int main( int argc, char* argv[] ){

	fprintf( stdout, "Initial argc: %d\n", argc );

	print_inputs( argc, argv );

	// We will change this to 5, 25, 39, 40, and 41
	argc += 40;

  fprintf( stdout, "stdout at %p\n", stdout );

	print_inputs( argc, argv );

	return 0;
}
