/*
 * Author: 0xTariq-dev
 * File: 10-delete_nodeint.c
 */

#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node in a given index of listint_t.
 * @head: A pointer to the linked list to get the sum of.
 * @index: The index to create the new node.
 *
 * Return: 1 if succeded or -1 if it failed.
 */
listint_t delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *new, *cpy = *head;

	if (cpy == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(cpy);
		return (1);
	}
	for (; x < (idx - 1); x++)
	{
		if (cpy->next == NULL)
			return (-1);
		cpy = cpy->next;
	}
	new = cpy->next;
	cpy->next = new->next;
	free(new);
	return (1);
}
