/**************************************
 * File name: insertion_sort.c
 * Initial Author: Prof. Matthew Morrison
 * Modified: [Your Name],[Date]
 * Email: [Your Email]
 *
 * This function contains the main driver program
 * For the insertion sort in-class coding opportunity
 ***************************************/

#include <stdio.h>
#include "util.h"

/* Step 6 - Include util.h library here when we are doing the Header Files */

int main()
{
    /* Declared Variables */
    unsigned int time, hours, minutes;

    fprintf( stdout, "Test program to convert time values\n" );
    fprintf( stdout, "Enter a time duration in minutes: " );

    /* Step 2 - First Attempt at fscanf */
    fscanf( stdin, "%u", &time );

    /* Step 2b - Print the result to the terminal */
    fprintf( stdout, "%u\n", time );

    /* Step 5 - Call the convert_time_to_hm function with hours and minutes passed by ref */
    convert_time_to_hm( time, &hours, &minutes );

    /* Print the result */
    fprintf(stdout, "HH:MM format: %u:%02u\n", hours, minutes);

    return 0;
}
