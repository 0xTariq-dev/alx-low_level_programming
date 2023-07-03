/*
 * Author: 0xTariq-dev
 * File: 3-strspn.c
 */

#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched for accept bytes.
 * @accept: The characters to search for.
 * Return: A number of the initial segment s which
 *	consist only of bytes drom accept.
 */
char *_strchr(char *s, char *accept)
{
	int i, x, n, stat;

	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		stat = 0;
		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] == accept[j])
			{
				f++;
				stat = 1;
			}
		}
		if (stat == 0)
			return (f);
	}
	return (0);
}
