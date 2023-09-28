#include "main.h"
#include <stdio.h>

/**
* _sqrt_recursion - This function returns the natural square root
* of a number using recursion. It returns -1 if there is no natural
* square root.
* @n: Integer
* Return: Integer
*/

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else
{
return (sqrt_helper(n, n / 2));
}
}

/**
* sqrt_helper - Helper function to calculate square root recursively
* @n: Integer
* @guess: Integer
* Return: Integer
*/

int sqrt_helper(int n, int guess)
{
if (guess * guess == n)
{
return (guess);
}
else if (guess == 0 || guess == 1 || guess == n / 2)
{
return (-1);
}
else if (guess * guess > n)
{
return (sqrt_helper(n, guess - 1));
}
else
{
return (sqrt_helper(n, guess + 1));
}
}
