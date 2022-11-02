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
    int size;
    for(i = 0; i < size; i++)
    {
        printf("the value is found at index %d\n", i, array[i]);
        if(array[i] == value)
        {
            return i;
            break;
        }
    }
    return -1;
}
