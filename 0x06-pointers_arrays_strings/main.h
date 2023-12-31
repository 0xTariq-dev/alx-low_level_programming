#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
/*
 * file: main.h
 * author: 0xTariq-dev
 * describtion: Header file contains declarations for functions
 * 		used in the 0x02-functions_nested_loops project
 */

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *s);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int n);
int _putchar(char c);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);

#endif
