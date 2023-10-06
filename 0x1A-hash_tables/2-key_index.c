/*
 * Author: 0xTariq-dev
 * File: 2-key_index.c
 */

#include "hash_tables.h"

/**
 * key_index - Gets the index of a key.
 * @key: The key of the node.
 * @size: The size of the array of the hash table.
 *
 * Return: The index of the kety/value pair in hash table array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}
