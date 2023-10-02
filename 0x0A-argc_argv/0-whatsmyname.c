#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code.
 * @argc: integer
 * @argv: array of strings
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i;
char file_name[40];
if (argc > 0)
{

strncpy(file_name, argv[0], sizeof(file_name));
file_name[sizeof(file_name) - 1] = '\0';


for (i = 0; file_name[i] != '\0'; i++)
{
_putchar(file_name[i]);
}
_putchar('\n');
}

return (0);
}
