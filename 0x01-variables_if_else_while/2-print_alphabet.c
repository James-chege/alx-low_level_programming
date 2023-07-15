#include <stdio.h>

/**
* main - Use of the putchar function
* Return: Always 0 (Success)
*/
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
