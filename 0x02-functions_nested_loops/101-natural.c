/*
 * Author: 0xTariq-dev
 * file: 101-natural.c
 */
#include <stdio.h>
/**
 * main - lists all natural numbers below 1024 that are
 *	multiples of 3 or 5.
 * Return: always 0.
 */
int main(void)
{
	int n, m = 0;

	for(n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			m += n;
	}

	printf("%d\n", m);

	return (0);
}
