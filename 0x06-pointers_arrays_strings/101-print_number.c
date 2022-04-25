#include "main.h"
#include "stdio.h"
/**
 * print_number -prints an integer
 * @n; input integer
 * Return; no return
 */

void print_numbber(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
