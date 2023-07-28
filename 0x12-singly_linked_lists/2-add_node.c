/*
 * Author: 0xTariq-dev
 * File: 2-add_node.c
 */

#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Add a new node at the start of a linked list.
 * @head: A double pointer to the head of the linked list.
 * @str: The string to be added to the new nodes
 * Return: The Address of the element or NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int count = 0;

	while (str[count])
		count++;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = count;
	new->next = *head;
	*head = new;

	return (*head);
}
