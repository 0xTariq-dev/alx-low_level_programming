/*
 * Author: 0xTariq-dev
 * File: 100-argstostr.c
 */

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *agrstostr - Concatenates all arguments in a string.
 * @ac: The number of arguments.
 * @av: A pointer to an array of arguments.
 *
 * Return: A pointer to a new string or NULL if fail or if (ac or av == NULL).
 */

char *argstostr(int ac, char **av)
{
	int i = 0, x = 0, m = 0, size = 0;
	char *arg;

	if (ac == NULL || av <= NULL)
		return (NULL);
	while (i < ac)
	{
		while (av[i][x])
		{
			size++;
			x++;
		}
		size++;
		i++;
	}
	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		x = 0;
		while (av[i][x])
		{
			arg[m] = av[i][x];
			x++;
			m++;
		}
		arg[m] = '\n';
		m++;
		i++
	}
	arg[m] = '\0';
	return (arg);
}

