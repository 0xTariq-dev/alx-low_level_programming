/*
 * Author: 0xTariq-dev
 * File: 102-fibonacci.c
 */

#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers starting with 1 and 2
 *	seperated by a comma and white space.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int i = 1, x = 2, r = i + x, count;

	for (count = 0; count < 50; count++)
	{
		printf("%ld", r);
			if (count < 49)
			{
			printf(", ");
			}
		i = x;
		x = r;
		r = i + x;
	}
	printf("\n");

	return (0);
}
