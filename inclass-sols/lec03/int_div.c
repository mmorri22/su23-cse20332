#include <stdio.h>

int main(void){

	int int_a = 16;
	int int_b = 7;

	int int_div = int_a / int_b;
	int int_rem = int_a % int_b;

	fprintf( stdout, "int_div %d %x %p\n", int_div, int_div, &int_div );
	fprintf( stdout, "int_rem %d %x %p\n", int_rem, int_rem, &int_rem );

	return 0;
}
