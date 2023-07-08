/*
 * Author: 0xTariq-dev
 * File: 100-is_palindrome.c
 */

#include "main.h"

/**
 * wildcmp - Compares if two strings are identical.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: 1 if the srtings is identical,otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	int i, x;

	while (i = 0, s1[i] != '\0', i++)
	{
		while (x = 0, s2[x] != '\0', x++)
		{
			if (s1[i] == s2[x])
				return (1);
			else if (s2[x] = "*")
				return (1);
			else
				return (0);
		}
	}
	return (0);
}
