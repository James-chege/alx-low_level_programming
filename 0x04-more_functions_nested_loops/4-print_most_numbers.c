#include "main.h"

/**
 * print_most_numbers - Prints number from 0 to 9
 * without printing 2 and 4.
 * Return: Always 0
 *
 */

void print_most_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (a == 2 || a == 4)
		{
		continue;
		}
		else
		{
			_putchar(a + '0');
		}
	}
	_putchar('\n');
}

