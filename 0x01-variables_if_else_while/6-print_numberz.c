#include <stdlib.h>
#include<stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int first_digit;
/* your code goes there */
for (first_digit = 0; first_digit < 10; first_digit++)
{
putchar('0' + first_digit);
}
printf("\n");
return (0);
}
