#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _puts_recursion - This function prints a string
* followed by a newline character using recursion.
* @s: String
*/


void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
