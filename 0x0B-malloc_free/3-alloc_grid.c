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
	int **arr, i, x;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(arr[i]);

			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (x = 0; x < width; x++)
			arr[i][x] = 0;
	}
	return (arr);
}

