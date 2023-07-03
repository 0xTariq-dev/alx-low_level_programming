/*
 * Author: 0xTariq-dev
 * File: 8-print_diagsums.c
 */

#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals.
 * @a: The matrix to print sum of diagonals.
 * @size: the size of the square matrix to print.
 *
 * Return: The sum of the diagonals.
 */
void print_diagsums(int *a, int size)
{
	int i;

	unsigned int dsum, dsum1;

	dsum = 0;
	dsum1 = 0;

	for (i = 0; i < size; i++)
	{
		dsum += a[(size * i) + i];
		dsum1 += a[(size * (i + 1) - (i + 1))];
	}
	printf("%d, %d\n", dsum, dsum1);
}
