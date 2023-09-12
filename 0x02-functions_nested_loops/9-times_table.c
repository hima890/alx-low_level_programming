#include "main.h"
/* more headers go here */

/**
 * times_table -  a function that
 * unction that prints the 9 times table, starting with 0.
*/

void times_table(void)
{
int tabel_namber;
int number;
for (tabel_namber = 0; tabel_namber <= 10; tabel_namber++)
{
for (number = 0; number < 10; number++)
{
if ((tabel_namber * number) > 9)
{
_putchar('0' + ((tabel_namber * number) / 10));
_putchar('0' + ((tabel_namber * number) % 10));
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else
{
_putchar('0' + (tabel_namber * number));
_putchar('0' + (tabel_namber * number));
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
_putchar('\n');
}
}
