#include "main.h"

/**
 * puts_half - Prints half a string
 * @str: The string to be printed
 * Return: Always 0
 */

void puts_half(char *str)
{
	char j = 0;
	char k;

	while (str[j] != '\0')
	{
		j++;
	}
	if (j % 2 == 1)
	{
		k += 1;
	}
	else
	{
		k = j / 2;
	}
	for (; k < j; k++);
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
