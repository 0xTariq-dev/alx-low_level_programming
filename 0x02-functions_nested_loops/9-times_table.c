#include"main.h"

/**
 * times_table - prints the 9 times table
 */

void times_table(void)
{
	int number, multi, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		
		for (multi = 1; multi <= 9; multi++)
		{
			prod = number * multi;
			if ((prod / 10) > 0)
				_putchar((prod / 10) + '0');

			else
				_putchar(' ');
				_putchar((prod % 10) + '0');

			if (multi < 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
