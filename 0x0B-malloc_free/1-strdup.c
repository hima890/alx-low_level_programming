#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicates a string in newly allocated memory.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the newly allocated duplicated string,
 *         or NULL if str is NULL or if malloc fails.
 */
char *_strdup(char *str)
{
int i;
int length;
char *ptr;

if (str == NULL)
{
return (NULL);
}
length = strlen(str);
ptr = (char *) malloc((length + 1) * sizeof(char));
if (ptr == NULL)
{
return (NULL);
}



for (i = 0; i < length; i++)
{
ptr[i] = str[i];
}
ptr[length] = '\0';
return (ptr);

}
