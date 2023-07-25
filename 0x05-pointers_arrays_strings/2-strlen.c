#include "main.h"
#include <stdio.h>

/**
  *_strlen - Returning the length of a string
  * @s: Character to be returned
  * Return: Always 0 (Success)
  */

int _strlen(char *s)
{
	int length = 0;

	while (s++)
	length++;
	return (length);
}
