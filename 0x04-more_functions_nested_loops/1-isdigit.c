#include "main.h"
/* more headers goes there */

/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @c: integer input
 * Return: 1 if c is a digit
 * Return 0 otherwise
*/

int _isdigit(int c)
{
int flag;
if (c >= 48 && c <= 75)
{
flag = 1;
}
else
{
flag = 0;
}

return (flag);
}
