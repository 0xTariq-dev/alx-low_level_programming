#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * Author: 0xTariq-dev
 * program name: print base 16 numbers
 */

/**
 * main - print the numbers of base 16 in lowercase.
 *
 * Return: Always 0
 */
int main(void)
{

	int number;
	char letter;

	for (number = 0; number < 10; number++)
		putchar((number % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
