#include "lists.h"
#include <stdio.h>

/**
 * free_listint - Frees a linked list.
 * @head: Pointer to the beginning of the list to be freed.
 */


void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

