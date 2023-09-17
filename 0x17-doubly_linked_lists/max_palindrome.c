/*
 * Author: 0xTariq-dev
 * File: max_palindrome.c
 */
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>
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
int max_palindrome(void)
{
	int product = 0, max = 0, n1, n2;
	char str[7], *rev_str;

	/*Getting the max numbers from the user*/
	printf("Enter the max value: \n");
	scanf("%d", &n1);
	/* Nested loops to decrement the two numbers in the range of 999 to 99*/
	for (; n1 > (n1 / 10); n1--)
	{
		for (n2 = n1; n2 > (n2 / 10); n2--)
		{
			product = n1 * n2; /*Calculate the product*/
			sprintf(str, "%d", product); /*Converting the number to string*/
			rev_str = rev_string(str); /*Reversing the string*/
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
	FILE *f = fopen("102-result", "w"); /*Open the file for writing*/
	int max = max_palindrome(); /*Getting the max palindrome*/

	if (f == NULL) /*Checking if opening file failed*/
		printf("Failed to open file.\n");
	fprintf(f, "%d", max); /*Writing the output in the target file*/
	fclose(f); /*Closing the file*/
	return 0;
}
