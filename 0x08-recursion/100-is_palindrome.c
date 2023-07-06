/*
 * Author: 0xTariq-dev
 * File: 100-is_palindrome.c
 */

#include "main.h"

int _palindrome(char *s, int x, int len);
int _strlen(char *s);

/**
 * is_palindrome - Checks if a string is paliindrome.
 * @s: The string to find if it's palindrome.
 * Return: 1 if a srting is palindrome or empty,
 *	otherwise 0.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_palindrome(s, 0, _strlen(s)));
}

/**
 * _strlen - Returns the length of a string.
 * @s: The string to find the length of.
 *
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * _palindrome - A helper Function that finds if the
 *	string is palindrome.
 * @s: The string to check.
 * @x: The variable to start from left.
 * @len: The variable to start from Right.
 * Return: 1 if palindrome or empty, otherwise 0.
 */
int _palindrome(char *s, int x, int len)
{
	if (*(s + x) != *(s + len - 1))
		return (0);
	if (x >= len)
		return (1);
	return (_palindrome(s, x + 1, len - 1));
}
