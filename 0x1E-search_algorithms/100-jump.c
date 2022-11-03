#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/*@size: number of elements in an array
@value: an element to be searched
@array: pointer to the first element of an array
Return: Always return a value and exits with Success
*/

int jump_search(int *array, size_t size, int value)
{
    size_t step, i=0, start=0;
    size_t end = sqrt(size);
    step = size;
    
    for(i=0; i<step; i++)
    {
        if(value < array[step])
        {
            end = step - 1;
        }
    
        else
        {
            start = step + 1;
        }
    }
    for(i= start; i<=end; i++)
    {
        if(array[i] == value)
        {
            return i;
        }  
    }
    return -1;
}


    /*size_t i=0, start =0, end = sqrt(size);
    printf("value checked array[%ld] = [%d]\n", i, array[i]);

    while(array[end] < value && start < size)
    {
        start = end;
        end += sqrt(size);

        if(end > size-1)
        {
            end = size;
        }
    }
    for(i = start; i < end; i++)
    {
        if(array[i] == value)
        {
            return i;
        }
    }
    return -1;
}
*/