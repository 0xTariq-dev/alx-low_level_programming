/*
 * Author: 0xTariq-dev
 * File: 2-add_dnodeint.c
 */

#include "lists.h"

/**
 * add_dnodeint - Add element to the beginning of a list.
 * @head: A pointer to the list.
 * @n: The value to add to the list.
 *
 * Return: The address of the new list.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t));

	if (head == NULL || tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = *head;
	tmp->prev = NULL;

	if (*head != NULL)
		(*head)->prev = tmp;

	*head = tmp;

	return (*head);
}
