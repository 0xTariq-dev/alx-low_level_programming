/*
 * Author: 0xTariq-dev
 * File: 0-puts_recursion.c
 */

#include "main.h"

/**
 * _puts_recursion - Prints a string of characters.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);

}
