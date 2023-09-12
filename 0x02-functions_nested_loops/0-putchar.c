#include "main.h"
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * printing "_putchar" using for loop
 */

int main(void)
{

char strings[9] = "_putchar";
int i;

for (i = 0; i < 9; i++)
{
_putchar(strings[i]);
}

return (0);
}
