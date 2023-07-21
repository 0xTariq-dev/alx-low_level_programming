#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdio.h>
/*
 * file: function_pointers.h
 * author: 0xTariq-dev
 * describtion: Header file contains declarations for functions
 *		used in the 0x0F-functions_pointers project
 */

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
