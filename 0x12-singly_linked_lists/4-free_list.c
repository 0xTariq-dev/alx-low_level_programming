/*
 * Author: 0xTariq-dev
 * File: 3-add_node_end.c
 */

#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Add a new node at the end of a linked list.
 * @head: A double pointer to the head of the linked list.
 * @str: The string to be added to the new nodes
 * Return: The Address of the element or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp = head;
	unsigned int count = 0;

	while (str[count])
		count++;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = count;
	new->next = NULL;

	if (!(*head))
	{
		*head = new;
		return (new);
	}
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;
	return (new);
}
