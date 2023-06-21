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
	int x;

	for (n = x; x <= '98'; x++)
	{
		printf("%d, ", x);
	}
	for (n = x; x >= '98'; x--)
	{
		printf("%d, ", x);
	}
	printf("\n");
}
