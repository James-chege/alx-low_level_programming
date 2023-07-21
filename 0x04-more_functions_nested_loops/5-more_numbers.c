#include "main.h"

/**
 * more_numbers - Printing 10 lines of number 0 to 14
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a <= 14; a++)
	{
	for (b = 0; b <= 14; b++)
	{
	_putchar(b);
	}
	_putchar(a);
	}
	_putchar('\n');
}
