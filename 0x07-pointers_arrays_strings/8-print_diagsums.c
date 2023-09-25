#include <stdio.h>

void print_diagsums(int *a, int size)
{
int diag1_sum = 0;
int diag2_sum = 0;

for (int i = 0; i < size; i++)
{
diag1_sum += a[i * size + i];
diag2_sum += a[i * size + (size - 1 - i)];
}

printf("Sum of main diagonal: %d\n", diag1_sum);
printf("Sum of secondary diagonal: %d\n", diag2_sum);
}
