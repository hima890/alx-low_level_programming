#include "main.h"
#include <stdio.h>
/**
  * print_most_numbers - Print the numbers since 0 up to 9
  * no 0 or 4
*/
void print_most_numbers(void)
{
int x;

for (x = 0; x < 10; x++)
{
if (x != 2 && x != 4)
{
_putchar(x + '0');
}
}
_putchar('\n');
}
