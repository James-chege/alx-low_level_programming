#include <stdio.h>

/**
 * main - Generating Fobanacci sequence
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = k;

	while (k + j < 4000000)
	{
	k += j;
	if (k % 2 == 0)
	sum += k;
	++i;
	}
	printf("%ld\n", sum);

	return (0);
}
