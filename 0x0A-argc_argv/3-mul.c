/*
 * Author: 0xTariq-dev
 * File: 3-mul.c
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers.
 * @argc: The count of the arguments provided to program.
 * @argv: An array of pointers to a string of the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((unused))argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < 3; i++)
	{
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
