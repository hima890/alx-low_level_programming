#include "main.h"
#include <stdio.h>
/**
 *_memset - Write a function that concatenates two strings.
*
*@s: This is the pointer
*@b: the constant byte b
*@n: n bytes of the memory area
* Return: This return to dest, that concatenates two strings
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int counter = 0;
while (counter < n)
{
s[counter] = b;
counter++;
}
return (s);
}
