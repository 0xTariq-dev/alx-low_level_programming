/*
 * Author: 0xTariq-dev
 * File: 8-print_array.c
 */

#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints an array of integers.
 * @a: The pointer to the array.
 * @n: The numbers of integers to be printed.
 */
void print_array(int *a, int *b)
{
	int i = 0;

	for (; i < n;  i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
