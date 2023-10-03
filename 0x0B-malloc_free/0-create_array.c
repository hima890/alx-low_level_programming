#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of characters
 *  and initializes it with a specific character.
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 * Return: A pointer to the newly created array,
 *  or NULL if size is 0 or if malloc fails.
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr = (char *) malloc(size * sizeof(char));

if (size == 0)
{
return (NULL);
}

if (ptr == NULL)
{
return (NULL);
}


for (i = 0; i < size; i++)
{
ptr[i] = c;
}
return (ptr);
}
