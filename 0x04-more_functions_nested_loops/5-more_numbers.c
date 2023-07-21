#include "main.h"

/**
 * more_numbers - Printing 10 lines of number 0 to 14
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a <= 10; a++)
	{
	for (b = 0; b <= 14; b++)
	{
	if (b > 0)
	_putchar((b / 10) + '0');
	}
	_putchar((b % 10) + '0');
	_putchar('\n');
	}
}
