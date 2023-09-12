#include "main.h"
/* more headers goes there */

/**
 * print_alphabet - Writes the a alphabet to the standard output.
 * With new line at the end
 * (27 chars long)
*/

void print_alphabet(void)
{
char letter;
char newline = '\n';

for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter); /* Write one character at a time*/
}

_putchar(newline); /* Write a final newline character*/
}
