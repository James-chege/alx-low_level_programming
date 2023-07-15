#include <stdio.h>

/**
* main - Printing alphabets using putchar function
* Return: Always 0 (Succes)
*/

int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}

	for (n = 'A'; n <= 'Z'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
