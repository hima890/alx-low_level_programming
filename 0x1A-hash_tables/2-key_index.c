#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in a hash table array
 * @key: The key
 * @size: The size of the array of the hash table
 *
 * Return: The index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* Use the hash_djb2 function to generate the hash value */
	unsigned long int hash_value = hash_djb2(key);

	/* Compute the index where the key/value pair should be stored */
	unsigned long int index = hash_value % size;

	return (index);
}
