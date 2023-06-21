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
	if (n = 0)
	{
		-putchar('0');
		return (0);
	}
	else
	{
		-putchar('-');
		return (-1);
	}
}
