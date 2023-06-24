#include "main.h"
/**
 * print_times_table - prints the times table of the input starting with 0.
 * @n: The value of times table to be printed.
 */
void print_times_table(int n)
{
	int num, multi, prod;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			for (multi = 0; multi <= n; multi++)
			{
				prod = num * multi;

				if (multi == 0)
				{
					_putchar('0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');

					if (prod >= 100)
					{
						_putchar((prod / 100) + '0');
					}
					else
					{
						_putchar(' ');
					}
					if (prod >= 10)
					{
						_putchar(((prod / 10)) % 10 + '0');
					}
					else
					{
						_putchar(' ');
					}
					_putchar((prod % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
