#include <stdio.h>
#include <stdlib.h>

/**
* main - multiply two numbers
* @argc: arguement count
* @argv: array of pointers to arguement strings
* Return: result of multiplication or 1
**/
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
