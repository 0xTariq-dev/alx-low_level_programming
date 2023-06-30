/*
 * Author: 0xTariq-dev
 * File: 6-cap_string.c
 */

#include "main.h"

/**
 * *cap_string - Capitalize the first letter of every word in string.
 * @s: The string to be modified.
 * Return: The resulting string.
 */
char *cap_string(char *s)
{
	int i, x;

	char special[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		for (x = 0; x < 13; x++)
		{
			if (s[i] == special[x])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;
			}
		}
	}
	return (s);
}
