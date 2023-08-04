/*
 * Author: 0xTariq-dev
 * File: 3-set_bit.c
 */

#include "main.h"
#include <stdio.h>

/**
 * set_bit - Sets the value of a bit at a given index.
 * @n: A pointer to the Value of the bit.
 * @index: The index of the bit to get it's value
 *
 * Return: 1 on success or -1 if an error occured.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int pm = 1;

	if (index > 63)
		return (-1);
	pm <<= index;
	*n = pm | *n;
	return (1);
}
