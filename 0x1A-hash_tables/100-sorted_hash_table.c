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
	shash_node_t *new, *temp;
	unsigned long int index;
	char *cpy_value;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	cpy_value = strdup(value);
	if (cpy_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = cpy_value;
			return (1);
		}
		temp = temp->next;
	}

	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		free(cpy_value);
		return (0);
	}

	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(cpy_value);
		free(new);
		return (0);
	}
	new->value = cpy_value;
	new->next = ht->array[index];
	ht->array[index] = new;

	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
			temp = temp->snext;
		new->sprev = temp;
		new->snext = temp->snext;
		if (temp->snext == NULL)
			ht->stail = new;
		else
			temp->snext->sprev = new;
		temp->snext = new;
	}

	return (1);
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
