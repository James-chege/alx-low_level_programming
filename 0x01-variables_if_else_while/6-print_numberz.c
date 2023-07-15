#include <stdio.h>
/**
* main - Printing single digits using putchar
* Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}
	return (0);
}
