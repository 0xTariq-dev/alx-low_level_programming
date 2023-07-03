/*
 * Author: 0xTariq-dev
 * File: 7-print_chessboard.c
 */

#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: The number of rows.
 *
 * Return: nothing.
 */
void print_chessboard(char (*a)[8])
{
	int i, x;

	for (i = 0; i < 8; i++)
	{
		for (x = 0; x < 8; x++)
		{
			_putchar(a[i][x]);
		}
		_putchar('\n');
	}
}
