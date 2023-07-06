/*
 * Author: 0xTariq-dev
 * File: 3-factorial.c
 */

#include "main.h"

/**
 * factorial - Prints the factorial of n.
 * @n: The number to calculate factorial for.
 * Return: The factorial of n.
 */
int factorial(int n)
{
	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
