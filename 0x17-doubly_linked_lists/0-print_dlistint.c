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
	dlistint_t *current = (dlistint_t *)h;
	size_t x = 0;

	if (current == NULL)
		return (0);
	while (current != NULL)
	{
		printf("%d \n", current->n);
		current = current->next;
		x++;
	}
	return (x);
}
