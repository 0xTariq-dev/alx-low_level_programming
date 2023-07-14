/*
 * Author: 0xTariq-dev
 * File: 1-string_nconcat.c
 */

#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings..
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of string s2 to concatenate to string s2.
 *
 * Return: A pointer to the new string or NULL if function fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size1 = 0, size2 = 0, i = 0;

	if (s1 == NULL)
		s1 = "";
	while (s1[size1])
		size1++;

	if (s2 == NULL)
		s2 = "";
	while (s2[size2])
		size2++;

	if (n >= size2)
		n = size2;

	p = malloc(size1 + n + 1);

	if (p == NULL)
		return (NULL);

	for (; i < (size1 + n); i++)
	{
		if (i < size1)
			p[i] = *s1, s1++;
		else 
			p[i] = *s2, s2++;
	}
	p[i] = '\0';
	return (p);
}
