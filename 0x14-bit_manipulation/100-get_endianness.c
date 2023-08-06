/*
 * Author: 0xTariq-dev
 * File: 100-get_endianness.c
 */

#include "main.h"
#include <stdio.h>

/**
 * get_endianness - Checks if a number is a little endian (reversed order to
 *	human readable order) or big endian (ordered as human readable order).
 *
 * Return: 0 if big endian or 1 if little endian,
 */
int get_endianness(void)
{
	int x = 1;
	char *p = (char *)&x;

	if (*p == 1)
		return (1);
	return (0);
}
