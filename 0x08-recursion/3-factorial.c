#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* factorial - This function returns the factorial 
* of a given number using recursion.
* It handles cases where the input is negative or zero.
* @n: Integer
* Return: Integer
*/

int factorial(int n)
{

   if(n < 0) {
      return -1;
   }
   if (n == 0)
   {
    return 1;
   }
   
   return n * factorial(n - 1);
}
