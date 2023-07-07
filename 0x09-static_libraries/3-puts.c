/*
 * Author: 0xTariq-dev
 * File: 3-puts.c
 */

#include "main.h"

/**
 * _puts - Prints a string followed by a new line to
 *	the standard output.
 * @s: The string to be printed.
 */
void _puts(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		_putchar(s[c]);
		c++;
	}
	_putchar('\n');

}
