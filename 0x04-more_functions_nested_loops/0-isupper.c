/*
 * Author: 0xTariq-dev
 * File: 0-isupper.c
 */

#include "main.h"

/**
 * _isupper - checks for uppercase characters.
 * @c: The value to be checked.
 *
 * Return: 1 if uppercase otherwise return 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
