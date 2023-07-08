/*
 * Author: 0xTariq-dev
 * File: 1-args.c
 */

#include <stdio.h>

/**
 * main - Prints the number of arguments given to the program followed by
 *	a new line.
 * @argc: The count of the arguments provided to program.
 * @argv: An array of pointers to a string to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char __attribute__((unused))*argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
