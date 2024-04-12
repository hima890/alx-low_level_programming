#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the array
 *
 * Return: A pointer to the created sorted hash table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(size * sizeof(shash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - Adds an element to the sorted hash table
 * @ht: The sorted hash table
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: 1 if successful, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *temp_node, *prev_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	temp_node = ht->array[index];
	prev_node = NULL;

	while (temp_node != NULL && strcmp(temp_node->key, key) < 0)
	{
		prev_node = temp_node;
		temp_node = temp_node->next;
	}

	if (temp_node != NULL && strcmp(temp_node->key, key) == 0)
	{
		free(temp_node->value);
		temp_node->value = strdup(value);
		if (temp_node->value == NULL)
			return (0);
		return (1);
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = temp_node;
	if (prev_node == NULL)
		ht->array[index] = new_node;
	else
		prev_node->next = new_node;

	if (prev_node == NULL)
	{
		if (ht->shead == NULL)
		{
			ht->shead = new_node;
			ht->stail = new_node;
		}
		else if (strcmp(new_node->key, ht->shead->key) < 0)
		{
			new_node->snext = ht->shead;
			ht->shead->sprev = new_node;
			ht->shead = new_node;
		}
		else
		{
			temp_node = ht->shead;
			while (temp_node->snext != NULL && strcmp(new_node->key, temp_node->snext->key) > 0)
				temp_node = temp_node->snext;

			new_node->snext = temp_node->snext;
			if (temp_node->snext == NULL)
				ht->stail = new_node;
			else
				temp_node->snext->sprev = new_node;

			new_node->sprev = temp_node;
			temp_node->snext = new_node;
		}
	}
	else
	{
		if (new_node->next == NULL)
			ht->stail = new_node;

		new_node->sprev = prev_node;
		new_node->snext = prev_node->snext;
		if (prev_node->snext != NULL)
			prev_node->snext->sprev = new_node;
		prev_node->snext = new_node;
	}

	return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key from the sorted hash table
 * @ht: The sorted hash table
 * @key: The key
 *
 * Return: The value associated with the key, or NULL if key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->next;

	return (node != NULL ? node->value : NULL);
}

/**
 * shash_table_print - Prints the sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (node = ht->shead; node != NULL; node = node->snext)
	{
		if (!first)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		first = 0;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints the sorted hash table in reverse order
 * @ht: The sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (node = ht->stail; node != NULL; node = node->sprev)
	{
		if (!first)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		first = 0;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *next;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			next = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = next;
		}
	}

	free(ht->array);
	free(ht);
}
