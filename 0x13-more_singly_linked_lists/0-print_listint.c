#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list.
 * @h: Pointer to the beginning of a linked list of type listint_t.
 * Return: Number of nodes in the linked list.
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}

	return (node_count);
}

