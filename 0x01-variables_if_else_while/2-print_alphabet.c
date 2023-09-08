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
/* your code goes there */
for (char first_letter = 'a'; first_letter < 'z'; first_letter++)
{
putchar(first_letter);
}
putchar('\n');
return (0);
}
