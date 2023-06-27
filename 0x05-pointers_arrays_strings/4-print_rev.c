/*
 * Author: 0xTariq-dev
 * File: 4-print_rev.c
 */

#include "main.h"

/**
 * print_rev - Prints a string of characters in reverse order.
 * @s: The pointer to the string to be printed.
 */
void print_rev(char *s)
{
	int rev = 0;

	while (s[rev] != '\0')
		rev++;

	while (rev)
		_putchar(s[--rev]);
	
	_putchar('\n');

}
