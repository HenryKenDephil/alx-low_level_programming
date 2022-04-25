#include <main.h>
#include <stdio.h>

/**
 * reverse_array; reverses the content of an array
 * of integers
 * @a; symbolizes array
 * @; the number of elements in an array
 * Return; no return
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
