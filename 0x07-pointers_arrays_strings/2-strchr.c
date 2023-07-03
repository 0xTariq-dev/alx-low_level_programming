/*
 * Author: 0xTariq-dev
 * File: 2-strchr.c
 */

#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @src: The character to search for.
 * Return: A pointer to the first occurrence of the char c in
 *	the string s and if not found return null.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return s;
			break;
		}
		i++;
	}
	if (s[i] == '\0')
		return (NULL);
}
