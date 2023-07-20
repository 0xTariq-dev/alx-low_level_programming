/*
 * Author: 0xTariq-dev
 * File: 2-int_index.c
 */

#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array: A pointer to an array of elements.
 * @size: The size of the array.
 * @cmp: A pointer to the function to be used.
 *
 * Return: The index of the first element that cmp function
 *	  Or -1 if no matches are found or array size is 0 or less.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);
	if (!array)
		return (-1);
	if (size <= 0)
		return (-1);

	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);
	if (i == size)
		return (-1);

	return (-1);
}
