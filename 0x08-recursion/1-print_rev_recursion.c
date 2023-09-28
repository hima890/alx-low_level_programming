#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _print_rev_recursion - This function prints a string
* in reverse order using recursion.
* @s: String
*/

void _print_rev_recursion(char *s)
{
if (*s == '\0')
return;


_print_rev_recursion(s + 1);


_putchar(*s);
}
