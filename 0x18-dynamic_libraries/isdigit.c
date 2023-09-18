/*
 * Author: 0xTariq-dev
 * File: 1-isdigit.c
 */

#include "main.h"

/**
 * _isdigit - Checks for digits in range (0-9).
 * @c:  The value to be checked.
 * Return: 1 if number is digit otherwise return 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
