#include "main.h"
/* more headers goes there */

/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 * @str: takes a pointer to a char
 * Return: the string with new line
*/

void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
