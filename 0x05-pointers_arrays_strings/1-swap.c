#include "main.h"

/**
  * swap_int - Swaps the values of two integers
  * @a: Inter to be swaped
  * @b: Second integer to be swaped
  * Return: Always 0
  */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
