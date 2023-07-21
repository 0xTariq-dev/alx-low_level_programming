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
int main(int argc, char **argv)
{
	int i, bytes;
	unsigned char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = aoti(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = (unsigned char *)main;
	i = 0;
	if (bytes > 0)
	{
		while(i < (bytes - 1)
			printf("%02hhx ", ptr[i++]);
		printf("%hhx\n", ptr[i]);
	}
	return (0);
}
