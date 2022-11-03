#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/*
*@array: pointer to the first element of arra to search in
*@size: number of elements inarray
*value: the value or target to be searched
*Return: Always returns a value and exit with Success
*/
int binary_search(int *array, size_t size, int value)
{
    size_t max = (size -1);   /*the value at the last index of the array*/
    size_t min = 0;   /*the value at index zero*/
    size_t mid;     /*mid holds the index of middle value or the first guess element position*/
    size_t i = 0;   /*i finds out the index position of the value after complete search*/

    if(array == NULL)
        return -1;

    while(max >= min)
    {
         mid = floor(max + min)/2;
        printf("Searching in array: ");
        
        for (i = min; i <= max; i++)
			i < max ? printf("%d, ", array[i]) : printf("%d\n", array[i]);

        if(array[mid] == value)
        {
            return mid;
        }
        else if(array[mid] > value)
        {
            max = (mid - 1); /*targeted value would be in the left half*/
        }
        else
        {
            min = (mid + 1); /*targeted value is found in the right half*/
        }
    }
    return -1; /*returns not found if element isn't in the array*/
}