#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * print_rev - function that prints a string, in reverse, followed by a new line.
 * @s: takes a pointer to a char
*/

void print_rev(char *s)
{
int count = 0;
int i;
for (i = 0; s[i] != '\0'; i++)
{
count++;
}

for (i = count - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
