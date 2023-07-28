/*
 * Author: 0xTariq-dev
 * File: 0-print_list.c
 */

#include "lists.h"

/**
 * print_list - Prints a singly linked list.
 * @h: A pointer to the head of the list.
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		x++;
	}
	return (x);
}
