/*
 * Author: 0xTariq-dev
 * File: 11-print_to_98.c
 */

#include "main.h"

/**
 * print_to_98 - prints the numbers till the number 98.
 * @n: The value of integer to be printed.
 *
 * Return: The result of the addition
 */
void print_to_98(int n)
{
	for (n < 0; n <= 98; n++)
	{
		printf("%d, ", n);
	}
	for (n > 98; n >= 98; n--)
	{
		printf("%d, ", n);
	}
	printf("\n");
}
