#include <stdlib.h>
#include <stdio.h>
/*
 * Author: 0xTariq-dev
 * program name: Print alphabets
 */

/**
 * main - print the alphabet in lower and Upper case
 *
 * Return: Always 0
 */
int main(void)
{

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter)

	putchar('\n');

	return (0);
}
