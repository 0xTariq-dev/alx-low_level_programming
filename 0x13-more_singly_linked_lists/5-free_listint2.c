/*
 * Author: 0xTariq-dev
 * File: 4-free_listint.c
 */

#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2- Frees a linked list.
 * @head: A double pointer to the linked list to be freed.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	head = NULL;
	free(head);
}
