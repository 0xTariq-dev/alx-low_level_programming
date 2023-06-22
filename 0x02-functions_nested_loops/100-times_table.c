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
				break;

			if (prod == 0)
			{
				printf("%3d", prod);
			}
			else
			{
				int num_digits = 1;

				int temp = prod;

				while (temp /= 10)
					num_digits++;

				int num_spaces = 3 - num_digits;

				printf("%*d", num_spaces + num_digits, prod);
			}
			if (j != n)
				printf(",");
		}
		printf("\n");
	}
}
