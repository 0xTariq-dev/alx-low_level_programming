/*
 * Author: 0xTariq-dev
 * File: 100-rot13.c
 */

#include "main.h"

/**
 * *rot13 - Encodes a string in rot 13.
 * @s: The string to be encoded.
 * Return: The resulting string.
 */
char *rot13(char *s)
{
	int i, x;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; a[x] != '\0'; x++)
		{
			if (s[i] == a[x])
			{
				s[i] = b[x];
				break;
			}
		}
	}
	return (s);
}
