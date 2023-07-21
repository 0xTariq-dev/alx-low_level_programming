/*
 * Author: 0xTariq-dev
 * File: 1-print_numbers.c
 */

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sprint_numbers - prints all of it's parameters.
 * @separator: The string to print between numbers.
 * @n: The number of parameters.
 * @...: The other parameters to print.
 *
 * Return: all of the parameters.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i = 0, x = 0, num;

	va_start(numbers, n);

	for (; i < n; i++)
	{
		x = va_arg(numbers, int);
		num = x;
		if (separator == NULL)
			printf("%d", num);
		else
			printf("%d%s", num, separator);
	}
	va_end(numbers);
	printf("\n");
}
