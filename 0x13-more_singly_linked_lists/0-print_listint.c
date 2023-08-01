/*
 * Author: 0xTariq-dev
 * File: 0-print_listint.c
 */

#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the list.
 * Return: The size of the list.
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		if (!h->n)
			return (0);
		else
		{
			printf("%d\n", h->n);
			h = h->next;
			i++;
		}
	}
	return (i);
}
