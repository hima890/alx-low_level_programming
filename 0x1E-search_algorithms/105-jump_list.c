#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted singly linked list
 *             using the Jump search algorithm.
 * @list: Pointer to the head of the list.
 * @size: Number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: Pointer to the first node where value is located, or NULL
 * if not found.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, prev;
	listint_t *node, *prev_node;

	if (list == NULL || size == 0)
		return (NULL);

	step = (size_t)sqrt(size);
	node = list;
	prev = 0;

	/* Jump search */
	while (node->index + step < size && node->n < value)
	{
		size_t i;

		prev_node = node;
		prev = node->index;
		for (i = 0; i < step && node->next != NULL; i++)
		{
			node = node->next;
		}
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, node->index);

	/* Linear search within the block */
	node = prev_node;
	while (node != NULL && node->index <= node->index + step && node->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
		node = node->next;
	}

	if (node != NULL && node->n == value)
	{
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
		return (node);
	}
	return (NULL);
}
