#include <stdio.h>

int main(void){

	unsigned int int_a = -23;
	unsigned int int_b = 23;

	fprintf( stdout, "int_a %u %x %p\n", int_a, int_a, &int_a );
	fprintf( stdout, "int_b %u %x %p\n", int_b, int_b, &int_b );

	return 0;
}

