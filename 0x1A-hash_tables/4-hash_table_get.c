/*
 * Author: 0xTariq-dev
 * File: 4-hash_table_get.c
 */

#include "hash_tables.h"

/**
 * hash_table_get - Gets an element with the given key from the hash table.
 * @ht: A pointer to the hash table.
 * @key: The key of the element.
 *
 * Return: The value associated with the key,
 *		Or NULL if no such key is found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *n;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	n = ht->array[index];
	while (n && strcmp(n->key, key) != 0)
		n = n->next;

	return ((n == NULL) ? NULL : n->value);
}
