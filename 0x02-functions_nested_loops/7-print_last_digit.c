#include "main.h"
/* more headers go here */

/**
 * print_last_digit - Returns the value of the last digit.
 * Return: the value of the last digit.
 * @integer: to be check
*/

int print_last_digit(int integer)
{
int lastDigit = integer % 10;
char lastDigitChar = '0' + lastDigit;
_putchar(lastDigitChar);
return (lastDigitChar);
}
