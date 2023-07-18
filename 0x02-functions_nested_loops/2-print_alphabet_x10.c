#include "main.h"

/**
 * print_alphabet_x10 - Printing alphabets ten times.
 *
 * Return: Void.
 */
void print_alphabet_x10(void)
{
	char c;
	int a;

	while (a <= 9)

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
			_putchar('\n');
			a++;

		}
}
