/*
 * Author: 0xTariq-dev
 * File: 3-alloc_grid.c
 */

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid - Returns a pointer to a two dimensional array of integers.
 * @width: The number of columns.
 * @height: the number of rows.
 *
 * Return: A pointer to the 2D array or a NULL if
 *	width or height is 0 or failure.
 */

int **alloc_grid(int width, int height)
{
	int **arr, i = 0, x = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);
	for (; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == NULL)
			return (NULL);
		for (; x < width; x++)
		{
			arr[i][x] = 0;
		}
		for (i = 0; i < height; i++)
			free(arr[i]);
		for (x = 0; x < width; x++)
			free(arr[x]);
	}
	return (arr);
}

