#include "main.h"
#include <stdio.h>
/* more headers go here */

/**
 * jack_bauer -  a function that
 *  prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
*/
void jack_bauer(void)
{
int hour, minute;
for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
if (minute > 9 && hour > 9)
{
_putchar(minute);
_putchar(':');
_putchar(hour);
_putchar('\n');
}
else if (minute > 9 && hour < 9)
{
_putchar(minute);
_putchar(':');
_putchar('0');
_putchar(hour);
_putchar('\n');
}
else if (minute < 9 && hour > 9)
{
_putchar('0');
_putchar(minute);
_putchar(':');
_putchar(hour);
_putchar('\n');
}
else if (minute < 9 && hour < 9)
{
_putchar('0');
_putchar(minute);
_putchar(':');
_putchar('0');
_putchar(hour);
_putchar('\n');
}
}
}
}
