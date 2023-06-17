#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * Author: 0xTariq-dev
 * program name: print numbers
 */

/**
 * main - print the numbers from 0 to 9 followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{

	char number;

	for (number = '0'; number <= '9'; number++)
		putchar(number);

	putchar('\n');

	return (0);
}
