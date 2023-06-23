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
	int num, count;

	for (count = 0; count <= 9; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');

			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
