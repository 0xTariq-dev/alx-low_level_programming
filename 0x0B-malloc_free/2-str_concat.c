/*
 * Author: 0xTariq-dev
 * File: 2-str_concat.c
 */

#include "main.h"
#include <stdlib.h>
/**
 * _strlen - Find length of a string.
 * @str: string to find the size of.
 * Return: Size of the string
 */

int _strlen(char *str)
{
	int size = 0;

	for (; str[size] != '\0'; size++)
	;
	return (size);
}

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
	unsigned int i, x, n;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	i = _strlen(s1);
	x = _strlen(s2);
	s = malloc((i + x + 1) * sizeof(char));
	if (s == 0)
		return (0);

	for (n = 0; n <= i + x; n++)
	{
		if (n < i)
			s[n] = s1[n];
		else
			s[n] = s2[n - i];
	}
	s[n] = '\0';
	return (s);
}
