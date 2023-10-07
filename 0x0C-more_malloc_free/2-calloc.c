#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 *
 * @nmemb: The number of elements in the array.
 * @size: The size in bytes of each element.
 *
 * Description:
 *   This function allocates memory for an array containing @nmemb elements,
 *   where each element has a size of @size bytes. It initializes the memory
 *   to zero and returns a pointer to the allocated memory.
 *
 *   If either @nmemb or @size is 0, the function returns NULL.
 *   If the allocation with malloc fails, the function also returns NULL.
 *
 * Return:
 *   - On success, a pointer to the newly allocated memory.
 *   - On failure or if @nmemb or @size is 0, NULL.
 *
 * Notes:
 *   - The caller is responsible for freeing the allocated memory when it's no
 *     longer needed to prevent memory leaks.
 *   - The memory allocated by _calloc is set to zero, which is different from
 *     the behavior of malloc, which may contain uninitialized values.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
/* Implementation goes here */
int *ptr;
size_t total_size;
unsigned int i;
if (nmemb == 0 || size == 0)
{
/* code */
return (NULL);
}

total_size = nmemb * size;
ptr = malloc(total_size);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
*(ptr + i) = 0;
}

return (ptr);




}
