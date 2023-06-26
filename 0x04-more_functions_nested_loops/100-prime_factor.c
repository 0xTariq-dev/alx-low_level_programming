/*
 * Author: 0xTariq-dev
 * File: 100-prime_factor.c
 */

#include <stdio.h>

/**
 * main - Finds and prints the prime factors of the number "612852475143".
 */
int main(void)
{
	unsigned long int n = 612852475143;
	unsigned long int p_f = 2;

	while (n != 1)
	{
		if (n % p_f == 0)
			n = n / p_f;
		else
			p_f++;
	}

	printf("%lu\n", p_f);

	return (0);

}
