/*
 * Author: 0xTariq-dev
 * File: 3-strmcp.c
 */

#include "main.h"

/**
 * *_strcmp - Compares two strings and return a value for
 *	the comparition.
 * @s1: The first string.
 * @s2: The second string.
 * Return: A value for the compairtion, negative if the first
 *	is less, zero if equal and positive if the first is
 *	longer.
 */
char *_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);

		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
