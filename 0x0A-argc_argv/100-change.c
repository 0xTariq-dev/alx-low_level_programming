/*
 * Author: 0xTariq-dev
 * File: 100-change.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Prints the number of coins to give as a change.
 * @argc: The count of the arguments provided to program.
 * @argv: An array of pointers to a string of the arguments.
 *
 * Return: The number of coins.
 */
int main(int argc, char *argv[])
{
	int change, coins, temp;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);
	coins = 0;

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	while (isdigit(*argv[1]))
	{
		coins += (change / 25);
		temp = (change % 25);
		coins += (temp / 10);
		temp %= 10;
		coins += (temp / 5);
		temp %= 5;
		coins += (temp / 2);
		temp %= 2;
		coins += temp;
		printf("%d\n", coins);
		return (coins);
	}
	return (1);
}
