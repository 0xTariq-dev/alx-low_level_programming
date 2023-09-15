/*
 * Author: 0xTariq-dev
 * File: 8-delete_dnodeint_at_index.c
 */

#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at specifec index of a list.
 * @head: A pointer to the list.
 * @index: The index to delete the node at.
 *
 * Return: 1 on success or -1 on fail.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int x = 0;


	if (head == NULL || *head == NULL)
		return (-1);

	for (; x < index && current != NULL; x++)
		current = current->next;

	if (current == NULL)
		return (-1);

	if (current->prev != NULL)
		current->prev->next = current->next;
	else
		*head = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
