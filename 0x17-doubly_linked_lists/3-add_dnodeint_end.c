/*
 * Author: 0xTariq-dev
 * File: 1-dlistint_len.c
 */

#include "lists.h"

/**
 * add_dnodeint - Add element to the beginning of a list.
 * @head: A pointer to the list.
 * @n: The value to add to the list.
 *
 * Return: The size of the list.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (head == NULL || tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;

	if (*head == NULL)
	{
		tmp->prev= NULL;
		*head = tmp;
		return (*head);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = tmp;
	tmp->prev = last;

	return (*head);
}
