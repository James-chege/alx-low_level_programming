#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - Returns the node at a specified
 * index in a linked list.
 * @head: Pointer to the first node in the linked list.
 * @index: Index of the node to retrieve (starting from 0).
 *
 * Return: Pointer to the requested node, or NULL if not found.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
