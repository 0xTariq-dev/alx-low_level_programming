/*
 * Author: 0xTariq-dev
 * File : 103-infinite_add.c
 */

#include "main.h"
#include <stdio.h>

/**
 * *infinite_add - Adds two numbers and prints the result.
 * @n1: The first number.
 * @n2: the second number.
 * @r: the buffer to store the result.
 * @size_r: The buffer size.
 *
 * Return: Always 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, x;

	while (i = sizeof(*n1) - 1, i--)
	{
		while (x = sizeof(*n2) - 1, x--)
		{
			size_r = sizeof(*r) - 1;
			r[size_r--] = n1[i] + n2[x];
		}
		return (r);
	}
	return (0);
}
