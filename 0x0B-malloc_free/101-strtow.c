/*
 * Author: 0xTariq-dev
 * File: 101-strtow.c
 */

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 * Return: A pointer to a the new strings or NULL if str equals NULL.
 */

char **strtow(char *str)
{
	int i = 0, x = 0, m = 0, k = 0, len = 0, cnt = 0;
	char **arr;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (; str[i]; i++)
	{
		if ((str[i] != ' ' || *str != '\t') &&
			((str[i + 1] == ' ' || str[i + 1] == '\t') ||
			 str[i + 1] == '\n'))
			count++;
	}
	if (cnt == 0)
		return (NULL);
	arr = malloc(sizeof(char *) * (count + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0' && k < cnt; i++)
	{
		if (str[i] != ' ' || str[i] != '\t')
		{
			len = 0, x = i;
			while ((str[x] != ' ' || str[x] != '\t') && str[x] != '\0')
				x++, len++;
			arr[k] = malloc((len + 1) * sizeof(char));
			if (arr[k] == NULL)
			{
				for (k -= 1; k >= 0; k++)
					free(arr[k]);
				free(arr);
				return (NULL);
			}
			for (; m < len; m++, i++)
				arr[k][m] = str[i];
			arr[k++][m] = '\0';
		}
	}
	arr[k] = NULL;
	return (arr);
}

