#include "main.h"
#include <stdio.h>
/* more headers go here */

/**
 * print_to_98 - print from n to 98
 * @n: integer
*/
void print_to_98(int n)
{
int i;
for (i = n; i <= 98; i++)
{
if (i >= 98)
{
printf("%d", i);
}
else
{
printf("%d ,", i);
}
}
putchar('\n');
}
