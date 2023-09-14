#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Print the numbers from 0 to 14, repeated 10 times
 */
void more_numbers(void)
{
int x, i;

for (i = 0; i < 10; i++)
{
for (x = 0; x <= 14; x++)
{
if (x >= 10)
{
putchar(x / 10 + '0');
}
putchar(x % 10 + '0');
}
putchar('\n');
}
}
