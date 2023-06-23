/*
 * Author: 0xTariq-dev
 * File: 6-print_line.c
 */

#include "main.h"

/**
 * print_line - Draws a straight line using the underscore character.
 * @n: The count of _ characters.
 */
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			_putchar('_');
		}
	}	
	_putchar('\n');
}
