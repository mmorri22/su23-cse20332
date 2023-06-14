#include <stdio.h>

int main(void){

	double int_a = 16;
	double int_b = 7;

	double int_div = int_a / int_b;

	fprintf( stdout, "div %.23lf %la %p\n", int_div, int_div, &int_div );
	// fprintf( stdout, "int_b %d %x %p\n", int_b, int_b, &int_b );

	return 0;
}

