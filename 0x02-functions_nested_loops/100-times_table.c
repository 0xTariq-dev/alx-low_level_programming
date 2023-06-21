/*
 * Author: 0xTariq-dev
 * File: 100-times_table.c
 */

#include "main.h"

/**
 * print_times_table - prints the times table of the input starting
 *	with 0.
 * @n: The value of times table to be printed.
 *
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i <= 12; i++)
	{
		for (j = 0; j <= 12; j++)
		{
			printf("%d,  ", i * j);
		}
		printf("\n");
	}
}
