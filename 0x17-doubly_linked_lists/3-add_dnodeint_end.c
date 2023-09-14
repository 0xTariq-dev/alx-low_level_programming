/*
 * Author: 0xTariq-dev
 * File: 3-add_dnodeint_end.c
 */

#include "lists.h"

/**
 * add_dnodeint_end - Add element to the end of a list.
 * @head: A pointer to the list.
 * @n: The value to add to the list.
 *
 * Return: The Address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (head == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;

	if (*head == NULL)
	{
		tmp->prev = NULL;
		*head = tmp;
		return (*head);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = tmp;
	tmp->prev = last;

	return (*head);
}
