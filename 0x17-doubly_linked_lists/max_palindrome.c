/*
 * Author: 0xTariq-dev
 * File: max_palindrome.c
 */
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>
#include <math.h>
/**
 * rev_string - Reverse a string.
 * @s: The string to reverse.
 *
 * Return: A pointer to the reversed string.
 */
char *rev_string(char *s)
{
        int len = strlen(s), start = 0, end = len - 1;
        char *r = malloc(len + 1);

	if (r == NULL)
		printf("Error allocating memory");
	/* Iterate over the string backwards and save a reversed copy.*/
        while (start < end)
        {
                r[start] = s[end];
		r[end] = s[start];
		start++, end--;
        }
	r[len] = '\0';
	return r;
}
/**
 * max_palindrome - Find the max palindrome of the product of 2 numbers.
 * @n1: The first number.
 * @n2: The second number.
 *
 * Return: max palindrome number.
 */
unsigned long int max_palindrome(void)
{
	unsigned long int product = 0, max = 0, n1 = 1, n2;
	int digits = 0;
	char str[50], *rev_str;

	/*Getting the max numbers from the user*/
	printf("Find the max palindrome product of two numbers\n");
	printf("Enter the max number of digits for the two numbers: ");
	scanf("%d", &digits);
	for (; digits > 0; digits--)
		n1 *= 10;
	n1 -= 1;
	n2 = n1;
	/* Nested loops to decrement the two numbers in the range of digits count*/
	for (; n1 > (n1 / 10); n1--)
	{
		for (n2 = n1; n2 > (n2 / 10); n2--)
		{
			product = n1 * n2; /*Calculate the product*/
			sprintf(str, "%ld", product); /*Converting the number to string*/
			rev_str = rev_string(str); /*Reversing the string*/
			if (product < max)
				break;
			/*Checking if the string is palindrome*/
			if (strcmp(str, rev_str) == 0)
			{
				/*Adding the new value to max if it's bigger*/
				if (product > max)
					max = product;
			}
			free(rev_str); /* Freeing the allocated memory*/
		}
	}
	return (max);
}
/**
 * main - Saves the max pailndrome number to the target file.
 *
 * Return: 0 on success.
 */
int main(void)
{
	char c;
	unsigned long int max = max_palindrome(); /*Getting the max palindrome*/

	printf("Do you want to print the number on screen?\n");
	printf("Enter 'y' to print or 'n' to save it to a file: ");
	scanf(" %c", &c);

	if (c == 'n')
	{
		FILE *f = fopen("max_palindrome", "w"); /*Open the file for writing*/
		if (f == NULL) /*Checking if opening file failed*/
			printf("Failed to open file.\n");
		fprintf(f, "%ld", max); /*Writing the output in the target file*/
		fclose(f); /*Closing the file*/
	}
	printf("%ld\n", max);

	return 0;
}
