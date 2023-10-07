/*
 * Author: 0xTariq-dev
 * File: 6-hash_table_delete.c
 */

#include "hash_tables.h"

/**
 * hash_table_delete - Deletes all nodes in a hash table.
 * @ht: A pointer to the hash table.
 *
 * Return: Nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *h = ht;
	hash_node_t *curr, *next;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	for (; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			curr = ht->array[i];
			while (curr != NULL)
			{
				next = curr->next;
				free(curr->key);
				free(curr->value);
				free(curr);
				curr = next;
			}
		}
	}
	free(h->array);
	free(h);
}
