#include <stdio.h>

/**
* main - Printing numbers with commas and spaces
* Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');

		if (n == 9)
		continue;
		putchar(',');
		putchar (' ');
	}
	putchar('\n');

	return (0);
}
