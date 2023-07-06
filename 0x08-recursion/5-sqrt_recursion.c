/*
 * Author: 0xTariq-dev
 * File: 5-sqrt_recursion.c
 */

#include "main.h"

int _sqrt(int n, int x);

/**
 * _sqrt_recursion - Returns the natural square root of
 *		a number.
 * @n: The number to calculate the natural sqaure root of.
 * Return: The natural square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
/**
 * _squrt - A helper Function that finds the square root of a n.
 * @n: The number to calculate the square root of.
 * @x: The value to check.
 *
 * Return: The square root on n.
 */

int _sqrt(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (_sqrt(n, x + 1));
}
