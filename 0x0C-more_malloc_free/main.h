#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
/*
 * file: main.h
 * author: 0xTariq-dev
 * describtion: Header file contains declarations for functions
 * 		used in the 0x0C-more_malloc_free
 */

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

#endif