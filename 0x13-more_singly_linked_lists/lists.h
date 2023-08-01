#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * struct listint - A singly linked list.
 * @n: Variable to hold a values of integers.
 * @next: A pointer to the next element in the list.
 */
typedef struct listint
{
	int n;
	struct listint *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);


#endif
