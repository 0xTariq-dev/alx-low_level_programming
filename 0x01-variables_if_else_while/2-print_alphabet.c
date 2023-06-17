#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * Author: 0xTariq-dev
 * program name: Last Digit
 * including the standard and time library
 */

/**
 * main - print the last digit of random number
 *	and whether it is greater than 5, less than 6, or 0
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter, "\n")

	return (0);
}
