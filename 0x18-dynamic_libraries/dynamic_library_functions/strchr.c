/*
 * Author: 0xTariq-dev
 * File: 2-strchr.c
 */

#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to search for.
 * Return: A pointer to the first occurrence of the char c in
 *	the string s and if not found return null.
 */
char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;

		if (i == c)
			return (s - 1);

		if (i == 0)
			return (NULL);
	}
}
