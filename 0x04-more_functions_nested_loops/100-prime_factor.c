#include <stdio.h>
#include <math.h>

/**
 * main - Prints the largest prime factor
 * Return: Always 0 
 */

int main(void)
{
	long x, maxf;
	long number = 612052475143;
	double square = sqrt(number);

	for (x = 1; x <= sqaure; x++)
	{
		if (number % x == 0)
		{
			maxf = number / x;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}