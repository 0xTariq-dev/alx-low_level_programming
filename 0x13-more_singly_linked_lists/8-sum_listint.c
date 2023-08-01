/*
 * Author: 0xTariq-dev
 * File: 8-sum_listint.c
 */

#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Sums all the data in listint_t.
 * @head: A pointer to the linked list to get the sum of.
 *
 * Return: The sum of data or 0 if te list is empty.
 */
int sum_listint(listint_t *head)
{
	int x = 0;

	while (head)
	{
		x += head->n;
		head = head->next;
	}
	return (x);
}
