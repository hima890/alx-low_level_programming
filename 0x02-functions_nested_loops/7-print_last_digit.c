#include "main.h"
#include <stdio.h>
/* more headers go here */

/**
 * print_last_digit - Returns the value of the last digit.
 * Return: the value of the last digit.
 * @integer: to be check
*/

int print_last_digit(int integer)
{
int lastDigit = integer % 10;

if (lastDigit < 0)
{
lastDigit = lastDigit * -1;
}

_putchar(lastDigit + '0');
return (lastDigit);
}
