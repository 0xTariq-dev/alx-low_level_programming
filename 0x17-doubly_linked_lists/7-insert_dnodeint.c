/*
 * Author: 0xTariq-dev
 * File: 7-insert_dnodeint_at_index.c
 */

#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at specifec index of a list.
 * @h: A pointer to the list.
 * @idx: The index to insert the node at.
 * @n: The data of the new node.
 *
 * Return: The node address.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp = *h;
	unsigned int x = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (*h == NULL || idx == 0)
		new = add_dnodeint(h, n);

	for (; x < idx; x++)
	{
		if (tmp == NULL)
		{
			free(new);
			return (NULL);
		}
		tmp = tmp->next;
	}

	new->prev = tmp->prev;
	new->next = tmp;
	tmp->prev->next = new;
	tmp->prev = new;
	return (new);
}
