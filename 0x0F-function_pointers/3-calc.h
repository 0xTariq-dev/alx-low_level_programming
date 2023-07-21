#ifndef CALC_H
#define CALC_H

#include <stdio.h>
/*
 * file: 3-calc.h
 * author: 0xTariq-dev
 * describtion: Header file contains declarations for functions
 *		used in the 0x0F-functions_pointers project
 */

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int _putchar(char c);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
