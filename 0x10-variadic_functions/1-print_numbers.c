#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Function to be used in number printing
 * @separator: The string to be printed between numbers
 * @n: Integer numbers passed to the function
 * Return: Null
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
	printf("%d", va_arg(nums, int));
	if (index != (n - 1) && separator != NULL)
	printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
