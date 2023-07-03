/*
 * Author: 0xTariq-dev
 * File: 4-strpbrk.c
 */

#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: The string to be searched for accept bytes.
 * @accept: The string to search for in s.
 * Return: A pointer to the byte is s that matches one of
 *	the bytes in accept or NULL if no such byte found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, x;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				return (x);
			}
		}
		if (accept[x] == 0)
			return (NULL);
	}
	return (0);
}
