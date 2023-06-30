/*
 * Author: 0xTariq-dev
 * File: 7-leeet.c
 */

#include "main.h"

/**
 * leet - Encodes a string in 1337.
 * @s: The string to be encoded.
 * Return: The resulting string.
 */
char *leet(char *s)
{
	int i, x;

	char *a = "AaEeOoTtLl";
	char *b = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; x < 10; x++)
		{
			if (s[i] == a[x])
			{
				s[i] = b[x];
			}
		}
	}
	return (s);
}
