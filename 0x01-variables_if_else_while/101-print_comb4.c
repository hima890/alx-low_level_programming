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
int therd_digit;
/* your code goes there */
for (first_digit = 0; first_digit <= 9; first_digit++)
{
for (secund_digit = first_digit + 1; secund_digit <= 9; secund_digit++)
{
for (therd_digit = secund_digit + 1; therd_digit <= 9; therd_digit++)
{
putchar('0' + first_digit);
putchar('0' + secund_digit);
putchar('0' + therd_digit);
if (first_digit != 7 || secund_digit != 8 || therd_digit != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
