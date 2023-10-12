#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 *
 * @n: The number of parameters to be summed.
 * @...: Variable number of integer parameters to be summed.
 *
 * Description:
 *   This function takes a count of parameters (`n`) and a variable number of
 *   integer parameters, and it returns the sum of all the provided integers.
 *   If `n` is 0, it returns 0.
 *
 * Return: The sum of all the provided integer parameters, or 0 if n is 0.
*/
int sum_them_all(const unsigned int n, ...)
{
if (n != 0)
{
/* code */
int total = 0;
unsigned int i;
va_list args_list;
va_start(args_list, n);

for (i = 0; i < n; i++)
{
total += va_arg(args_list, int);
}

va_end(args_list);

return (total);
}
return (0);

}
