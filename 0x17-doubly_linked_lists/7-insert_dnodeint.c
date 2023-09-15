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
	dlistint_t *new, *current = *h;
	unsigned int x = 0;


	if(h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; x < idx - 1 && current != NULL; x++)
		current = current->next;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || current == NULL)
		return (NULL);

	new->n = n;
	new->next = current->next;
	new->prev = current;

	if (current->next != NULL)
		current->next->prev = new;

	current->next = new;

	return (new);
}
