/*
 * Author: 0xTariq-dev
 * File: 3-puts.c
 */

#include "main.h"

/**
 * _puts - Prints a string followed by a new line to
 *	the standard output.
 * @str: The string to be printed.
 */
void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');

}
