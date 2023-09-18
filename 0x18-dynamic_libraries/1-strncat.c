/*
 * Author: 0xTariq-dev
 * File: 1-strncat.c
 */

#include "main.h"

/**
 * _strncat - Appends a number of bytes from src
 *	 string to the dest string,
 *	 overwriting the null byte at the end of dest.
 * @dest: The string to be appended.
 * @src: The string to be copied from.
 * @n: The number of bytes to be copied.
 * Return: A pointer to the resulting string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, x = 0;

	while (dest[i] != '\0')
		i++;

	while (src[x] != '\0' && x < n)
	{
		dest[i] = src[x];
		x++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
