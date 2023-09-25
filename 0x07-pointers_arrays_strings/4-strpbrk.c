#include "main.h"
#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the input string.
 * @accept: Pointer to the set of characters to compare.
 * Return: A pointer to the first character in s that
 *  matches any character in accept,
 *         or NULL if no match is found.
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *temp = accept;

while (*temp != '\0')
{
if (*s == *temp)
{
return (s);
}

temp++;
}

s++;
}

return (NULL);
}
