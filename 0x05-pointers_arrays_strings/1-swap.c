/*
 * Author: 0xTariq-dev
 * File: 1-swap.c
 */

#include "main.h"

/**
 * swap_int -swaps the values of two integers.
 * @a: The pointer to the first integer.
 * @b: The pointer to the second integer.
 */
void swap_int(int *a, int *b);
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
