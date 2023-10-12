#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the provided format string.
 *
 * @format: A format string specifying the types of arguments to print.
 * @...: Variable number of arguments to be printed based on the format string.
 *
 * Description:
 *   This function takes a format string containing
 *  the following format specifiers:
 *   - 'c' for char
 *   - 'i' for integer
 *   - 'f' for float
 *   - 's' for string (if the string is NULL, it prints "(nil)")
 *
 *   The function processes the arguments based on the format string and prints
 *   them accordingly, separated by a comma and space. Any other characters in
 *   the format string are ignored. It prints a new line at the end.
 *
 * Return: None (void)
 */
void print_all(const char * const format, ...)
{
va_list args;
char *sep = "";
int i = 0;

va_start(args, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(args, int));
break;
case 'i':
printf("%s%d", sep, va_arg(args, int));
break;
case 'f':
printf("%s%f", sep, va_arg(args, double));
break;
case 's':
{
char *str = va_arg(args, char *);
if (!str)
str = "(nil)";
printf("%s%s", sep, str);
break;
}
default:
i++;
continue;
}
sep = ", ";
i++;
}

va_end(args);
printf("\n");
}
