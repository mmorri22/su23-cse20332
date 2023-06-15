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

int main( void ){

	/* Create variables for comparison */
	int phase = -1;
	double the_temp = 0;

	do{

		fprintf(stdout, "Main - phase %d %p, the_temp %lf %p\n",
			phase, &phase, the_temp, &the_temp );

		phase = set_phase( the_temp );

		fprintf(stdout, "phase = %d when the_temp = %lf\n", phase, the_temp);

		++the_temp;

		fprintf(stdout, "Main - phase %d %p, the_temp %lf %p\n",
			phase, &phase, the_temp, &the_temp );

	}while( the_temp <= 13 );

	return 0;

}

int set_phase( double the_temp ){

	int phase = -1;

	fprintf(stdout, "phase %d %p, the_temp %lf %p\n",
		phase, &phase, the_temp, &the_temp );

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

	fprintf(stdout, "phase %d %p, the_temp %lf %p\n",
		phase, &phase, the_temp, &the_temp );

	return phase;
}
