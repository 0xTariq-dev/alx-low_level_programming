/*
 * Author: 0xTariq-dev
 * File: 4-print_most_numbers.c
 */

#include "main.h"

/**
 * print_most_ numbers - prints the numbers from 0 to 9 exept 2
 *		and 4 followed by a new line.
 */
void print_most_umbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
			_putchar((num % 10) + '0');
	}
	_putchar('\n');
}
