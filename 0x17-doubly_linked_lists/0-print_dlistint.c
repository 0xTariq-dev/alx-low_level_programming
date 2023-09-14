/*
 * Author: 0xTariq-dev
 * File: 0-print_dlistint.c
 */

#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a list.
 * @h: A pointer to the list to print.
 *
 * Return: The size of the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int x = 0;

	if (h == NULL)
		return (x);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}
	return (x);
}
