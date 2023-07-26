#include "main.h"
#include <stdio.h>

/**
  * print_array - Printing elements of an array of integers
  * @n: Number of elements of the array to be printed
  * @a: Elements to be separated
  * Return: 0
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

	if (i != (n - 1))
	{
		printf(", ");
	}
	}
	printf("\n");
}
