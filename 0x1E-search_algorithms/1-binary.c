#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/*
*@array: pointer to the first element of arra to search in
*@size: number of elements inarray
*value: the value or target to be searched
*Return: Always a value and exit with Success
*/
int binary_search(int *array, size_t size, int value)
{
    int max = (size -1);   //the value at the last index of the array
    int min = 0;   //the value at index zero
    int mid;      //mid holds the index of middle value or the first guess element position
    int i = 0;   //i finds out the index position of the value after complete search

    while(max >= min)
    {
        int mid = floor(max + min)/2;
        i++; //increamenting the index from zero by 1 step after the other
        if(array[mid] == value)
        {
            printf("index for the value: %d\n", i);
            return mid;
        }
        else if(array[mid] > value)
        {
            max = (mid - 1); // targeted value would be in the left half
        }
        else
        {
            min = (mid + 1); //targeted value is found in the right half
        }
    }
    return -1; //returns not found if element isn't in the array
}