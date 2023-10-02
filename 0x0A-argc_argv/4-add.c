#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_number - Check if a string represents a positive number.
 * @str: The string to check
 * Return: 1 if it's a positive number, 0 otherwise
 */
int is_positive_number(char *str)
{
if (!str || *str == '\0')
return (0);

while (*str)
{
if (*str < '0' || *str > '9')
return (0);
str++;
}
return (1);
}

/**
* main - Entry point
* @argc: Number of command-line arguments
* @argv: Array of command-line argument strings
* Return: 0 if success, 1 if there's an error
*/
int main(int argc, char *argv[])
{
int sum = 0;
int i;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
if (is_positive_number(argv[i]))
{
int num = atoi(argv[i]);
if (num < 0)
{
printf("Error\n");
return (1);
}
sum += num;
}
else
{
printf("Error\n");
return (1);
}
}

printf("%d\n", sum);
return (0);
}
