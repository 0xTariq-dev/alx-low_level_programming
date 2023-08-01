/*
 * Author: 0xTariq-dev
 * File: 6-pop_listint.c
 */

#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head a linked list and return the head data(n).
 * @head: A double pointer to the linked list to be freed.
 *
 * Return: The head node data or 0 if te list is empty.
 */
int pop_listint(listint_t **head)
{
	int tmp;
	listint_t *new;

	if (head == NULL)
		return (0);

	tmp = (*head)->n;
	new = (*head)->next;
	free(*head);
	*head = new;

	return (tmp);
}
