/*
 * Author: 0xTariq-dev
 * File: 2-get_bit.c
 */

#include "main.h"
#include <stdio.h>

/**
 * gett_bit -Gets the value of a bit at a given index.
 * @n: The Value of the bit.
 * @index: The index of the bit to get it's value
 *
 * Return: Nothing.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int shft;
	unsigned int tmp;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	tmp = n;
	for (shft = 0; tmp >>= 1; shft++)
	;
	for (; shft >= 0; shft--)
	{
		if ((n >> shft) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
