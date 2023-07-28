/*
 * Author: 0xTariq-dev
 * File: 100-first.c
 */

#include <stdio.h>

void print_first(void) __attribute__((constructor));
/**
 * print_first - Prints a string pefore the main function execution.
 */
void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
