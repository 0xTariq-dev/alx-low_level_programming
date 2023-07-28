/*
 * Author: 0xTariq-dev
 * File: 100-first.c
 */

#include <stdio.h>

void first(void) __attribute__((constructor));
/**
 * print_first - Prints a string pefore the main function execution.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
