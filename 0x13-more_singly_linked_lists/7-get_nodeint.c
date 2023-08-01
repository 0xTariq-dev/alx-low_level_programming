/*
 * Author: 0xTariq-dev
 * File: 6-pop_listint.c
 */

#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Gets a specific node of a list with it's index.
 * @head: A pointer to the linked list to be freed.
 * @index: The index of the node to get.
 *
 * Return: The head node data or 0 if te list is empty.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	for (; x < index; x++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
