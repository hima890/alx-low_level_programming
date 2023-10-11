#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array.
 *
 * @array: The array on which the function will be executed.
 * @size: The size of the array.
 * @action: A pointer to the function to be executed on each element.
 *
 * Description:
 *   This function takes an array, its size, and a function pointer
 * as parameters.
 *   It then calls the provided function on each element of the array.
 *
 * Return: None (void)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
{
/* code */
action(array[i]);

}

}
