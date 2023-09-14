#include "main.h"
#include <stdio.h>
/**
  * print_most_numbers - Print the numbers since 0 up to 14
*/
void print_most_numbers(void)
{
int x, i;
for (i = 0; i < 10; i++)
{
for (x = 0; x < 15; x++)
{
_putchar(x + '0');

}
_putchar('\n');
}
}
