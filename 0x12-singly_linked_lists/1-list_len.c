/*
 * Author: 0xTariq-dev
 * File: 1-list_len.c
 */

#include "lists.h"

/**
 * list_len - Prints the number of elements in a linked list.
 * @h: A pointer to the head of the list.
 * Return: The number of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
