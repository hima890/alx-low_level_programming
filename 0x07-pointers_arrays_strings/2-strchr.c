#include "main.h"
#include <stdio.h>
/**
 *_strchr - function that locates a character in a string.
*@s: This is the pointer
*@c: the constant byte b
* Return: Returns a pointer to the first occurrence of the
* character c in the string s, or
* NULL if the character is not found
*/

char *_strchr(char *s, char c)
{
int i;
size_t size = sizeof(s);
for (i = 0; i < size; i++)
{
if (c == s[i])
{
return (s[i]);
break;
}
else
{
return (NULL);
}
}
}
