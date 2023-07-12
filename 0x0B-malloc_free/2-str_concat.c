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
	unsigned int i = 0, x = 0, n, s_size;

	if (s1 == NULL)
		s = s2;
	if (s2 != NULL)
	{
		while (s1[i] != '\0')
			i++;
		while (s2[x] != '\0')
			x++;

		s_size = i + x + 1;
		s = malloc(s_size);

		for (n = 0; s1[i] != '\0'; n++)
			s[s_size++] = s1[i];
		for (n = 0; s2[x] != '\0'; n++)
			s[s_size++] = s2[x];
	}
	s[(s_size + 1)] = '\0';
	return (s);
}
