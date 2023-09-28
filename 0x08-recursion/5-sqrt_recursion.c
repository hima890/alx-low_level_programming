#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _sqrt_recursion - This function returns the natural square
* root of a number using recursion. It returns -1
* if there is no natural square root.
* @n: Integer
* Return: Integer
*/

/**
 * sqrt_helper - Helper function to find the square root recursively.
 * @n: The number to find the square root of.
 * @guess: The current guess for the square root.
 * Return: The natural square root or -1 if not found.
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

return sqrt_helper(n, 1);
}

int sqrt_helper(int n, int guess)
{
if (guess * guess == n)
return (guess);
if (guess * guess > n)
return (-1);

return sqrt_helper(n, guess + 1);
}
