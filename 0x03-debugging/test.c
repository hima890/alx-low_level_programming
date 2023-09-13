#include <stdlib.h>
#include<stdio.h>
#include <time.h>
#include "main.h"
/* more headers goes there */

/**
 * positive_or_negative - Check for char
 *
 * Return: Is postive, IS nagtive
 * @n: Integer
 */

void positive_or_negative(int n)
{
/* your code goes there */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
}
