/*
 * Author: 0xTariq-dev
 * File: 100-main_opcodes.c
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the ocodes of the main function.
 * @argc: The count of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 on success, 1 or 2 on fail.
 */
int main(int argc, char *argv[])
{
	int (*add)(int, char **) = main;
	int i = 0, bytes;
	char *op;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	*op = (char *)add;
	for (; i < bytes; i++)
	{
		printf("%x ", *op);
		if (i < (bytes - 1))
			printf(" ");

		c++;
	}
	printf("\n");
	return (0);
}
