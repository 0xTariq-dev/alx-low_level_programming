/*
 * Author: 0xTariq-dev
 * File: 100-prime_factor.c
 */

#include <stdio.h>
#include <math.h>

/**
 * main - Finds and prints the prime factors of the number "612852475143".
 */
int main(void)
{
	unsigned long int n = 612852475143, p_f = 2;

	while (p_f < (n / 2))
	{
		if (n % p_f == 0)
		{
			n /= 2;
			continue;
		}
		for (p_f = 3; p_f < (n / 2); p_f += 2)
		{
			if (n % p_f == 0)
				n /= p_f;
		}
	}

	printf("%lu\n", p_f);

	return (0);

}
