#include <stdio.h>

int main(void){

	int int_a = -23;
	int int_b = 23;

	fprintf( stdout, "int_a %d %x %p\n", int_a, int_a, &int_a );
	fprintf( stdout, "int_b %d %x %p\n", int_b, int_b, &int_b );

	return 0;
}

