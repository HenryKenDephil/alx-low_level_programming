#include "main.h"
#incude "stdio.h"
/**
 * swap_int -swaps the values of the two integers
 * @a; is the first integer
 * @b; the second integer
 * Return; no return
 */

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b =i;
}
