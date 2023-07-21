/*
 * Author: 0xTariq-dev
 * File: 3-main.c
 */

#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Performs simple mathmatical operations.
 * @argc: Argument count.
 * @argv: Array of the arguments
 *
 * Return: 0 when success, 98 on argc error, 99 on illegal operator.
 */
int main(int argc, char **argv)
{
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
