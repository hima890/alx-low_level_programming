#include "main.h"
/* more headers goes there */

/**
 *_islower - return 1 if the charchter is lower case and 0 if not
 * @c : The character to be checking.
 * Return: 1 if the character is lowercase, 0 otherwise.
*/

int _islower(int c)
{
char letter_to_find = c;
int letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter == letter_to_find)
{
return (1);
break;
}
else
{
return (0);
}
}
}
