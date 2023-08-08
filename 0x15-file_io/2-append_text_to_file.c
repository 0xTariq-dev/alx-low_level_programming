/*
 * Author: 0xTariq-dev
 * File: 2-append_text_to_file.c
 */

#include "main.h"

/**
 * append_text_to_file - Appends text at the end of the file.
 * @filename: A pointer to the file to create and write to.
 * @text_content: The string to write to the file.
 *
 * Return: 1 on success or -1 if :
 *		1- the file doesn't exist.
 *		2- file name is NULL.
 *		3- you don't have permission to modify the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, cont, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (; text_content[i]; i++)
			;
	}
	op = open(filename, O_WRONLY | O_APPEND);
	cont = write(op, text_content, i);

	if (op == -1 || cont == -1)
		return (-1);

	close(op);
	return (1);
}
