/*
 * Author: 0xTariq-dev
 * File: 3-cp.c
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * exit97 - Prints error message and exit.
 */
void exit97(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
/**
 * exit98 - Prints error message and exit.
 * @s: the first file name passed.
 */
void exit98(char *s)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
	exit(98);
}
/**
 * exit99 - Prints error message and exit.
 * @s: the second file name passed.
 */
void exit99(char *s)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
	exit(99);
}
/**
 * exit100 - Prints error message and exit.
 * @desc: the first file name passed.
 */
void exit100(int desc)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", desc);
	exit(100);
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
	int src, tar, cont, wr, cl;
	char buf[1024];
	mode_t msk = umask(0);

	if (argc != 3)
		exit97();

	src = open(argv[1], O_RDONLY);
	if (src == -1)
		exit98(argv[1]);

	cont = read(src, buf, 1024);
	if (cont == -1)
		exit99(argv[2]);

	tar = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (tar == -1)
		exit99(argv[2]);

	while ((cont = read(src, buf, 1024)) > 0)
	{
		wr = write(tar, buf, cont);
		if (wr == -1)
			exit99(argv[2]);
	}
	if (cont == -1)
		exit98(argv[1]);

	cl = close(src);
	if (cl == -1)
		exit100(-1);
	cl = close(tar);
	if (cl == -1)
		exit100(-1);

	umask(msk);
	return (0);
}
