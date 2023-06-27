/*
 * Author: 0xTariq-dev
 * File: 2-strlen.c
 */

#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The pointer to the string.
 * Return: the value of len.
 */
int _strlen(char *s);
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
