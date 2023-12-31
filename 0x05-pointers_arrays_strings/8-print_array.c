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
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n;  i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	putchar('\n');
}
