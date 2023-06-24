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
	unsigned long int i = 0, x = 1, r = i + x, count;

	for (count = 0; count <= 98; count++)
	{
		printf("%lu", r);
			if (count < 97)
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
