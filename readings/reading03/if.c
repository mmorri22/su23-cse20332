#include <stdio.h>

int main( void ){

	int x = 22;
	int y = 23;
	
	fprintf( stdout, "%d %x %p\n", x, x, &x );
	fprintf( stdout, "%d %x %p\n", y, x, &y );

	if( x == y  ){
		fprintf( stdout, "We made it!\n" );
		x++;
	}
	else if( y - x == 1 ){
		fprintf( stdout, "we kind made it?\n" );
	}	
	else
		fprintf( stdout, "We didn't make it :(\n" );


	return 0;
}
