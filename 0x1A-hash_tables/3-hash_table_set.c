/*
 * Author: 0xTariq-dev
 * File: 3-hash_table_set.c
 */

#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table.
 * @key: The key of the element.
 * @value: The value of the element.
 *
 * Return: 1 if succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int index, i;
	char *tmp_value;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	tmp_value = strdup(value);
	if (tmp_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = tmp_value;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(tmp_value);
		return (0);
	}

	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = tmp_value;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
