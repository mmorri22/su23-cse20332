#include <stdio.h>

int main( void ){

	double the_float = 3.1;

	fprintf( stdout, "The float = %.23lf %la\n", the_float, the_float );

	return 0;

}
