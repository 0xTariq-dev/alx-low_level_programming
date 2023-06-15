/*
 * File: 6-size.c
 * Auth: 0xTariq-dev
 */

	# include <stdio.h>
/**
 * main - Print The Sizes of various types on the computer it
 *	is compiled and run on.
 *
 * Return: Always 0.
 */
	int main(void)
	{
		printf("Size of a cahr: %d bute(s)\n", sizeof(char));
		printf("Size of an int: %d bute(s)\n", sizeof(int));
		printf("Size of a long int: %d bute(s)\n", sizeof(long int));
		printf("Size of a long long int: %d bute(s)\n", sizeof(long long int));
		printf("Size of a float: %d bute(s)\n", sizeof(float));

		return (0);
	}
