#include "search_algos.h"

/**
 * advanced_binary - searches for a value in a sorted array of integers.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 * Return: The first index where value is located
 *			or -1 if value is not present.
*/
int advanced_binary(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1, mid, i, j;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = (start + end) / 2;
		j = mid - 1;
		if (array[mid] == value)
		{
			while (array[j] == value && j != 0)
			{
				return (j);
			}
			return (mid);
		}
		else if (array[mid] > value)
			end = mid - 1;
		else
			start = mid + 1;
	}
	return (-1);
}
