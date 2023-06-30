/*
 * Author: 0xTariq-dev
 * File: 3-strmcp.c
 */

#include "main.h"

/**
 * reverse_array - reverse an array of integers.
 * @a: The array to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int i, x, tmp;

	j = n - 1;

	for (i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[x];
		a[x--] = tmp;
	}
}
