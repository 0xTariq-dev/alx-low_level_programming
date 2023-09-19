#include"main.h"

/**
 * _isalpha - checks if the character is letter.
 * @c: the variable to store the value to check.
 *
 * Return: On success 1.
 *		On error 0.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) ||
		(c >= 65 && c <= 90))
	{
		return (1);
	}
	else
		return (0);

}
