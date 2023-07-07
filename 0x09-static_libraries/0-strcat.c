/*
 * Author: 0xTariq-dev
 * File: 0-strcat.c
 */

#include "main.h"

/**
 * *_strcat - Appends the src string to the dest string,
 *	 overwriting th null byte at the end of dest
 *	 and adds another on.
 * @dest: The string to be appended.
 * @src: The string to be copied.
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, x = 0;

	while (dest[i] != '\0')
		i++;

	while (src[x] != '\0')
	{
		dest[i] = src[x];
		x++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
