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
#include <stdlib.h>
#include <time.h>

/* Put the #include for util.h here */


/* Put the #define values here */
#define ARRAY_LENGTH    10
#define MIN              0
#define MAX             99

/*************************************************
 * Function Name: get_random_int
 * Preconditions: int min and int max
 * Post-Conditions:  int
 * Returns a random integer from the given range
 *************************************************/
int get_random_int(int min, int max);

/*************************************************
 * Function Name: fill_array
 * Preconditions: int int_array[], int length, int min, int max
 * Post-Conditions:  void
 *
 * Fills an array of given length with random numbers within
 *   given bounds
 *************************************************/
void fill_array(int int_array[], int length, int min, int max);

/*************************************************
  * Function Name: print_array
  * Preconditions: int int_array[], int length
  * Post-Conditions:  void
  *
  * Prints out an array of a given length
  *************************************************/
void print_array(int int_array[], int length);

/*************************************************
 * Function Name: insertion_sort
 * Preconditions: int int_array[], int length
 * Post-Conditions:  void
 *
 * Sorts an array of a given length
 *************************************************/
void insertion_sort(int int_array[], int length);

int main()
{
  /* Allocate a static int array of size ARRAY_LENGTH */
   int int_array[ARRAY_LENGTH];

   /* Seed the random number generator */
   srand(time(NULL));

   /*********************
   ** STEP 2b
   ** Uncomment the block of code below. Make sure you compile and run
   **   after you uncomment the code.
   **********************/

   /* Fills the array with random numbers and prints it out */
   /*
   FillArray(intArray, ARRAY_LENGTH, MIN, MAX);
   printf("Unsorted array\n");
   PrintArray(intArray, ARRAY_LENGTH);
   */

   /*********************
   ** STEP 3b
   ** Uncomment the block of code below. Make sure you compile and run
   **   after you uncomment the code.
   **********************/

   /* Sorts the array and prints it out */
   /*
   InsertionSort(intArray, ARRAY_LENGTH);
   printf("Sorted array\n");
   PrintArray(intArray, ARRAY_LENGTH);
   */

   return 0;
}


int get_random_int(int min, int max){
   /*********************
   ** STEP 1
   ** Implement this function. See the section on random numbers in the notes
   **   for this lab if you need a hint. But try yourself first.
   **********************/

}

void fill_array(int int_array[], int length, int min, int max){
   /*********************
   ** STEP 2a
   ** Implement this function. It should fill the array 'intArray' (that has
   **   length 'length' with random integers between 'min' and 'max'.
   **********************/

}


void print_array(int int_array[], int length); {
   int i;
   printf("Printing array...\n");
   printf("-----------------\n");
   for (i = 0; i < length; i++) {
      printf("%7d", intArray[i]);
      if (i % 10 == 9) {
	 printf("\n");
      }
   }
   printf("\n\n");
}

void insertion_sort(int int_array[], int length){
   /*********************
   ** STEP 3a
   ** Implement this function. It should sort the elements of the array
   **   'intArray' (that has length 'length') in ascending order. Refer to
   **   the slides for pseudocode for InsertionSort and look at the graphic
   **   if you need additional help.
   **********************/
   int i, j;
   int temp;

   /* i = 1 ... 2. sets length of sorted part to 1 */
   /* i < length ... 3. do while (the sorted part ... ) */
   /* i++ ... 8. Increase the length of the sorted part by 1 */
   for (i = 1; i < length; i++)
   {
      /* YOURS: 4. take the first element, E,  from the unsorted part */


      /* 5. Take all elements in the sorted part that are bigger than E */
      /* 6. Move them "one slot to the right" in the array */
      j = i;
      while (j > 0 && intArray[j - 1] > temp) {
    	 intArray[j] = intArray[j - 1];
    	 /* YOURS: Make sure the loop terminates */

      }

      /* YOURS: 7. Put E in the space that has been freed */
   }
}
