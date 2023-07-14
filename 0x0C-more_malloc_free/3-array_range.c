/*
 * Author: 0xTariq-dev
 * File: 3-array_range.c
 */

#include "main.h"
#include <stdlib.h>

/**
 * *array_range - Creates an array of integers.
 * @min: The minimum value to start with.
 * @max: The maximum value to end with.
 *
 * Return: A pointer to the new created array.
 */

int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
