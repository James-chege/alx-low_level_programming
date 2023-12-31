#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Prints the sum of all the parameters.#
 * @n: the number of parameters to be taken for addition
 * Return: The result of the addition
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
