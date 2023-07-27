#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: Is an input value
 * @src: Also an input value
 * @n: Input value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++
	}
	while (j < n)
	{
		dest[j] = '\0';
	}
	return (dest);
}
