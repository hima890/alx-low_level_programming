#include<stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int first_digit;
int secund_digit;
/* your code goes there */
for (first_digit = 0; first_digit <= 9; first_digit++)
{
for (secund_digit = first_digit + 1; secund_digit <= 9; secund_digit++)
{
putchar('0' + first_digit);
putchar('0' + secund_digit);
if (first_digit != 8 || secund_digit != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
