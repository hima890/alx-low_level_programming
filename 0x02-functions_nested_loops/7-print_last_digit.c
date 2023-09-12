#include "main.h"
/* more headers go here */

/**
 * _print_last_digit - Returns the value of the last digit.
 * Return: the value of the last digit.
 * @integer: to be check
*/

int _print_last_digit(int integer)
{
int lastDigit = integer % 10;
return (lastDigit);
}
