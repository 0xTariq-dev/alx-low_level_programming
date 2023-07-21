/*
 * Author: 0xTariq-dev
 * File: 0-sum_them_all.c
 */

#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sums all of it's parameters.
 * @n: The number of integers passed to the function.
 * @...: The other parameters to sum.
 *
 * Return: Sum of it's parameteres.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list(args);
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);
}
