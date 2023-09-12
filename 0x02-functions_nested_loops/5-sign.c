#include "main.h"
/* more headers go here */

/**
 * print_sign - prints the sign of a number.
 * @n : integer to be check.
 * Return: 1 and prints + if n is greater than zero
 * Return 0 and prints 0 if n is zero
 * Return -1 and prints - if n is less than zero
*/

int print_sign(int n)
{
int flag;
if (n == 0)
{
_putchar('0');
flag = 0;
}
else if (n > 0)
{
_putchar('+');
flag = 1;
}
else
{
_putchar('-');
flag = -1;
}

return (flag);
}
