/*
 * Author: 0xTariq-dev
 * File: 104-fibonacci.c
 */

#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers starting with 1 and 2
 *	seperated by a comma and white space.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int r, i, x, i1, i2, x1, x2, mod;

	i = 1;
	x = 2;
	mod = 10000000000;

	printf("%lu, ", i);

	for (r = 1; r < 91; r++)
	{
		printf("%lu, ", x);
		x = x + i;
		i = x - i;
	}

	i1 = i / mod;
	x1 = x / mod;
	i2 = i % mod;
	x2 = x % mod;

	for (r = 92; r < 99; r++)
	{
		if (r < 98)
		{
		printf("%lu", x1 + (x2 / mod));
		printf("%lu, ", x2 % mod);
		x1 = x1 + i1;
		i1 = x1 - i1;
		x2 = x2 + i2;
		i2 = x2 - i2;
		}
		else
		{
			printf("%lu", x1 + (x2 / mod));
			printf("%lu", x2 % mod);
		}
	}

	printf("\n");

	return (0);
}
