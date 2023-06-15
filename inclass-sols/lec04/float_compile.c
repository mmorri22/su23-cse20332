#include <stdio.h>

int main( void ){

	float the_float = (float)3.1;

	fprintf( stdout, "The float = %.11f %a\n", the_float, the_float );

	return 0;

}
