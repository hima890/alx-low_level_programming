#include "main.h"
/* more headers goes there */

/**
 * _isupper - function that checks for uppercase character..
 * @c: integer input
 * Return: 1 if c is uppercase
 * Returns 0 otherwise
*/

int _isupper(int c)
{
int flag;
if (c >= 65 && c <= 90)
{
flag = 1;
}
else
{
flag = 0;
}

return (flag);
}
