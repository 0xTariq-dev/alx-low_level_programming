#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/*
 * file: main.h
 * author: 0xTariq-dev
 * describtion: Header file contains declarations for functions
 * 		used in the 0x12-singly_linked_lists project
 */
/**
 * struct new - singly linked list.
 * @str: Undefined string.
 * @len: Length of the string.
 * @next: Points to the next node.
 *
 * Describtion: singly linked list node strucure.
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node_end(list_t **head, const char *str);
list_t *add_node(list_t **head, const char *str);
void free_list(list_t *head);

#endif
