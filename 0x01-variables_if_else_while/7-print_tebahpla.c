#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * Author: 0xTariq-dev
 * program name: print alphabet in reverse order
 */

/**
 * main - print the alphabt from z to a in lower case
 *
 * Return: Always 0
 */
int main(void)
{

	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
