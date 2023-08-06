/*
 * Author: 0xTariq-dev
 * File: 100-set_string.c
 */

#include "main.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a string
 * @s: The pointer to the string.
 * @to: The string to point to.
 */
void set_string(char **s, char *to)
{
	*s = &(*to);
}
