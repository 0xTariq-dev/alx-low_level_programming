#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * Author: 0xTariq-dev
 * program name: positive or nigative 
 * including the standard and time library 
 */

/* 
 * main - print the value of n and identifies wether it's postitive, negative or zero
 * 
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* 
	 * The program consists of three conditions
	 * that evaluates the value of n if it's positive, negative or zero  
	 */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n ==0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
