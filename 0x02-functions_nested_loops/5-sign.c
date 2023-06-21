#include"main.h"

/**
 * _isalpha - checks if the character is letter.
 * @c: the variable to store the value to check.
 *
 * Return: On success 1.
 *		On error 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
