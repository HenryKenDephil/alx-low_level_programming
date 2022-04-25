#include "main.h"
#include "stdio.h"

/**
 * _strcat ; concatenates two strings
 * @dest; destination
 * @src; source to be concatenated
 * @n; the size of bytes used from src
 * Return; return the pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
		int count = 0, count2 = 0;

		while (*(dest + count) != '\0')
		{
			count++;
		}

		while (count2 < n && src[j] != '\0')
		{
			*(dest + count) = *(src + count2);
			if (*(src + count2) == '\0')
				break;
			count++;
			count2++;
		}
		dest[i] = '\0';
		return (dest);
}
