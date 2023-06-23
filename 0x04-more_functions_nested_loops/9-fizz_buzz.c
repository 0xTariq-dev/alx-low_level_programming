/*
 * Author: 0xTariq-dev
 * File: 9-fizz_buzz.c
 */

#include <stdio.h>

/**
 * main - prints the numbers in range (1-100) and replace multiples of
 *	3 print the word Fizz and replace multiples of 5 with the word
 *	Buzz and replace multiples of 3 and 5 prints FizzBuzz.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
			printf("FizzBuzz");

		else if ((n % 3) == 0)
			printf("Fizz");

		else if ((n % 5) == 0)
			printf("Buzz");

		else
			printf("%d", n);

		if (n == 100)
			continue;

		printf(" ");
	}
	printf('\n');

	return (0);
}
