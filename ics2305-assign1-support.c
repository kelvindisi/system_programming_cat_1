#include "ics2305-assign1-support.h"
#include<stdio.h>
#include<math.h>

int float_display_array(int size, float array[])
{
    //Floating point arrary:
    //float[0] = 14.100
    printf("Floating point arrays:\n");
    for (int i=0; i<size; i++)
    {
        printf("float[%d]= %.3f \n", i, array[i]);
    }
    return 0;
}

int integer_display_array(int size, int array[])
{
    printf("Integer array:\n");
    for (int i=0; i<size; i++)
    {
        printf("integer[%d] = %d\n", i, array[i]);
    }
    return 0;
}
int float_evens(int size, float array[])
{
    int even = 0;

    for (int i=0; i < size; i++)
    {
        int x = (int) array[i];
        if (x % 2 == 0)
            even += 1;
    }

    return even;
}

int integer_evens(int size, int array[])
{
    int even = 0;
    for (int i=0; i<size; i++)
    {
        if (array[i] % 2 == 0)
            even += 1;
    }
    return even;
}

int make_array(int *arr, int size, int exp, int md)
{
    //2_147_483_647
    long long int computed;
    //: array[i] = exp^i mod md. For example, if exp is 3 and mod is 17, index 4 would be (3^4)%17 = 13.
    for (int i=0; i<size; i++)
    {
        computed = pow(exp, i);
        arr[i] = computed % md;
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}
