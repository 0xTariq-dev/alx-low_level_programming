#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to standard output
 * @c: the character to print
 *
 * return: 1 on success and -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
