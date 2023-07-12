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
	unsigned int i, x;

	while (str[x])
		x++;

	str2 = malloc((x + 1) * sizeof(char));

	if (str2 == NULL)
		return (NULL);

	while ((str2[i] = str[i]) != '\0')
			i++;

	return (str2);
}
