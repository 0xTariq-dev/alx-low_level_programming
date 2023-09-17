/*
 * Author: 0xTariq-dev
 * File: max_palindrome.c
 */
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>
char *rev_string(char *s)
{
        int len = strlen(s), start = 0, end = len - 1;
        char *r = malloc(len + 1);

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

	for (n1 = 999; n1 > 99; n1--)
	{
		for (n2 = 999; n2 > 99; n2--)
		{
			product = n1 * n2;
			sprintf(str, "%d", product);
			rev_str = rev_string(str);
			if (strncmp(str, rev_str, strlen(str)) == 0)
			{
				if (product > max)
					max = product;
			}
			free(rev_str);
		}
	}
	return (max);
}
int main(void)
{
	FILE *f = fopen("102-result", "w");
	int max = max_palindrome();

	if (f == NULL)
		printf("Failed to open file.\n");
	printf("%d\n", max);
	fprintf(f, "%d", max);
	fclose(f);
	return 0;
}
