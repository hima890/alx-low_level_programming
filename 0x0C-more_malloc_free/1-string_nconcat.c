#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings with a specified length.
 *
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Description:
 *   This function concatenates the first @s1 string with, at most, the first
 *   @n bytes of the @s2 string and returns a pointer to the newly allocated
 *   memory containing the result. The resulting string is null-terminated.
 *
 *   If the allocation fails or either @s1 or @s2 is NULL, the function returns
 *   NULL.
 *
 * Return:
 *   - On success, a pointer to the newly allocated string.
 *   - On failure or if @n is greater or equal to the length of @s2, NULL.
 *
 * Notes:
 *   - The caller is responsible for freeing the allocated memory when it's no
 *     longer needed to prevent memory leaks.
 *   - If either @s1 or @s2 is NULL, the function treats it as an empty string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
/* Implementation goes here */
unsigned int len1;
unsigned int len2;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);
if (n >= len2)
{
/* code */
n = len2;
}

char *result = malloc(len1 + n + 1);
if (result == NULL)
return (NULL);

strcpy(result, s1);
strncat(result, s2, n);
return (result);

}
