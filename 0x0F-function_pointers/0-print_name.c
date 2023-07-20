/*
 * Author: 0xTariq-dev
 * File: 0-print_name.c
 */

#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: A pointer to a value to be printed.
 * @f: A pointer to a function to print the name.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
