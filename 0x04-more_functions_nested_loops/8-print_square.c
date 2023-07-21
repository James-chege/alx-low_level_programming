#include "main.h"

/**
 * print_square - prints n squares according to the number of lines
 * @size: The number of squares
 * Return: Always 0
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				putchar(35);
			}
			_putchar('\n');
		}
	}
}
