#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/*
 * file: main.h
 * author: 0xTariq-dev
 * describtion: Header file contains declarations for functions
 *		used in the 0x15-file_io project
 */

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif
