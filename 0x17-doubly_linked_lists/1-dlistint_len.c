/*
 * Author: 0xTariq-dev
 * File: 1-dlistint_len.c
 */

#include "lists.h"

/**
 * dlistint_len - Counts the elements of a list.
 * @h: A pointer to the list to count.
 *
 * Return: The size of the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int x = 0;

	if (h == NULL)
		return (x);

	for (; h != NULL; x++)
		h = h->next;

	return (x);
}
