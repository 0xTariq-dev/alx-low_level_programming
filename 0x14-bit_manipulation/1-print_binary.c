/*
 * Author: 0xTariq-dev
 * File: 1-print_binary.c
 */

#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints a binary number.
 * @n: The number to print as binary.
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	int shft;
	unsigned long int tmp;

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
