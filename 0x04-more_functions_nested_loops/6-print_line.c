#include "main.h"

/**
 * print_line - Drawing a straight line
 * @n: The number of line to be drawn
 * Return: Always 0
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
