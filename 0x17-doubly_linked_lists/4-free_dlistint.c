/*
 * Author: 0xTariq-dev
 * File: 4-free_dlistint.c
 */

#include "lists.h"

/**
 * free_dlistint - Frees a list.
 * @head: A pointer to the list.
 *
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
