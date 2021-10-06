#ifndef ICS2305_A1SUPPORT_INCLUDED
#define ICS2305_A1SUPPORT_INCLUDED

////////////////////////////////////////////////////////////////////////////////
//
//  File          : ICS2305-assign1-support.h
//  Description   : This is a set of general-purpose utility functions we use
//                  for the homework assignment #1.
//
//  Author   : ????
//  Created  : ????

//
// Functional Prototypes

int float_display_array(int size, float array[]);
	// This function prints out the array of floating point values

int integer_display_array(int size, int array[]);
	// This function prints out the array of integer values

int float_evens(int size, float array[]);
	// Return the number of even numbers in the array (float version)

int integer_evens(int size, int array[]);
	// Return the number of even numbers in the array (int version)

int make_array(int *arr, int size, int exp, int md);
	// Make an exponentiated set of values

//int most_values(????);
	// Print out the values with the most occurences in array

//int graph_functions(????);
	// Print out the functions cos(x)+d1 and tan(x)*e1

#endif // ICS2305_A1SUPPORT_INCLUDED

