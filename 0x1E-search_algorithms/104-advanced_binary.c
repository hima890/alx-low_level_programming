#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 * @array: The array to be printed
 * @low: The starting index of the subarray to print
 * @high: The ending index of the subarray to print
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i > low)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * recursive_binary_search - Searches for a value in a sorted array
 *                           of integers using a recursive binary search
 * @array: Pointer to the first element of the array to search in
 * @low: The starting index of the subarray to search
 * @high: The ending index of the subarray to search
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if value is not present
 */
int recursive_binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (low > high)
		return (-1);

	print_array(array, low, high);

	mid = low + (high - low) / 2;

	if (array[mid] == value)
	{
		if (mid == low || array[mid - 1] != value)
			return ((int)mid);
		return (recursive_binary_search(array, low, mid, value));
	}
	else if (array[mid] > value)
	{
		if (mid == 0)
			return (-1);
		return (recursive_binary_search(array, low, mid - 1, value));
	}
	else
	{
		return (recursive_binary_search(array, mid + 1, high, value));
	}
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 *                   using an advanced binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where value is located, or -1 if value is
 * not present
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (recursive_binary_search(array, 0, size - 1, value));
}
