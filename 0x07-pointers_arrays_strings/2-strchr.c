#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the input string.
 * @c: The character to locate.
 * Return: A pointer to the first occurrence
 * of the character c in the string s,
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
for (; ; s++)
{
if (*s == c)
return (s);
if (*s == 0)
return (NULL);
}
return (NULL);
}
