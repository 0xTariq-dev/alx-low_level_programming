/*
 * Author: 0xTariq-dev
 * File: 5-rev_string.c
 */

#include "main.h"

/**
 * rev_string - Rverses thee order of a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	char r;
	int rev = 0, temp = 0;

	while (s[rev] != '\0')
		rev++;

	while (temp < rev--)
	{
		r = s[temp];
		s[temp++] = s[rev];
		s[rev] = r;
	}

}
