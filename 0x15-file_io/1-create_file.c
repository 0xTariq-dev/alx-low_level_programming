/*
 * Author: 0xTariq-dev
 * File: 1-create_file.c
 */

#include "main.h"

/**
 * create_file - Creats a text file and writes a string to it.
 * @filename: A pointer to the file to create and write to.
 * @text_content: The string to write to the file.
 *
 * Return: 1 on success or -1 if :
 *		1- the file can't be created or written.
 *		2- file name is NULL.
 *		3- write fails or does not write the expected amount of bytes.
 */
int create_file(const char *filename, char *text_content)
{
	int op, cont, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (; text_content[i]; i++)
			;
	}
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC);
	cont = write(op, text_content, i);

	if (op == -1 || cont == -1)
		return (-1);

	close(op);
	return (1);
}
