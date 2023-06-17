#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * Author: 0xTariq-dev
 * program name: print all single digit numbers combination
 */

/**
 * main - prints all possible combinations of single digit numbers
 * in ascending order
 *
 * Return: Always 0
 */
int main(void)
{

	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar((number % 10) + '0');
		if (number == 9)
			continue;

		putchar(',');
		putchar(' ');

	}

	putchar('\n');

	return (0);
}
