/*
 * Author: 0xTariq-dev
 * File: 3-print_numbers.c
 */

#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9 folowed by a new line.
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		_putchar((n % 10) + '0');

	_putchar('\n');
}
