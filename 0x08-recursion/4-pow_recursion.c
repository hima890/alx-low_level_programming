#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _pow_recursion - This function returns the value of `x`
* raised to the power of `y` using recursion. It handles
* cases where `y` is negative.
* It handles cases where the input is negative or zero.
* @x: Integer
* @y: Integer
* Return: Integer
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else if (y == 1)
{
return (x);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
