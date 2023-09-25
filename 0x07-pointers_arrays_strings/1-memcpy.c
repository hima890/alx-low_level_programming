#include "main.h"
#include <stdio.h>
/**
 *_memcpy -Write a function that copies memory area.
*
*@dest: This is the pointer
*@src: the constant byte b
*@n: n bytes of the memory area
* Return: This return to dest, that concatenates two strings
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int counter = 0;
while (counter < n)
{
dest[counter] = src[counter];
counter++;
}
return (dest);
}
