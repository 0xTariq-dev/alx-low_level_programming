/*
 * Author: 0xTariq-dev
 * File : 103-infinite_add.c
 */

#include "main.h"
#include <stdio.h>
#include <string.h>
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
	int i = strlen(n1) - 1, x = strlen(n2) - 1;
	int sum, rem = 0, s, tmp = 0;

	r[size_r - 1] = '\0';
	s = size_r - 1;
	while (i >= 0 || x >= 0)
	{
		sum = rem;
		if (i >= 0)
			sum += n1[i] - '0';
		if (x >= 0)
			sum += n2[x] - '0';

		rem = sum / 10;
		sum %= 10;
		r[--s] = sum + '0';
		i--;
		x--;
	}
	if (rem)
		r[--s] = rem + '0';
	else
		s++;

	if (s <= 0)
		return (NULL);
	if (s > 0)
		for (; tmp < size_r - s; tmp++)
			r[tmp] = r[tmp + s];
	return (r);
}
