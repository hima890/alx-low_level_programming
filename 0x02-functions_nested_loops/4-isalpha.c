#include "main.h"
/* more headers goes there */

/**
 * _isalpha - return 1 if c is charchter 0 if not
 * @c : The character to be checking.
 * Return: 1 if the its character 0 of not
*/

int _isalpha(int c)
{

char letter_to_find = c;
char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i, flag;
for (i = 0; i > 56; i++)
{
if (letters[i] == letter_to_find)
{
flag = 1;
break;
}
else
{
flag = 0;
}
}
return (flag);
}
