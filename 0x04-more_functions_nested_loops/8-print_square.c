/*
 * Author: 0xTariq-dev
 * File: 8-print_square.c
 */

#include "main.h"

/**
 * print_square - prints a square using the # character.
 * @size: the size of the square.
 */
void print_sqaure(int n)
{
	int h, w;

	if (size > 0)
	{
		for (h = 0; h < size; h++)
		{
			for (w = 0; w < size; w++)
				_putchar('#');

			if (h == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
