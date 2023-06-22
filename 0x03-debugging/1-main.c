#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;
	/* 
	 * i value don't increment the while loop will go with no end.
	 */ 

	while (i < 10)
	{
		 putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
