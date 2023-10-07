/*
 * Author: 0xTariq-dev
 * File: 100-sorted_hash_table.c
 */

#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the sorted hash table.
 *
 * Return: A pointer to the created sorted hash table
 *	Or NULL if it failed to create.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = malloc(sizeof(shash_table_t));
	unsigned long int i = 0;

	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = calloc(ht->size, sizeof(shash_node_t *));

	if (ht->array == NULL)
		return (NULL);

	for (; i < ht->size; i++)
		ht->array[i] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - Adds an element to the sorted hash table.
 * @ht: The hash sorted table.
 * @key: The key of the element.
 * @value: The value of the element.
 *
 * Return: 1 if succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *n, *tmp;
	char *cpy_value;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	cpy_value = strdup(value);
	if (cpy_value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = cpy_value;
			return (1);
		}
		tmp = tmp->next;
	}
	n = malloc(sizeof(shash_node_t));
	if (n == NULL)
	{
		free(cpy_value);
		return (0);
	}
	n->key = strdup(key);
	if (n->key == NULL)
	{
		free(cpy_value);
		free(n);
		return (0);
	}
	n->value = cpy_value;
	n->next = ht->array[index];
	ht->array[index] = n;
	sort(ht, n, tmp, (char *)key);
	return (1);
}
/**
 * sort - Helper function for shash_table_set that
 *	handles the sorting of nodes.
 *
 * @ht: A pointer to the sorted hash table.
 * @n: A pointer to new node.
 * @tmp: A pointer to a temp node to assist with sorting.
 * @key: The key of the node.
 */
void sort(shash_table_t *ht, shash_node_t *n, shash_node_t *tmp, char *key)
{
	if (ht->shead == NULL)
	{
		n->sprev = NULL;
		n->snext = NULL;
		ht->shead = n;
		ht->stail = n;
	}

	else if (strcmp(ht->shead->key, key) > 0)
	{
		n->sprev = NULL;
		n->snext = ht->shead;
		ht->shead->sprev = n;
		ht->shead = n;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		n->sprev = tmp;
		n->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = n;
		else
			tmp->snext->sprev = n;
		tmp->snext = n;
	}
}

/**
 * shash_table_get - Gets value of the given key from the sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key of the element.
 *
 * Return: The value associated with the key,
 *		Or NULL if no such key is found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *n;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	n = ht->shead;
	while (n && strcmp(n->key, key) != 0)
		n = n->next;

	return ((n == NULL) ? NULL : n->value);
}

/**
 * shash_table_print - Prints all nodes in a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 *
 * Return: Nothing.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *curr;

	if (ht == NULL)
		return;

	curr = ht->shead;
	printf("{");
	while (curr)
	{
		printf("'%s': '%s'", curr->key, curr->value);
		curr = curr->snext;
		if (curr != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - Prints all nodes in a sorted hash table in reverse.
 * @ht: A pointer to the sorted hash table.
 *
 * Return: Nothing.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *curr;

	if (ht == NULL)
		return;

	curr = ht->stail;
	printf("{");
	while (curr)
	{
		printf("'%s': '%s'", curr->key, curr->value);
		curr = curr->sprev;
		if (curr != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes all nodes in a sorted hash table.
 * @ht: A pointer to the hash table.
 *
 * Return: Nothing.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *h = ht;
	shash_node_t *curr, *next;

	if (ht == NULL)
		return;

	curr = ht->shead;
	while (curr != NULL)
	{
		next = curr->snext;
		free(curr->key);
		free(curr->value);
		free(curr);
		curr = next;
	}
	free(h->array);
	free(h);
}
