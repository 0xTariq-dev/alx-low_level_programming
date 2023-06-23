/*
 * Author: 0xTariq-dev
 * File: 5-more_numbers.c
 */

#include "main.h"

/**
 * more_numbers - prints the numbers from 0 to 14 ten times
 *		followed by a new line.
 */
void more_numbers(void)
{
	int n, x;

	for (x = 0; x <= 9; x++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar((num / 10) + '0');

			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
