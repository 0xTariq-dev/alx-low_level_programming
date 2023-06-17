#include <stdio.h>

/*
 * Author: 0xTariq-dev
 * program name: print combination of three digits
 */

/**
 * main - print all combination of three digits and exclude all
 * the repeated combinations using for loops.
 *
 * Return: Always 0
 */
int main(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 < 8; num1++)
	{
		for (num2 = num1 + 1; num2 < 9; num2++)
		{
			for (num3 = num2 + 1; num3 < 10; num3++)
			{
				putchar((num1 % 10) + '0');
				putchar((num2 % 10) + '0');

				if (num1 == 8 && num2 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
