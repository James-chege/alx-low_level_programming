#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - Appends a node at the end of a linked list.
 * @head: Pointer to the first element of the list.
 * @n: Data to insert into the new element.
 * Return: Pointer to the new node, or NULL on failure.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}

