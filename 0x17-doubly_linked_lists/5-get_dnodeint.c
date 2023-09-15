/*
 * Author: 0xTariq-dev
 * File: 5-get_dnodeint_at_index.c
 */

#include "lists.h"

/**
 * get_dnodeint_at_index - Get a node at specifec index of a list.
 * @head: A pointer to the list.
 * @index: The index of the node to get.
 *
 * Return: The node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head == NULL)
		return (NULL);

	for (; x < index; x++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
