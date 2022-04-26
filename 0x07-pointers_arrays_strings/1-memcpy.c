#include "main.h"

/**
 * _memcy; copies memoryarea
 * @dest; destination of the memory area
 * @src; source memory area
 * @n; bytes filled
 * Return; returns to the point
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
