/*
 * Author: 0xTariq-dev
 * File: 6-sum_dlistint.c
 */

#include "lists.h"

/**
 * sum_dlistint - Sum all data of a list.
 * @head: A pointer to the list.
 *
 * Return: The sum of elements.
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0, x = 0;

	if (!head)
		return (0);

	for (; head != NULL; x++)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
