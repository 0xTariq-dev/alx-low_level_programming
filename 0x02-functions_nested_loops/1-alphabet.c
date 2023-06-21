#include "main.h"
#include "_putchar.c"
/*
 * Author: 0xTariq-dev
 * File: 1-alphabet.c
 */

/**
 * print_alphabet - prints the lowercase alphabet followed by a new line
 */

void print_alphabet(void)
{
	int l;

	for (l = 'a'; l <= 'z';)
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
