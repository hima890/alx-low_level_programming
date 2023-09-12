#include "main.h"
#include <stdio.h>

/**
 * test_isalpha - Test the _isalpha function
 *
 * @n: Number to pass to _isalpha function
 */
void test_isalpha(int n)
{
	int r;

	r = _isalpha(n);
	putchar(r + '0');
	putchar('\n');
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	test_isalpha('1');
	return (0);
}