#include <stdio.h>

/**
* main - Printing hexadecimals usinguthcar function
* Return: Always 0 (Success)
*/

int main(void)
{
	int n;
	char z;

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');
	}
	for (z = 'a'; z <= 'f'; z++)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
