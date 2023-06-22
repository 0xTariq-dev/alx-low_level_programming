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
	int max_digits = 0;
	int digits = 0;
	int spaces;

	if (n < 0 || n > 15)
	{
		return;
	}

	prod = n * n;
	while (prod > 0)
	{
		max_digits++;
		prod /= 10;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			prod = i * j;
			while (prod > 0)
			{
				digits++;
				prod /= 10;
			}
			spaces = max_digits - digits;
			printf(i * j == 0 ? "%*d" : "%*d", spaces + digits,
					i * j == 0 ? '0' : i * j);


			if (j != n)
			{
			printf(", ");
			}
		}
		printf("\n");
	}
}
