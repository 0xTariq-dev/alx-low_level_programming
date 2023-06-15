/*
 * File: 5-printf.c
 * Auth: 0xTariq-dev
 */

	# include <stdio.h>
/**
 * main - Prints "and that piece of art is useful\" - Dora Korpar, 2015-10-19"
 *	followed by a new line, to standard error.
 *
 * Return: Always 1.
 */
	int main(void)
	{
		write(2,
			"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
			,61);

		return (1);
	}
