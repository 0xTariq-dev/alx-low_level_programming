/*
 * Author: 0xTariq-dev
 * File: 1-print_rev_recursion.c
 */

#include "main.h"

/**
 * _print_rev_recursion - Prints a string in a reversed order.
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
