#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 *
 * @separator: The string to be printed between strings (or NULL if none).
 * @n: The number of strings passed to the function.
 * @...: Variable number of string parameters to be printed.
 *
 * Description:
 *   This function takes a separator string, the count of strings `n`, and a
 *   variable number of string parameters. It prints the strings, separated by
 *   the specified separator string (if provided), and prints a new line at the
 *   end. If one of the strings is NULL, it prints (nil) instead.
 *
 * Return: None (void)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list args_list;
va_start(args_list, n);


for (i = 0; i < n; i++)
{
str = va_arg(args_list, char *);

if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}

if (separator != NULL && i != n - 1)
{
printf("%s", separator);
}
}

va_end(args_list);
printf("\n");
}
