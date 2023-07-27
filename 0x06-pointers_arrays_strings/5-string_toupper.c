#include "main.h"

/**
 * string_toupper - Changing letters of a string from lowerecase to uppercase
 * Return: n
 */
char *string_toupper(char *)
{
	int i;
	char *n
	
	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
