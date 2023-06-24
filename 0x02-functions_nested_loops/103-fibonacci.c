/*
 * Author: 0xTariq-dev
 * File: 103-fibonacci.c
 */

#include <stdio.h>

/**
 * main - prints the fibonacci numbers starting with 1 and 2
 *	and thier values don't exceed 4000000 and have even values.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int i = 0, x = 1, r = i + x;

	while (r <= 4000000)
	{
		if (r % 2 == 0 && r < 4000000)
		{
			printf("%ld", r);
			printf(", ");
		}

		i = x;
		x = r;
		r = i + x;
	}
	return (0);
}
