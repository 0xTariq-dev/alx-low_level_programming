#include"main.h"

/**
 * _islower - pchecks if the letter is lowercase.
 * c - the variable to store the value to check
 *
 * Return: On success 1.
 *		On error 0.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);

}
