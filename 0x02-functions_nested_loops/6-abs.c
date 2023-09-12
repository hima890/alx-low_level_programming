#include "main.h"
/* more headers go here */

/**
 * _abs -  absolute value of an integer.
 * Return: absolute value of an integer
 * @integer: to be check
*/

int _abs(int integer)
{
int flag = 0;
if (integer >= 0)
{
flag = integer;
}
else
{
flag = flag * -1;
}
return (flag);
}
