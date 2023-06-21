#include "main.h"
#include "_putchar.c"
/*
 * Author: 0xTariq-dev
 * File: 1-alphabet.c
 */

/**
 * print_alphabet - prints the lowercase alphabet followed by a new line
 */

int l = 'a';

void print_alphabet(void)
{
	for (l = 'a'; l <= 'z';)
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
