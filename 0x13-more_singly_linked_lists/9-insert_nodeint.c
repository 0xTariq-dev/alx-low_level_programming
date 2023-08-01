/*
 * Author: 0xTariq-dev
 * File: 9-insert_nodeint.c
 */

#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert a node in a given index of listint_t.
 * @head: A pointer to the linked list to get the sum of.
 * @idx: The index to create the new node.
 * @n: The data to add to the new node.
 *
 * Return: The address of the new node or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x = 0;
	listint_t *new, *cpy = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = cpy;
		*head = new;
		return (new);
	}
	for (; x < (idx - 1); x++)
	{
		if (cpy == NULL || cpy->next == NULL)
			return (NULL);
		cpy = cpy->next;
	}
	new->next = cpy->next;
	cpy->next = new;
	return (new);
}
