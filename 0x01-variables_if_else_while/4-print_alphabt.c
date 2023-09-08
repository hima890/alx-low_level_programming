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
char first_letter;
/* your code goes there */
for (first_letter = 'a'; first_letter <= 'z'; first_letter++)
{
if (first_letter != 'q' && first_letter != 'e')
{
putchar(first_letter);
}
}
putchar('\n');
return (0);
}
