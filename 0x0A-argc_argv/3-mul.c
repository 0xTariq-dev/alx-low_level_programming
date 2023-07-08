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
int main(int argc, char *argv[])
{
	int sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	sum = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", sum);

	return (0);
}
