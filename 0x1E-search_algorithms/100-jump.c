#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where value is located, or -1 if value
 * is not present or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step;
	size_t prev;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	step = (size_t)sqrt(size);
	prev = 0;

	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] >= value)
			break;
		prev += step;
	}

	size_t start = (prev >= step) ? prev - step : 0;
	size_t end = (prev < size) ? prev : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", start, end);

	for (i = start; i <= end && array[i] <= value; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}

	return (-1);
}
