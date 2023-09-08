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
/* your code goes there */
for (first_digit = 0; first_digit < 16; first_digit++)
{
if (first_digit < 10) {
putchar('0' + first_digit);
} else {
putchar('a' + (first_digit - 10));
}
// putchar('0' + first_digit);
}
putchar('\n');
return (0);
}
