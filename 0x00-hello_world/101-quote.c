/*
 * File: 101-quote.c
 * Auth: 0xTariq-dev
 */

#include <unistd.h>
/**
 * main - Prints "and that piece of art is useful\" - Dora Korpar, 2015-10-19"
 *	followed by a new line, to standard error.
 *
 * Return: Always 1.
 */
int main(void)
{
	char m[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STD_FILENO, m, sizeof(m) -1);
	
	return (1);	
}
