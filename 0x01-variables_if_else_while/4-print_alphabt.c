#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * Author: 0xTariq-dev
 * program name: print alphabt
 */

/**
 * main - print the alphabt from a to z in lower case exept
 * 	q and e letters
 *
 * Return: Always 0
 */
int main(void)
{

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
