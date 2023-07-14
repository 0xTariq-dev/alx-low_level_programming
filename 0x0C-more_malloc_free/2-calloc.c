/*
 * Author: 0xTariq-dev
 * File: 2-calloc.c
 */

#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates mmory for an array using malloc.
 * @memb: The number of elements in the array.
 * @size: The size of the element.
 *
 * Return: A pointer to the allocated memory.
 */

void *_calloc(unsigned int memb, unsigned int size)
{
	int *p;
	unsigned int n = memb * size;

	if (n == 0)
		return (NULL);

	p = malloc(memb * size);

	if (p == NULL)
		return (NULL);

	return (p);
}
