#include "ics2305-assign1-support.h"
#include<stdio.h>
#include<math.h>

int i;

int float_display_array(int size, float array[])
{
    //Floating point arrary:
    //float[0] = 14.100
    printf("\n\nFloating point arrays:\n");
    for (i=0; i<size; i++)
    {
        printf("float[%d]= %.3f \n", i, array[i]);
    }
    return 0;
}

int integer_display_array(int size, int array[])
{
    printf("\n\nInteger array:\n");
    for (i=0; i<size; i++)
    {
        printf("integer[%d] = %d\n", i, array[i]);
    }
    return 0;
}
int float_evens(int size, float array[])
{
    int even = 0;

    for (i=0; i < size; i++)
    {
        // DROP THE DECIMALS VALUES OF FLOAT VALUES BY CASTING IT TO TYPE INT
        int x = (int) array[i];
        if (x % 2 == 0)
            even += 1;
    }

    return even;
}

int integer_evens(int size, int array[])
{
    int even = 0;
    for (i=0; i<size; i++)
    {
        if (array[i] % 2 == 0)
            even += 1;
    }
    return even;
}

// PASS THE REFERENCE OF EXISTING ARRAY
// BECAUSE WE CAN'T MANIPULATE ORIGINAL ARRAY WITHOUT PASSING THE ADDRESS
int make_array(int *arr, int size, int exp, int md)
{
    //MAXIMUM VALUE INT CAN HOLD IS 2_147_483_647 SO WE USE LONG LONG INT
    long long int computed;
    printf("\n\nArray (%d^i) mod %d\n", exp, md);
    for (i=0; i<size; i++)
    {
        computed = pow(exp, i);
        arr[i] = computed % md;
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

int most_values(int arr[], int size, int max)
{
    // Declare an array of max value
    // The array should store the frequency count of each value within the range
    int values[max];
    int high_count=0;

    // initialize all frequency counts to 0
    for(int c=0; c<max; c++)
    {
        values[c] = 0;
    }

    // Loop in array with values
    // WERE NOT LOOPING FREQ COUNT ARRAY BUT ARRAY WITH VALUES
    for (int i=0; i<size; i++)
    {
        // Access the value stored in the index
        // Use the value returned to access the index of count and increment
        int x = arr[i];
        values[x] = (values[x] + 1);
        int val = values[x];
        if (val > high_count)
        {
            high_count = val;
            printf("\nHIGH:%d\n", high_count);
        }
    }
    // loop through the array with frequency count
    // if freq equals our highest count print
    for (int i=0; i<max; i++)
    {
        if (high_count == values[i])
            printf("Value %d is a most frequently occuring value (%d times).\n", i, high_count);
    }
    //return 0; //Successful
}
