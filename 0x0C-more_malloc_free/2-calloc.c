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
 * Return: A pointer to the allocated memory if succes.
 *	   NULL - if function fails or (size or memb) = 0.
 */

void *_calloc(unsigned int memb, unsigned int size)
{
	void *p;
	char *fill;
	unsigned int n;

	if (size == 0 || memb == 0)
		return (NULL);

	p = malloc(memb * size);

	if (p == NULL)
		return (NULL);

	fill = p;
	for (n = 0; n < (memb * size); n++)
		fill[n] = 0;

	return (p);
}
