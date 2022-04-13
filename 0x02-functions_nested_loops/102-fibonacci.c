#include <main.h>

/**
 * main - Prints the add of the Fibonacci numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int c;
	long int n1, n2, fn;

	n1 = 1;
	n2 = 2;
	_putchar("%ld, %ld", n1, n2);

	for (c = 0; c < 48; c++)
	{
		fn = n1 + n2;
		_putchar(", %ld", fn);
		n1 = n2;
		n2 = fn;
	}
	_putchar("\n");
	return (0);
}
