/*
 * Author: 0xTariq-dev
 * File: 1-array_iterator.c
 */

#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter on each element
 *		of an array.
 * @array: A pointer to an array of elements.
 * @size: The size of the array.
 * @action: A pointer to the function to be used
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;

	for (; i < size; i++)
		action(array[i]);
}
