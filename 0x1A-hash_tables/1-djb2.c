/*
 * Author: 0xTariq-dev
 * File: 1-djb2.c
 */

#include "hash_tables.h"

/**
 * hash_djb2 - Creates A hash based on the djb2 algorithm.
 * @str: The string to be hashed.
 *
 * Return: Hash for the string.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
