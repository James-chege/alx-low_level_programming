#include "main.h"

/**
 * _strcat - Prints a concentration of two strings
 * @dest: String one to be concentrated
 * @src: Second string to be concentrated
 * Return: O
 */

char *_strcat(char *dest, char *src)
{
	int i;
	intj;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

