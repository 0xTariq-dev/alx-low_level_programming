#include"main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 * @n: the variable to store the value to check.
 *
 * Return: last digit number
 */

int print_last_digit(int n)
{
	int x;

	if (n < 0)
		x = -1 * (n % 10);
	else
		x = n % 10;

	_putchar(x + '0');
	return (x);
}
