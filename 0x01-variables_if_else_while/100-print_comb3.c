#include <stdio.h>

/*
 * Author: 0xTariq-dev
 * program name: print combination of two digits
 */

/**
 * main - print all combination of two digits and exclude all
 * the repeated combinations using two nested for loops.
 *
 * Return: Always 0
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 9; num1++)
	{
		for (num2 = num1 + 1; num2 < 10; num2++)
		{
			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 == 8 && num2 == 9)
				continue;

			putchar(',');
			putchar(' ');

		}
	}

	putchar('\n');

	return (0);
}
