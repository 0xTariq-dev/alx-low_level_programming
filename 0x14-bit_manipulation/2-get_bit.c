/*
 * Author: 0xTariq-dev
 * File: 2-get_bit.c
 */

#include "main.h"
#include <stdio.h>

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The Value of the bit.
 * @index: The index of the bit to get it's value
 *
 * Return: The value of bit at index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int pm = 1;

	if (index > 63)
		return (-1);
	if (((n >>= index) & pm) == 1)
		return (1);
	else
		return (0);
}
