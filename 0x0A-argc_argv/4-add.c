/*
 * Author: 0xTariq-dev
 * File: 4-add.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Prints the multiplication of positive numbers.
 * @argc: The count of the arguments provided to program.
 * @argv: An array of pointers to a string of the arguments.
 *
 * Return: The number of coins added to the sum variable.
 */
int main(int argc, char **argv)
{
	int i, x, sum = 0;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i] != 0; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		x = atoi(argv[argc]);
		sum += x;
	}

	printf("%d\n", sum);
	return (0);
}
