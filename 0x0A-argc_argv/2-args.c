/*
 * Author: 0xTariq-dev
 * File: 2-args.c
 */

#include <stdio.h>

/**
 * main - Prints the all arguments given to the program followed by
 *	a new line.
 * @argc: The count of the arguments provided to program.
 * @argv: An array of pointers to a string of the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}

	return (0);
}
