/*************************************
 * File name: insertion_sort.c
 * Initial Author: Prof. Matthew Morrison
 * Modified: [Your Name],[Date]
 * Email: [Your Email]
 *
 * This function contains the main driver program
 * For the insertion sort in-class coding opportunity
 **************************************/

#include <stdio.h>

/* Step 5 - Include util.h library here when we are doing the Header Files */

/* Step 1 - Compiler Directive MINUTES */
#define MINUTES 60

/* Step 3 - Function prototypes */
void convert_time_to_hm (unsigned int time, unsigned int *p_hours, unsigned int *p_minutes);

int main()
{
    /* Declared Variables */
    unsigned int time, hours, minutes;

    fprintf( stdout, "Test program to convert time values\n" );
    fprintf( stdout, "Enter a time duration in minutes: " );

    /* Step 2 - First Attempt at fscanf */
    fscanf ( stdin, "%u", &time );

    /* Step 2b - Print the result to the terminal */
    fprintf( stdout, "Number of minutes entered: %u\n", time );

    /* Step X - Call the convert_time_to_hm function with hours and minutes passed by ref */
    convert_time_to_hm(time, &hours, &minutes);

    /* Print the result */
    fprintf(stdout, "HH:MM format: %u:%02u\n", hours, minutes);

    return 0;
}

/* Function Definitions */

/* Step 4 - Write the function definition of convert_time_to_hm */
void convert_time_to_hm (unsigned int time, unsigned int *p_hours, unsigned int *p_minutes){
    *p_hours = time / MINUTES;
    *p_minutes = time % MINUTES;
}
