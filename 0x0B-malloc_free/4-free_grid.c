/*
 * Author: 0xTariq-dev
 * File: 4-free_grid.c
 */

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - Frees a two dimensional array of integers.
 * @grid: The number of columns.
 * @height: the number of rows.
 *
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;

	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}

