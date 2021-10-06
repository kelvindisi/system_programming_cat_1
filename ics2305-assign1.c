////////////////////////////////////////////////////////////////////////////////
//
//  File           : ics2305-assign1.c
//  Description    : This is the main source code for for the first assignment
//                   of ics2305 at JKUAT.
//
//   Author        : ????
//   Last Modified : ????
//

// Project Includes
#include "ics2305-assign1-support.h"
// Include Files
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


//
// Functions

////////////////////////////////////////////////////////////////////////////////
//
// Function     : main
// Description  : The main function for the ics2305 assignment #1
//
// Inputs       : argc - the number of command line parameters
//                argv - the parameters
// Outputs      : 0 if successful test, -1 if failure

int main(int argc, char *argv[]) {

	// Local variables
	// NOTE: this is where you will want to add some new variables
	int size = 5;
	float f_array[size];
    int i, m_array[(size + 5)], i_array[size];
    int power, mod;


	// Step #1 - read in the float numbers to process
	printf("Enter %d values:\n", size);
	for (i=0; i<size; i++)
    {
        printf("Enter value %d: ", (i + 1));
		scanf("%f", &f_array[i]);
	}
	// Step #2 - convert the input values
	//Numbers greater than of equal to 15 should be multiplied by Π
	//squared;. Note that Π is in the file math.h as M_PI.
    //Numbers not greater than or equal to 15 should converted to
    //their absolute value using the standard C function used for that purpose.
    for (i=0; i<size; i++)
    {
        if (f_array[i] >= 15)
            f_array[i] = pow(M_PI, 2) * f_array[i];
        else
            f_array[i] = abs(f_array[i]);
    }

    // Step #3 - convert the floating point values to integers
    //Declare an array of 20 integers. Assign each value to the floating point
    //value of the same index (in the floating point array) rounded to the nearest integer.

    for (i=0; i<size; i++)
    {
        i_array[i] = round(f_array[i]);
    }

    // Step #4 - print out the integer and floating point arrays
    float_display_array(size, f_array);
    integer_display_array(size, i_array);
    // Step #4 - figure out number of evens in each array
    int even_floats = float_evens(size,f_array);
    int even_ints =integer_evens(size, i_array);
    printf("The floating point array has %d even numbers,and the integer array has %d even numbers.\n",
           even_floats, even_ints);

    // Step #5 - fill up the new array, coune most frequent values
    // NOTE ** THIS IS PROVIDED CODE, JUST CREATE FUNCTIONS AS IN ASSIGNMENT
    //printf("Enter pow: ");
    //scanf("%d", )
    make_array(m_array, 25, 3, 17);
    //most_values(m_array, 25, 16);
    //make_array(m_array, 25, 3, 19);
    //most_values(m_array, 25, 18);

    // Step #6 graph out functions
    //printf("\n\n");
    //graph_functions(1.0, 1.0);
    //printf("\n\n");
    //graph_functions(1.3, 2.3);
    //printf("\n\n");
    //graph_functions(0.6, 4.3);

	// Return successfully
	return(0);
}
