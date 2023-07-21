/*
 * Author: 0xTariq-dev
 * File: 3-op_functions.c
 */

#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The sum of the two integers.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Subtracts the second integer from the first integer.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The subtraction of the two integers.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The product of the two integers.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divides two integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The division of a by b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The remainder of the divison of the two integers.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
