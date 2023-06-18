#include <stdio.h>
#include <stdlib.h>

int main(void){

	long unsigned int size = 13 * sizeof(char);
	void* hello = malloc( size );

	fprintf( stdout, "Working Memory: %p\n", &hello );
	fprintf( stdout, "Long-term Memory: %p\n", hello );
	fprintf( stdout, "address of hello[2] = %p\n", hello + 2*sizeof(char) );

	free( hello );

	return 0;
}
