/*
 * Author: 0xTariq-dev
 * File: 0-malloc_checked.c
 */

#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * *malloc_checked - Allocates memory using malloc.
 * @b: The Size of memory to be allocated.
 *
 * Return: A pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
