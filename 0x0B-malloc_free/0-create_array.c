/*
 * Author: 0xTariq-dev
 * File: 0-create_array.c
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - Creates an array of chars, and intializes it with
 *	a specifec char.
 * @c: The char to be added to the array.
 * @size: The size of the array.
 *
 * Return: A pointer to the array and a NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i  = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(size * sizeof(char));

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	if (p == NULL)
		return (0);

	*(p + i) = '\0';

	return (p);
}
