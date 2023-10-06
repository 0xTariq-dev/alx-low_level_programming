/*
 * Author: 0xTariq-dev
 * File: 0-hash_table_create.c
 */

#include "hash_tables.h"

/**
 * hash_table_create - Creates A hash table.
 * @size: The size of the hash table.
 *
 * Return: A pointer to the created hash table or NULL if it failed to create.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = calloc(ht->size, sizeof(hash_node_t *));

	if (ht->array == NULL)
		return (NULL);

	for (; i < ht->size; i++)
	{
		ht->array[i] = NULL;
	}

	return (ht);
}
