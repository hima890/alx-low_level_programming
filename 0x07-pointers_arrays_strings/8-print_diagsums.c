#include <stdio.h>
/**
 * print_diagsums - print the sum the diognals of a square matrix of integer
 *
 * @a: This is the array to sum
 * @size: This is the length of the array
 */
void print_diagsums(int *a, int size)
{
int diag1_sum = 0;
int diag2_sum = 0;
int i;
for (i = 0; i < size; i++)
{
diag1_sum += a[i * size + i];
diag2_sum += a[i * size + (size - 1 - i)];
}

printf("%d, %d\n", diag1_sum, diag2_sum);
}
