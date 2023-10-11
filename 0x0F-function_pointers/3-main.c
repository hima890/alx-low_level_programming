#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"


/**
 * main - check the code
 * @argc: Integer
 * @argv : Arroy of strings
 * Return: Always 0.
*/

int main(int argc, char const *argv[])
{
/* code */
typedef int (*OperationFunction)(int, int);
OperationFunction selectedOperation = NULL;
int exit_status;
int num_1;
int num_2;
int result;
char *op = (char *)argv[2];


if (argc < 3)
{
exit_status = 98;
printf("Error\n");
exit(exit_status);
}
if (get_op_func(op) == NULL)
{
exit_status = 99;
printf("Error\n");
exit(exit_status);
}

num_1 = atoi(argv[1]);
num_2 = atoi(argv[3]);

selectedOperation = get_op_func(op);
result = selectedOperation(num_1, num_2);
printf("%d\n", result);


return (0);
}
