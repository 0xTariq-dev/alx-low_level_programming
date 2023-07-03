/*
 * Author: 0xTariq-dev
 * File: 0-memset.c
 */

#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @n: The number of bytes to be filled.
 * @s: A pointer to a memeory area to be filled.
 * @b: The character to be copied.
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
