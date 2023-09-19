/*
 * Author: 0xTariq-dev
 * File: 9-strcpy.c
 */

#include "main.h"

/**
 * *_strcpy - copies the string pointed by src, including the teminating
 *	null byte to the buffer pointed to by dest.
 * @src: The string to be copied.
 * @dest: pointer to the buffer where the string will be copied.
 *
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int tmp = 0, i;

	while (src[tmp] != '\0')
		tmp++;

	for (i = 0; i < tmp; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
