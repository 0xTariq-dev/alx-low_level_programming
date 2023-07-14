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
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min));

	for (i = 0; i < (max - min); i++)
		arr[i] = min++;

	return (arr);
}
