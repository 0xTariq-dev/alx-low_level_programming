/*
 * Author: 0xTariq-dev
 * File: 100-reallc.c
 */

#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The size of the new allocated memory, in bytes.
 *
 * Return: A pointer to the new allocated memory.
 *	  Or NULL if new size is equal to 0.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	char *old;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	new = malloc(new_size);
	if (!new)
		return (NULL);

	old = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new[i] = old[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new[i] = old[i];
	}
	free(ptr);
	return (new);
}
