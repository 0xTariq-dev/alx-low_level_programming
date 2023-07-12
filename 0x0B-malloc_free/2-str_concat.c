/*
 * Author: 0xTariq-dev
 * File: 2-str_concat.c
 */

#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - Concatenates the string s2 to the end of the string s1.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the new string and a NULL if
 *	insufficient memory was avaliable.
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i = 0, x = 0, n;

	if (s1 == NULL)
		*s = s2;
	if (s2 == NULL)
		*s = s1;

	while (s1[i] != '\0' && s2[x] != '\0')
	{
		i++;
		x++;
	}

	s = malloc(i + x + 2);

	for (n = 0; n <= (i + x + 2); n++)
	{
		if (n < i)
			s[n] = s1[n];
		else
			s[n] = s2[n - i];
	}
	s[n] = '\0';
	return (s);
}
