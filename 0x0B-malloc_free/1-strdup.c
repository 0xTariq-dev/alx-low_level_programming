/*
 * Author: 0xTariq-dev
 * File: 1-strdup.c
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - Returns a pointer to a new string which is a
 *	duplicate of the string str.
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the new string and a NULL if
 *	insufficient memory was avaliable.
 */

char *_strdup(char *str)
{
	char *str2;
	unsigned int i = 0, x = 0;

	if (str == NULL)
		return (NULL);

	while (str[x] != '\0')
		x++;

	str2 = malloc(x * sizeof(str));

	if (str2 == 0)
		return (NULL);

	while (i < x)
	{
		str2[i] = str[i];
		i++;
	}
	return (str2);
}
