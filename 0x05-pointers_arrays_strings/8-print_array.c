#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints
 *  n elements of an array of integers,
 *  followed by a new line.
 * @a: A pointer to a array.
 * @n:  the number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
for (int i = 0; i < n; i++) {
_putchar(a[i]);
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
