#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

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
