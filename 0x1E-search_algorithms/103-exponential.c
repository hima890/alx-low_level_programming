#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @low: The starting index of the subarray to search
 * @high: The ending index of the subarray to search
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if value is not
 * present or array is NULL
 */
int binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i > low)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");

		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return ((int)mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where value is located, or -1 if value is not
 * present or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	int result;

	if (array == NULL)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	size_t low = bound / 2;
	size_t high = bound < size ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	result = binary_search(array, low, high, value);

	return (result);
}
