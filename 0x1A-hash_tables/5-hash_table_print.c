/*
 * Author: 0xTariq-dev
 * File: 5-hash_table_print.c
 */

#include "hash_tables.h"

/**
 * hash_table_print - Prints all nodes in a hash table.
 * @ht: A pointer to the hash table.
 *
 * Return: Nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *curr;
	unsigned long int i = 0, separator = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (separator == 1)
				printf(", ");

			curr = ht->array[i];
			while (curr != NULL)
			{
				printf("'%s': '%s'", curr->key, curr->value);
				curr = curr->next;
				if (curr != NULL)
					printf(", ");
			}
			separator = 1;
		}
	}
	printf("}\n");
}
