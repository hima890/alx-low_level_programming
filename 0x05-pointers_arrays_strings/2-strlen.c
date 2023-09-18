#include "main.h"
/* more headers goes there */

/**
 * _strlen - a function that returns the length of a string.
 * @s: takes a pointer to a char
 * Return: the lenth
*/

int _strlen(char *s)
{
int count = 0;
int i;
for (i = 0; s[i] != '\0'; i++)
{
count++;
}
return (count);
}
