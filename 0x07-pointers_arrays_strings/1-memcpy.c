/*
 * Author: 0xTariq-dev
 * File: 0-memcpy.c
 */

#include "main.h"

/**
 * _memcpy - Copies a memory area to another memory area.
 * @n: The number of bytes to be cpoied.
 * @src: A pointer to a memeory area to be copied.
 * @dest: The address to be copied to.
 * Return: A pointer to the memory area pointed by dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
