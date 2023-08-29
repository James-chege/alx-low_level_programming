#include "lists.h"
#include <stdio.>

/**
 * reverse_listint - Reverses a linked list.
 * @head: Pointer to the pointer of the first node in the list.
 *
 * Return: Pointer to the new first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}

