/*
 * Author: 0xTariq-dev
 * File: 3-cp.c
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *creat_buf(char *tar_file);

/**
 * creat_buf - Creates a buffer of characters to store a copy of the src file.
 * @tar_file: The target file to store the buffer.
 *
 * Return: A pointer to the created buffer.
 */
char *creat_buf(char *tar_file)
{
	char *buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(2, "Error: Can't write to file %s\n", tar_file);
		exit(99);
	}
	return (buf);
}
/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to close.
 *
 * Return: Nothing.
 */
void close_file(int fd)
{
	int file = close(fd);

	if (file == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}
/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments passed to the program.
 * @argv : The array of pointers to the arguments passed.
 *
 * Return: 0 on success or if :
 *		1- the file doesn't exist - exit code 98.
 *		2- the number of arguments isn't correct - exit code 97.
 *		3- if target file can't be created or written to - exit code 99
 *		4- you don't have permission to modify the file.
 */
int main(int argc, char **argv)
{
	int src, tar, cont, wr;
	char *buf;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = creat_buf(argv[2]);
	src = open(argv[1], O_RDONLY);
	cont = read(src, buf, 1024);
	tar = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (cont > 0)
	{
		if (src == -1 || cont == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		wr = write(tar, buf, cont);
		if (tar == -1 || wr == -1)
		{
			dprintf(2, "ERROR: can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		cont = read(src, buf, 1024);
		tar = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(buf);
	close_file(src);
	close_file(tar);
	return (0);
}
