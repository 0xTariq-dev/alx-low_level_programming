#include "main.h"
/**
 * print_times_table - prints the times table of the input starting with 0.
 * @n: The value of times table to be printed.
 */
void print_times_table(int n)
{
	int i, j, p, s, d = 0, m_d = 0, f = i * 0, f_d = 0;

	if (n < 0 || n > 15)
	{
		return;
	}
	p = n * n;
	while (p > 0)
	{
		m_d++;
		p /= 10;
	}
	for (i = 0; i <= n; i++)
	{
		while (f > 0)
		{
			f_d++;
			f /= 10;
		}
		printf("%*d", f_d == 0 ? 1 : f_d, i * j);
		for (j = 0; j <= n; j++)
		{
			prod = i * j;
			while (p > 0)
			{
				d++;
				p /= 10;
			}
			s = m_d - d;
			printf("%*d", s + d, i * j);
			if (j != n)
			{
			printf(", ");
			}
		}
		printf("\n");
	}
}
