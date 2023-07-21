/*
 * Author: 0xTariq-dev
 * File: 2-print_strings.c
 */

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line.
 * @separator: The string to print between strings.
 * @n: The number of strings passed to the function.
 * @...: The other parameters to print.
 *
 * Return: all of the parameters.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i = 0;
	char *str;

	va_start(strings, n);

	for (; i < n; i++)
	{
		str = va_arg(strings, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
