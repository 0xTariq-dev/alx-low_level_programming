/*
 * Author: 0xTariq-dev
 * File: 5-strstr.c
 */

#include "main.h"

/**
 * _strstr - Search the string heystack for the first occurrence
 *	the substring needle.
 * @heystack: The string to be searched for the substring.
 * @needle: The substring to search for.
 * Return: A pointer to the beginning of the substring or
 *	NULL if substring is not found.
 */
char *_strstr(char *heystack, char *needle)
{
	int i, x;

	for (i = 0; heystack[i] != '\0'; i++)
	{
		for (x = 0; needle[x] != '\0'; x++)
		{
			if (heystack[i + x] != needle[x])
				break;
		}
		if (!needle[x])
			return (&heystack[i]);
	}
	return (NULL);
}
