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

int _putchar(char c);
size_t print_listint(const listint_t *h);

#endif
