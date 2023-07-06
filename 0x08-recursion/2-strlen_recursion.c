/*
 * Author: 0xTariq-dev
 * File: 2-strlen_recursion.c
 */

#include "main.h"

/**
 * _strlen_recursion - Prints the length of a string.
 * @s: The string to return length of.
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
