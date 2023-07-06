/*
 * Author: 0xTariq-dev
 * File: 4-pow_recursion.c
 */

#include "main.h"

/**
 * _pow_recursion - Prints the value of (x) raised to the power
 *	of (y).
 * @x: The number to raise to power.
 * @y: The value of power to raise (x) for
 * Return: (x) raised to the power of (y).
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
