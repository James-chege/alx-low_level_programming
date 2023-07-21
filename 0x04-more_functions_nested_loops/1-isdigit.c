#include "main.h"

/**
 * _isdigit - Checking for a digit
 * Return: 1 if c is a dogot and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
