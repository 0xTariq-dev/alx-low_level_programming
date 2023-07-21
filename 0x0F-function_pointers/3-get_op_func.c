/*
 * Author: 0xTariq-dev
 * File: 3-get_opp_func.c
 */

#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - Selects the correct function to perform the operation
 *	asked by the user.
 * @s: A pointer to a char passed by the argument.
 *
 * Return: A pointer to the function that corresponds to the operator
 *	given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t op_arr[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int n = 0;

	while (n < 5)
	{
		if (*(op_arr[n]).op == *s && *(s + 1) == '\0')
			return (op_arr[n].f);

		n++;
	}
	return (NULL);
}
