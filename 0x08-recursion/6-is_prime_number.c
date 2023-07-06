/*
 * Author: 0xTariq-dev
 * File: 6-is_prime_number.c
 */

#include "main.h"

int _prime(int n, int x);

/**
 * is_prime_number - Finds if the given number prime or not.
 * @n: The number to find if it's prime.
 * Return: 1 if prime number, otherwise 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}
/**
 * _prime - A helper Function that finds if the number prime or not.
 * @n: The number to find if prime.
 * @x: The value to divide by.
 *
 * Return: 1 if prime number, otherwise 0.
 */

int _prime(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0)
		return (0);
	return _prime(n, x - 1);
}
