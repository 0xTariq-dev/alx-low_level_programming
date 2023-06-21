/* Author: 0xTariq-dev
 * File: 11-print_to_98.c
 */

#include "main.h"

/**
 * add - Adds two integers.
 * @number1: The first integer value.
 * @number2: The second integer value.
 *
 * Return: The result of the addition
 */
void print_to_98(int n)
{
	int n;

	for (n < 0; n <= 98; n++)
	{
		printf("%d, ", n);
	}
	for (n > 98; n >= 98; n--)
	{
		printf("%d, ", n);
	}
	printf("\n");
}
