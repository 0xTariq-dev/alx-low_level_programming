/*
 * Author: 0xTariq-dev
 * File: 100-set_string.c
 */

#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: double pointer.
 * @to: A pointer to a value.
 */
void set_string(int **s, int *to)
{
	*s = to;
}
