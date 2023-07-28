/*
 * Author: 0xTariq-dev
 * File: 4-free_list.c
 */

#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a linked list.
 * @head: A double pointer to the linked list to be freed.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (str[count])
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
