#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"



/**
 * print_name - Is the function that prints an name
 * @*name: pointer to the name to be printed
 * @(*): Pointer holding the memory allocation of name
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return (0);
	f(name);
}

