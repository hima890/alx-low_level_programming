#include "main.h"
#include <stdio.h>
/**
 * puts_half - function that prints half of a string,
 *  followed by a new line.
 * @str: A pointer to a string.
 */
void puts_half(char *str)
{
int a;
int length = 0;
while (str[length] != '\0')
{
length++;
}
if (length % 2 == 1)
{
length++;
}
for (a = length / 2; str[a] != '\0'; a++)
{
_putchar(str[a]);
}
_putchar('\n');
}
