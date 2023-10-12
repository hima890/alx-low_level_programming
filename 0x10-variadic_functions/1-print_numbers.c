#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line.
 *
 * @separator: The string to be printed between numbers (or NULL if none).
 * @n: The number of integers passed to the function.
 * @...: Variable number of integer parameters to be printed.
 *
 * Description:
 *   This function takes a separator string, the count of numbers `n`, and a
 *   variable number of integer parameters. It prints the integers, separated
 *   by the specified separator string (if provided), and prints a new line at
 *   the end.
 *
 * Return: None (void)
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args_list;
va_start(args_list, n);

for (i = 0; i < n; i++)
{
    /* code */
printf("%d", va_arg(args_list, int));
if (separator != NULL)
{
    /* code */
if (i == (n - 1))
{
    /* code */
continue;
}
else
{
printf("%s", separator);
}

}

}
printf("\n");

}
