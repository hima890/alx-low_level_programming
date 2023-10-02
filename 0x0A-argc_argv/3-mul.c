#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int multiplication;
int num1;
int num2;
num1 = atoi(argv[2]);
num2 = atoi(argv[1]);
if (argc != 3)
{
printf("Error\n");
return (1);
}

multiplication = (num1 *num2);

printf("%d\n", multiplication);

return (0);
}
