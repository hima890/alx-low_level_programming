#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 *
 * @array: The array to search in.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the comparison function to be used.
 *
 * Description:
 *   This function searches for an integer in the given array by applying the
 *   provided comparison function to each element. It returns the index of the
 *   first element for which the comparison function does not return 0.
 *
 *   If no element matches, the function returns -1.
 *   If the size is less than or equal to 0, the function also returns -1.
 *
 * Return: Index of the first matching element, or -1 if no match is found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
if (size >= 0)
{
if (array != NULL && cmp != NULL)
{

/* code */
int i;
for (i = 0; i < size; i++)
{
/* code */
if (cmp(array[i]) != 0)
{
/* code */
return (i);
}

}
return (-1);

}

}

return (-1);

}
