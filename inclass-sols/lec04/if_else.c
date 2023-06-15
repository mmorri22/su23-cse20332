#include <stdio.h>

/********************************************
 * Function Name: set_phase
 * Pre-Conditions: double the_temp
 * Post-Conditions: int
 *
 * Converts temperature to a phase representation
 * When phase is 0, "crystalline"
 * When phase is 4, "smectic"
 * When phase is 7, "liquid"
 * When phase is 12, "gaseous"
 *******************************************/
int set_phase( double the_temp );

/********************************************
 * Function Name: print_phase
 * Pre-Conditions: int phase
 * Post-Conditions: void
 *
 * Prints the phase name based on int phase
 *******************************************/
void print_phase( int phase );

int main( void ){

	/* Create variables for comparison */
	int phase = -1;
	double the_temp = -1;

	do{

		phase = set_phase( the_temp );

		fprintf(stdout, "when the_temp = %lf, the phase is ", the_temp);

		print_phase( phase );

		fprintf(stdout, "\n");

		++the_temp;

	}while( the_temp <= 13 );

	return 0;

}

int set_phase( double the_temp ){

	int phase = -1;

	if( the_temp >= 0 && the_temp < 4 ){
		phase = 0;
	}
	else if( the_temp >= 4 && the_temp < 7 ){
		phase = 4;
	}
	else if( the_temp >= 7 && the_temp < 12){
		phase = 7;
	}
	else if( the_temp >= 12){
		phase = 12;
	}
	else{
		/* Error Checking Result */
		phase = -1;
	}

	return phase;
}


void print_phase( int phase ){

	switch( phase ){

		case 0:
			fprintf( stdout, "crystalline");
			break;
		case 4:
				fprintf( stdout, "smectic");
				break;
		case 7:
				fprintf( stdout, "liquid");
				break;
		case 12:
				fprintf( stdout, "gaseous");
				break;
		default:
				fprintf( stdout, "%d is invalid", phase);
				break;
	}

}
