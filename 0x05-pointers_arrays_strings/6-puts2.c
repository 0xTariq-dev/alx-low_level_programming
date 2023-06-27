/*
 * Author: 0xTariq-dev
 * File: 6-puts2.c
 */

#include "main.h"

/**
 * puts2 - Prints every other character of a string followed by a new line to
 *	the standard output.
 * @str: The string to be printed.
 */
void puts2(char *str)
{
	int size = 0, i = 0;

	while (str[size] != '\0')
		size++;

	size -= 1;

	for (; i <= size; i += 2)
		_putchar(str[i]);

	_putchar('\n');

}
