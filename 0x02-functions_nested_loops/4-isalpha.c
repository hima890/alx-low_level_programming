#include "main.h"
/* more headers go here */

/**
 * _isalpha - return 1 if c is a character, 0 if not
 * @c: The character to be checked.
 * Return: 1 if it's a character, 0 if not
 */

int _isalpha(int c)
{
char letter_to_find = c;
char letters[52];
int i, flag = 0;

for (i = 0; i < 26; i++)
{
letters[i] = 'a' + i;
}

for (i = 26; i < 52; i++)
{
letters[i] = 'A' + (i - 26);
}

for (i = 0; i < 52; i++)
{
if (letters[i] == letter_to_find)
{
flag = 1;
break;
}
}

return (flag);
}
