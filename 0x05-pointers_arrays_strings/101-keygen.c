/*
 * Author: 0xTariq-dev
 * File: 101-keygen.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Creates a random password for the 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	int pass[100];
	int i, x, sum = 0;

	srand(time(NULL));

	for (i = 0 ; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		x = 2772 - sum - '0';

		if (x < 78)
		{
			sum += x;
			putchar(x + '0');
			putchar('\n');
			break;
		}
	}

	return (0);
}
