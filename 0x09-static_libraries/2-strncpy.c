/*
 * Author: 0xTariq-dev
 * File: 2-strncpy.c
 */

#include "main.h"

/**
 * *_strncpy - Copies a Number of bytes n from src to dest.
 * @dest: The string to be appended.
 * @src: The string to be copied from.
 * @n: The number of bytes to be copied.
 * Return: A pointer to the resulting string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
