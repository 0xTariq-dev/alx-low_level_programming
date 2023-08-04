/*
 * Author: 0xTariq-dev
 * File: 0-binary_to_int.c
 */

#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to unsigned int.
 * @b: A pointer to a string that represent the binary number.
 *
 * Return: The converted number or 0 if:
 *		1- there is one or more chars in the string that's not 0 or 1.
 *		2- b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int pwr = 1, uint = 0;
	int i = 0;
	if (b == NULL)
		return (0);
	for (; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (; i >= 0; i--)
	{
		if (b[i] == '1')
			uint += pwr;
		pwr *= 2;
	}
	return (uint / 2);
}
