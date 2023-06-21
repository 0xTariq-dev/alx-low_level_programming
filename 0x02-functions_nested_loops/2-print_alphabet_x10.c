#include"main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet ten times
 *		followed by a new line.
 */

void print_alphabet_x10(void)
{
	int n = 0, l;

	while (n++ <= 9)
	{
		for (l = 'a'; l <= 'z'; l++)

			_putchar(l);
		_putchar('\n');
	}
}
