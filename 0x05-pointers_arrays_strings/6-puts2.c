#include "main.h"
#include "stdio.h"

/**
 * puts2; prints one char output of a string type
 * @str; string input
 * Return; no return
 */

void puts2(char *str)
{

	int count = 0;

	while (count >= 0)
	{
		if (str[count] =='\n')
		{
			_putchar('\n');
			break;
		}
		if (count %2 == 0)
			_putchar(str[count]);
		count++;
	}
}
