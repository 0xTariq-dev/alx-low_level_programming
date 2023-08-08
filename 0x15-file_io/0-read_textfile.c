/*
 * Author: 0xTariq-dev
 * File: 0-read_textfile.c
 */

#include "main.h"
#include <stdio.h>

/**
 * read_textfile - Reads a text file and prints it to the standard output.
 * @filename: A pointer to the file to read from.
 * @letters: The number of letters to print.
 *
 * Return: The number of letters it could read or print or 0 if :
 *		1- the file can't be open.
 *		2- file name is NULL.
 *		3- write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *file;
	ssize_t i;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	file = malloc(sizeof(char) * letters);
	i = read(fd, file, letters);

	if (file == NULL || fd == -1)
		return (0);
	if (i == -1)
	{
		free(file), close(fd);
		return (0);
	}
	write(STDOUT_FILENO, file, i);
	free(file), close(fd);
	return (i);
}
