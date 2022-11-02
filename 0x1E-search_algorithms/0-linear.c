#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * @array : a pointer to the first element
 *@size: the number of elements in array
 * @value: value for search
 * Return: Always return the value and exit with success
 */

int linear_search(int *array, size_t size, int value)
{
    int i;
    for(i = 0; i < size; i++)
    {
        if(array[i] == value)
        {
            printf("the value is found at index %d\n", i);
            break;
        }
    }
    return -1;
}
