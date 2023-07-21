/*
 * Author: 0xTariq-dev
 * File: 1-print_numbers.c
 */

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints all of it's parameters.
 * @separator: The string to print between numbers.
 * @n: The number of parameters.
 * @...: The other parameters to print.
 *
 * Return: all of the parameters.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i = 0;
	int num;

	va_start(numbers, n);

	for (; i < n; i++)
	{
		num = va_arg(numbers, int);
		printf("%d", num);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
