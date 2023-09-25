#include "main.h"

/**
 * _strspn - Calculates the length of the initial segment of s
 * that consists entirely of characters from accept.
 *
 * @s: Pointer to the input string.
 * @accept: Pointer to the set of characters to compare.
 *
 * Return: The length of the initial segment of s consisting of
 * characters from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int counter = 0;

while (*s != '\0')
{
char *temp = accept;

while (*temp != '\0')
{
if (*s == *temp)
{
counter++;
break;
}
temp++;
}

if (*temp == '\0')
{
return (counter);

s++;
}

return (counter);
}
