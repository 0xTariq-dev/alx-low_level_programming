#include"main.h"

/**
 * _abs - computes the absloute value of an integer.
 * @n: the variable to store the value to check.
 *
 * Return: integer number value of n.
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
