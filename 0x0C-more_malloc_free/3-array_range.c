#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Creates an array of integers from min to max.
 *
 * @min: The minimum value (inclusive) for the array.
 * @max: The maximum value (inclusive) for the array.
 *
 * Description:
 *   This function creates an array of integers containing all values from @min
 *   to @max (inclusive), ordered from @min to @max. It returns a pointer to
 *   the newly allocated memory containing the array.
 *
 *   If @min is greater than @max, the function returns NULL.
 *   If the allocation with malloc fails, the function also returns NULL.
 *
 * Return:
 *   - On success, a pointer to the newly allocated array.
 *   - On failure, if @min > @max, or if malloc fails, NULL.
 *
 * Notes:
 *   - The caller is responsible for freeing the allocated memory when it's no
 *     longer needed to prevent memory leaks.
 */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int *array_range(int min, int max)
{
int num_elements;
int *array;
int i;
if (min > max)
{
return (NULL);
}

num_elements = max - min + 1;

array = malloc(num_elements *sizeof(int));

if (array == NULL)
{
return (NULL);
}
for (i = 0; i < num_elements; i++, min++)
{
array[i] = min;
}

return (array);
}
