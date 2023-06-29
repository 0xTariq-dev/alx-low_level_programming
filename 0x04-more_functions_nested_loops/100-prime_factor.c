/*
 * Author: 0xTariq-dev
 * File: 100-prime_factor.c
 */

#include <stdio.h>
#include <math.h>

/**
 * main - Finds and prints the prime factors of the number "612852475143".
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int n = 612852475143, p_f = 3;

	for (; p_f <= n; p_f += 2)
	{
		while (n % p_f == 0 && n != 1)
		{
			n /= p_f;
		}
	}

	printf("%lu\n", (p_f - 2));

	return (0);

}
