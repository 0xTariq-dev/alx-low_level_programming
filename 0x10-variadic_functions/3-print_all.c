/*
 * Author: 0xTariq-dev
 * File: 3-print_all.c
 */

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - Prints all parameters by a new line.
 * @format: The format in which the parameters will be printed.
 * @...: The other parameters to print.
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list parameters;
	int i = 0;
	char *tmp;

	va_start(parameters, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(parameters, int));
				break;
			case 'i':
				printf("%d", va_arg(parameters, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(parameters, double));
				break;
			case 's':
				tmp = va_arg(parameters, char*);
				if (tmp != NULL)
				{
					printf("%s", tmp);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
			format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(parameters);
}
