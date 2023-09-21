#include "main.h"

/**
 * cap_string - Capitalizes all words in a string.
 * @entry: The input string.
 * Return: The capitalized string.
 */
char *cap_string(char *entry)
{
int index, count;
int capitalize = 1;

char separators[] = " \t\n,;.!?\"(){}";

for (index = 0; entry[index] != '\0'; index++)
{
if (capitalize && (entry[index] >= 'a' && entry[index] <= 'z'))
{
entry[index] -= 32;
}

for (count = 0; separators[count] != '\0'; count++)
{
if (entry[index] == separators[count])
{
capitalize = 1;
break;
}
}

if (separators[count] == '\0')
{
capitalize = 0;
}
}

return (entry);
}
