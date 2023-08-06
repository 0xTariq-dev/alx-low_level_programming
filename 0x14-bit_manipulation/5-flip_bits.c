/*
 * Author: 0xTariq-dev
 * File: 5-flip_bitis.c
 */

#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Returns the number of bits needed to be flipped to change
 *		a number.
 * @n: The Value of the first number to be changed.
 * @m: The value of the second number to change to.
 *
 * Return: The number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;
	unsigned long int diff;

	diff = n ^ m;
	while (diff)
	{
		bits += diff & 1;
		diff >>= 1;
	}
	return (bits);
}
