#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
/*
 * file: lists.h
 * author: 0xTariq-dev
 * describtion: Header file contains declarations for functions
 * 		used in the 0x13-more_singly_linked_lists project.
 */
typedef struct listint {
	int n;
	struct listint *next;
} listint_t;

int _putchar(char c);
size_t print_listint(const listint_t *h);

#endif
