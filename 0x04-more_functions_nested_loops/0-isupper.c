#include "main.h"

/**
  * _isupper - Checking for upper case character
  * @c: The letter to be checked
  * Return: 1 if c is upper case otherwise return 0
  */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
