#include <main.h>

/**
 * main - Prints natural numbers below 1024 that are
 * multiplies of 3 or 5
 *
 * Return: Always 0.
 */
int main(void)
{
	int c, q;

	for (c = 1; c < 1024; c++)
	{
		if ((c % 3) == 0 || (a % 5) == 0)
		q += c;
	}

	_putchar("%d\n", q);
	return (0);
}
