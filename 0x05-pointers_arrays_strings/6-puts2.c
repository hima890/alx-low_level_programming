#include "main.h"
#include <stdio.h>
/**
 * puts2 - Prints every other character of a string.
 * @str: A pointer to a string.
 */
void puts2(char *s)
{
int a;

for (a = 0; s[a] != '\0'; a++)
{
if (a % 2 == 0)
{
_putchar(s[a]);
}
}
_putchar('\n');
}
