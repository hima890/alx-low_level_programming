#include "main.h"
/* more headers goes there */

/**
 * print_alphabet_x10 - Writes the a alphabet to the standard output.
 * With new line at the each end line.
*/

void print_alphabet_x10(void)
{
char letter;
int counter;
char newline = '\n';
for (counter = 0; counter <= 10; counter++)
{

for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter); /* Write one character at a time*/
}

_putchar(newline); /* Write a final newline character*/
}

}
