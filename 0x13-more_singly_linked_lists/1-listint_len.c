/*
 * Author: 0xTariq-dev
 * File: 0-print_listint.c
 */

#include "lists.h"

/**
 * listint_len - Returns the number of elements of a listint_t list.
 * @h: A pointer to the head of the list.
 * Return: The size of the list.
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		if (!h->n)
			return (i);

		h = h->next;
		i++;
	}
	return (i);
}
