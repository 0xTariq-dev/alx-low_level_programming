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
	int i, j, prod;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			prod = i * j;

			if (prod > n * n)
			{
				break;
			}
			if (prod < 10)
			{
				printf("%d,   ", prod);
			}
			else if (prod < 100)
			{
				printf("%d,  ", prod);
			}
			else
			{
				printf("%d, ", prod);
			}
		}
		printf("\n");
	}
}
