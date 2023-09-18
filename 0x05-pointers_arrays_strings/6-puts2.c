#include "main.h"
/* more headers goes there */

/**
 * puts2 - function that prints a string, followed by a new line, to stdout.
 * @str: takes a pointer to a char
 * Return: the string with new line
*/

void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
