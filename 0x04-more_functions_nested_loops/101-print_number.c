/*
 * Author: 0xTariq-dev
 * File: 101-print_number.c
 */

#include "main.h"

/**
 * print_number - Print an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	if (n >= 0)
	{
		_putchar(n + '0');
	}
	else
	{
		n = n * -1;
		_putchar('-');
		_putchar(n + '0');
	}
}
