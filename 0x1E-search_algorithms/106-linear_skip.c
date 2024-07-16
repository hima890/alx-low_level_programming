#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 *               using the express lane and linear search.
 * @list: Pointer to the head of the skip list.
 * @value: The value to search for.
 *
 * Return: Pointer to the first node where value is located, or NULL if not found.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *prev;

	if (list == NULL)
		return (NULL);

	node = list;

	/* Use the express lane */
	while (node->express != NULL && node->express->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", node->express->index, node->express->n);
		node = node->express;
	}

	/* Handle case where express lane overshoots or ends */
	if (node->express != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n", node->express->index, node->express->n);
	}

	prev = node;
	if (node->express != NULL)
		node = node->express;
	else
		while (node->next != NULL)
			node = node->next;

	printf("Value found between indexes [%lu] and [%lu]\n", prev->index, node->index);

	/* Linear search within the block */
	node = prev;
	while (node != NULL && node->index <= node->index + sqrt(node->index) && node->n < value)
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
