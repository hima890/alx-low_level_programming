#include "main.h"
#include <stdio.h>

/**
 * print_square - function that prints a square, followed by a new line.
 * @size: Size of the square (number of rows and columns)
 */
void print_square(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
