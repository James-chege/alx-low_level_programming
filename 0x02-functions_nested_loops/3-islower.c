#include "main.h"

/**
  * _islower - Checking for lowercase
  * Return: 1 if c is lowercase or 0 if otherwise
  */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
